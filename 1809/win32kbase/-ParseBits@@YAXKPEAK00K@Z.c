/*
 * XREFs of ?ParseBits@@YAXKPEAK00K@Z @ 0x1C005FBDC
 * Callers:
 *     ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C00AA460 (-bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ParseBits(unsigned int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4, unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned int i; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // eax

  v5 = 0;
  for ( i = a1; (i & 1) == 0; ++v5 )
    i >>= 1;
  v8 = v5;
  do
  {
    ++v8;
    i >>= 1;
    v9 = v8;
  }
  while ( (i & 1) != 0 );
  v10 = v8 - v5;
  v11 = v9 - 8;
  *a4 = v10;
  if ( v10 <= 8 )
    v11 = v5;
  *a2 = v11;
  v12 = a5;
  if ( v10 <= 8 )
    v12 = a5 - v10 + 8;
  *a3 = v12;
}
