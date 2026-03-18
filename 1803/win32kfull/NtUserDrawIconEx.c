/*
 * XREFs of NtUserDrawIconEx @ 0x1C00134C0
 * Callers:
 *     <none>
 * Callees:
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     _GetIconSize @ 0x1C0016068 (_GetIconSize.c)
 *     FindSystemDpiCursorSize @ 0x1C00160FC (FindSystemDpiCursorSize.c)
 *     GetAnimatedCursorFrame @ 0x1C001C38C (GetAnimatedCursorFrame.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserDrawIconEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        ULONG64 a11)
{
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 SystemDpiCursorSize; // rax
  __int64 AnimatedCursorFrame; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _BYTE *v25; // rdx
  _BYTE v26[24]; // [rsp+68h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v15 = 0LL;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v26);
  LOBYTE(v16) = 3;
  v17 = HMValidateHandle(a4, v16);
  if ( v17 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v17);
    AnimatedCursorFrame = SystemDpiCursorSize;
    if ( a10 )
    {
      if ( (*(_DWORD *)(SystemDpiCursorSize + 80) & 8) == 0
        || (AnimatedCursorFrame = GetAnimatedCursorFrame(SystemDpiCursorSize, 0LL)) != 0 )
      {
        if ( !PsGetCurrentProcessWow64Process() )
          v15 = 3LL;
        if ( (v15 & a11) != 0 )
          ExRaiseDatatypeMisalignment();
        v25 = (_BYTE *)a11;
        if ( a11 >= MmUserProbeAddress )
          v25 = (_BYTE *)MmUserProbeAddress;
        *v25 = *v25;
        v25[39] = v25[39];
        *(_QWORD *)a11 = *(_QWORD *)(AnimatedCursorFrame + 88);
        *(_QWORD *)(a11 + 8) = *(_QWORD *)(AnimatedCursorFrame + 96);
        *(_QWORD *)(a11 + 32) = *(_QWORD *)(AnimatedCursorFrame + 128);
        GetIconSize(AnimatedCursorFrame, a11 + 24, a11 + 28);
        *(_DWORD *)(a11 + 16) = *(_DWORD *)(AnimatedCursorFrame + 140);
        *(_DWORD *)(a11 + 20) = *(_DWORD *)(AnimatedCursorFrame + 144);
        LODWORD(v15) = 1;
      }
    }
    else
    {
      LODWORD(v15) = DrawIconEx(a1, a2, a3, SystemDpiCursorSize, a5, a6, a7, a8, a9);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v26);
  UserSessionSwitchLeaveCrit(v21, v20, v22, v23);
  return (int)v15;
}
