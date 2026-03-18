/*
 * XREFs of NtUserGetIconSize @ 0x1C010ABD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0018228 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C015BC7C (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C015BD0C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  struct tagCURSOR *v10; // rax
  __int64 v11; // rdx
  ULONG64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  int v17; // [rsp+20h] [rbp-28h] BYREF
  int v18[9]; // [rsp+24h] [rbp-24h] BYREF

  v8 = 0;
  v17 = 0;
  v18[0] = 0;
  EnterSharedCrit(0LL, 1LL);
  LOBYTE(v9) = 3;
  v10 = (struct tagCURSOR *)HMValidateHandle(a1, v9);
  if ( v10 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v10);
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
      || (VirtualizedDpiCursor = GetAnimatedCursorFrame(VirtualizedDpiCursor, a2)) != 0LL )
    {
      GetVirtualizedCursorSize(VirtualizedDpiCursor, &v17, v18);
      v12 = MmUserProbeAddress;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = v17;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v18[0];
      v8 = 1;
      v18[1] = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v8;
}
