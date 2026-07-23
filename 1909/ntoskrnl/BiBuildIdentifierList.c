/*
 * XREFs of BiBuildIdentifierList @ 0x14092FB9C
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14092FAF4 (BiBindEfiNamespaceObjects.c)
 *     BiExportStoreAlterationsToEfi @ 0x14093110C (BiExportStoreAlterationsToEfi.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x1405C1AC0 (RtlGUIDFromString.c)
 *     BiGetObjectDescription @ 0x14073D60C (BiGetObjectDescription.c)
 *     BiEnumerateSubKeys @ 0x14073EB60 (BiEnumerateSubKeys.c)
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x14073F7EC (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x14073FA30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073FBB4 (BiCloseKey.c)
 *     BiLogMessage @ 0x1407403B4 (BiLogMessage.c)
 *     BiEnumerateBootEntries @ 0x140930B7C (BiEnumerateBootEntries.c)
 *     BiFreeIdentifierList @ 0x1409311B4 (BiFreeIdentifierList.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x140931520 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x1409316B4 (BiGetSavedBootEntry.c)
 *     BiLookupObjectByBootEntry @ 0x14093193C (BiLookupObjectByBootEntry.c)
 *     BiLookupObjectByIdentifierAndBootEntry @ 0x14093196C (BiLookupObjectByIdentifierAndBootEntry.c)
 */

__int64 __fastcall BiBuildIdentifierList(__int64 BcdStoreHandle, __int64 a2, _QWORD *a3)
{
  int v3; // r13d
  HANDLE v5; // r14
  PCWSTR *v6; // rsi
  int v7; // ebx
  ULONG v8; // r12d
  unsigned int v9; // r15d
  PCWSTR *v10; // r13
  HANDLE v11; // r14
  int v12; // esi
  GUID *PoolWithTag; // rax
  GUID *v14; // rbx
  BCD_FLAGS v15; // r8d
  GUID **v16; // rax
  GUID **v17; // rax
  PVOID v18; // rcx
  int v19; // eax
  _BYTE *v20; // r15
  unsigned __int64 v21; // r12
  unsigned int *v22; // rsi
  int v23; // eax
  _QWORD *v24; // rbx
  __int64 v25; // rax
  _QWORD *v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _DWORD *v30; // rax
  _DWORD *v31; // r14
  unsigned int v32; // eax
  __int64 v33; // rax
  _QWORD *v34; // rsi
  _QWORD *v35; // r14
  _QWORD *v36; // rbx
  _OWORD *v37; // rcx
  _QWORD *v38; // rax
  PVOID *v39; // rdx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rcx
  GUID *v44; // rax
  _QWORD *v45; // rcx
  GUID *v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  __int16 Buffer[2]; // [rsp+30h] [rbp-79h] BYREF
  ULONG BufferSize; // [rsp+34h] [rbp-75h] BYREF
  _QWORD *v52; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v53; // [rsp+40h] [rbp-69h] BYREF
  _QWORD **v54; // [rsp+48h] [rbp-61h]
  PCWSTR *v55; // [rsp+50h] [rbp-59h] BYREF
  _QWORD *v56; // [rsp+58h] [rbp-51h] BYREF
  GUID *v57; // [rsp+60h] [rbp-49h]
  _QWORD *v58; // [rsp+68h] [rbp-41h] BYREF
  GUID *v59; // [rsp+70h] [rbp-39h]
  void *v60; // [rsp+78h] [rbp-31h] BYREF
  PVOID P; // [rsp+80h] [rbp-29h] BYREF
  __int64 v62; // [rsp+88h] [rbp-21h] BYREF
  PVOID v63; // [rsp+90h] [rbp-19h] BYREF
  HANDLE BcdObjectHandle; // [rsp+98h] [rbp-11h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-9h] BYREF
  GUID Guid; // [rsp+B0h] [rbp+7h] BYREF

  a3[1] = a3;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v3 = 0;
  DestinationString.Buffer = 0LL;
  *a3 = a3;
  v59 = (GUID *)&v58;
  v52 = (_QWORD *)BcdStoreHandle;
  v58 = &v58;
  v5 = (HANDLE)BcdStoreHandle;
  v62 = 0LL;
  v57 = (GUID *)&v56;
  v6 = 0LL;
  Buffer[0] = 0;
  v56 = &v56;
  v54 = &v53;
  v53 = &v53;
  v63 = 0LL;
  v60 = 0LL;
  v55 = 0LL;
  v7 = BiOpenKey(BcdStoreHandle, L"Objects", 0x20019u, &v60);
  if ( v7 >= 0 )
  {
    v7 = BiEnumerateSubKeys(v60, &v55, &BufferSize);
    if ( v7 < 0 )
      goto LABEL_59;
    v8 = BufferSize;
    v9 = 0;
    if ( BufferSize )
    {
      v10 = v55;
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, v10[v9]);
        if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 && BcdOpenObject(v5, &Guid, &BcdObjectHandle) >= 0 )
        {
          v11 = BcdObjectHandle;
          if ( (int)BiGetObjectDescription((__int64)BcdObjectHandle, &v62) >= 0
            && (HIDWORD(v62) & 0xF0000000) == 0x10000000
            && (HIDWORD(v62) & 0xF00000) == 0x100000 )
          {
            v12 = HIDWORD(v62) & 0xFFFFF;
            if ( (HIDWORD(v62) & 0xFFFFF) != 1 )
            {
              PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
              v14 = PoolWithTag;
              if ( !PoolWithTag )
              {
                BcdCloseObject(v11);
                v7 = -1073741670;
                goto LABEL_59;
              }
              memset(PoolWithTag, 0, 0x38uLL);
              v14[1] = Guid;
              v14[3].Data1 |= 4u;
              if ( v12 == 0xFFFFF )
              {
                v14[3].Data1 |= 8u;
                v16 = (GUID **)v57;
                if ( *(_QWORD ***)&v57->Data1 != &v56 )
                  goto LABEL_67;
                *(_QWORD *)v14->Data4 = v57;
                *(_QWORD *)&v14->Data1 = &v56;
                *v16 = v14;
                v57 = v14;
              }
              else
              {
                v17 = (GUID **)v59;
                if ( *(_QWORD ***)&v59->Data1 != &v58 )
LABEL_67:
                  __fastfail(3u);
                *(_QWORD *)v14->Data4 = v59;
                *(_QWORD *)&v14->Data1 = &v58;
                *v17 = v14;
                v59 = v14;
              }
              BufferSize = 2;
              if ( BcdGetElementDataWithFlags(v11, 0x16000082u, v15, Buffer, &BufferSize) >= 0 && LOBYTE(Buffer[0]) )
                v14[3].Data1 |= 0x10u;
              if ( (int)BiGetSavedBootEntry(v11, &P) >= 0 )
              {
                v18 = P;
                v14[2].Data1 = *((_DWORD *)P + 2);
                v14[3].Data1 |= 2u;
                ExFreePoolWithTag(v18, 0x4B444342u);
              }
            }
          }
          BcdCloseObject(v11);
          v5 = v52;
        }
        if ( ++v9 >= v8 )
        {
          v3 = 0;
          break;
        }
      }
    }
    v19 = BiEnumerateBootEntries(&v63, &BufferSize);
    v20 = v63;
    v7 = v19;
    if ( v19 >= 0 )
    {
      v21 = BufferSize;
      v52 = 0LL;
      v22 = (unsigned int *)v63;
      if ( BufferSize )
      {
        while ( 1 )
        {
          if ( (int)BiGetObjectReferenceFromEfiEntry(v22 + 1, &Guid) < 0
            || (v23 = BiLookupObjectByIdentifierAndBootEntry(&v58, &Guid, v22[3], &v52), v24 = v52, v3 = 32, v23 < 0) )
          {
            v28 = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x4B444342u);
            v52 = v28;
            v24 = v28;
            if ( !v28 )
              break;
            memset(v28, 0, 0x38uLL);
            *((_DWORD *)v24 + 12) |= 8u;
            v29 = v54;
            if ( *v54 != &v53 )
              goto LABEL_67;
            v24[1] = v54;
            *v24 = &v53;
            *v29 = v24;
            v54 = (_QWORD **)v24;
          }
          else
          {
            v25 = *v52;
            if ( *(_QWORD **)(*v52 + 8LL) != v52 )
              goto LABEL_67;
            v26 = (_QWORD *)v52[1];
            if ( (_QWORD *)*v26 != v52 )
              goto LABEL_67;
            *v26 = v25;
            *(_QWORD *)(v25 + 8) = v26;
            v27 = (_QWORD *)a3[1];
            if ( (_QWORD *)*v27 != a3 )
              goto LABEL_67;
            *v24 = a3;
            v24[1] = v27;
            *v27 = v24;
            a3[1] = v24;
          }
          v30 = ExAllocatePoolWithTag(PagedPool, v22[2], 0x4B444342u);
          v31 = v30;
          if ( !v30 )
            break;
          memmove(v30, v22 + 1, v22[2]);
          v24[5] = v31;
          *((_DWORD *)v24 + 8) = v31[2];
          v32 = v3 | v24[6] & 0xFFFFFFDF;
          v3 = 0;
          *((_DWORD *)v24 + 12) = v32 | 1;
          v33 = *v22;
          if ( (_DWORD)v33 )
          {
            v22 = (unsigned int *)((char *)v22 + v33);
            if ( (char *)v22 - v20 < v21 )
              continue;
          }
          goto LABEL_40;
        }
        v7 = -1073741670;
      }
      else
      {
LABEL_40:
        v34 = v53;
        while ( v34 != &v53 )
        {
          v35 = v34;
          v36 = v34;
          v34 = (_QWORD *)*v34;
          if ( (int)BiLookupObjectByBootEntry(&v56, *((unsigned int *)v35 + 8), &P) >= 0 )
          {
            v37 = P;
            v38 = *(_QWORD **)P;
            if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
              goto LABEL_67;
            v39 = (PVOID *)*((_QWORD *)P + 1);
            if ( *v39 != P )
              goto LABEL_67;
            *v39 = v38;
            v38[1] = v39;
            *((_OWORD *)v35 + 1) = v37[1];
            *((_DWORD *)v35 + 12) ^= (*((_DWORD *)v35 + 12) ^ *((_DWORD *)v37 + 12)) & 2;
            ExFreePoolWithTag(v37, 0x4B444342u);
            *((_DWORD *)v35 + 12) |= 4u;
            v40 = *v36;
            if ( *(_QWORD **)(*v36 + 8LL) != v36 )
              goto LABEL_67;
            v41 = (_QWORD *)v36[1];
            if ( (_QWORD *)*v41 != v36 )
              goto LABEL_67;
            *v41 = v40;
            *(_QWORD *)(v40 + 8) = v41;
            v42 = (_QWORD *)a3[1];
            if ( (_QWORD *)*v42 != a3 )
              goto LABEL_67;
            *v36 = a3;
            v36[1] = v42;
            *v42 = v36;
            a3[1] = v36;
          }
        }
        if ( v58 != &v58 )
        {
          v43 = (_QWORD *)a3[1];
          *v43 = v58;
          v44 = v59;
          a3[1] = v59;
          *(_QWORD *)&v44->Data1 = a3;
          v58[1] = v43;
        }
        if ( v56 != &v56 )
        {
          v45 = (_QWORD *)a3[1];
          *v45 = v56;
          v46 = v57;
          a3[1] = v57;
          *(_QWORD *)&v46->Data1 = a3;
          v56[1] = v45;
        }
        if ( v53 != &v53 )
        {
          v47 = (_QWORD *)a3[1];
          *v47 = v53;
          v48 = v54;
          a3[1] = v54;
          *v48 = a3;
          v53[1] = v47;
        }
        v7 = 0;
      }
    }
    if ( v20 )
      ExFreePoolWithTag(v20, 0x4B444342u);
LABEL_59:
    v6 = v55;
  }
  if ( v60 )
    BiCloseKey(v60);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v7 < 0 )
  {
    BiFreeIdentifierList(&v53);
    BiFreeIdentifierList(&v56);
    BiFreeIdentifierList(&v58);
    BiFreeIdentifierList(a3);
    BiLogMessage(4LL, L"BiBuildIdentifierList failed %x", (unsigned int)v7);
  }
  return (unsigned int)v7;
}
