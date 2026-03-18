/*
 * XREFs of zzzImeCanDestroyDefIME @ 0x1C0070C90
 * Callers:
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 * Callees:
 *     zzzImeSetFutureOwner @ 0x1C006D7A0 (zzzImeSetFutureOwner.c)
 *     DwmAsyncOwnerChange @ 0x1C006ED2C (DwmAsyncOwnerChange.c)
 *     unsafe_cast_fnid_or_class_to_PIMEWND @ 0x1C0070C0C (unsafe_cast_fnid_or_class_to_PIMEWND.c)
 *     ImeCheckTopmost @ 0x1C0070E5C (ImeCheckTopmost.c)
 */

__int64 __fastcall zzzImeCanDestroyDefIME(_QWORD *a1, struct tagWND *a2)
{
  ULONG64 *v4; // rax
  ULONG64 v5; // rdx
  struct tagWND **v7; // rsi
  __int64 v8; // rax
  struct tagWND *i; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  void *v14; // rax

  v4 = (ULONG64 *)unsafe_cast_fnid_or_class_to_PIMEWND(a1);
  if ( !v4 )
    return 0LL;
  v5 = *v4;
  if ( !*v4 || v5 == -1LL )
    return 0LL;
  if ( v5 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  if ( (*(_DWORD *)(v5 + 44) & 4) != 0 )
    return 0LL;
  v7 = (struct tagWND **)(a1 + 12);
  v8 = a1[12];
  if ( v8 )
  {
    while ( (struct tagWND *)v8 != a2 )
    {
      if ( !v8 )
        return 0LL;
      v8 = *(_QWORD *)(v8 + 96);
    }
    if ( !v8 )
      return 0LL;
  }
  for ( i = a2; i; i = (struct tagWND *)*((_QWORD *)i + 12) )
  {
    v10 = *(_QWORD *)(*((_QWORD *)i + 14) + 8LL);
    if ( (*(_BYTE *)(v10 + 10) & 1) != 0 || *(_WORD *)v10 == *(_WORD *)(gpsi + 898LL) )
      return 0LL;
  }
  zzzImeSetFutureOwner((struct tagWND *)a1, a2);
  ImeCheckTopmost(a1);
  if ( *v7 && a2 != *v7 )
    return 0LL;
  *(_QWORD *)(a1[5] + 64LL) = 0LL;
  HMAssignmentUnlock(a1 + 12);
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v14 = (void *)ReferenceDwmApiPort(v12, v11, v13);
    DwmAsyncOwnerChange(v14, *a1, 0LL);
  }
  return 1LL;
}
