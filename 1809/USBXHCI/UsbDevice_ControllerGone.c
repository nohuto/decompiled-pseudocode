/*
 * XREFs of UsbDevice_ControllerGone @ 0x1C0034988
 * Callers:
 *     Controller_InitiateRecovery @ 0x1C000C898 (Controller_InitiateRecovery.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     ESM_AddEvent @ 0x1C003F694 (ESM_AddEvent.c)
 */

__int64 __fastcall UsbDevice_ControllerGone(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // rdx

  v2 = a1 + 176;
  v3 = 31LL;
  do
  {
    if ( *(_QWORD *)v2 )
      result = ESM_AddEvent((PVOID)(*(_QWORD *)v2 + 288LL));
    v2 += 8LL;
    --v3;
  }
  while ( v3 );
  v5 = *(_QWORD *)(a1 + 424);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 424) = 0LL;
    return (*(__int64 (__fastcall **)(unsigned __int64, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
             WPP_MAIN_CB.Dpc.ProcessorHistory,
             v5,
             *(_BYTE *)(a1 + 432) == 0 ? 0xC00000E5 : 0);
  }
  return result;
}
