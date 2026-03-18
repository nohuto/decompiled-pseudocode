/*
 * XREFs of ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C02095F0
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209CF0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A0B0 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020ACF0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE50 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall FreeListAdd(PETHREAD **a1, void *a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rbx
  HANDLE ThreadId; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  result = Win32AllocPool(24LL, 828666709LL);
  v7 = result;
  if ( result )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      ThreadId = PsGetThreadId(*a1[2]);
      WPP_RECORDER_SF_qq(v10, v9, 0xEu, 0x34u, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids, a2, ThreadId);
    }
    *(_QWORD *)(v7 + 8) = a2;
    *(_DWORD *)(v7 + 16) = a3;
    *(_QWORD *)v7 = a1[9];
    result = 1LL;
    a1[9] = (PETHREAD *)v7;
  }
  return result;
}
