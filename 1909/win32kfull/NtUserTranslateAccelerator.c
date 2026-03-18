/*
 * XREFs of NtUserTranslateAccelerator @ 0x1C00EB720
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     xxxTranslateAccelerator @ 0x1C00EB884 (xxxTranslateAccelerator.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, unsigned __int64 a2, __int128 *a3)
{
  __int64 v6; // rcx
  ULONG_PTR v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+28h] [rbp-70h] BYREF
  ULONG_PTR v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h]
  __int64 v22; // [rsp+50h] [rbp-48h]
  __int128 v23; // [rsp+58h] [rbp-40h]
  __int128 v24; // [rsp+68h] [rbp-30h]
  __int128 v25; // [rsp+78h] [rbp-20h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int128 *)MmUserProbeAddress;
  v23 = *a3;
  v24 = a3[1];
  v25 = a3[2];
  v7 = ValidateHwnd(a1);
  v8 = 0;
  if ( v7 )
  {
    v9 = HMValidateHandle(a2, 8);
    if ( v9 )
    {
      v17 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v17;
      v18 = v7;
      HMLockObject(v7);
      v20 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v20;
      v21 = v9;
      HMLockObject(v9);
      v8 = xxxTranslateAccelerator(v7);
      ThreadUnlock1(v11, v10, v12);
      ThreadUnlock1(v14, v13, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
