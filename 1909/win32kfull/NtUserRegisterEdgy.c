/*
 * XREFs of NtUserRegisterEdgy @ 0x1C0232F60
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0021208 (IsShellProcess.c)
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C01F6CD0 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 *     EdgyUnregisterListener @ 0x1C01F7E34 (EdgyUnregisterListener.c)
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
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  int updated; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int128 v26; // [rsp+30h] [rbp-68h] BYREF
  __int128 v27; // [rsp+40h] [rbp-58h]
  __int128 v28; // [rsp+60h] [rbp-38h]
  __int128 v29; // [rsp+70h] [rbp-28h]

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
    if ( v13 + 2 < v13 || (unsigned __int64)(v13 + 2) > MmUserProbeAddress )
      v13 = (__int128 *)MmUserProbeAddress;
    v28 = *v13;
    v29 = v13[1];
    v26 = v28;
    v27 = (unsigned __int64)v29;
    if ( a3 )
    {
      if ( !HMValidateHandle(v26, 19)
        || *((_QWORD *)&v26 + 1)
        && ((v17 = ValidateHwnd(*((_QWORD *)&v26 + 1)), (v19 = v17) == 0)
         || (v20 = *(_QWORD *)(v17 + 40), *(char *)(v20 + 19) < 0)
         || *(char *)(v20 + 20) < 0
         || *(_QWORD *)(*(_QWORD *)(v19 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v18, v14)
         || *(_DWORD *)(v19 + 260)) )
      {
        UserSetLastError(87LL, v14, v15, v16);
        goto LABEL_28;
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(Edgy **)(gptiCurrent + 448LL),
                  (struct tagDESKTOP *)v26,
                  v27,
                  *((__int64 *)&v26 + 1));
    }
    else
    {
      updated = EdgyUnregisterListener((__int64)&v26);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8LL, v22, v23, v24);
      goto LABEL_28;
    }
  }
  v6 = 1;
LABEL_28:
  UserSessionSwitchLeaveCrit(v11);
  return v6;
}
