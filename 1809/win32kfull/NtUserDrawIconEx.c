/*
 * XREFs of NtUserDrawIconEx @ 0x1C006D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C0018228 (-GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     _DrawIconEx @ 0x1C006D774 (_DrawIconEx.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z @ 0x1C015BC7C (-GetVirtualizedCursorSize@@YAXPEAUtagCURSOR@@PEAH1@Z.c)
 *     ?GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C015BD0C (-GetVirtualizedDpiCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDrawIconEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        ULONG64 a11)
{
  __int64 v15; // rdi
  __int64 v16; // rdx
  struct tagCURSOR *v17; // rax
  struct tagCURSOR *VirtualizedDpiCursor; // rax
  struct tagCURSOR *AnimatedCursorFrame; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // rcx
  _BYTE *v26; // rdx
  _BYTE v27[24]; // [rsp+68h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v15 = 0LL;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v27);
  LOBYTE(v16) = 3;
  v17 = (struct tagCURSOR *)HMValidateHandle(a4, v16);
  if ( v17 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v17);
    AnimatedCursorFrame = VirtualizedDpiCursor;
    if ( a10 )
    {
      v25 = *((unsigned int *)VirtualizedDpiCursor + 20);
      if ( (v25 & 8) == 0 || (AnimatedCursorFrame = GetAnimatedCursorFrame(VirtualizedDpiCursor, 0)) != 0LL )
      {
        if ( !PsGetCurrentProcessWow64Process(v25) )
          v15 = 3LL;
        if ( (v15 & a11) != 0 )
          ExRaiseDatatypeMisalignment();
        v26 = (_BYTE *)a11;
        if ( a11 >= MmUserProbeAddress )
          v26 = (_BYTE *)MmUserProbeAddress;
        *v26 = *v26;
        v26[39] = v26[39];
        *(_QWORD *)a11 = *((_QWORD *)AnimatedCursorFrame + 11);
        *(_QWORD *)(a11 + 8) = *((_QWORD *)AnimatedCursorFrame + 12);
        *(_QWORD *)(a11 + 32) = *((_QWORD *)AnimatedCursorFrame + 16);
        GetVirtualizedCursorSize(AnimatedCursorFrame, (int *)(a11 + 24), (int *)(a11 + 28));
        *(_DWORD *)(a11 + 16) = *((_DWORD *)AnimatedCursorFrame + 35);
        *(_DWORD *)(a11 + 20) = *((_DWORD *)AnimatedCursorFrame + 36);
        LODWORD(v15) = 1;
      }
    }
    else
    {
      LODWORD(v15) = DrawIconEx(a1, a2, a3, VirtualizedDpiCursor, a5, a6, a7, a8, a9);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v27);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return (int)v15;
}
