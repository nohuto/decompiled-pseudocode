/*
 * XREFs of NtUserTranslateAccelerator @ 0x1C00EC5A0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     xxxTranslateAccelerator @ 0x1C00EC6AC (xxxTranslateAccelerator.c)
 */

__int64 __fastcall NtUserTranslateAccelerator(__int64 a1, __int64 a2, __int128 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v19[3]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v20[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v21; // [rsp+58h] [rbp-40h]
  __int128 v22; // [rsp+68h] [rbp-30h]
  __int128 v23; // [rsp+78h] [rbp-20h]

  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (__int128 *)MmUserProbeAddress;
  v21 = *a3;
  v22 = a3[1];
  v23 = a3[2];
  v8 = ValidateHwnd(a1);
  v11 = 0;
  if ( v8 )
  {
    v6 = HMValidateHandle(a2, 8);
    if ( v6 )
    {
      v19[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v19;
      v19[1] = v8;
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v20[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v20;
      v20[1] = v6;
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v11 = xxxTranslateAccelerator((struct tagWND *)v8);
      ThreadUnlock1(v13, v12, v14);
      ThreadUnlock1(v16, v15, v17);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v9, v10);
  return v11;
}
