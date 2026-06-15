/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140010B70
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140010B50 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010CA8 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140015704 (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1400168B6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAPOWrapperSrv>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r15
  __int64 v4; // r12
  int v5; // esi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v5 = -2147024882;
    v6 = operator new(0x70uLL);
    v7 = v6;
    if ( v6 )
    {
      v6[8] = 0;
      memset_0(v6 + 10, 0, 0x28uLL);
      *((_BYTE *)v7 + 80) = 0;
      *((_QWORD *)v7 + 11) = 0LL;
      *((_QWORD *)v7 + 12) = 0LL;
      *((_QWORD *)v7 + 13) = 0LL;
      *(_QWORD *)v7 = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAPOWrapperSrv'};
      *((_QWORD *)v7 + 1) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObject'};
      *((_QWORD *)v7 + 2) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioSystemEffects2'};
      *((_QWORD *)v7 + 3) = &ATL::CComObject<CAPOWrapperSrv>::`vftable'{for `IAudioProcessingObjectInternal'};
      (*(void (__fastcall **)(struct ATL::CAtlModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
    }
    else
    {
      v7 = 0LL;
    }
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v5 = -2147024882;
    v7 = 0LL;
  }
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 8);
    v5 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v7 + 10));
    if ( v5 >= 0 )
    {
      *((_BYTE *)v7 + 80) = 1;
      v5 = 0;
    }
    _InterlockedDecrement(v7 + 8);
    if ( v5 || (v5 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, _QWORD *))v7)(v7, v4, v3)) != 0 )
      (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v7 + 64LL))(v7, 1LL);
  }
  return (unsigned int)v5;
}
