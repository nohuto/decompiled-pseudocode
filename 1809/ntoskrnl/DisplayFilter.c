/*
 * XREFs of DisplayFilter @ 0x1402689D0
 * Callers:
 *     <none>
 * Callees:
 *     DisplayBootBitmap @ 0x14018175C (DisplayBootBitmap.c)
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_1404DC880 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_1401D19F0[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_1401D19F0[1];
  if ( v1 )
  {
LABEL_6:
    qword_14043C700 = 0LL;
    byte_1404DC880 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_140374748;
    *a1 = (unsigned __int8 *)&unk_140374748;
  }
  return (int)v2;
}
