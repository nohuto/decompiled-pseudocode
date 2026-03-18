/*
 * XREFs of _MapDesktopObject @ 0x1C00B1DC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     GetDesktopView @ 0x1C00B2670 (GetDesktopView.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MapDesktopObject(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax

  LOBYTE(a2) = -1;
  gbValidateHandleForIL = 0;
  v2 = (_DWORD *)HMValidateHandle(a1, a2);
  v3 = v2;
  if ( v2
    && (v4 = *((_QWORD *)&gSharedInfo + 1) + *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*v2,
        (*(_BYTE *)(v4 + 25) & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(gSharedInfo),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process, *((_QWORD *)v3 + 3))) != 0) )
  {
    return *(_QWORD *)v4 + *(_QWORD *)(DesktopView + 16);
  }
  else
  {
    return 0LL;
  }
}
