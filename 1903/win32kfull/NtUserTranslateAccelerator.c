/*
 * XREFs of NtUserTranslateAccelerator @ 0x1C01107E0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     xxxTranslateAccelerator @ 0x1C0110944 (xxxTranslateAccelerator.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, unsigned __int64 a2, __int128 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  ULONG_PTR v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v20; // [rsp+28h] [rbp-70h] BYREF
  ULONG_PTR v21; // [rsp+30h] [rbp-68h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-58h] BYREF
  __int64 v24; // [rsp+48h] [rbp-50h]
  __int64 v25; // [rsp+50h] [rbp-48h]
  __int128 v26; // [rsp+58h] [rbp-40h]
  __int128 v27; // [rsp+68h] [rbp-30h]
  __int128 v28; // [rsp+78h] [rbp-20h]

  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int128 *)MmUserProbeAddress;
  v26 = *a3;
  v27 = a3[1];
  v28 = a3[2];
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    LOBYTE(v6) = 8;
    v12 = HMValidateHandle(a2, v6, v9, v10);
    if ( v12 )
    {
      v20 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v20;
      v21 = v8;
      HMLockObject(v8);
      v23 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v23;
      v24 = v12;
      HMLockObject(v12);
      v11 = xxxTranslateAccelerator(v8);
      ThreadUnlock1(v14, v13, v15);
      ThreadUnlock1(v17, v16, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v7);
  return v11;
}
