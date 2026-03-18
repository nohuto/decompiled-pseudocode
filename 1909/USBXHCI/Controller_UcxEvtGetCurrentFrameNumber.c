/*
 * XREFs of Controller_UcxEvtGetCurrentFrameNumber @ 0x1C0011570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     Controller_GetFrameNumber @ 0x1C000E6C0 (Controller_GetFrameNumber.c)
 */

__int64 __fastcall Controller_UcxEvtGetCurrentFrameNumber(__int64 a1, int *a2)
{
  __int64 v3; // rax
  int FrameNumber; // eax

  v3 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C0056428);
  if ( *(_DWORD *)(v3 + 392) == 1 )
    FrameNumber = Controller_GetFrameNumber(v3, 1, 0LL, 0LL);
  else
    FrameNumber = -1;
  *a2 = FrameNumber;
  return 0LL;
}
