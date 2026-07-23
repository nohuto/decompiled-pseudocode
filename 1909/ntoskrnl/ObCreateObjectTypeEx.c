/*
 * XREFs of ObCreateObjectTypeEx @ 0x14075E310
 * Callers:
 *     ObCreateObjectType @ 0x14075E2F0 (ObCreateObjectType.c)
 *     TtmInit @ 0x14075FB60 (TtmInit.c)
 *     CmpInitializeLightWeightTransactionType @ 0x140760AE4 (CmpInitializeLightWeightTransactionType.c)
 *     EtwpInitializePrivateSessionDemuxObject @ 0x14076DD00 (EtwpInitializePrivateSessionDemuxObject.c)
 *     VRegSetup @ 0x1407842A0 (VRegSetup.c)
 *     AlpcpInitSystem @ 0x140785DDC (AlpcpInitSystem.c)
 *     IoCreateObjectTypes @ 0x140A04504 (IoCreateObjectTypes.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x140003F54 (ObpReleaseLookupContext.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     ObpLockDirectoryExclusive @ 0x140105100 (ObpLockDirectoryExclusive.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObpAllocateObject @ 0x1405F36C0 (ObpAllocateObject.c)
 *     RtlUnicodeStringToAnsiString @ 0x140667020 (RtlUnicodeStringToAnsiString.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406BEB70 (ObpLookupDirectoryEntryEx.c)
 *     ObpInsertDirectoryEntry @ 0x1406CA250 (ObpInsertDirectoryEntry.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x140711920 (RtlxUnicodeStringToAnsiSize.c)
 *     ObpInitObjectTypeSD @ 0x14075E94C (ObpInitObjectTypeSD.c)
 */

__int64 __fastcall ObCreateObjectTypeEx(
        PCUNICODE_STRING SourceString,
        __int128 *a2,
        __int64 a3,
        __int16 *a4,
        _QWORD *a5)
{
  __int16 *v8; // r13
  unsigned __int16 Length; // cx
  unsigned __int8 v10; // r12
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
  unsigned __int16 v22; // r15
  PVOID PoolWithTag; // rax
  PVOID v24; // r15
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
  __int16 *DestinationString; // [rsp+60h] [rbp-A8h]
  UNICODE_STRING DestinationString_8; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+80h] [rbp-88h]
  __int64 v54[5]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v55; // [rsp+B0h] [rbp-58h]
  int v56[16]; // [rsp+B8h] [rbp-50h] BYREF
  _OWORD v57[14]; // [rsp+F8h] [rbp-10h] BYREF

  v55 = a5;
  DestinationString = a4;
  v8 = a4;
  memset(v57, 0, 0xD8uLL);
  memset(v54, 0, sizeof(v54));
  memset(v56, 0, sizeof(v56));
  *(_QWORD *)&DestinationString_8.Length = 0LL;
  DestinationString_8.Buffer = 0LL;
  if ( !SourceString
    || (Length = SourceString->Length) == 0
    || (Length & 1) != 0
    || !a2
    || (*((_DWORD *)a2 + 2) & 0xFFFEE00D) != 0
    || *(_WORD *)a2 != 120
    || (v10 = 2, *((_BYTE *)a2 + 3) >= 2u)
    || (v11 = *((_BYTE *)a2 + 2), (v11 & 0x10) != 0) && !*((_QWORD *)a2 + 7) && !*((_QWORD *)a2 + 8)
    || (v11 & 4) == 0 && (*((_DWORD *)a2 + 9) & 0xFFFFFDFF) != 0 && ((unsigned __int8)v8 & 1) == 0 )
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
    HIWORD(v54[3]) = 0;
    LODWORD(v54[4]) = -60876;
    *(_OWORD *)v54 = 0LL;
    if ( ObpTypeDirectoryObject
      && (ObpLockDirectoryExclusive((__int64)v54, ObpTypeDirectoryObject),
          ObpLookupDirectoryEntryEx(ObpTypeDirectoryObject, &SourceString->Length, 64, 0LL, 0, (__int64)v54)) )
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
          memset(v57, 0, 0xD8uLL);
          v41 = *a2;
          BYTE8(v57[2]) = 2;
          v15 = v57;
          v42 = a2[1];
          LODWORD(v57[12]) = 1416258127;
          v57[4] = v41;
          v43 = a2[2];
          v57[5] = v42;
          v44 = a2[3];
          v57[6] = v43;
          v45 = a2[4];
          v57[7] = v44;
          v46 = a2[5];
          v57[8] = v45;
          v47 = a2[6];
          v57[9] = v46;
          *(_QWORD *)&v46 = *((_QWORD *)a2 + 14);
          v57[10] = v47;
          *(_QWORD *)&v57[11] = v46;
          v57[1] = DestinationString_8;
        }
        memset(v56, 0, sizeof(v56));
        v56[0] = 16;
        v56[5] = *((_DWORD *)v15 + 26);
        v56[6] = *((_DWORD *)v15 + 27);
        v56[7] = 2048;
        inited = ObpAllocateObject(v56, 0, (__int64)v15, &DestinationString_8, 216, &v52, 0LL);
        if ( inited < 0 )
        {
          ObpReleaseLookupContext((__int64)v54);
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
        }
        else
        {
          v18 = v52;
          *(_QWORD *)(v52 + 32) = 0LL;
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
              v22 = ((RtlxUnicodeStringToAnsiSize(SourceString) + 2) & 0xFFFC) + 1;
              *(_QWORD *)&Size.Length = v22;
              PoolWithTag = ExAllocatePoolWithTag(PagedPool, v22, 0x6E54624Fu);
              P = PoolWithTag;
              if ( !PoolWithTag )
                goto LABEL_75;
              memset(PoolWithTag, 0, *(size_t *)&Size.Length);
              *(_QWORD *)&Size.Length = 0LL;
              Size.MaximumLength = v22;
              v24 = P;
              Size.Buffer = (char *)P;
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
                v8 = DestinationString;
                if ( SourceString->Length < 4u )
                  *((_DWORD *)v19 + 48) = 1063936591;
                else
                  *((_DWORD *)v19 + 48) = *(_DWORD *)SourceString->Buffer;
              }
              else
              {
                v8 = DestinationString;
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
              v8 = &ObpDefaultObject;
            }
            v19[4] = v8;
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->SpecialApcDisable;
            ExAcquirePushLockExclusiveEx((ULONG_PTR)ObpTypeObjectType + 184, 0LL);
            if ( (*(_BYTE *)(v52 + 26) & 1) != 0 )
              v30 = (_QWORD *)(v52 - 32);
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
                ObpReleaseLookupContext((__int64)v54);
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
              || ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, (char *)v19, (__int64)v54) )
            {
              ObpReleaseLookupContext((__int64)v54);
              *v55 = v19;
              return 0LL;
            }
            ObTypeIndexTable[v10] = 0LL;
            goto LABEL_70;
          }
          ObpReleaseLookupContext((__int64)v54);
          ObfDereferenceObject(v19);
        }
        return (unsigned int)inited;
      }
      v33 = -1073741670;
    }
    ObpReleaseLookupContext((__int64)v54);
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
