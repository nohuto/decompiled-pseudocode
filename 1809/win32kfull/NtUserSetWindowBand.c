/*
 * XREFs of NtUserSetWindowBand @ 0x1C0108D50
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0071C20 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0108ED4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
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
  struct tagWND *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // edi
  int v18; // ebx
  __int64 v20; // rcx
  __int64 v21; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+28h] [rbp-30h]
  _QWORD v23[4]; // [rsp+38h] [rbp-20h] BYREF
  struct tagWND *v24; // [rsp+78h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v11 = v6;
  if ( !v6 || (v8 = *(_QWORD *)(v6 + 40), v7 = (*(_WORD *)(v8 + 42) & 0x2FFFu) - 669, (v7 & 0xFFFFFFFD) == 0) )
  {
    v18 = 0;
    goto LABEL_11;
  }
  v21 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v21;
  v22 = v6;
  _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
  if ( (unsigned int)ValidateHWNDIA(a2, &v24) )
  {
    if ( GetProp(v11, (unsigned __int16)gatomBrokeredForeground, 1LL) )
    {
      v20 = 5LL;
    }
    else
    {
      v14 = v24;
      if ( (unsigned __int64)v24 < 0xFFFFFFFFFFFFFFFEuLL || a3 == 1 )
      {
        v17 = 0;
        if ( (unsigned __int64)v24 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
        {
          v23[0] = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = v23;
          v23[1] = v14;
          _InterlockedAdd((volatile signed __int32 *)v14 + 2, 1u);
          v14 = v24;
        }
        else
        {
          v17 = 1;
        }
        v18 = xxxSetWindowBand(v11, v14, a3, 1LL, v21, v22);
        if ( !v17 )
          ThreadUnlock1(v13, v12);
        goto LABEL_10;
      }
      v20 = 87LL;
    }
    v18 = 0;
    UserSetLastError(v20, (__int64)v14, v15, v16);
  }
  else
  {
    v18 = 0;
  }
LABEL_10:
  ThreadUnlock1(v13, v12);
LABEL_11:
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v18;
}
