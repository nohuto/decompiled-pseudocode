/*
 * XREFs of NtUserChangeClipboardChain @ 0x1C0112FB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxChangeClipboardChain @ 0x1C01130F0 (xxxChangeClipboardChain.c)
 */

__int64 __fastcall NtUserChangeClipboardChain(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // [rsp+20h] [rbp-30h] BYREF
  __int64 v17; // [rsp+28h] [rbp-28h]
  __int64 v18; // [rsp+30h] [rbp-20h]
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h]
  __int64 v21; // [rsp+48h] [rbp-8h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v4;
  if ( v4 )
  {
    v16 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v16;
    v17 = v4;
    HMLockObject(v4);
    if ( a2 )
    {
      v8 = ValidateHwnd(a2);
      if ( !v8 )
      {
LABEL_7:
        ThreadUnlock1(v13, v12, v14);
        goto LABEL_8;
      }
    }
    else
    {
      v8 = 0LL;
    }
    v19 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v19;
    v20 = v8;
    if ( v8 )
      HMLockObject(v8);
    v6 = xxxChangeClipboardChain(v7, v8);
    ThreadUnlock1(v10, v9, v11);
    goto LABEL_7;
  }
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
