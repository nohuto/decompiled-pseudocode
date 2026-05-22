/*
 * XREFs of ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045AE0
 * Callers:
 *     ?OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F2EC0 (-OnGazeUpdate@MPCSixDofProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F6E20 (-OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F88C0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800FEFC0 (-PostHitTestProcessing@MPCHeadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800FFD30 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x180046300 (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     ?OnGazeUpdate@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18004DB84 (-OnGazeUpdate@MPCGestureHandler@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCGestureHandlerManager::OnGazeUpdate(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v11; // [rsp+48h] [rbp+10h]
  __int64 *v12; // [rsp+50h] [rbp+18h]

  v11 = a2;
  v3 = a1 + 24;
  result = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(result + 8);
  v6 = result;
  if ( *(_BYTE *)(v5 + 25) )
    goto LABEL_9;
  v7 = *a2;
  do
  {
    if ( *(_QWORD *)(v5 + 32) >= v7 )
    {
      v6 = v5;
      v5 = *(_QWORD *)v5;
    }
    else
    {
      v5 = *(_QWORD *)(v5 + 16);
    }
  }
  while ( !*(_BYTE *)(v5 + 25) );
  if ( v6 == result || v7 < *(_QWORD *)(v6 + 32) )
LABEL_9:
    v6 = result;
  if ( v6 != result )
  {
    v12 = &v10;
    v8 = *a2;
    v10 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = (_QWORD *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[](v3);
    result = MPCGestureHandler::OnGazeUpdate(*v9, &v10);
  }
  if ( *a2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return result;
}
