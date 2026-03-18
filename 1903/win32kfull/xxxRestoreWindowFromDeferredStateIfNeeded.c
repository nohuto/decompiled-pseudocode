/*
 * XREFs of xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C0084ADC
 * Callers:
 *     NtUserRestoreWindowDpiChanges @ 0x1C0009550 (NtUserRestoreWindowDpiChanges.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 * Callees:
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C008F63C (_SetDeferredDpiStateForWindowAndChildren.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C00C7C1C (_GetProp.c)
 *     xxxNotifyMonitorChanged @ 0x1C00C7C8C (xxxNotifyMonitorChanged.c)
 */

__int64 __fastcall xxxRestoreWindowFromDeferredStateIfNeeded(struct tagWND *a1)
{
  __int16 v2; // si
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebp
  __int64 Prop; // rax
  int v7; // ecx

  v2 = *(_WORD *)(*((_QWORD *)a1 + 5) + 286LL);
  if ( !v2 )
    return 0LL;
  if ( (unsigned int)IsTopLevelWindow(a1) || !*(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 286LL) )
  {
    result = SetDeferredDpiStateForWindowAndChildren(a1);
    v4 = *((_QWORD *)a1 + 5);
    v5 = result;
    if ( v2 == *(_WORD *)(v4 + 284) )
    {
      *(_DWORD *)(v4 + 232) &= ~0x4000000u;
    }
    else
    {
      Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      if ( Prop )
      {
        v7 = *(_DWORD *)(Prop + 48);
        if ( (v7 & 0x80u) != 0 )
          *(_DWORD *)(Prop + 48) = v7 & 0xFFFFFF7F;
      }
      xxxNotifyMonitorChanged(a1);
      return v5;
    }
  }
  else
  {
    *((_DWORD *)a1 + 76) &= ~1u;
    return 1LL;
  }
  return result;
}
