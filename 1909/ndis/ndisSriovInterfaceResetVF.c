/*
 * XREFs of ndisSriovInterfaceResetVF @ 0x1C011B430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisSriovInterfaceResetVF(__int64 a1, __int16 a2)
{
  int v4; // edx
  unsigned int SetMiniport; // eax
  int v6; // edx
  unsigned int v7; // edi
  _BYTE v9[6]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v10[32]; // [rsp+50h] [rbp-B0h] BYREF

  memset((char *)v10 + 1, 0, 0xF7uLL);
  *(_DWORD *)&v9[1] = 0;
  v9[5] = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      101,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  *(_DWORD *)v9 = 393600;
  *(_WORD *)&v9[4] = a2;
  memset(v10, 0, 0xF8uLL);
  LODWORD(v10[11]) |= 8u;
  LODWORD(v10[1]) = 0;
  v10[13] = &ndisIntReqGeneric;
  v10[0] = 0x100EC0196LL;
  v10[5] = v9;
  LODWORD(v10[4]) = 66133;
  LODWORD(v10[6]) = 6;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (__int64)v10, 0, 0LL);
  v7 = SetMiniport;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      26,
      102,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      SetMiniport);
  }
  return v7;
}
