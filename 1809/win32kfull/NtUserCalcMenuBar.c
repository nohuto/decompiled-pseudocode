/*
 * XREFs of NtUserCalcMenuBar @ 0x1C00A6BF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxCalcMenuBar @ 0x1C00A6D14 (xxxCalcMenuBar.c)
 */

__int64 __fastcall NtUserCalcMenuBar(__int64 a1, int a2, int a3, int a4, ULONG64 a5)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  unsigned int v14; // ebx
  __int128 *v15; // rdx
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int128 v20; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v21[3]; // [rsp+48h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v13 = ValidateHwnd(a1);
  v14 = 0;
  if ( v13 )
  {
    v21[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v21;
    v21[1] = v13;
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    if ( a2 < 0 || a3 < 0 || a4 < 0 )
    {
      UserSetLastError(87LL, v9, v11, v12);
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
        v16 = *(_OWORD *)(*(_QWORD *)(v13 + 40) + 88LL);
      }
      v20 = v16;
      v14 = xxxCalcMenuBar(v13, a2, a3, a4, (__int64)&v20);
    }
    ThreadUnlock1(v18, v17);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v14;
}
