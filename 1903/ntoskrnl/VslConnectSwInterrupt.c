/*
 * XREFs of VslConnectSwInterrupt @ 0x140A118DC
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140A0FDEC (PipInitializeCoreDriversAndElam.c)
 *     KiConnectSwInterrupt @ 0x140A3BE50 (KiConnectSwInterrupt.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A80C (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlIsCoreSharingPossible @ 0x140284BF8 (HvlIsCoreSharingPossible.c)
 *     VslpLockPagesForTransfer @ 0x140290D8C (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290F68 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslConnectSwInterrupt(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v5; // eax
  __int64 Prcb; // rax
  int v7; // edx
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v10[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v11; // [rsp+48h] [rbp-B8h]
  int v12; // [rsp+4Ah] [rbp-B6h]
  __int16 v13; // [rsp+4Eh] [rbp-B2h]
  _QWORD v14[10]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v15[14]; // [rsp+A0h] [rbp-60h] BYREF

  v12 = 0;
  v13 = 0;
  memset(v15, 0, 0x68uLL);
  memset(v14, 0, 0x48uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( BugCheckParameter3 > 0x1FA000 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFFuLL, BugCheckParameter2, BugCheckParameter3, 0x1FA000uLL);
  if ( BugCheckParameter2 )
  {
    v5 = VslpLockPagesForTransfer((__int64)v14, BugCheckParameter2, BugCheckParameter3, 0, 0);
    if ( v5 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, BugCheckParameter2, BugCheckParameter3, v5);
  }
  v15[1] = v14[0];
  v15[2] = v14[7];
  v10[1] = (unsigned __int16 *)qword_140572748[0];
  v10[0] = (unsigned __int16 *)KeActiveProcessors;
  v11 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v10) )
  {
    Prcb = KeGetPrcb(v9);
    if ( ((*(_QWORD *)(Prcb + 24920) - 1LL) & *(_QWORD *)(Prcb + 24920)) != 0 )
    {
      LODWORD(v15[3]) |= 1u;
      break;
    }
  }
  if ( HvlIsCoreSharingPossible() )
    LODWORD(v15[3]) = v7 | 1;
  BugCheckParameter4 = VslpEnterIumSecureMode(2, 50LL, 0LL, (__int64)v15);
  if ( BugCheckParameter2 )
    VslpUnlockPagesForTransfer((__int64)v14);
  if ( (BugCheckParameter4 & 0x80000000) != 0LL )
    KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  return (unsigned int)BugCheckParameter4;
}
