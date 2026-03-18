/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C0122960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxSetWindowPlacement @ 0x1C0122AB8 (xxxSetWindowPlacement.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // [rsp+38h] [rbp-50h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  __int64 v17; // [rsp+48h] [rbp-40h]
  _OWORD v18[3]; // [rsp+50h] [rbp-38h] BYREF

  memset(v18, 0, 0x2CuLL);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = (struct tagWND *)v4;
  v7 = 0;
  if ( v4 )
  {
    v5 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v15 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v15;
      v16 = v4;
      HMLockObject(v4);
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v18[0] = *(_OWORD *)a2;
      v18[1] = *(_OWORD *)(a2 + 16);
      *(_QWORD *)&v18[2] = *(_QWORD *)(a2 + 32);
      DWORD2(v18[2]) = *(_DWORD *)(a2 + 40);
      if ( LODWORD(v18[0]) == 44 || *(_WORD *)(gptiCurrent + 624LL) < 0x400u )
        v7 = xxxSetWindowPlacement(v6);
      else
        UserSetLastError(87LL, v8, v9, v10);
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
