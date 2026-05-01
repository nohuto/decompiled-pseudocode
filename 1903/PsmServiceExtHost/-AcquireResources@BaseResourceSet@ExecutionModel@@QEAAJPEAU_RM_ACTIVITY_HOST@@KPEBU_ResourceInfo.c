/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x18000739C
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x18000701C (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180007660 (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180007690 (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180007728 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180007758 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180007994 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x180020610 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180048E98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800703B8 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 */

__int64 __fastcall ExecutionModel::BaseResourceSet::AcquireResources(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 *a8,
        int a9,
        _DWORD *a10)
{
  __int64 v11; // r12
  int v13; // eax
  unsigned __int8 v14; // si
  int v15; // ebx
  __int64 v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  int v18; // r9d
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD *i; // rbx
  _QWORD *v23; // r14
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int8 v26; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v27[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  int v31; // [rsp+64h] [rbp-9Ch] BYREF
  int v32; // [rsp+68h] [rbp-98h] BYREF
  int v33; // [rsp+6Ch] [rbp-94h] BYREF
  _QWORD v34[4]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v36; // [rsp+B0h] [rbp-50h]
  int v37; // [rsp+B8h] [rbp-48h]
  int v38; // [rsp+BCh] [rbp-44h]
  int *v39; // [rsp+C0h] [rbp-40h]
  int v40; // [rsp+C8h] [rbp-38h]
  int v41; // [rsp+CCh] [rbp-34h]
  int *v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  int *v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E8h] [rbp-18h]
  int v47; // [rsp+ECh] [rbp-14h]
  int *v48; // [rsp+F0h] [rbp-10h]
  int v49; // [rsp+F8h] [rbp-8h]
  int v50; // [rsp+FCh] [rbp-4h]
  __int64 *v51; // [rsp+100h] [rbp+0h]
  int v52; // [rsp+108h] [rbp+8h]
  int v53; // [rsp+10Ch] [rbp+Ch]
  _BYTE v54[1200]; // [rsp+110h] [rbp+10h] BYREF

  v11 = a3;
  `vector constructor iterator'(v54, 0x18uLL, 0x32uLL, (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  v34[2] = 0LL;
  v34[0] = v34;
  v34[1] = v34;
  v26 = 0;
  memcpy_0(v54, a4, 24 * v11);
  if ( a9 == 1 )
  {
    v14 = 1;
    goto LABEL_18;
  }
  v13 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
          a1,
          v11,
          (unsigned int)v54,
          a6,
          a5,
          a7,
          (__int64)&v26,
          (__int64)v27,
          (__int64)v34);
  v14 = v26;
  v15 = v13;
  v28 = v13;
  if ( v13 >= 0 )
  {
    if ( !v27[0] )
      goto LABEL_19;
    if ( !v26 )
      goto LABEL_5;
LABEL_18:
    if ( a8 )
    {
LABEL_5:
      a10[322] = a5;
      a10[2] = a6;
      v28 = ExecutionModel::BaseResourceSet::AddToListPrioritized(a1 + 40, a10);
      if ( v28 < 0 )
      {
        v15 = -2147024882;
      }
      else
      {
        if ( v14 )
        {
          a10[320] = 1;
          if ( (_DWORD)v11 )
          {
            v20 = v11;
            do
            {
              if ( *(_DWORD *)a4 <= 0x31u )
              {
                v16 = 3 * (*(int *)a4 + 3LL);
                *(_OWORD *)&a10[2 * v16] = *(_OWORD *)a4;
                *(_QWORD *)&a10[2 * v16 + 4] = a4[2];
              }
              a4 += 3;
              --v20;
            }
            while ( v20 );
          }
          ExecutionModel::BaseResourceSet::RevokeResourceList(v16, v34);
        }
        else
        {
          ExecutionModel::BaseResourceSet::RecursiveVisit(
            a1,
            1,
            v11,
            (unsigned int)v54,
            a10[2],
            1,
            (__int64)&v26,
            (__int64)v27,
            0LL,
            (__int64)a10);
          a10[320] = 2;
        }
        if ( a8 )
          *a8 = v14;
        v15 = 0;
      }
      goto LABEL_11;
    }
LABEL_19:
    v15 = -2147220992;
LABEL_11:
    v28 = v15;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v53 = 0;
    v36 = &v28;
    v39 = &v30;
    v31 = a5;
    v42 = &v31;
    v32 = a6;
    v45 = &v32;
    v33 = v14;
    v48 = &v33;
    LODWORD(v29) = a7;
    v51 = &v29;
    v37 = v18;
    v30 = v11;
    v40 = v18;
    v43 = v18;
    v46 = v18;
    v49 = v18;
    v52 = v18;
    TlgWrite(v17, &unk_180095842, 0LL, 0LL, 8u, &pData);
    v15 = v28;
  }
  if ( v15 < 0 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v29, a10);
    v21 = v29;
    for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = v23 )
    {
      v23 = (_QWORD *)*i;
      if ( i[2] == v21 )
      {
        v24 = (_QWORD *)i[1];
        *v24 = v23;
        v23[1] = v24;
        v25 = i[2];
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        operator delete(i);
        --*(_QWORD *)(a1 + 56);
        v21 = v29;
      }
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a10 + 32LL))(a10, 0LL);
    v15 = v28;
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(v34);
  return (unsigned int)v15;
}
