/*
 * XREFs of xxxRestoreWindowFromDeferredStateIfNeeded @ 0x1C00B8040
 * Callers:
 *     NtUserRestoreWindowDpiChanges @ 0x1C0006240 (NtUserRestoreWindowDpiChanges.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     xxxNotifyMonitorChanged @ 0x1C006F8AC (xxxNotifyMonitorChanged.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     _SetDeferredDpiStateForWindowAndChildren @ 0x1C00732C0 (_SetDeferredDpiStateForWindowAndChildren.c)
 */

__int64 __fastcall xxxRestoreWindowFromDeferredStateIfNeeded(struct tagWND *a1)
{
  struct tagRECT *v1; // rdi
  unsigned __int16 v3; // si
  __int64 result; // rax
  int v5; // r9d
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 Prop; // rax
  int v9; // ecx

  v1 = 0LL;
  v3 = *(_WORD *)(*((_QWORD *)a1 + 5) + 286LL);
  if ( !v3 )
    return 0LL;
  if ( (unsigned int)IsTopLevelWindow((__int64)a1) || !*(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 10) + 40LL) + 286LL) )
  {
    result = SetDeferredDpiStateForWindowAndChildren(a1, 0, v5);
    v6 = *((_QWORD *)a1 + 5);
    v7 = result;
    if ( v3 == *(_WORD *)(v6 + 284) )
    {
      *(_DWORD *)(v6 + 232) &= ~0x4000000u;
    }
    else
    {
      Prop = GetProp((__int64)a1, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( Prop )
      {
        v9 = *(_DWORD *)(Prop + 48);
        if ( (v9 & 0x80u) != 0 )
        {
          v1 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
          *(_DWORD *)(Prop + 48) = v9 & 0xFFFFFF7F;
        }
      }
      xxxNotifyMonitorChanged(a1, v1, 0LL, v3);
      return v7;
    }
  }
  else
  {
    *((_DWORD *)a1 + 72) &= ~1u;
    return 1LL;
  }
  return result;
}
