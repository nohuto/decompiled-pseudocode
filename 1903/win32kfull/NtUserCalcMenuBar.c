/*
 * XREFs of NtUserCalcMenuBar @ 0x1C00FBEC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxCalcMenuBar @ 0x1C00FC000 (xxxCalcMenuBar.c)
 */

__int64 __fastcall NtUserCalcMenuBar(__int64 a1, int a2, int a3, int a4, ULONG64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int128 *v15; // rdx
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int128 v21; // [rsp+38h] [rbp-30h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-18h]
  __int64 v24; // [rsp+58h] [rbp-10h]

  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  v11 = 0;
  if ( v10 )
  {
    v22 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v22;
    v23 = v10;
    HMLockObject(v10);
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError(87LL, v12, v13, v14);
    }
    else
    {
      v15 = (__int128 *)a5;
      if ( a5 )
      {
        if ( a5 >= MmUserProbeAddress )
          v15 = (__int128 *)MmUserProbeAddress;
        v16 = *v15;
      }
      else
      {
        v16 = *(_OWORD *)(*(_QWORD *)(v10 + 40) + 88LL);
      }
      v21 = v16;
      v11 = xxxCalcMenuBar(v10, a2, a3, a4, (__int64)&v21);
    }
    ThreadUnlock1(v18, v17, v19);
  }
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
