/*
 * XREFs of draw_clrt_f_ntb_o_to_temp_start @ 0x1C0275CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?vOrClearTypeGlyph@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C0275994 (-vOrClearTypeGlyph@@YAXPEAU_GLYPHBITS@@IPEAEI@Z.c)
 */

void __fastcall draw_clrt_f_ntb_o_to_temp_start(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  int v8; // edi
  int v9; // esi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp

  v8 = *(_DWORD *)(a1 + 16) - a4;
  v9 = *(_DWORD *)(a1 + 20) - a7;
  v10 = a1;
  v11 = a1 + 24LL * a2;
  if ( a1 < v11 )
  {
    do
    {
      vOrClearTypeGlyph(
        **(struct _GLYPHBITS ***)(v10 + 8),
        *(_DWORD *)(**(_QWORD **)(v10 + 8) + 8LL),
        (unsigned __int8 *)(a3
                          + a5 * (__int64)(v9 + *(_DWORD *)(**(_QWORD **)(v10 + 8) + 4LL))
                          + v8
                          + ***(_DWORD ***)(v10 + 8)),
        a5);
      v8 += a6;
      v10 += 24LL;
    }
    while ( v10 < v11 );
  }
}
