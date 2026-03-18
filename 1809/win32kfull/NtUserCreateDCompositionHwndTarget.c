/*
 * XREFs of NtUserCreateDCompositionHwndTarget @ 0x1C00C91D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C00C8BA0 (NtUserDestroyDCompositionHwndTarget.c)
 *     UserSetLastStatus @ 0x1C00C8D04 (UserSetLastStatus.c)
 *     ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C00C9308 (-TestWindowForCompositionTarget@@YAJPEAUHWND__@@H@Z.c)
 *     ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C00C940C (-AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall NtUserCreateDCompositionHwndTarget(HWND a1, int a2, _QWORD *a3)
{
  __int64 v6; // rbx
  int v7; // r15d
  NTSTATUS v8; // edi
  HANDLE Handle; // [rsp+40h] [rbp-48h] BYREF
  struct CompositionObject *v11; // [rsp+A8h] [rbp+20h] BYREF

  Handle = (HANDLE)-1LL;
  v6 = 0LL;
  v7 = 0;
  KeEnterCriticalRegion();
  v8 = TestWindowForCompositionTarget(a1, a2);
  if ( v8 >= 0 )
  {
    v8 = CreateSharedSystemVisualObject(&v11);
    if ( v8 >= 0 )
    {
      v8 = AttachWindowCompositionTarget(a1, a2, v11);
      if ( v8 >= 0 )
      {
        v7 = 1;
        v8 = CompositionObject::CreateHandle(v11, 1u, 0, 0, &Handle);
      }
      CompositionObject::Release(v11);
    }
  }
  if ( v8 < 0 )
  {
    if ( v7 )
      NtUserDestroyDCompositionHwndTarget(a1, a2);
    if ( Handle != (HANDLE)-1LL )
      ObCloseHandle(Handle, 1);
    UserSetLastStatus(v8, 0);
  }
  else
  {
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_QWORD *)MmUserProbeAddress;
    *a3 = Handle;
  }
  KeLeaveCriticalRegion();
  LOBYTE(v6) = v8 >= 0;
  return v6;
}
