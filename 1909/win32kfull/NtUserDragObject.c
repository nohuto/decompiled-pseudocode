/*
 * XREFs of NtUserDragObject @ 0x1C022A820
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     xxxDragObject @ 0x1C02472D4 (xxxDragObject.c)
 */

__int64 __fastcall NtUserDragObject(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // [rsp+30h] [rbp-50h] BYREF
  __int64 v26; // [rsp+38h] [rbp-48h]
  __int64 v27; // [rsp+40h] [rbp-40h]
  __int64 v28; // [rsp+48h] [rbp-38h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h]
  __int64 v30; // [rsp+58h] [rbp-28h]
  __int64 v31; // [rsp+60h] [rbp-20h] BYREF
  __int64 v32; // [rsp+68h] [rbp-18h]
  __int64 v33; // [rsp+70h] [rbp-10h]

  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  v11 = 0;
  v12 = v9;
  if ( v9 )
  {
    v25 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v25;
    v26 = v9;
    HMLockObject(v9);
    if ( a2 )
    {
      v15 = ValidateHwnd(a2);
      if ( !v15 )
      {
LABEL_15:
        ThreadUnlock1(v14, v13, v16);
        goto LABEL_16;
      }
    }
    else
    {
      v15 = 0LL;
    }
    if ( a5 )
    {
      v17 = HMValidateHandle(a5, 3);
      if ( !v17 )
        goto LABEL_15;
    }
    else
    {
      v17 = 0LL;
    }
    v28 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v28;
    v29 = v15;
    if ( v15 )
      HMLockObject(v15);
    v31 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v31;
    v32 = v17;
    if ( v17 )
      HMLockObject(v17);
    v11 = xxxDragObject(v12, v15, a3, a4, v17);
    ThreadUnlock1(v19, v18, v20);
    ThreadUnlock1(v22, v21, v23);
    goto LABEL_15;
  }
LABEL_16:
  UserSessionSwitchLeaveCrit(v10);
  return v11;
}
