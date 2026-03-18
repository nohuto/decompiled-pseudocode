/*
 * XREFs of DisplayFilter @ 0x1402688D0
 * Callers:
 *     <none>
 * Callees:
 *     DisplayBootBitmap @ 0x14018173C (DisplayBootBitmap.c)
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_1404DC8C0 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_1401D18F0[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_1401D18F0[1];
  if ( v1 )
  {
LABEL_6:
    qword_14043C700 = 0LL;
    byte_1404DC8C0 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_140374638;
    *a1 = (unsigned __int8 *)&unk_140374638;
  }
  return (int)v2;
}
