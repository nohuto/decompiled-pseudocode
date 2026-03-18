/*
 * XREFs of NtUserRegisterEdgy @ 0x1C021B490
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsShellProcess @ 0x1C00B3148 (IsShellProcess.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C01E0CC4 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 *     EdgyUnregisterListener @ 0x1C01E1E10 (EdgyUnregisterListener.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int i; // edi
  __int128 *v13; // rcx
  ULONG64 v14; // rdx
  __int128 v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  int updated; // eax
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  __int128 v26; // [rsp+50h] [rbp-28h]

  v6 = 0;
  EnterCrit(0LL, 1LL);
  if ( !a1 )
  {
    v10 = 87LL;
LABEL_3:
    UserSetLastError(v10, v7, v8, v9);
    goto LABEL_28;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v10 = 5LL;
    goto LABEL_3;
  }
  for ( i = 0; i < a1; ++i )
  {
    v13 = (__int128 *)(a2 + 32LL * i);
    v14 = (ULONG64)(v13 + 2);
    if ( v13 + 2 < v13 || v14 > MmUserProbeAddress )
      v13 = (__int128 *)MmUserProbeAddress;
    v15 = v13[1];
    v25 = *v13;
    v26 = (unsigned __int64)v15;
    if ( a3 )
    {
      LOBYTE(v14) = 19;
      if ( !HMValidateHandle(v25, v14)
        || *((_QWORD *)&v25 + 1)
        && ((v19 = ValidateHwnd(*((_QWORD *)&v25 + 1)), (v21 = v19) == 0)
         || (v22 = *(_QWORD *)(v19 + 40), *(char *)(v22 + 19) < 0)
         || *(char *)(v22 + 20) < 0
         || *(_QWORD *)(*(_QWORD *)(v21 + 16) + 424LL) != PsGetCurrentProcessWin32Process(v20)
         || *(_DWORD *)(v21 + 244)) )
      {
        UserSetLastError(87LL, v16, v17, v18);
        goto LABEL_28;
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(Edgy **)(gptiCurrent + 456LL),
                  (struct tagDESKTOP *)v25,
                  v26,
                  *((__int64 *)&v25 + 1));
    }
    else
    {
      updated = EdgyUnregisterListener((__int64)&v25);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8LL, v7, v8, v9);
      goto LABEL_28;
    }
  }
  v6 = 1;
LABEL_28:
  UserSessionSwitchLeaveCrit(v11, v7, v8, v9);
  return v6;
}
