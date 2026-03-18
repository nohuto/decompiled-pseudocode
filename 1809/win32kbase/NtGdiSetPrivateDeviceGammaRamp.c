/*
 * XREFs of NtGdiSetPrivateDeviceGammaRamp @ 0x1C0003D40
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C009D840 (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall NtGdiSetPrivateDeviceGammaRamp(HDC a1, void *Src, int a3)
{
  unsigned int v6; // edi
  void *v7; // rbx

  v6 = 0;
  if ( Src )
  {
    v7 = (void *)PALLOCMEM2(0x600uLL);
    if ( v7 )
    {
      if ( ((unsigned __int8)Src & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      memmove(v7, Src, 0x600uLL);
      v6 = GreSetPrivateDeviceGammaRamp(a1, v7, a3);
      Win32FreePool(v7);
    }
  }
  return v6;
}
