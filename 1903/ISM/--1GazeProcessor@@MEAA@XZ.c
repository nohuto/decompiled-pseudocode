/*
 * XREFs of ??1GazeProcessor@@MEAA@XZ @ 0x180125338
 * Callers:
 *     ??_GGazeProcessor@@MEAAPEAXI@Z @ 0x1801254FC (--_GGazeProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GazeProcessor::~GazeProcessor(GazeProcessor *this)
{
  __int64 v2; // rcx
  int (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  _QWORD **v5; // rax
  _QWORD *v6; // r8
  _QWORD *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  *(_QWORD *)this = &GazeProcessor::`vftable'{for `IInputProcessorDeviceUpdate'};
  *((_QWORD *)this + 1) = &GazeProcessor::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &GazeProcessor::`vftable'{for `ISupportedInputUpdateObserver'};
  *((_QWORD *)this + 3) = &GazeProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &GazeProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &GazeProcessor::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 27);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  v12 = 0LL;
  v3 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7)
                                                                                          + 64LL))(*((_QWORD *)this + 7));
  v4 = **v3;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
  if ( v4(v3, &GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f, &v12) >= 0 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v12 + 32LL))(v12, (char *)this + 16);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v12);
  v5 = (_QWORD **)*((_QWORD *)this + 28);
  v6 = *v5;
  *v5 = v5;
  *(_QWORD *)(*((_QWORD *)this + 28) + 8LL) = *((_QWORD *)this + 28);
  *((_QWORD *)this + 29) = 0LL;
  v7 = (_QWORD *)*((_QWORD *)this + 28);
  if ( v6 != v7 )
  {
    do
    {
      v8 = (_QWORD *)*v6;
      std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x18);
      v6 = v8;
      v7 = (_QWORD *)*((_QWORD *)this + 28);
    }
    while ( v8 != v7 );
  }
  std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)0x18);
  v9 = *((_QWORD *)this + 27);
  if ( v9 )
  {
    *((_QWORD *)this + 27) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *((_QWORD *)this + 26);
  if ( v10 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = *((_QWORD *)this + 11);
  if ( v11 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  NonPointerProcessor::~NonPointerProcessor((GazeProcessor *)((char *)this + 24));
}
