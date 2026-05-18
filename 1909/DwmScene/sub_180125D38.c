/*
 * XREFs of sub_180125D38 @ 0x180125D38
 * Callers:
 *     ?dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x1801262E0 (-dllmain_crt_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     sub_180056A50 @ 0x180056A50 (sub_180056A50.c)
 */

char sub_180125D38()
{
  if ( !sub_180056A50() )
    return 0;
  if ( !sub_180056A50() )
  {
    sub_180056A50();
    return 0;
  }
  return 1;
}
