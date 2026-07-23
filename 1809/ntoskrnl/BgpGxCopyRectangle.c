/*
 * XREFs of BgpGxCopyRectangle @ 0x140955458
 * Callers:
 *     BgpRasPrintGlyph @ 0x14017A2D4 (BgpRasPrintGlyph.c)
 * Callees:
 *     BgpGxMarkClean @ 0x14013BC88 (BgpGxMarkClean.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

void __fastcall BgpGxCopyRectangle(__int64 a1, unsigned int *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // r11d
  unsigned int v6; // eax
  unsigned int v8; // ebp
  unsigned int v9; // r10d
  unsigned int v10; // ecx
  unsigned int v11; // ebx
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  char *v14; // rdi
  char *v15; // rsi
  size_t v16; // r15

  v4 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)a1;
  v8 = *(_DWORD *)(a1 + 8);
  v9 = a2[1];
  v10 = v9;
  v11 = *a2;
  v12 = v8 >> 3;
  if ( v9 >= v4 )
    v10 = v4;
  v13 = v12 * v10;
  if ( v11 >= v6 )
    v11 = v6;
  v14 = (char *)(*((_QWORD *)a2 + 3) + v12 * (*a4 + v9 * a4[1]));
  v15 = (char *)(*(_QWORD *)(a1 + 24) + v12 * (*a3 + v4 * a3[1]));
  if ( v11 )
  {
    v16 = v13;
    do
    {
      memmove(v15, v14, v16);
      v14 += v12 * a2[1];
      v15 += *(_DWORD *)(a1 + 4) * v12;
      --v11;
    }
    while ( v11 );
  }
  BgpGxMarkClean(a1);
}
