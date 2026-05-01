/*
 * XREFs of ?AcquireResources@BaseResourceSet@ExecutionModel@@QEAAJPEAU_RM_ACTIVITY_HOST@@KPEBU_ResourceInfo@2@W4Enum@Priority@2@KW45PendType@2@PEA_NW4_RM_ACQUIRE_PEND_POLICY@@PEAVExternalResourceSet@2@@Z @ 0x180002C48
 * Callers:
 *     ?CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAX_NKW45PendType@2@5PEAU_RM_ACTIVITY_HOST@@PEA_NPEAPEAV12@@Z @ 0x1800028D0 (-CreateInstance@ExternalResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@KPEAU_ResourceInfo@.c)
 * Callees:
 *     ?clear@?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@QEAAXXZ @ 0x180002F4C (-clear@-$list@V-$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V-$allocator@V-$CComPtr@VBaseRes.c)
 *     ?AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@_N@Z @ 0x180002F7C (-AddToListPrioritized@BaseResourceSet@ExecutionModel@@CAJPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 *     ??0?$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@@@Z @ 0x180003014 (--0-$CComPtrBase@VBaseResourceSet@ExecutionModel@@@ATL@@IEAA@PEAVBaseResourceSet@ExecutionModel@.c)
 *     ?CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Priority@2@W44PendType@2@PEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x180003044 (-CheckResourceAvailability@BaseResourceSet@ExecutionModel@@AEAAJKPEAU_ResourceInfo@2@KW4Enum@Pri.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@PEAV12@@Z @ 0x18001E540 (-RecursiveVisit@BaseResourceSet@ExecutionModel@@AEAAJW4Action@12@KPEAU_ResourceInfo@2@K_NPEA_N3P.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003BE18 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18004907C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x1800632C8 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
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
  __int64 v11; // rbx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  unsigned __int8 v18; // si
  int v19; // ebx
  int v20; // eax
  __int64 v21; // rcx
  const struct _TlgProvider_t *v22; // rcx
  __int64 v23; // r10
  __int64 v25; // rcx
  _QWORD *i; // rbx
  _QWORD *v27; // r14
  _QWORD *v28; // rax
  __int64 v29; // rcx
  unsigned __int8 v30; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v31[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+6Ch] [rbp-94h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v38[3]; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  int *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  int *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  int *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  int *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  __int64 *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  _BYTE v52[1200]; // [rsp+110h] [rbp+10h] BYREF

  v11 = a3;
  v33 = a3;
  `vector constructor iterator'(v52, 0x18uLL, 0x32uLL, (void *(*)(void *))ExecutionModel::_ResourceInfo::_ResourceInfo);
  v38[2] = 0LL;
  v38[0] = v38;
  v38[1] = v38;
  v30 = 0;
  v13 = (unsigned int)v11;
  memcpy_0(v52, a4, 24 * v11);
  if ( a9 == 1 )
  {
    v18 = 1;
    goto LABEL_18;
  }
  v17 = ExecutionModel::BaseResourceSet::CheckResourceAvailability(
          a1,
          v11,
          (unsigned int)v52,
          a6,
          a5,
          a7,
          (__int64)&v30,
          (__int64)v31,
          (__int64)v38);
  v18 = v30;
  v16 = 0LL;
  v32 = v17;
  v19 = v17;
  if ( v17 >= 0 )
  {
    if ( !v31[0] )
      goto LABEL_19;
    if ( !v30 )
      goto LABEL_5;
LABEL_18:
    if ( a8 )
    {
LABEL_5:
      a10[352] = a5;
      a10[2] = a6;
      v20 = ExecutionModel::BaseResourceSet::AddToListPrioritized(a1 + 160, a10, v15, v16);
      v16 = 0LL;
      v32 = v20;
      if ( v20 < 0 )
      {
        v19 = -2147024882;
      }
      else
      {
        if ( v18 )
        {
          a10[350] = 1;
          if ( (_DWORD)v13 )
          {
            do
            {
              if ( *(_DWORD *)a4 <= 0x31u )
              {
                v21 = 3 * (*(int *)a4 + 8LL);
                *(_OWORD *)&a10[2 * v21] = *(_OWORD *)a4;
                *(_QWORD *)&a10[2 * v21 + 4] = a4[2];
              }
              a4 += 3;
              --v13;
            }
            while ( v13 );
          }
          ExecutionModel::BaseResourceSet::RevokeResourceList(v21, v38, v15, 0LL);
        }
        else
        {
          ExecutionModel::BaseResourceSet::RecursiveVisit(
            a1,
            1,
            v13,
            (unsigned int)v52,
            a10[2],
            1,
            (__int64)&v30,
            (__int64)v31,
            0LL,
            (__int64)a10);
          a10[350] = 2;
        }
        v16 = 0LL;
        if ( a8 )
          *a8 = v18;
        v19 = 0;
      }
      goto LABEL_11;
    }
LABEL_19:
    v19 = -2147220992;
LABEL_11:
    v32 = v19;
  }
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
  {
    v41 = v23;
    v40 = &v32;
    v42 = (int *)&v33;
    v35 = a5;
    v44 = &v35;
    v36 = a6;
    v46 = &v36;
    v37 = v18;
    v48 = &v37;
    LODWORD(v34) = a7;
    v50 = &v34;
    v43 = v23;
    v45 = v23;
    v47 = v23;
    v49 = v23;
    v51 = v23;
    TlgWrite(v22, &unk_180087B3A, 0LL, 0LL, 8u, &pData);
    v19 = v32;
  }
  if ( v19 < 0 )
  {
    ATL::CComPtrBase<ExecutionModel::BaseResourceSet>::CComPtrBase<ExecutionModel::BaseResourceSet>(&v34, a10, v15, v16);
    v25 = v34;
    for ( i = *(_QWORD **)(a1 + 160); i != (_QWORD *)(a1 + 160); i = v27 )
    {
      v27 = (_QWORD *)*i;
      if ( i[2] == v25 )
      {
        v28 = (_QWORD *)i[1];
        *v28 = v27;
        v27[1] = v28;
        v29 = i[2];
        if ( v29 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        operator delete(i);
        --*(_QWORD *)(a1 + 176);
        v25 = v34;
      }
    }
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)a10 + 32LL))(a10, 0LL);
    v19 = v32;
  }
  utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet>>>::clear(
    v38,
    v14,
    v15,
    v16);
  return (unsigned int)v19;
}
