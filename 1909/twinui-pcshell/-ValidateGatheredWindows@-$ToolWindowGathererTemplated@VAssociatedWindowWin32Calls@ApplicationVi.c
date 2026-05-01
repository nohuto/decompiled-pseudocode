/*
 * XREFs of ?ValidateGatheredWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x1800504C0
 * Callers:
 *     ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x18004F9A0 (-v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z.c)
 * Callees:
 *     memmove_0 @ 0x1800D3F03 (memmove_0.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::ValidateGatheredWindows(
        _QWORD *a1,
        HWND a2)
{
  DWORD WindowThreadProcessId; // ebp
  __int64 v4; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdx

  WindowThreadProcessId = GetWindowThreadProcessId(a2, 0LL);
  if ( !WindowThreadProcessId )
    return 2147943800LL;
  v4 = a1[1];
  if ( v4 )
  {
    v6 = v4 - 1;
    do
    {
      if ( GetWindowThreadProcessId(*(HWND *)(*a1 + 8 * v6), 0LL) != WindowThreadProcessId )
      {
        v7 = a1[1];
        if ( v6 < v7 )
        {
          if ( v6 != v7 - 1 )
          {
            memmove_0((void *)(*a1 + 8 * v6), (const void *)(*a1 + 8 * v6 + 8), 8 * (v7 - v6) - 8);
            v7 = a1[1];
          }
          a1[1] = v7 - 1;
        }
      }
      --v6;
      --v4;
    }
    while ( v4 );
  }
  return 0LL;
}
