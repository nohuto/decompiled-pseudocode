/*
 * XREFs of ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@AEAAXXZ @ 0x1C007F5EC
 * Callers:
 *     ??1VIDMM_FENCE_STORAGE_PAGE@@QEAA@XZ @ 0x1C007F5D8 (--1VIDMM_FENCE_STORAGE_PAGE@@QEAA@XZ.c)
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z @ 0x1C0080FF0 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x1C007F670 (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeStorage(PMDL *this)
{
  PMDL v2; // rcx
  PMDL v3; // rcx
  PMDL v4; // rcx

  VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping((VIDMM_FENCE_STORAGE_PAGE *)this);
  if ( *((_BYTE *)this + 120) )
  {
    MmUnlockPages(this[14]);
    *((_BYTE *)this + 120) = 0;
  }
  v2 = this[14];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    this[14] = 0LL;
  }
  v3 = this[13];
  if ( v3 )
  {
    MmUnmapViewInSystemSpace(v3);
    this[13] = 0LL;
  }
  v4 = this[12];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    this[12] = 0LL;
  }
}
