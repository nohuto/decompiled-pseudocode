/*
 * XREFs of ndisSriovInterfaceSetVfPowerState @ 0x1C011B590
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceSetVfPowerState(__int64 a1, __int16 a2, int a3, char a4)
{
  int v8; // edx
  int v9; // edx
  unsigned int SetMiniport; // ebx
  _QWORD v12[32]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[13]; // [rsp+140h] [rbp+40h] BYREF
  __int16 v14; // [rsp+14Dh] [rbp+4Dh]
  char v15; // [rsp+14Fh] [rbp+4Fh]

  memset((char *)v12 + 1, 0, 0xF7uLL);
  *(_QWORD *)&v13[1] = 0LL;
  *(_DWORD *)&v13[9] = 0;
  v14 = 0;
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      26,
      103,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  *(_DWORD *)v13 = 1048960;
  *(_WORD *)&v13[4] = a2;
  *(_DWORD *)&v13[8] = a3;
  v13[12] = a4;
  memset(v12, 0, 0xF8uLL);
  LODWORD(v12[11]) |= 8u;
  LODWORD(v12[1]) = 0;
  v12[13] = &ndisIntReqGeneric;
  v12[0] = 0x100EC0196LL;
  v12[5] = v13;
  LODWORD(v12[4]) = 66134;
  LODWORD(v12[6]) = 16;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (__int64)v12, 0, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      26,
      104,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      SetMiniport);
  }
  return SetMiniport;
}
