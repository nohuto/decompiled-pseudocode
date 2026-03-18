/*
 * XREFs of ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180024280
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002436C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x1800B7140 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x1800BCC60 (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x1800B1074 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800B1CAC (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x180162588 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 */

void __fastcall CD3DResourceManager::DestroyAllResources(union _SLIST_HEADER *this)
{
  char *v1; // rdi
  char *Alignment; // rcx
  char *v4; // rdi
  char *Region; // rbx
  int v6; // esi
  char **v7; // r14
  char *v8; // rdx
  CD3DResourceSourceReference *v9; // rcx
  char *v10; // r8
  char **v11; // rax

  v1 = (char *)&this[2];
  Alignment = (char *)this[2].Alignment;
  if ( Alignment != v1 )
  {
    v6 = 0;
    v7 = (char **)v1;
    do
    {
      if ( *((_DWORD *)Alignment - 6) )
      {
        CD3DResourceManager::DestroyResource((CD3DResourceManager *)this, (struct CD3DResource *)(Alignment - 32));
      }
      else
      {
        ++v6;
        v7 = (char **)Alignment;
      }
      Alignment = *v7;
    }
    while ( *v7 != v1 );
    while ( QueryDepthSList(this + 1) != v6 )
      Sleep(1u);
    CD3DResourceManager::DestroyDelayedResources((CD3DResourceManager *)this);
  }
  v4 = (char *)&this[3].HeaderX64 + 8;
  Region = (char *)this[3].Region;
  while ( Region != v4 )
  {
    v8 = *(char **)Region;
    v9 = (CD3DResourceSourceReference *)(Region - 16);
    v10 = Region;
    Region = v8;
    if ( *((char **)v8 + 1) != v10 || (v11 = (char **)*((_QWORD *)v10 + 1), *v11 != v10) )
      __fastfail(3u);
    *v11 = v8;
    *((_QWORD *)v8 + 1) = v11;
    if ( v9 )
      CD3DResourceSourceReference::`scalar deleting destructor'(v9, (unsigned int)v8);
  }
}
