/*
 * XREFs of Register_MapSecureMmio @ 0x1C005F8C8
 * Callers:
 *     Register_PrepareHardware @ 0x1C006014C (Register_PrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002030 (__security_check_cookie.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0063174 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_MapSecureMmio(_QWORD *a1)
{
  __int64 v2; // rbx
  int v3; // ebx
  int v5; // [rsp+28h] [rbp-50h]
  int v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[6]; // [rsp+38h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1[1] + 112LL);
  memset(v7, 0, sizeof(v7));
  v7[3] = a1[15];
  v7[5] = a1[3];
  LODWORD(v7[4]) = 8;
  v3 = SecureChannel_SendRequestSynchronously(v2, (unsigned int)v7, 48, (unsigned int)&v6, 4);
  if ( v3 >= 0 )
  {
    v3 = v6;
    if ( v6 < 0 )
    {
      v5 = v6;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        2u,
        6u,
        0x49u,
        (__int64)&WPP_292538a6e9223cc5bca970ef2a3b6db4_Traceguids,
        v5);
    }
  }
  return (unsigned int)v3;
}
