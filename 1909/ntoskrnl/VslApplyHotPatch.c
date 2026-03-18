/*
 * XREFs of VslApplyHotPatch @ 0x14028EE20
 * Callers:
 *     MiApplyDriverHotPatch @ 0x14088CCD4 (MiApplyDriverHotPatch.c)
 *     MiLoadHotPatch @ 0x14088E6D0 (MiLoadHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslApplyHotPatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  NTSTATUS result; // eax
  int v11; // ecx
  _OWORD v12[7]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v12, 0, 0x68uLL);
  *((_QWORD *)&v12[0] + 1) = a1;
  *(_QWORD *)&v12[1] = a2;
  *((_QWORD *)&v12[1] + 1) = a3;
  *(_QWORD *)&v12[2] = a4;
  *((_QWORD *)&v12[2] + 1) = a5;
  result = VslpEnterIumSecureMode(2, 69LL, 0LL, (__int64)v12);
  if ( result >= 0 )
  {
    if ( a6 )
    {
      v11 = v12[2];
      *(_OWORD *)a6 = v12[1];
      *(_DWORD *)(a6 + 16) = v11;
    }
  }
  return result;
}
