/*
 * XREFs of CmpFindDrivers @ 0x1409CF508
 * Callers:
 *     CmGetSystemDriverList @ 0x1409CD66C (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1406B3F28 (CmpFindSubKeyByNumber.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x1409CDD50 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpLoadServicesNode @ 0x1409CDF10 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x1409CDFB0 (CmpFindGroupOrderList.c)
 *     CmpAddDriverToList @ 0x1409CE9F8 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x1409CF6B4 (CmpIsLoadType.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x1409F4F80 (CmpLoadManufacturingProfileServicesNode.c)
 */

char __fastcall CmpFindDrivers(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        int a4,
        const UNICODE_STRING *a5,
        unsigned int a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v14; // r12d
  int v15; // r15d
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r15
  _DWORD *v19; // r13
  unsigned int GroupOrderList; // eax
  __int64 v21; // r15
  unsigned int v22; // esi
  unsigned int v23; // r13d
  unsigned int v24; // r12d
  const UNICODE_STRING *v25; // r12
  __int64 v26; // r15
  _DWORD *v27; // r13
  const UNICODE_STRING *v28; // rsi
  unsigned int v30; // r13d
  __int64 v31; // r15
  unsigned int v32; // r12d
  ULONG_PTR v33; // rcx
  PCUNICODE_STRING Source; // [rsp+20h] [rbp-60h]
  char v35; // [rsp+30h] [rbp-50h]
  char v36; // [rsp+30h] [rbp-50h]
  __int64 v37; // [rsp+38h] [rbp-48h]
  __int64 v38; // [rsp+40h] [rbp-40h]
  __int64 v39; // [rsp+48h] [rbp-38h]
  __int64 v40; // [rsp+50h] [rbp-30h] BYREF
  _DWORD *v41; // [rsp+58h] [rbp-28h]
  __int64 v42; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v43[2]; // [rsp+68h] [rbp-18h] BYREF
  _DWORD *v44; // [rsp+70h] [rbp-10h] BYREF

  a11 = 0xFFFFFFFFLL;
  a9 = 0xFFFFFFFFLL;
  v42 = 0xFFFFFFFFLL;
  v43[0] = -1;
  v14 = a2;
  v43[1] = 0;
  if ( !CmpLoadServicesNode(BugCheckParameter3, a2, (__int64 *)&v44, (__int64)v43) )
    return 0;
  v15 = a10;
  v16 = 0LL;
  v17 = 0LL;
  a7 = 0LL;
  if ( a10 )
  {
    if ( a3 )
    {
      if ( (unsigned __int8)CmpLoadManufacturingProfileServicesNode(a3, a4, a10, (unsigned int)&a7, (__int64)&a9) )
      {
        v16 = (__int64)a7;
        v17 = a3;
        if ( a7 )
          goto LABEL_3;
      }
      else
      {
        a7 = 0LL;
      }
    }
    if ( (unsigned __int8)CmpLoadManufacturingProfileServicesNode(
                            BugCheckParameter3,
                            v14,
                            v15,
                            (unsigned int)&a7,
                            (__int64)&a9) )
    {
      v16 = (__int64)a7;
      v17 = BugCheckParameter3;
    }
    else
    {
      v16 = 0LL;
    }
  }
LABEL_3:
  if ( CmpFindRedirectedDriverServiceStateNode(
         BugCheckParameter3,
         v14,
         a3,
         a4,
         (__int64)&v40,
         (__int64)&a7,
         (__int64)&v42) )
  {
    v19 = a7;
    v18 = v40;
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
  }
  v40 = v18;
  v41 = v19;
  GroupOrderList = CmpFindGroupOrderList(BugCheckParameter3, v14);
  LODWORD(a7) = GroupOrderList;
  if ( GroupOrderList == -1 )
    return 0;
  v21 = a8;
  v22 = 0;
  v23 = GroupOrderList;
  while ( 1 )
  {
    CmpFindSubKeyByNumber(BugCheckParameter3, v44, v22, &a6);
    v24 = a6;
    ++v22;
    if ( a6 == -1 )
      break;
    if ( (unsigned __int8)CmpIsLoadType(BugCheckParameter3, (__int64)Source, v17, v16, v37, v38, v39) )
      CmpAddDriverToList(BugCheckParameter3, v24, BugCheckParameter3, v23, &CmpSystemHiveName, v21, v35);
  }
  v25 = a5;
  v26 = v40;
  v27 = v41;
  if ( a5 )
  {
    v28 = *(const UNICODE_STRING **)&a5->Length;
    if ( *(const UNICODE_STRING **)&a5->Length != a5 )
    {
      v30 = (unsigned int)a7;
      v31 = a8;
      do
      {
        if ( CmpLoadServicesNode(*(_QWORD *)&v28[2].Length, LODWORD(v28[2].Buffer), (__int64 *)&a7, (__int64)&a11) )
        {
          v32 = 0;
          while ( 1 )
          {
            CmpFindSubKeyByNumber(*(_QWORD *)&v28[2].Length, a7, v32, &a6);
            v33 = *(_QWORD *)&v28[2].Length;
            ++v32;
            if ( a6 == -1 )
              break;
            if ( (unsigned __int8)CmpIsLoadType(v33, (__int64)Source, v17, v16, v37, v38, v39) )
              CmpAddDriverToList(*(_QWORD *)&v28[2].Length, a6, BugCheckParameter3, v30, v28 + 1, v31, v36);
          }
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v33 + 16))(v33, &a11);
          v25 = a5;
        }
        v28 = *(const UNICODE_STRING **)&v28->Length;
      }
      while ( v28 != v25 );
      v26 = v40;
      v27 = v41;
    }
  }
  if ( v17 && v16 )
    (*(void (__fastcall **)(__int64, __int64 *))(v17 + 16))(v17, &a9);
  if ( v26 && v27 )
    (*(void (__fastcall **)(__int64, __int64 *))(v26 + 16))(v26, &v42);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v43);
  return 1;
}
