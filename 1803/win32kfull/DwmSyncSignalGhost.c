/*
 * XREFs of DwmSyncSignalGhost @ 0x1C0241D04
 * Callers:
 *     ?xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z @ 0x1C01BFCD0 (-xxxSendSyncGHOSTINFO@@YAHPEAU_GHOSTINFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmSyncSignalGhost(PVOID Object, __int128 *a2)
{
  signed int v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  int v7; // eax
  int v8; // edx
  __int128 v9; // xmm1
  _DWORD v11[172]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = -1073741823;
  if ( Object )
  {
    v4 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v11, 0, sizeof(v11));
      v5 = *a2;
      v6 = a2[1];
      LOWORD(v11[1]) = 0x8000;
      v7 = *((_DWORD *)a2 + 8);
      *(_OWORD *)&v11[11] = v5;
      v11[19] = v7;
      *(_OWORD *)&v11[15] = v6;
      v11[0] = 5242920;
      v11[10] = 1073741877;
      v4 = LpcRequestWaitReplyPort(Object, v11, v11);
      if ( v4 >= 0 )
      {
        v8 = v11[19];
        v9 = *(_OWORD *)&v11[15];
        *a2 = *(_OWORD *)&v11[11];
        a2[1] = v9;
        *((_DWORD *)a2 + 8) = v8;
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
