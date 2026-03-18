/*
 * XREFs of _MapDesktopObject @ 0x1C0019980
 * Callers:
 *     <none>
 * Callees:
 *     GetDesktopView @ 0x1C0019FC0 (GetDesktopView.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall MapDesktopObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax

  LOBYTE(a2) = -1;
  gbValidateHandleForIL = 0;
  v2 = HMValidateHandle(a1, a2);
  if ( v2
    && (v5 = _HMPheFromObject(v2), (*(_BYTE *)(v5 + 25) & 0x40) == 0)
    && (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4, v3),
        (DesktopView = GetDesktopView(CurrentProcessWin32Process)) != 0) )
  {
    return *(_QWORD *)v5 + *(_QWORD *)(DesktopView + 16);
  }
  else
  {
    return 0LL;
  }
}
