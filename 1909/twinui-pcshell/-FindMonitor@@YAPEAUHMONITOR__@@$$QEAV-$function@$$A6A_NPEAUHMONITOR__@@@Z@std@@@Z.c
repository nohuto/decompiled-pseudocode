/*
 * XREFs of ?FindMonitor@@YAPEAUHMONITOR__@@$$QEAV?$function@$$A6A_NPEAUHMONITOR__@@@Z@std@@@Z @ 0x1801C7454
 * Callers:
 *     ?ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@_N@Z @ 0x1801C6AD8 (-ComputeConstraints@CVirtualTouchpadExperienceManager@@AEAAJAEBUTouchpadPositionAnchorInternal@@.c)
 *     ?Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Internal@Windows@@URect@Foundation@6@@Z @ 0x1801C9120 (-Show@CVirtualTouchpadExperienceManager@@UEAAJW4VirtualTouchpadPosition@Experience@Shell@Interna.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801C9F14 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
LPARAM __fastcall FindMonitor(__int64 a1)
{
  __int64 v2; // rcx
  LPARAM v3; // rbx
  LPARAM dwData; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v6[56]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v7; // [rsp+70h] [rbp-28h]

  dwData = 0LL;
  v7 = 0LL;
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
  {
    if ( v2 == a1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v2 + 8LL))(v2, v6);
      std::_Func_class<void,>::_Tidy(a1);
    }
    else
    {
      v7 = v2;
      *(_QWORD *)(a1 + 56) = 0LL;
    }
  }
  EnumDisplayMonitors(
    0LL,
    0LL,
    (MONITORENUMPROC)lambda_9901e7d903e4130fca893991dae3b45b_::_lambda_invoker_cdecl_,
    (LPARAM)&dwData);
  v3 = dwData;
  std::_Func_class<void,>::_Tidy(v6);
  return v3;
}
