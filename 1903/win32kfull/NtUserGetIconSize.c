/*
 * XREFs of NtUserGetIconSize @ 0x1C002CA60
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C002FFD0 (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0030084 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C00AC1C8 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 */

__int64 __fastcall NtUserGetIconSize(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  struct tagCURSOR *v10; // rax
  ULONG64 v11; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  int v14; // [rsp+20h] [rbp-28h] BYREF
  int v15[9]; // [rsp+24h] [rbp-24h] BYREF

  v8 = 0;
  v14 = 0;
  v15[0] = 0;
  EnterSharedCrit(0LL, 1LL);
  LOBYTE(v9) = 3;
  v10 = (struct tagCURSOR *)HMValidateHandle(a1, v9);
  if ( v10 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v10);
    if ( (*((_DWORD *)VirtualizedDpiCursor + 20) & 8) == 0
      || (VirtualizedDpiCursor = GetAnimatedCursorFrame(VirtualizedDpiCursor, a2)) != 0LL )
    {
      GetVirtualizedCursorSize(VirtualizedDpiCursor, &v14, v15);
      v11 = MmUserProbeAddress;
      if ( (unsigned __int64)a3 >= MmUserProbeAddress )
        a3 = (_DWORD *)MmUserProbeAddress;
      *a3 = v14;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v15[0];
      v8 = 1;
      v15[1] = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
