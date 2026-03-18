/*
 * XREFs of HUBPARENT_GetInfoFromParentUsingParentIoctlComplete @ 0x1C0006FB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBPARENT_GetInfoFromParentUsingParentIoctlComplete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // rsi
  int v11; // eax
  _QWORD v13[18]; // [rsp+30h] [rbp-98h] BYREF

  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1392))(WdfDriverGlobals);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v5,
         off_1C005F0E0);
  v7 = *(_DWORD *)(a3 + 8);
  v8 = v6;
  if ( v7 >= 0 )
  {
    v9 = *(_QWORD *)(v6 + 2448);
    memset(v13, 0, 0x88uLL);
    v13[0] = 0x100000088LL;
    v10 = (_QWORD *)(v8 + 32);
    v13[4] = v9;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1336))(
           WdfDriverGlobals,
           *(_QWORD *)(v8 + 16),
           0LL,
           v8 + 32);
    if ( v7 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD *))(WdfFunctions_01015 + 1344))(
              WdfDriverGlobals,
              *v10,
              v13);
      v7 = v11;
      if ( v11 >= 0 )
      {
        if ( (*(_DWORD *)(v8 + 2496) & 1) != 0 )
          _InterlockedOr((volatile signed __int32 *)(v8 + 40), 0x8000u);
      }
      else
      {
        WPP_RECORDER_SF_d(
          *(_QWORD *)(v8 + 2520),
          2u,
          3u,
          0x15u,
          (__int64)&WPP_6f1c5846342730c10a7f2a15ffc55722_Traceguids,
          v11);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, *v10);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  return HUBSM_AddEvent(v8 + 1264, ((v7 >> 31) & 0xFFFFFFFC) + 2042);
}
