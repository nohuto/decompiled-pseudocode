/*
 * XREFs of Register_WriteSecureMmio @ 0x1C00606CC
 * Callers:
 *     Register_BiosHandoff @ 0x1C001C5AC (Register_BiosHandoff.c)
 *     XilRegister_WriteUlong @ 0x1C001D458 (XilRegister_WriteUlong.c)
 *     XilRegister_WriteUlong64 @ 0x1C001D494 (XilRegister_WriteUlong64.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memmove @ 0x1C0006C80 (memmove.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1C0012DEC (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_WriteSecureMmio(__int64 a1, __int64 a2, int a3, const void *a4)
{
  __int64 v8; // rbp
  size_t v9; // rbx
  __int64 result; // rax
  int v11; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v12[8]; // [rsp+40h] [rbp-88h] BYREF

  if ( KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\register.c",
      2509);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL);
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        v9 = 2LL;
        break;
      case 2:
        v9 = 4LL;
        break;
      case 3:
        v9 = 8LL;
        break;
      default:
        v9 = 0LL;
        break;
    }
  }
  else
  {
    v9 = 1LL;
  }
  memset(v12, 0, sizeof(v12));
  v12[3] = *(_QWORD *)(a1 + 120);
  LODWORD(v12[4]) = 11;
  v12[5] = a2;
  LODWORD(v12[6]) = a3;
  memmove(&v12[7], a4, v9);
  result = SecureChannel_SendRequestSynchronously(v8, (unsigned int)v12, 64, (unsigned int)&v11, 4);
  if ( (int)result >= 0 )
  {
    result = (unsigned int)v11;
    if ( v11 < 0 )
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
               2u,
               6u,
               0x4Cu,
               (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
               v11);
  }
  return result;
}
