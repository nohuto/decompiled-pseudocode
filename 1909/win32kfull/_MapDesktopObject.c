/*
 * XREFs of _MapDesktopObject @ 0x1C0021FD0
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C0021DE0 (GetDesktopView.c)
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MapDesktopObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *DesktopView; // rax

  LOBYTE(a2) = -1;
  gbValidateHandleForIL = 0;
  v2 = HMValidateHandle(a1, a2);
  v3 = v2;
  if ( v2
    && (v6 = _HMPheFromObject(v2), (*(_BYTE *)(v6 + 25) & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5, v4),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process, *(_QWORD *)(v3 + 24))) != 0LL) )
  {
    return *(_QWORD *)v6 + DesktopView[2];
  }
  else
  {
    return 0LL;
  }
}
