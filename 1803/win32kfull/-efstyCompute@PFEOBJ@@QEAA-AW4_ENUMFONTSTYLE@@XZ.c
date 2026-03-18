/*
 * XREFs of ?efstyCompute@PFEOBJ@@QEAA?AW4_ENUMFONTSTYLE@@XZ @ 0x1C00CCF4C
 * Callers:
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z @ 0x1C00CC574 (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEAGAEAVPFEOBJ@@H@Z.c)
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C010F8D4 (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PFEOBJ::efstyCompute(__int64 a1)
{
  switch ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 52LL) & 0x21 )
  {
    case 1:
      return 2LL;
    case 32:
      return 1LL;
    case 33:
      return 3LL;
  }
  return 0LL;
}
