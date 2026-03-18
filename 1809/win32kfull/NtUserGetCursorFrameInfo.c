/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1C0122D00
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     ?_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z @ 0x1C0122DEC (-_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C015BD0C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(__int64 a1, int a2, unsigned int *a3, int *a4)
{
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct tagCURSOR *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagCURSOR *VirtualizedDpiCursor; // r10
  _DWORD *v16; // rcx
  _DWORD *v17; // rdx
  struct tagCURSOR *CursorFrameInfo; // rax
  unsigned int v20; // [rsp+20h] [rbp-28h] BYREF
  int v21[9]; // [rsp+24h] [rbp-24h] BYREF

  v8 = 0LL;
  v20 = 0;
  v21[0] = 0;
  EnterSharedCrit(0LL, 1LL);
  LOBYTE(v9) = 3;
  v10 = (struct tagCURSOR *)HMValidateHandle(a1, v9);
  if ( v10 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v10);
    v16 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    v17 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = *v17;
    CursorFrameInfo = _GetCursorFrameInfo(VirtualizedDpiCursor, a2, &v20, v21);
    if ( CursorFrameInfo )
    {
      v8 = *(_QWORD *)CursorFrameInfo;
      *a3 = v20;
      *a4 = v21[0];
    }
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v8;
}
