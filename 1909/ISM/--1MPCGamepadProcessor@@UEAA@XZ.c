/*
 * XREFs of ??1MPCGamepadProcessor@@UEAA@XZ @ 0x180136E10
 * Callers:
 *     ??_GMPCGamepadProcessor@@UEAAPEAXI@Z @ 0x1801371A4 (--_GMPCGamepadProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18008D040 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

void __fastcall MPCGamepadProcessor::~MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  _QWORD *v2; // rdi
  std::_Ref_count_base *v3; // rcx
  void (__fastcall ***v4)(_QWORD, __int64); // rdx
  void (__fastcall ***v5)(_QWORD, __int64); // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (_QWORD *)*((_QWORD *)this + 907);
  if ( v2 )
  {
    v3 = (std::_Ref_count_base *)v2[3];
    if ( v3 )
      std::_Ref_count_base::_Decref(v3);
    operator delete(v2, (const struct std::nothrow_t *)0x20);
  }
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 906);
  if ( v4 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v4);
  v5 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 905);
  if ( v5 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()((__int64)this, v5);
  v6 = *((_QWORD *)this + 581);
  if ( v6 )
  {
    *((_QWORD *)this + 581) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 580);
  if ( v7 )
  {
    *((_QWORD *)this + 580) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  *((_DWORD *)this + 1159) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase((MPCGamepadProcessor *)((char *)this + 8));
}
