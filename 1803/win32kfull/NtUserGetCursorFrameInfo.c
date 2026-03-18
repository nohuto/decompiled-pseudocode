/*
 * XREFs of NtUserGetCursorFrameInfo @ 0x1C0130310
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     FindSystemDpiCursorSize @ 0x1C00160FC (FindSystemDpiCursorSize.c)
 *     GetAnimatedCursorFrame @ 0x1C001C38C (GetAnimatedCursorFrame.c)
 */

__int64 __fastcall NtUserGetCursorFrameInfo(__int64 a1, int a2, _DWORD *a3, int *a4)
{
  __int64 v6; // r14
  int v8; // esi
  __int64 v9; // rax
  _DWORD *v10; // rdx
  ULONG64 v11; // rcx
  __int64 AnimatedCursorFrame; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 SystemDpiCursorSize; // rdi
  _DWORD *v16; // rcx
  int v17; // eax

  v6 = a2;
  v8 = 1;
  EnterSharedCrit(0LL, 1LL);
  v9 = HMValidateHandle(a1, 3);
  v14 = 0LL;
  if ( v9 )
  {
    SystemDpiCursorSize = FindSystemDpiCursorSize(v9);
    v16 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v16 = (_DWORD *)MmUserProbeAddress;
    *v16 = *v16;
    v11 = MmUserProbeAddress;
    v10 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v10 = (_DWORD *)MmUserProbeAddress;
    *v10 = *v10;
    if ( (*(_DWORD *)(SystemDpiCursorSize + 80) & 8) != 0 )
    {
      AnimatedCursorFrame = GetAnimatedCursorFrame(SystemDpiCursorSize, v6);
      if ( !AnimatedCursorFrame )
        goto LABEL_10;
      v8 = *(_DWORD *)(SystemDpiCursorSize + 92);
      v11 = *(_QWORD *)(SystemDpiCursorSize + 112);
      v17 = *(_DWORD *)(v11 + 4 * v6);
      SystemDpiCursorSize = AnimatedCursorFrame;
    }
    else
    {
      v17 = 0;
    }
    if ( SystemDpiCursorSize )
    {
      v14 = *(_QWORD *)SystemDpiCursorSize;
      *a3 = v17;
      *a4 = v8;
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v11, v10, AnimatedCursorFrame, v13);
  return v14;
}
