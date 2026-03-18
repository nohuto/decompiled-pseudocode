/*
 * XREFs of NtUserDestroyDCompositionHwndTarget @ 0x1C01322E0
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0085B70 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C013233C (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 *     UserSetLastStatus @ 0x1C0132458 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserDestroyDCompositionHwndTarget(HWND a1, int a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rbx
  NTSTATUS v6; // edi

  KeEnterCriticalRegion();
  v4 = DetachWindowCompositionTarget(a1, a2);
  v5 = 0LL;
  v6 = v4;
  if ( v4 < 0 )
    UserSetLastStatus(v4);
  KeLeaveCriticalRegion();
  LOBYTE(v5) = v6 >= 0;
  return v5;
}
