/*
 * XREFs of ?vReverseConcatenate@WIDEPATHOBJ@@QEAAXAEAV1@@Z @ 0x1C0121A40
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0121348 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0121BE4 (-vAddPoint@WIDEPATHOBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 */

void __fastcall WIDEPATHOBJ::vReverseConcatenate(WIDEPATHOBJ *this, struct WIDEPATHOBJ *a2, int a3)
{
  __int64 v3; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  struct _POINTFIX *i; // rdi

  v3 = *((_QWORD *)a2 + 1);
  v6 = *(_QWORD *)(v3 + 40);
  if ( v6 )
  {
    do
    {
      v7 = v6 + 24;
      v8 = *(_QWORD *)(v6 + 8);
      for ( i = (struct _POINTFIX *)(v6 + 8 * (*(unsigned int *)(v6 + 20) + 3LL));
            (unsigned __int64)i > v7;
            WIDEPATHOBJ::vAddPoint(this, i, a3) )
      {
        --i;
      }
      *(_QWORD *)(*((_QWORD *)a2 + 1) + 24LL) = **(_QWORD **)(*((_QWORD *)a2 + 1) + 24LL);
      freepathalloc();
      v6 = v8;
    }
    while ( v8 );
    v3 = *((_QWORD *)a2 + 1);
  }
  *(_QWORD *)(v3 + 24) = 0LL;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 40LL) = 0LL;
  *(_QWORD *)(*((_QWORD *)a2 + 1) + 32LL) = 0LL;
}
