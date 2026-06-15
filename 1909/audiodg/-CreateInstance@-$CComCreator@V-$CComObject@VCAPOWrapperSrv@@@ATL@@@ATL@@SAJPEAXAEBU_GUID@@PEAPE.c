/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140010AD0
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCAPOWrapperSrv@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140010AB0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCAPOWrapperSrv@@@ATL@@@ATL@@V-$CCom.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140010C3C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x140015B14 (--2@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140017A9C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 *     ?InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ @ 0x140042318 (-InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CAPOWrapperSrv>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // edi
  _BYTE *v7; // rax
  volatile int *v8; // rdx
  _BYTE *v9; // rbx
  int v10; // eax
  _QWORD v11[11]; // [rsp+0h] [rbp-58h] BYREF
  _BYTE *v14; // [rsp+78h] [rbp+20h]

  v11[4] = -2LL;
  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v7 = operator new(0x70uLL);
    v9 = v7;
    v11[5] = v7;
    if ( v7 )
    {
      *((_DWORD *)v7 + 8) = 0;
      *((_QWORD *)v7 + 5) = 0LL;
      *((_QWORD *)v7 + 6) = 0LL;
      *((_QWORD *)v7 + 7) = 0LL;
      *((_QWORD *)v7 + 8) = 0LL;
      *((_QWORD *)v7 + 9) = 0LL;
      v7[80] = 0;
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
      v9 = 0LL;
    }
    v14 = v9;
  }
  catch ( ... )
  {
    v8 = (volatile int *)v11;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v14;
  }
  if ( v9 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v9 + 32), v8);
    v10 = ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)(v9 + 40));
    if ( v10 >= 0 )
    {
      v9[80] = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    CAPOWrapperSrv::InternalFinalConstructRelease((CAPOWrapperSrv *)v9);
    if ( v6 || (v6 = (**(__int64 (__fastcall ***)(_BYTE *, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v9 + 64LL))(v9, 1LL);
  }
  return v6;
}
