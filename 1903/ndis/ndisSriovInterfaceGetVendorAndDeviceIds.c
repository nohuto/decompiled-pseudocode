/*
 * XREFs of ndisSriovInterfaceGetVendorAndDeviceIds @ 0x1C011AD00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceGetVendorAndDeviceIds(__int64 a1, __int16 a2, _WORD *a3, _WORD *a4)
{
  int v8; // edx
  __int64 result; // rax
  int v10; // edx
  _QWORD v11[32]; // [rsp+40h] [rbp-C0h] BYREF
  _TBYTE v12; // [rsp+140h] [rbp+40h] BYREF

  memset((char *)v11 + 1, 0, 0xF7uLL);
  *(_QWORD *)((char *)&v12 + 1) = 0LL;
  HIBYTE(v12) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      26,
      99,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  *(_DWORD *)((char *)&v12 + 6) = 0;
  LODWORD(v12) = 655744;
  WORD2(v12) = a2;
  memset(v11, 0, 0xF8uLL);
  LODWORD(v11[11]) |= 8u;
  LODWORD(v11[1]) = 0;
  LODWORD(v11[7]) = 0;
  v11[13] = &ndisIntReqGeneric;
  v11[0] = 0xC00EC0196LL;
  v11[5] = &v12;
  LODWORD(v11[4]) = 66135;
  v11[6] = 0xA0000000ALL;
  result = ndisQuerySetMiniport(a1, 0LL, (__int64)v11, 0, 0LL);
  if ( !(_DWORD)result )
  {
    *a3 = WORD3(v12);
    *a4 = HIWORD(v12);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    return WPP_RECORDER_SF_qL(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v10,
             26,
             100,
             (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
             a1,
             result);
  }
  return result;
}
