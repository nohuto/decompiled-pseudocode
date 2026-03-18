/*
 * XREFs of DisplayFilter @ 0x14027B990
 * Callers:
 *     <none>
 * Callees:
 *     DisplayBootBitmap @ 0x14018A578 (DisplayBootBitmap.c)
 */

int __fastcall DisplayFilter(unsigned __int8 **a1)
{
  int v1; // edx
  void *v2; // rax

  if ( byte_14050A000 )
    goto LABEL_6;
  v1 = **a1 - (unsigned __int8)asc_1401D6D30[0];
  if ( !v1 )
    v1 = (*a1)[1] - (unsigned __int8)asc_1401D6D30[1];
  if ( v1 )
  {
LABEL_6:
    qword_140468230 = 0LL;
    byte_14050A000 = 1;
    LODWORD(v2) = DisplayBootBitmap(1);
  }
  else
  {
    v2 = &unk_140395288;
    *a1 = (unsigned __int8 *)&unk_140395288;
  }
  return (int)v2;
}
