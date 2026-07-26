/*
 * XREFs of ndisSriovGetResourceForBar @ 0x1C011AA60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisSriovGetResourceForBar(__int64 a1, __int16 a2, __int16 a3, __int64 a4)
{
  int v8; // edx
  int v9; // edx
  unsigned int SetMiniport; // ebx
  __int64 v11; // rcx
  _QWORD v13[32]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+140h] [rbp+40h] BYREF
  __int16 v15; // [rsp+144h] [rbp+44h]
  __int16 v16; // [rsp+146h] [rbp+46h]
  unsigned int v17; // [rsp+148h] [rbp+48h]
  __int128 v18; // [rsp+14Ch] [rbp+4Ch]
  int v19; // [rsp+15Ch] [rbp+5Ch]

  memset((char *)v13 + 1, 0, 0xF7uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      26,
      109,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  }
  v19 = 0;
  v14 = 786816;
  v15 = a2;
  v17 = 12;
  v16 = a3;
  v18 = 0LL;
  memset(v13, 0, 0xF8uLL);
  LODWORD(v13[11]) |= 8u;
  LODWORD(v13[1]) = 0;
  LODWORD(v13[7]) = 0;
  v13[13] = &ndisIntReqGeneric;
  v13[0] = 0xC00EC0196LL;
  v13[5] = &v14;
  v13[6] = 0x2000000020LL;
  LODWORD(v13[4]) = 66137;
  SetMiniport = ndisQuerySetMiniport(a1, 0LL, (__int64)v13, 0, 0LL);
  if ( !SetMiniport )
  {
    v11 = v17;
    *(_OWORD *)a4 = *(_OWORD *)((char *)&v14 + v17);
    *(_DWORD *)(a4 + 16) = *(_DWORD *)((char *)&v18 + v11 + 4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      26,
      110,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      SetMiniport);
  }
  return SetMiniport;
}
