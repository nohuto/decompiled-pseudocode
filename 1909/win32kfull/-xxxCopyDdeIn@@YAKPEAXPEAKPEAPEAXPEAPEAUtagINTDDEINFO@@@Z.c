/*
 * XREFs of ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A5B0
 * Callers:
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209BEC (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209E2C (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A374 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A740 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A8F0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AB50 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE50 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_sqq @ 0x1C0020D64 (WPP_RECORDER_SF_sqq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C007230C (WPP_RECORDER_SF_qqq.c)
 *     xxxClientCopyDDEIn1 @ 0x1C021DF5C (xxxClientCopyDDEIn1.c)
 */

__int64 __fastcall xxxCopyDdeIn(void *a1, unsigned int *a2, void **a3, struct tagINTDDEINFO **a4)
{
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagINTDDEINFO *v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // rcx
  const char *v14; // rax

  v8 = xxxClientCopyDDEIn1(a1, *a2, a4);
  v11 = *a4;
  v12 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( v11 )
      v13 = *((_QWORD *)v11 + 3);
    else
      v13 = 0LL;
    v14 = "and freeing";
    if ( (*a2 & 0x1000) == 0 )
      v14 = (const char *)&unk_1C02DA5C1;
    WPP_RECORDER_SF_sqq(
      v13,
      (__int64)&unk_1C02DA5C1,
      0xEu,
      0x3Au,
      (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
      v14,
      a1,
      v13);
  }
  if ( v12 == 2 )
  {
    *a2 = *((_DWORD *)v11 + 4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqq(
        v10,
        v9,
        0xEu,
        0x3Bu,
        (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
        *(_QWORD *)v11,
        *((_QWORD *)v11 + 1),
        *((_QWORD *)v11 + 3));
    if ( a3 )
      *a3 = (void *)*((_QWORD *)v11 + 3);
  }
  return v12;
}
