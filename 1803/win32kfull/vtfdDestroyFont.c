/*
 * XREFs of vtfdDestroyFont @ 0x1C022A8C0
 * Callers:
 *     <none>
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00FF9A0 (EngUnmapFontFileFD.c)
 */

void __fastcall vtfdDestroyFont(__int64 a1)
{
  __int64 *v2; // rbx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rax

  EngAcquireSemaphore(ghsemVTFD);
  v2 = *(__int64 **)(a1 + 56);
  if ( v2 )
  {
    v3 = *(_DWORD *)(*v2 + 32);
    if ( v3 )
    {
      *(_DWORD *)(*v2 + 32) = v3 - 1;
      v4 = *v2;
      if ( !*(_DWORD *)(*v2 + 32) )
      {
        if ( (*(_DWORD *)(v4 + 28) & 1) == 0 || (v5 = *v2, *(_DWORD *)v4 != 1) && *(_DWORD *)v4 != 2 )
        {
          EngUnmapFontFileFD(*(_QWORD *)(v4 + 8));
          v5 = *v2;
        }
        *(_DWORD *)(v5 + 28) &= ~1u;
      }
      EngFreeMem(v2);
    }
  }
  EngReleaseSemaphore(ghsemVTFD);
}
