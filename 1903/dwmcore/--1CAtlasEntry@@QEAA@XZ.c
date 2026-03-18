/*
 * XREFs of ??1CAtlasEntry@@QEAA@XZ @ 0x18001B7B4
 * Callers:
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x180019DE0 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 *     ??_GCAtlasImageSource@@MEAAPEAXI@Z @ 0x180019E40 (--_GCAtlasImageSource@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasEntry::~CAtlasEntry(CAtlasEntry *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)(*(_QWORD *)(v1 + 16) + 8LL * (unsigned int)(*((_DWORD *)this + 4) - 1)) = -1LL;
    ++*(_DWORD *)(v1 + 32);
  }
}
