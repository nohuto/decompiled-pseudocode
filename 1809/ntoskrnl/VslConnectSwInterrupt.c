/*
 * XREFs of VslConnectSwInterrupt @ 0x1409CD3E8
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x1409CB89C (PipInitializeCoreDriversAndElam.c)
 *     KiConnectSwInterrupt @ 0x1409F7610 (KiConnectSwInterrupt.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x14012A0E4 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlIsCoreSharingPossible @ 0x140271088 (HvlIsCoreSharingPossible.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslConnectSwInterrupt(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  int v5; // eax
  __int64 Prcb; // rax
  int v7; // edx
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG v9; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 *v10[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v11; // [rsp+48h] [rbp-B8h]
  _QWORD v12[10]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[14]; // [rsp+A0h] [rbp-60h] BYREF

  if ( !HvlQueryVsmConnection(0LL) )
    return 3224698910LL;
  if ( BugCheckParameter3 > 0x1FA000 )
    KeBugCheckEx(0x13Du, 0xFFFFFFFFuLL, BugCheckParameter2, BugCheckParameter3, 0x1FA000uLL);
  if ( BugCheckParameter2 )
  {
    v5 = VslpLockPagesForTransfer((__int64)v12, BugCheckParameter2, BugCheckParameter3, 0, 0);
    if ( v5 < 0 )
      KeBugCheckEx(0x13Du, 0xFFFFFFFEuLL, BugCheckParameter2, BugCheckParameter3, v5);
  }
  else
  {
    memset(v12, 0, 0x48uLL);
  }
  memset(v13, 0, 0x68uLL);
  v13[1] = v12[0];
  v13[2] = v12[7];
  v10[1] = (unsigned __int16 *)qword_1405426A8[0];
  v10[0] = (unsigned __int16 *)KeActiveProcessors;
  v11 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v10) )
  {
    Prcb = KeGetPrcb(v9);
    if ( ((*(_QWORD *)(Prcb + 24920) - 1LL) & *(_QWORD *)(Prcb + 24920)) != 0 )
    {
      LODWORD(v13[3]) |= 1u;
      break;
    }
  }
  if ( HvlIsCoreSharingPossible() )
    LODWORD(v13[3]) = v7 | 1;
  BugCheckParameter4 = VslpEnterIumSecureMode(2u, 46LL, 0, (__int64)v13);
  if ( BugCheckParameter2 )
    VslpUnlockPagesForTransfer((__int64)v12);
  if ( (BugCheckParameter4 & 0x80000000) != 0LL )
    KeBugCheckEx(0x13Du, 0xFFFFFFFDuLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  return (unsigned int)BugCheckParameter4;
}
