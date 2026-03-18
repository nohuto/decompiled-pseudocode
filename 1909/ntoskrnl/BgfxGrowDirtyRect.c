/*
 * XREFs of BgfxGrowDirtyRect @ 0x140192BE0
 * Callers:
 *     GxpWriteFrameBufferPixels @ 0x140178DC0 (GxpWriteFrameBufferPixels.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 */

void __fastcall BgfxGrowDirtyRect(unsigned int *a1, int *a2, unsigned int a3)
{
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax

  KxAcquireSpinLock(*((PKSPIN_LOCK *)&xmmword_14042C180 + 1));
  v6 = *(_DWORD *)xmmword_14042C180;
  if ( *(_DWORD *)xmmword_14042C180 > (unsigned int)*a2 )
    v6 = *a2;
  v7 = *a1;
  *(_DWORD *)xmmword_14042C180 = v6;
  v8 = v7 / a3 + *a2;
  v9 = *(_DWORD *)(xmmword_14042C180 + 4);
  if ( v9 < v8 )
    v9 = v8;
  *(_DWORD *)(xmmword_14042C180 + 4) = v9;
  v10 = *(_DWORD *)(xmmword_14042C180 + 8);
  if ( v10 > a2[1] )
    v10 = a2[1];
  *(_DWORD *)(xmmword_14042C180 + 8) = v10;
  v11 = *(_DWORD *)(xmmword_14042C180 + 12);
  if ( v11 < a2[1] + a1[1] )
    v11 = a2[1] + a1[1];
  *(_DWORD *)(xmmword_14042C180 + 12) = v11;
  ++*(_DWORD *)qword_14042C170;
  KxReleaseSpinLock(*((PKSPIN_LOCK *)&xmmword_14042C180 + 1));
}
