/*
 * XREFs of ??1MPCSixDofProcessor@@UEAA@XZ @ 0x18012EE04
 * Callers:
 *     ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x18012FB30 (--_EMPCSixDofProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18002B42C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C760 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??R?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecognizerHandler@@@Z @ 0x18008D280 (--R-$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@QEBAXPEAVMPCSpatialGestureRecogni.c)
 */

void __fastcall MPCSixDofProcessor::~MPCSixDofProcessor(MPCSixDofProcessor *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  std::_Ref_count_base *v4; // rcx
  _QWORD *v5; // rdi
  std::_Ref_count_base *v6; // rcx
  void (__fastcall ***v7)(_QWORD, __int64); // rdx
  void (__fastcall ***v8)(_QWORD, __int64); // rdx
  void (__fastcall ***v9)(_QWORD, __int64); // rdx
  void (__fastcall ***v10)(_QWORD, __int64); // rdx
  void (__fastcall ***v11)(_QWORD, __int64); // rdx
  void (__fastcall ***v12)(_QWORD, __int64); // rdx
  void (__fastcall ***v13)(_QWORD, __int64); // rdx

  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 5592);
  v3 = (_QWORD *)*((_QWORD *)this + 630);
  if ( v3 )
  {
    v4 = (std::_Ref_count_base *)v3[3];
    if ( v4 )
      std::_Ref_count_base::_Decref(v4);
    operator delete(v3, (const struct std::nothrow_t *)0x20);
  }
  v5 = (_QWORD *)*((_QWORD *)this + 629);
  if ( v5 )
  {
    v6 = (std::_Ref_count_base *)v5[3];
    if ( v6 )
      std::_Ref_count_base::_Decref(v6);
    operator delete(v5, (const struct std::nothrow_t *)0x20);
  }
  v7 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 628);
  if ( v7 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v2, v7);
  v8 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 627);
  if ( v8 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v2, v8);
  v9 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 626);
  if ( v9 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v2, v9);
  v10 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 625);
  if ( v10 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v2, v10);
  v11 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 624);
  if ( v11 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v2, v11);
  v12 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 623);
  if ( v12 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v2, v12);
  v13 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 622);
  if ( v13 )
    std::default_delete<MPCSpatialGestureRecognizerHandler>::operator()(v2, v13);
  *((_DWORD *)this + 1157) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
}
