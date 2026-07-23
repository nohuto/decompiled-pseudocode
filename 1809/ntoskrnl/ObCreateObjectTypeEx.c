/*
 * XREFs of ObCreateObjectTypeEx @ 0x140729BCC
 * Callers:
 *     ObCreateObjectType @ 0x140729BB0 (ObCreateObjectType.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1407317F4 (CmpInitializeLightWeightTransactionType.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x14074237C (EtwpInitializePrivateSessionDemuxObject.c)
 *     VRegSetup @ 0x14075BFF0 (VRegSetup.c)
 *     AlpcpInitSystem @ 0x14075E47C (AlpcpInitSystem.c)
 *     TtmInit @ 0x140763590 (TtmInit.c)
 *     IoCreateObjectTypes @ 0x1409B1D90 (IoCreateObjectTypes.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140016078 (ObpReleaseLookupContext.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     ObpLockDirectoryExclusive @ 0x14010A050 (ObpLockDirectoryExclusive.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObpLookupDirectoryEntryEx @ 0x140625DE0 (ObpLookupDirectoryEntryEx.c)
 *     ObpAllocateObject @ 0x140646A60 (ObpAllocateObject.c)
 *     RtlUnicodeStringToAnsiString @ 0x14067CC90 (RtlUnicodeStringToAnsiString.c)
 *     RtlxUnicodeStringToOemSize @ 0x14067D050 (RtlxUnicodeStringToOemSize.c)
 *     ObpInsertDirectoryEntry @ 0x1406A62CC (ObpInsertDirectoryEntry.c)
 *     ObpInitObjectTypeSD @ 0x14072A1CC (ObpInitObjectTypeSD.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(
        PCUNICODE_STRING SourceString,
        __int128 *a2,
        __int64 a3,
        __int16 *a4,
        _QWORD *a5)
{
  __int16 *v5; // r13
  unsigned __int16 Length; // cx
  unsigned __int8 v10; // r15
  char v11; // al
  wchar_t *Buffer; // rdx
  int v13; // ecx
  wchar_t v14; // ax
  _OWORD *v15; // rbx
  UNICODE_STRING v16; // xmm6
  int inited; // esi
  __int64 v18; // rax
  _QWORD *v19; // rbx
  bool v20; // zf
  char v21; // r13
  unsigned __int16 v22; // r12
  char *PoolWithTag; // rax
  char *v24; // r12
  char *v25; // r8
  unsigned int v26; // ecx
  int v27; // edx
  int v28; // ecx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rcx
  PVOID *v32; // rdx
  unsigned int v33; // edi
  PVOID v34; // rdx
  unsigned int v35; // eax
  int v36; // ecx
  __int64 v37; // rdx
  unsigned int MaximumLength; // r9d
  char *v40; // rdx
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  _STRING Size; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+58h] [rbp-B0h]
  __int16 *v50; // [rsp+60h] [rbp-A8h]
  __int64 v51; // [rsp+68h] [rbp-A0h] BYREF
  char *DestinationString; // [rsp+70h] [rbp-98h]
  UNICODE_STRING DestinationString_8; // [rsp+78h] [rbp-90h] BYREF
  __int128 v54; // [rsp+88h] [rbp-80h] BYREF
  __int16 v55; // [rsp+A6h] [rbp-62h]
  int v56; // [rsp+A8h] [rbp-60h]
  _QWORD *v57; // [rsp+B0h] [rbp-58h]
  int v58[16]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v59[14]; // [rsp+F8h] [rbp-10h] BYREF

  v50 = a4;
  v5 = a4;
  v57 = a5;
  if ( !SourceString
    || (Length = SourceString->Length) == 0
    || (Length & 1) != 0
    || !a2
    || (*((_DWORD *)a2 + 2) & 0xFFFEE00D) != 0
    || *(_WORD *)a2 != 120
    || (v10 = 2, *((_BYTE *)a2 + 3) >= 2u)
    || (v11 = *((_BYTE *)a2 + 2), (v11 & 0x10) != 0) && !*((_QWORD *)a2 + 7) && !*((_QWORD *)a2 + 8)
    || (v11 & 4) == 0 && (*((_DWORD *)a2 + 9) & 0xFFFFFDFF) != 0 && ((unsigned __int8)a4 & 1) == 0 )
  {
    DbgPrintEx(0, 0, "Error creating object type\n");
    __debugbreak();
  }
  Buffer = SourceString->Buffer;
  v13 = Length >> 1;
  LODWORD(v49) = *((_DWORD *)a2 + 9);
  if ( !v13 )
  {
LABEL_13:
    v55 = 0;
    v56 = -60876;
    v54 = 0LL;
    if ( ObpTypeDirectoryObject
      && (ObpLockDirectoryExclusive((__int64)&v54, ObpTypeDirectoryObject),
          ObpLookupDirectoryEntryEx(ObpTypeDirectoryObject, &SourceString->Length, 64, 0, 0, (__int64)&v54)) )
    {
      v33 = -1073741771;
    }
    else
    {
      DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString->MaximumLength, 0x6D4E624Fu);
      if ( DestinationString_8.Buffer )
      {
        DestinationString_8.MaximumLength = SourceString->MaximumLength;
        RtlCopyUnicodeString(&DestinationString_8, SourceString);
        v15 = ObpTypeObjectType;
        v16 = DestinationString_8;
        if ( !ObpTypeObjectType )
        {
          memset(v59, 0, 0xD8uLL);
          v41 = *a2;
          BYTE8(v59[2]) = 2;
          v15 = v59;
          v42 = a2[1];
          LODWORD(v59[12]) = 1416258127;
          v59[4] = v41;
          v43 = a2[2];
          v59[5] = v42;
          v44 = a2[3];
          v59[6] = v43;
          v45 = a2[4];
          v59[7] = v44;
          v46 = a2[5];
          v59[8] = v45;
          v47 = a2[6];
          v59[9] = v46;
          *(_QWORD *)&v46 = *((_QWORD *)a2 + 14);
          v59[10] = v47;
          *(_QWORD *)&v59[11] = v46;
          v59[1] = DestinationString_8;
        }
        memset(v58, 0, sizeof(v58));
        v58[0] = 16;
        v58[5] = *((_DWORD *)v15 + 26);
        v58[6] = *((_DWORD *)v15 + 27);
        v58[7] = 2048;
        inited = ObpAllocateObject(v58, 0, (__int64)v15, &DestinationString_8, 216, &v51, 0LL);
        if ( inited < 0 )
        {
          ObpReleaseLookupContext((__int64)&v54);
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
        }
        else
        {
          v18 = v51;
          *(_QWORD *)(v51 + 32) = 0LL;
          v19 = (_QWORD *)(v18 + 48);
          v20 = (_DWORD)InitializationPhase == 0;
          *(UNICODE_STRING *)(v18 + 64) = v16;
          if ( v20 || (inited = ObpInitObjectTypeSD(v18 + 48, a3), inited >= 0) )
          {
            *(_QWORD *)((char *)v19 + 44) = 0LL;
            *(_QWORD *)((char *)v19 + 52) = 0LL;
            *((_DWORD *)v19 + 15) = 0;
            if ( ObpTypeObjectType )
            {
              v21 = 1;
              v22 = ((RtlxUnicodeStringToOemSize(SourceString) + 2) & 0xFFFC) + 1;
              *(_QWORD *)&Size.Length = v22;
              PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v22, 0x6E54624Fu);
              DestinationString = PoolWithTag;
              if ( !PoolWithTag )
                goto LABEL_75;
              memset(PoolWithTag, 0, *(size_t *)&Size.Length);
              *(_QWORD *)&Size.Length = 0LL;
              Size.MaximumLength = v22;
              v24 = DestinationString;
              Size.Buffer = DestinationString;
              if ( RtlUnicodeStringToAnsiString(&Size, SourceString, 0) >= 0 )
              {
                v25 = Size.Buffer;
                v26 = SourceString->Length >> 1;
                if ( v26 < 4 )
                {
                  MaximumLength = Size.MaximumLength;
                  v40 = &Size.Buffer[v26];
                  do
                  {
                    if ( v26 < MaximumLength )
                      *v40 = 32;
                    ++v26;
                    ++v40;
                  }
                  while ( v26 < 4 );
                }
                v21 = 0;
                *((_DWORD *)v19 + 48) = *(_DWORD *)v25;
              }
              ExFreePoolWithTag(v24, 0);
              if ( v21 )
              {
LABEL_75:
                v5 = v50;
                if ( SourceString->Length < 4u )
                  *((_DWORD *)v19 + 48) = 1063936591;
                else
                  *((_DWORD *)v19 + 48) = *(_DWORD *)SourceString->Buffer;
              }
              else
              {
                v5 = v50;
              }
            }
            else
            {
              ObpTypeObjectType = v19;
              *((_DWORD *)v19 + 11) = 1;
              *((_DWORD *)v19 + 48) = 1416258127;
            }
            v27 = v49;
            *((_OWORD *)v19 + 4) = *a2;
            *((_OWORD *)v19 + 5) = a2[1];
            *((_OWORD *)v19 + 6) = a2[2];
            *((_OWORD *)v19 + 7) = a2[3];
            *((_OWORD *)v19 + 8) = a2[4];
            *((_OWORD *)v19 + 9) = a2[5];
            *((_OWORD *)v19 + 10) = a2[6];
            v19[22] = *((_QWORD *)a2 + 14);
            *((_DWORD *)v19 + 25) = v27;
            if ( (NtGlobalFlag & 0x4000) != 0 )
              *((_BYTE *)v19 + 66) |= 0x20u;
            v28 = (*((_BYTE *)a2 + 2) & 0x10) != 0 ? 104 : 88;
            if ( (v27 & 1) != 0 )
              *((_DWORD *)v19 + 26) += v28;
            else
              *((_DWORD *)v19 + 27) += v28;
            if ( !*((_QWORD *)a2 + 11) )
              v19[19] = SeDefaultObjectMethod;
            v19[23] = 0LL;
            v19[1] = v19;
            *v19 = v19;
            v19[26] = v19 + 25;
            v19[25] = v19 + 25;
            if ( (*((_BYTE *)v19 + 66) & 4) != 0 )
            {
              *((_DWORD *)v19 + 23) |= 0x100000u;
              v5 = &ObpDefaultObject;
            }
            v19[4] = v5;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)ObpTypeObjectType + 184, 0LL);
            if ( (*(_BYTE *)(v51 + 26) & 1) != 0 )
              v30 = (_QWORD *)(v51 - 32);
            else
              v30 = 0LL;
            v31 = ObpTypeObjectType;
            v32 = (PVOID *)*((_QWORD *)ObpTypeObjectType + 1);
            if ( *v32 != ObpTypeObjectType )
              __fastfail(3u);
            *v30 = ObpTypeObjectType;
            v30[1] = v32;
            *v32 = v30;
            v33 = -1073741670;
            v31[1] = v30;
            v34 = ObpTypeObjectType;
            v35 = *((_DWORD *)ObpTypeObjectType + 11);
            if ( v35 >= 0x100 )
              inited = -1073741670;
            else
              ObpObjectTypes[v35 - 1] = (__int64)v19;
            ExReleasePushLockEx((ULONG_PTR)v34 + 184, 0LL);
            KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
            if ( v19 != ObpTypeObjectType )
            {
              if ( inited < 0 )
              {
LABEL_69:
                v33 = inited;
LABEL_70:
                ObpReleaseLookupContext((__int64)&v54);
                ObfDereferenceObject(v19);
                return v33;
              }
              v36 = 3;
              v37 = 3LL;
              while ( _InterlockedCompareExchange64(&ObTypeIndexTable[v37], 1LL, 0LL) )
              {
                v37 = ++v36;
                if ( (unsigned __int64)v36 >= 0x100 )
                {
                  inited = -1073741823;
                  goto LABEL_69;
                }
              }
              v10 = v36;
            }
            ObTypeIndexTable[v10] = (__int64)v19;
            *((_BYTE *)v19 + 40) = v10;
            if ( !ObpTypeDirectoryObject
              || ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)v19, (__int64)&v54) )
            {
              ObpReleaseLookupContext((__int64)&v54);
              *v57 = v19;
              return 0LL;
            }
            ObTypeIndexTable[v10] = 0LL;
            goto LABEL_70;
          }
          ObpReleaseLookupContext((__int64)&v54);
          ObfDereferenceObject(v19);
        }
        return (unsigned int)inited;
      }
      v33 = -1073741670;
    }
    ObpReleaseLookupContext((__int64)&v54);
    return v33;
  }
  while ( 1 )
  {
    v14 = *Buffer;
    --v13;
    ++Buffer;
    if ( v14 == 92 )
      return 3221225523LL;
    if ( !v13 )
      goto LABEL_13;
  }
}
