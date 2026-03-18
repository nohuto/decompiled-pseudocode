/*
 * XREFs of ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C02097FC (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A374 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B2D0 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxUnadviseAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void **v4; // rsi
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct tagINTDDEINFO *v10; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  if ( *a1 != 996 )
    return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 38, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  }
  v7 = xxxCopyAckIn(a1, v4, a3, &v10);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    v7 = 0;
  if ( v7 != 2 )
    return v7;
  PopState(a3, v8, v9);
  return 2;
}
