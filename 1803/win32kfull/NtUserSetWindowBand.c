/*
 * XREFs of NtUserSetWindowBand @ 0x1C00EECE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0034C84 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00EEE58 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 */

__int64 __fastcall NtUserSetWindowBand(__int64 a1, struct tagWND *a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct tagWND *v18; // r10
  int v19; // edi
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+28h] [rbp-30h]
  _QWORD v23[4]; // [rsp+38h] [rbp-20h] BYREF
  struct tagWND *v24; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  if ( !v6 || (v8 = *(_QWORD *)(v6 + 40), v7 = (*(_WORD *)(v8 + 42) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) == 0) )
  {
    v15 = 0;
    goto LABEL_19;
  }
  v21 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v21;
  v22 = v6;
  _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
  if ( (unsigned int)ValidateHWNDIA(a2, &v24) )
  {
    if ( RealGetProp(*(_QWORD *)(v11 + 120), (unsigned __int16)gatomBrokeredForeground, 1LL) )
    {
      v17 = 5LL;
LABEL_7:
      v15 = 0;
      UserSetLastError(v17, v16);
      goto LABEL_17;
    }
    v18 = v24;
    if ( (unsigned __int64)v24 >= 0xFFFFFFFFFFFFFFFEuLL )
    {
      if ( a3 != 1 )
      {
        v17 = 87LL;
        goto LABEL_7;
      }
      if ( v24 == (struct tagWND *)-2LL )
        goto LABEL_14;
    }
    if ( (unsigned __int64)v24 - 2 > 0xFFFFFFFFFFFFFFFCuLL )
    {
LABEL_14:
      v19 = 0;
    }
    else
    {
      v19 = 1;
      v23[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v23;
      v23[1] = v18;
      _InterlockedAdd((volatile signed __int32 *)v18 + 2, 1u);
      v18 = v24;
    }
    v15 = xxxSetWindowBand(v11, v18, a3, 1LL, v21, v22);
    if ( v19 )
      ThreadUnlock1(v13, v12, v14);
    goto LABEL_17;
  }
  v15 = 0;
LABEL_17:
  ThreadUnlock1(v13, v12, v14);
LABEL_19:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v15;
}
