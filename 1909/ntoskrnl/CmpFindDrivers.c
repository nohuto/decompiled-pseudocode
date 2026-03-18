/*
 * XREFs of CmpFindDrivers @ 0x140A13674
 * Callers:
 *     CmGetSystemDriverList @ 0x140A12338 (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1406D8A94 (CmpFindSubKeyByNumber.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140A128A0 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpLoadServicesNode @ 0x140A129B4 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140A12A54 (CmpFindGroupOrderList.c)
 *     CmpAddDriverToList @ 0x140A13070 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A13820 (CmpIsLoadType.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140A391A0 (CmpLoadManufacturingProfileServicesNode.c)
 */

char __fastcall CmpFindDrivers(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        int a3,
        int a4,
        const UNICODE_STRING *a5,
        unsigned int a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v14; // edi
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r15
  _DWORD *v18; // r13
  unsigned int GroupOrderList; // eax
  __int64 v20; // r15
  unsigned int v21; // edi
  unsigned int v22; // r13d
  unsigned int v23; // r12d
  const UNICODE_STRING *v24; // r12
  __int64 v25; // r15
  _DWORD *v26; // r13
  const UNICODE_STRING *v27; // rdi
  unsigned int v29; // r13d
  __int64 v30; // r15
  unsigned int v31; // r12d
  ULONG_PTR v32; // rcx
  PCUNICODE_STRING Source; // [rsp+20h] [rbp-60h]
  char v34; // [rsp+30h] [rbp-50h]
  char v35; // [rsp+30h] [rbp-50h]
  __int64 v36; // [rsp+38h] [rbp-48h]
  __int64 v37; // [rsp+40h] [rbp-40h]
  __int64 v38; // [rsp+48h] [rbp-38h]
  _DWORD *v39; // [rsp+50h] [rbp-30h]
  _DWORD v40[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v41; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v42[2]; // [rsp+68h] [rbp-18h] BYREF
  _DWORD *v43; // [rsp+70h] [rbp-10h] BYREF

  a9 = 0xFFFFFFFFLL;
  v40[0] = -1;
  v41 = 0xFFFFFFFFLL;
  v42[0] = -1;
  v40[1] = 0;
  v14 = a2;
  v42[1] = 0;
  if ( !CmpLoadServicesNode(BugCheckParameter3, a2, (__int64 *)&v43, (__int64)v42) )
    return 0;
  v15 = 0LL;
  v16 = 0LL;
  a7 = 0LL;
  if ( a10
    && (unsigned __int8)CmpLoadManufacturingProfileServicesNode(
                          BugCheckParameter3,
                          v14,
                          a10,
                          (unsigned int)&a7,
                          (__int64)v40) )
  {
    v15 = (__int64)a7;
    v16 = BugCheckParameter3;
  }
  if ( CmpFindRedirectedDriverServiceStateNode(
         BugCheckParameter3,
         v14,
         a3,
         a4,
         (__int64)&a11,
         (__int64)&a7,
         (__int64)&v41) )
  {
    v18 = a7;
    v17 = a11;
  }
  else
  {
    v17 = 0LL;
    v18 = 0LL;
  }
  a11 = v17;
  v39 = v18;
  GroupOrderList = CmpFindGroupOrderList(BugCheckParameter3, v14);
  LODWORD(a7) = GroupOrderList;
  if ( GroupOrderList == -1 )
    return 0;
  v20 = a8;
  v21 = 0;
  v22 = GroupOrderList;
  while ( 1 )
  {
    CmpFindSubKeyByNumber(BugCheckParameter3, v43, v21, &a6);
    v23 = a6;
    ++v21;
    if ( a6 == -1 )
      break;
    if ( (unsigned __int8)CmpIsLoadType(BugCheckParameter3, (__int64)Source, v16, v15, v36, v37, v38) )
      CmpAddDriverToList(BugCheckParameter3, v23, BugCheckParameter3, v22, &CmpSystemHiveName, v20, v34);
  }
  v24 = a5;
  v25 = a11;
  v26 = v39;
  if ( a5 )
  {
    v27 = *(const UNICODE_STRING **)&a5->Length;
    if ( *(const UNICODE_STRING **)&a5->Length != a5 )
    {
      v29 = (unsigned int)a7;
      v30 = a8;
      do
      {
        if ( CmpLoadServicesNode(*(_QWORD *)&v27[2].Length, LODWORD(v27[2].Buffer), (__int64 *)&a7, (__int64)&a9) )
        {
          v31 = 0;
          while ( 1 )
          {
            CmpFindSubKeyByNumber(*(_QWORD *)&v27[2].Length, a7, v31, &a6);
            v32 = *(_QWORD *)&v27[2].Length;
            ++v31;
            if ( a6 == -1 )
              break;
            if ( (unsigned __int8)CmpIsLoadType(v32, (__int64)Source, v16, v15, v36, v37, v38) )
              CmpAddDriverToList(*(_QWORD *)&v27[2].Length, a6, BugCheckParameter3, v29, v27 + 1, v30, v35);
          }
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v32 + 16))(v32, &a9);
          v24 = a5;
        }
        v27 = *(const UNICODE_STRING **)&v27->Length;
      }
      while ( v27 != v24 );
      v25 = a11;
      v26 = v39;
    }
  }
  if ( v16 && v15 )
    (*(void (__fastcall **)(__int64, _DWORD *))(v16 + 16))(v16, v40);
  if ( v25 && v26 )
    (*(void (__fastcall **)(__int64, __int64 *))(v25 + 16))(v25, &v41);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v42);
  return 1;
}
