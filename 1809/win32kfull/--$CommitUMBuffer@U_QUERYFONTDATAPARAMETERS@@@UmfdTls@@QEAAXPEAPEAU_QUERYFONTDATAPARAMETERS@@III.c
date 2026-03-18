/*
 * XREFs of ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QEAAXPEAPEAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x1C0092754
 * Callers:
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0092550 (-CreateUsermodeParameters@QueryFontDataRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z @ 0x1C0162F60 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UEAAJPEAVUmfdTls@@PEAPEAX@Z.c)
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C00927BC (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 */

void *__fastcall UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(
        UmfdTls *this,
        _QWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  int v7; // r10d
  void *result; // rax

  v7 = a5 + a6;
  if ( a5 + a6 < a5 || a4 + v7 < a4 || a4 + v7 + a3 < a3 )
    result = 0LL;
  else
    result = UmfdTls::CommitUMBuffer(this, a4 + v7 + a3, 1);
  *a2 = result;
  return result;
}
