/*
 * XREFs of DisplayFilter @ 0x14027B6F0
 * Callers:
 *     <none>
 * Callees:
 *     DisplayBootBitmap @ 0x14018AF08 (DisplayBootBitmap.c)
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_140509D40 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_1401D7930[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_1401D7930[1];
  if ( v1 )
  {
LABEL_6:
    qword_140467F70 = 0LL;
    byte_140509D40 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_140395550;
    *a1 = (unsigned __int8 *)&unk_140395550;
  }
  return (int)v2;
}
