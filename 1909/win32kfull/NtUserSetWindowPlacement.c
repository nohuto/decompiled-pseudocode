/*
 * XREFs of NtUserSetWindowPlacement @ 0x1C0012D80
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetWindowPlacement @ 0x1C0012ED8 (xxxSetWindowPlacement.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserSetWindowPlacement(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  int v7; // ebx
  __int64 v9; // [rsp+38h] [rbp-50h] BYREF
  __int64 v10; // [rsp+40h] [rbp-48h]
  __int64 v11; // [rsp+48h] [rbp-40h]
  _OWORD v12[3]; // [rsp+50h] [rbp-38h] BYREF

  memset(v12, 0, 0x2CuLL);
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = (struct tagWND *)v4;
  v7 = 0;
  if ( v4 )
  {
    v5 = (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x3FFFu) - 669;
    if ( (v5 & 0xFFFFFFFD) != 0 )
    {
      v9 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v9;
      v10 = v4;
      HMLockObject(v4);
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      v12[0] = *(_OWORD *)a2;
      v12[1] = *(_OWORD *)(a2 + 16);
      *(_QWORD *)&v12[2] = *(_QWORD *)(a2 + 32);
      DWORD2(v12[2]) = *(_DWORD *)(a2 + 40);
      if ( LODWORD(v12[0]) == 44 || *(_WORD *)(gptiCurrent + 624LL) < 0x400u )
        v7 = xxxSetWindowPlacement(v6);
      else
        UserSetLastError(87LL);
      ThreadUnlock1();
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
