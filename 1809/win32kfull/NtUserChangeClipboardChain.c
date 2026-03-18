/*
 * XREFs of NtUserChangeClipboardChain @ 0x1C0130140
 * Callers:
 *     <none>
 * Callees:
 *     xxxChangeClipboardChain @ 0x1C0130244 (xxxChangeClipboardChain.c)
 */

__int64 __fastcall NtUserChangeClipboardChain(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0;
  v10 = v4;
  if ( v4 )
  {
    v16[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v16;
    v16[1] = v4;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    if ( a2 )
    {
      v11 = ValidateHwnd(a2);
      if ( !v11 )
      {
LABEL_7:
        ThreadUnlock1(v14, v11);
        goto LABEL_8;
      }
    }
    else
    {
      v11 = 0LL;
    }
    v17[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v17;
    v17[1] = v11;
    if ( v11 )
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
    v9 = xxxChangeClipboardChain(v10);
    ThreadUnlock1(v13, v12);
    goto LABEL_7;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
