/*
 * XREFs of NtUserSetWindowRgnEx @ 0x1C0235C20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxSetWindowRgn @ 0x1C011181C (xxxSetWindowRgn.c)
 *     MirrorRegion @ 0x1C01118F8 (MirrorRegion.c)
 *     SelectWindowRgn @ 0x1C0114004 (SelectWindowRgn.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowRgnEx(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+28h] [rbp-20h]
  __int64 v27; // [rsp+30h] [rbp-18h]

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  v9 = v7;
  if ( !v7 || (v8 = (*(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) & 0x3FFFu) - 669, (v8 & 0xFFFFFFFD) == 0) )
  {
    v6 = 0;
    goto LABEL_20;
  }
  v25 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v25;
  v26 = v7;
  HMLockObject(v7);
  CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( (a3 & 4) != 0 )
    {
      if ( a2 )
      {
        v21 = UserValidateCopyRgn(a2);
        v22 = v21;
        if ( !v21
          || (v23 = *(_QWORD *)(v9 + 40), (*(_BYTE *)(v23 + 26) & 0x40) != 0)
          && v21 > 2
          && (!(unsigned int)GreOffsetRgn(v21, (unsigned int)-*(_DWORD *)(v23 + 88))
           || !(unsigned int)MirrorRegion(v9, v22, 0)
           || !(unsigned int)GreOffsetRgn(v22, *(unsigned int *)(*(_QWORD *)(v9 + 40) + 88LL))) )
        {
          v6 = 0;
          goto LABEL_18;
        }
      }
      else
      {
        v22 = 1LL;
      }
      SelectWindowRgn((struct tagWND *)v9, (HRGN)v22, 0);
      goto LABEL_18;
    }
    v6 = xxxSetWindowRgn((_QWORD *)v9, a2, a3 & 2);
  }
  else
  {
    v6 = 0;
    UserSetLastError(5LL, v15, v16, v17);
  }
LABEL_18:
  ThreadUnlock1(v19, v18, v20);
LABEL_20:
  UserSessionSwitchLeaveCrit(v8);
  return v6;
}
