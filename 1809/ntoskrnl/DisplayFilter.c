/*
 * XREFs of DisplayFilter @ 0x140268BC0
 * Callers:
 *     <none>
 * Callees:
 *     DisplayBootBitmap @ 0x14018189C (DisplayBootBitmap.c)
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_1404DD980 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_1401D1AF0[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_1401D1AF0[1];
  if ( v1 )
  {
LABEL_6:
    qword_14043D7C0 = 0LL;
    byte_1404DD980 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_1403756D8;
    *a1 = (unsigned __int8 *)&unk_1403756D8;
  }
  return (int)v2;
}
