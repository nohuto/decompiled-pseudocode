/*
 * XREFs of NtUserRegisterEdgy @ 0x1C0233580
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C001ACA8 (IsShellProcess.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C01F6F80 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 *     EdgyUnregisterListener @ 0x1C01F80E4 (EdgyUnregisterListener.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  int updated; // eax
  __int64 v23; // rdx
  __int128 v25; // [rsp+30h] [rbp-68h] BYREF
  __int128 v26; // [rsp+40h] [rbp-58h]
  __int128 v27; // [rsp+60h] [rbp-38h]
  __int128 v28; // [rsp+70h] [rbp-28h]

  v6 = 0;
  EnterCrit(0LL, 1LL);
  if ( !a1 )
  {
    v10 = 87LL;
LABEL_3:
    UserSetLastError(v10, v7, v8, v9);
    goto LABEL_28;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL)) )
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
    v27 = *v13;
    v28 = v13[1];
    v25 = v27;
    v26 = (unsigned __int64)v28;
    if ( a3 )
    {
      LOBYTE(v14) = 19;
      if ( !HMValidateHandle(v25, v14, v8, v9)
        || *((_QWORD *)&v25 + 1)
        && ((v18 = ValidateHwnd(*((_QWORD *)&v25 + 1)), (v20 = v18) == 0)
         || (v21 = *(_QWORD *)(v18 + 40), *(char *)(v21 + 19) < 0)
         || *(char *)(v21 + 20) < 0
         || *(_QWORD *)(*(_QWORD *)(v20 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v19, v15)
         || *(_DWORD *)(v20 + 260)) )
      {
        UserSetLastError(87LL, v15, v16, v17);
        goto LABEL_28;
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(Edgy **)(gptiCurrent + 448LL),
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
      UserSetLastError(8LL, v23, v8, v9);
      goto LABEL_28;
    }
  }
  v6 = 1;
LABEL_28:
  UserSessionSwitchLeaveCrit(v11);
  return v6;
}
