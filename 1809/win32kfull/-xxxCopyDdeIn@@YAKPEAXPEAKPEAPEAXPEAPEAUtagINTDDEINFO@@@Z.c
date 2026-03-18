/*
 * XREFs of ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F40A8
 * Callers:
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F3A1C (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F3B94 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01F3F4C (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F412C (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4250 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F43E0 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4620 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     xxxClientCopyDDEIn1 @ 0x1C0206BA8 (xxxClientCopyDDEIn1.c)
 */

__int64 __fastcall xxxCopyDdeIn(void *a1, unsigned int *a2, void **a3, struct tagINTDDEINFO **a4)
{
  __int64 result; // rax
  struct tagINTDDEINFO *v8; // r9

  result = xxxClientCopyDDEIn1(a1, *a2, a4);
  if ( (_DWORD)result == 2 )
  {
    v8 = *a4;
    *a2 = *((_DWORD *)*a4 + 4);
    if ( a3 )
      *a3 = (void *)*((_QWORD *)v8 + 3);
  }
  return result;
}
