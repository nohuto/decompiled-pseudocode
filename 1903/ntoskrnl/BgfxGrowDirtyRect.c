/*
 * XREFs of BgfxGrowDirtyRect @ 0x1401923F8
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x1401786D0 (GxpWriteFrameBufferPixels.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 */

void __fastcall BgfxGrowDirtyRect(unsigned int *a1, int *a2, unsigned int a3)
{
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax

  KxAcquireSpinLock(*((PKSPIN_LOCK *)&xmmword_14042C1A0 + 1));
  v6 = *(_DWORD *)xmmword_14042C1A0;
  if ( *(_DWORD *)xmmword_14042C1A0 > (unsigned int)*a2 )
    v6 = *a2;
  v7 = *a1;
  *(_DWORD *)xmmword_14042C1A0 = v6;
  v8 = v7 / a3 + *a2;
  v9 = *(_DWORD *)(xmmword_14042C1A0 + 4);
  if ( v9 < v8 )
    v9 = v8;
  *(_DWORD *)(xmmword_14042C1A0 + 4) = v9;
  v10 = *(_DWORD *)(xmmword_14042C1A0 + 8);
  if ( v10 > a2[1] )
    v10 = a2[1];
  *(_DWORD *)(xmmword_14042C1A0 + 8) = v10;
  v11 = *(_DWORD *)(xmmword_14042C1A0 + 12);
  if ( v11 < a2[1] + a1[1] )
    v11 = a2[1] + a1[1];
  *(_DWORD *)(xmmword_14042C1A0 + 12) = v11;
  ++*(_DWORD *)qword_14042C190;
  KxReleaseSpinLock(*((PKSPIN_LOCK *)&xmmword_14042C1A0 + 1));
}
