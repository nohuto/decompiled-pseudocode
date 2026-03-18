/*
 * XREFs of NtUserRegisterEdgy @ 0x1C01F3D60
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C0012718 (IsShellProcess.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z @ 0x1C01BE118 (-_AddOrUpdateListener@Edgy@@YAHPEAUtagDESKTOP@@PEAXW4tagEDGY_LOCATION@@PEAUHWND__@@@Z.c)
 *     EdgyUnregisterListener @ 0x1C01BF244 (EdgyUnregisterListener.c)
 */

__int64 __fastcall NtUserRegisterEdgy(unsigned int a1, __int64 a2, int a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int i; // edi
  __int128 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  int updated; // eax
  __int128 v21; // [rsp+30h] [rbp-68h] BYREF
  __int128 v22; // [rsp+40h] [rbp-58h]
  __int128 v23; // [rsp+60h] [rbp-38h]
  __int128 v24; // [rsp+70h] [rbp-28h]

  v6 = 0;
  EnterCrit(0LL, 1LL);
  if ( !a1 )
  {
    v8 = 87LL;
LABEL_3:
    UserSetLastError(v8, v7);
    goto LABEL_28;
  }
  if ( !(unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL)) )
  {
    v8 = 5LL;
    goto LABEL_3;
  }
  for ( i = 0; i < a1; ++i )
  {
    v13 = (__int128 *)(a2 + 32LL * i);
    if ( v13 + 2 < v13 || (unsigned __int64)(v13 + 2) > MmUserProbeAddress )
      v13 = (__int128 *)MmUserProbeAddress;
    v23 = *v13;
    v24 = v13[1];
    v21 = v23;
    v22 = (unsigned __int64)v24;
    if ( a3 )
    {
      if ( !HMValidateHandle(v21, 19)
        || *((_QWORD *)&v21 + 1)
        && ((v15 = ValidateHwnd(*((_QWORD *)&v21 + 1)), (v17 = v15) == 0)
         || (v18 = *(_QWORD *)(v15 + 40), *(char *)(v18 + 19) < 0)
         || *(char *)(v18 + 20) < 0
         || *(_QWORD *)(*(_QWORD *)(v17 + 16) + 416LL) != PsGetCurrentProcessWin32Process(v16)
         || *(_DWORD *)(v17 + 256)) )
      {
        UserSetLastError(87LL, v14);
        goto LABEL_28;
      }
      updated = Edgy::_AddOrUpdateListener(
                  *(Edgy **)(gptiCurrent + 448LL),
                  (struct tagDESKTOP *)v21,
                  v22,
                  *((__int64 *)&v21 + 1));
    }
    else
    {
      updated = EdgyUnregisterListener((__int64)&v21);
    }
    if ( a3 && !updated )
    {
      UserSetLastError(8LL, v7);
      goto LABEL_28;
    }
  }
  v6 = 1;
LABEL_28:
  UserSessionSwitchLeaveCrit(v9, v7, v10, v11);
  return v6;
}
