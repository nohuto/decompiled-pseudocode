/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1C012B190
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0030084 (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z @ 0x1C012B27C (-_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(unsigned __int64 a1, int a2, unsigned int *a3, int *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct tagCURSOR *v12; // rax
  __int64 v13; // rcx
  struct tagCURSOR *VirtualizedDpiCursor; // r10
  _DWORD *v15; // rcx
  _DWORD *v16; // rdx
  struct tagCURSOR *CursorFrameInfo; // rax
  unsigned int v19; // [rsp+20h] [rbp-28h] BYREF
  int v20[9]; // [rsp+24h] [rbp-24h] BYREF

  v8 = 0LL;
  v19 = 0;
  v20[0] = 0;
  EnterSharedCrit(0LL, 1LL);
  LOBYTE(v9) = 3;
  v12 = (struct tagCURSOR *)HMValidateHandle(a1, v9, v10, v11);
  if ( v12 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v12);
    v15 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
    v16 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    CursorFrameInfo = _GetCursorFrameInfo(VirtualizedDpiCursor, a2, &v19, v20);
    if ( CursorFrameInfo )
    {
      v8 = *(_QWORD *)CursorFrameInfo;
      *a3 = v19;
      *a4 = v20[0];
    }
  }
  UserSessionSwitchLeaveCrit(v13);
  return v8;
}
