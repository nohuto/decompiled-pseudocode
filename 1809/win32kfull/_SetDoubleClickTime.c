/*
 * XREFs of _SetDoubleClickTime @ 0x1C0126440
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C00A56F0 (CheckWinstaAttributeAccess.c)
 *     InitTooltipDelay @ 0x1C01264F0 (InitTooltipDelay.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C0126510 (safe_cast_fnid_to_PTOOLTIPWND.c)
 */

__int64 __fastcall SetDoubleClickTime(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 i; // r9
  __int64 v4; // rax
  __int64 v5; // r9

  v1 = a1;
  v2 = *(_QWORD *)(PsGetCurrentProcessWin32Process(a1) + 672);
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0LL;
  if ( v1 )
  {
    if ( v1 > 0x1388 )
      v1 = 5000;
  }
  else
  {
    v1 = 500;
  }
  gdtDblClk = v1;
  *(_DWORD *)(gpsi + 4980LL) = 4 * v1;
  *(_DWORD *)(gpsi + 4976LL) = *(_DWORD *)(gpsi + 4980LL) / 5u;
  if ( v2 )
  {
    for ( i = *(_QWORD *)(v2 + 16); i; i = *(_QWORD *)(v5 + 32) )
    {
      v4 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(i + 112));
      InitTooltipDelay(v4);
    }
  }
  return 1LL;
}
