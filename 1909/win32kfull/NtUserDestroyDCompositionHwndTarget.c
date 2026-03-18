/*
 * XREFs of NtUserDestroyDCompositionHwndTarget @ 0x1C010CDE0
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0015F50 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C010CE3C (-DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 *     UserSetLastStatus @ 0x1C010CF58 (UserSetLastStatus.c)
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
