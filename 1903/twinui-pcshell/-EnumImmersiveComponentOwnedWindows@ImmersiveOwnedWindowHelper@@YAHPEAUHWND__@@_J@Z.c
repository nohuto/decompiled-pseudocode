/*
 * XREFs of ?EnumImmersiveComponentOwnedWindows@ImmersiveOwnedWindowHelper@@YAHPEAUHWND__@@_J@Z @ 0x18007B030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveOwnedWindowHelper::EnumImmersiveComponentOwnedWindows(HWND a1, __int64 a2)
{
  HWND v5; // rdi
  HWND Window; // rax
  HWND Ancestor; // rax

  if ( a1 == *(HWND *)a2 )
  {
    SetLastError(0);
    return 0LL;
  }
  else
  {
    if ( GetPropW(a1, L"ImmersiveComponentOwnedWindow") == HANDLE_FLAG_INHERIT )
    {
      v5 = a1;
      do
      {
        Window = GetWindow(v5, 4u);
        Ancestor = GetAncestor(Window, 2u);
        v5 = Ancestor;
        if ( !Ancestor )
          break;
        if ( Ancestor == *(HWND *)a2 )
          goto LABEL_10;
      }
      while ( GetPropW(Ancestor, L"ImmersiveComponentOwnedWindow") != HANDLE_FLAG_INHERIT );
      if ( v5 != *(HWND *)a2 )
        return 1LL;
LABEL_10:
      SetWindowPos(
        a1,
        0LL,
        *(_DWORD *)(a2 + 8),
        *(_DWORD *)(a2 + 12),
        *(_DWORD *)(a2 + 16) - *(_DWORD *)(a2 + 8),
        *(_DWORD *)(a2 + 20) - *(_DWORD *)(a2 + 12),
        0x4014u);
    }
    return 1LL;
  }
}
