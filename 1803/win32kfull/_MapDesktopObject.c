/*
 * XREFs of _MapDesktopObject @ 0x1C0012750
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C0011D20 (GetDesktopView.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MapDesktopObject(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *DesktopView; // rax

  LOBYTE(a2) = -1;
  gbValidateHandleForIL = 0;
  v2 = (_DWORD *)HMValidateHandle(a1, a2);
  v4 = v2;
  if ( v2
    && (v5 = gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v2,
        (*(_BYTE *)(v5 + 25) & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process, *((_QWORD *)v4 + 3))) != 0LL) )
  {
    return *(_QWORD *)v5 + DesktopView[2];
  }
  else
  {
    return 0LL;
  }
}
