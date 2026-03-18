/*
 * XREFs of Register_MapSecureMmio @ 0x1C006768C
 * Callers:
 *     Register_PrepareHardware @ 0x1C0068064 (Register_PrepareHardware.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall Register_MapSecureMmio(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  int v4; // ebx
  int v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[6]; // [rsp+38h] [rbp-40h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = a1[1];
  v6 = 0;
  v3 = *(_QWORD *)(v2 + 112);
  v7[3] = a1[15];
  v7[5] = a1[3];
  *(_OWORD *)&v7[1] = 0LL;
  v7[4] = 8LL;
  v4 = SecureChannel_SendRequestSynchronously(v3, (unsigned int)v7, 48, (unsigned int)&v6, 4);
  if ( v4 >= 0 )
  {
    v4 = v6;
    if ( v6 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1[1] + 72LL),
        2u,
        6u,
        0x49u,
        (__int64)&WPP_9d05267a3ed0340255d9e56cf9248aa3_Traceguids,
        v6);
  }
  return (unsigned int)v4;
}
