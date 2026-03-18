/*
 * XREFs of XilUsbDevice_SendRequestToRingDoorbell @ 0x1C003975C
 * Callers:
 *     Isoch_Stage_MapIntoRing @ 0x1C00311FC (Isoch_Stage_MapIntoRing.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006B43C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilUsbDevice_SendRequestToRingDoorbell(_QWORD *a1, char a2, __int16 a3)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int16 v10; // r9
  int v11; // [rsp+28h] [rbp-60h]
  int v12; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v13[6]; // [rsp+38h] [rbp-50h] BYREF

  memset(v13, 0, sizeof(v13));
  v6 = a1[7];
  v12 = 0;
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_QWORD *)(v7 + 112);
  v13[3] = *a1;
  LODWORD(v13[4]) = 32;
  LOBYTE(v13[5]) = a2;
  WORD1(v13[5]) = a3;
  result = SecureChannel_SendRequestSynchronously(v8, (unsigned int)v13, 48, (unsigned int)&v12, 4);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return result;
    v10 = 12;
    goto LABEL_7;
  }
  result = (unsigned int)v12;
  if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 13;
LABEL_7:
    v11 = result;
    return WPP_RECORDER_SF_d(
             *(_QWORD *)(v7 + 72),
             2u,
             0xCu,
             v10,
             (__int64)&WPP_777d6bcc09283ade7749b3a182818bef_Traceguids,
             v11);
  }
  return result;
}
