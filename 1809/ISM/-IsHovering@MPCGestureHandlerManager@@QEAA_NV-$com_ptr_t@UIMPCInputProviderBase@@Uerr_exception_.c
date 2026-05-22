/*
 * XREFs of ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180045BA4
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800F1820 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F6E20 (-OnGazeUpdate@MPCProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800F88C0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x1800FFD30 (-OnGazeUpdate@MPCClickerProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??A?$map@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@U?$less@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@2@@std@@@5@@std@@QEAAAEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@3@@Z @ 0x180046300 (--A-$map@V-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V-$com_ptr_t@VMPC.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall MPCGestureHandlerManager::IsHovering(__int64 a1, _QWORD *a2)
{
  int v3; // edi
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 *v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // rcx
  unsigned int v13; // r8d
  char v14; // di
  __int64 v16; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v17; // [rsp+58h] [rbp+10h]
  __int64 *v18; // [rsp+60h] [rbp+18h]
  __int64 *v19; // [rsp+68h] [rbp+20h]

  v17 = a2;
  v3 = a1 + 24;
  v4 = *(__int64 **)(a1 + 24);
  v5 = (__int64 *)v4[1];
  v6 = v4;
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_9;
  v7 = *a2;
  do
  {
    if ( v5[4] >= v7 )
    {
      v6 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v6 == v4 || v7 < v6[4] )
LABEL_9:
    v6 = v4;
  if ( v6 == v4 )
  {
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return 0;
  }
  else
  {
    v18 = &v16;
    v8 = *a2;
    v16 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v19 = &v16;
    v9 = *(_QWORD *)std::map<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::operator[](v3);
    v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 88LL))(v16);
    v12 = 0LL;
    v13 = *(_DWORD *)(v9 + 128);
    if ( v13 )
    {
      v14 = 1;
      while ( 1 )
      {
        v10 = (unsigned int)v12;
        if ( *(_DWORD *)(v9 + 4 * v12 + 792) == v11 && *(_DWORD *)(152LL * (unsigned int)v12 + v9 + 204) == 2 )
          break;
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v13 )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v14 = 0;
    }
    if ( v16 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 16LL))(v16, v10);
    if ( *a2 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
    return v14;
  }
}
