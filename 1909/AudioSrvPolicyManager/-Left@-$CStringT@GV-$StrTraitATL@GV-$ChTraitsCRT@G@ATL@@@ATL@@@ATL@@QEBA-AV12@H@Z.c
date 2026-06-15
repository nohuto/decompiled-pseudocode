/*
 * XREFs of ?Left@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEBA?AV12@H@Z @ 0x18002FBA0
 * Callers:
 *     ?ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x18002EF58 (-ReadEndpointDataFromKey@ApplicationSpecificEndpointInfo@@CAJPEBGPEAW4__MIDL___MIDL_itf_mmdevice.c)
 * Callees:
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x18000D2CC (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?CopyChars@?$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z @ 0x18000D2E4 (-CopyChars@-$CSimpleStringT@G$0A@@ATL@@SAXPEAG_KPEBGH@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000D368 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D64C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::Left(
        const void **a1,
        void **a2,
        int a3)
{
  _QWORD *v4; // rcx
  int v5; // ebx
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, __int64); // rcx
  const void *v10; // rsi
  __int64 v11; // rax
  void *v12; // rax

  v4 = *a1;
  v5 = 0;
  if ( a3 >= 0 )
    v5 = a3;
  if ( v5 < *((_DWORD *)v4 - 4) )
  {
    v8 = *(v4 - 3);
    if ( v8 )
      v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 32LL))(v8);
    else
      v9 = 0LL;
    if ( !v9 )
      v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))((__int64 (__fastcall *)(void ***))ATL::g_strmgr[4])(&ATL::g_strmgr);
    v10 = *a1;
    if ( !v9 )
      ATL::AtlThrowImpl(-2147467259);
    if ( !v10 && v5 )
      goto LABEL_19;
    v11 = (**v9)(v9, (unsigned int)v5, 2LL);
    if ( !v11 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException();
    v12 = (void *)(v11 + 24);
    *a2 = v12;
    if ( v5 > *((_DWORD *)v12 - 3) )
LABEL_19:
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v12 - 4) = v5;
    *((_WORD *)*a2 + v5) = 0;
    ATL::CSimpleStringT<unsigned short,0>::CopyChars(*a2, v5, v10, v5);
  }
  else
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      a2,
      a1);
  }
  return a2;
}
