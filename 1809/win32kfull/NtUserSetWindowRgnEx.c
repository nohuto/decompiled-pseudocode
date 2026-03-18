/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1C021D9E0
 * Callers:
 *     <none>
 * Callees:
 *     SelectNewFrameRgn @ 0x1C000B700 (SelectNewFrameRgn.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxSetWindowRgn @ 0x1C00C782C (xxxSetWindowRgn.c)
 *     MirrorRegion @ 0x1C00C7908 (MirrorRegion.c)
 *     SelectWindowRgn @ 0x1C010A774 (SelectWindowRgn.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v5; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  _QWORD v23[5]; // [rsp+20h] [rbp-28h] BYREF

  v5 = 0LL;
  v7 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  v13 = v8;
  if ( v8 && (v10 = *(_QWORD *)(v8 + 40), v9 = (*(_WORD *)(v10 + 42) & 0x2FFFu) - 669, (v9 & 0xFFFFFFFD) != 0) )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v23;
    v23[1] = v8;
    _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
    CurrentProcess = PsGetCurrentProcess(gptiCurrent, gptiCurrent, v11, v12);
    if ( (unsigned int)IsProcessDwm(CurrentProcess) )
    {
      if ( (a3 & 5) != 0 )
      {
        if ( !a2
          || (v20 = UserValidateCopyRgn(a2), (v5 = v20) != 0)
          && ((v21 = *(_QWORD *)(v13 + 40), (*(_BYTE *)(v21 + 26) & 0x40) == 0)
           || v20 <= 2
           || (unsigned int)GreOffsetRgn(
                              v20,
                              (unsigned int)-*(_DWORD *)(v21 + 88),
                              (unsigned int)-*(_DWORD *)(v21 + 92))
           && (unsigned int)MirrorRegion(v13, v5, 0)
           && (unsigned int)GreOffsetRgn(
                              v5,
                              *(unsigned int *)(*(_QWORD *)(v13 + 40) + 88LL),
                              *(unsigned int *)(*(_QWORD *)(v13 + 40) + 92LL))) )
        {
          if ( (a3 & 1) != 0 )
          {
            SelectNewFrameRgn(v13, v5);
          }
          else
          {
            if ( !a2 )
              v5 = 1LL;
            SelectWindowRgn((struct tagWND *)v13, (HRGN)v5, 0);
          }
        }
        else
        {
          v7 = 0;
        }
      }
      else
      {
        v7 = xxxSetWindowRgn((_QWORD *)v13, a2, a3 & 2);
      }
    }
    else
    {
      v7 = 0;
      UserSetLastError(5LL, v15, v16, v17);
    }
    ThreadUnlock1(v19, v18);
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v7;
}
