/*
 * XREFs of NtUserDragObject @ 0x1C022AE40
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     xxxDragObject @ 0x1C0247A14 (xxxDragObject.c)
 */

__int64 __fastcall NtUserDragObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // [rsp+30h] [rbp-50h] BYREF
  __int64 v27; // [rsp+38h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-40h]
  __int64 v29; // [rsp+48h] [rbp-38h] BYREF
  __int64 v30; // [rsp+50h] [rbp-30h]
  __int64 v31; // [rsp+58h] [rbp-28h]
  __int64 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h]
  __int64 v34; // [rsp+70h] [rbp-10h]

  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v9;
  if ( v9 )
  {
    v26 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v26;
    v27 = v9;
    HMLockObject(v9);
    if ( a2 )
    {
      v17 = ValidateHwnd(a2);
      if ( !v17 )
      {
LABEL_15:
        ThreadUnlock1(v16, v13, v14);
        goto LABEL_16;
      }
    }
    else
    {
      v17 = 0LL;
    }
    if ( a5 )
    {
      LOBYTE(v13) = 3;
      v18 = HMValidateHandle(a5, v13, v14, v15);
      if ( !v18 )
        goto LABEL_15;
    }
    else
    {
      v18 = 0LL;
    }
    v29 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v29;
    v30 = v17;
    if ( v17 )
      HMLockObject(v17);
    v32 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v32;
    v33 = v18;
    if ( v18 )
      HMLockObject(v18);
    v11 = xxxDragObject(v12, v17, a3, a4, v18);
    ThreadUnlock1(v20, v19, v21);
    ThreadUnlock1(v23, v22, v24);
    goto LABEL_15;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
