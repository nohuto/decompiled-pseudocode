/*
 * XREFs of ??0EDIDCACHE@@QEAA@XZ @ 0x1C0155600
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C015434C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C015569C (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 */

EDIDCACHE *__fastcall EDIDCACHE::EDIDCACHE(EDIDCACHE *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  __int64 v5; // rax

  *((_BYTE *)this + 624) = 0;
  memset(this, 0, 0x260uLL);
  *((_DWORD *)this + 154) = -1;
  *((_DWORD *)this + 155) = 1;
  EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, 0, 0, 0);
  v2 = operator new(0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    *((_DWORD *)v2 + 6) = 0;
    v2[2] = 0LL;
    *((_DWORD *)v2 + 7) = 51;
    *((_DWORD *)v2 + 8) = 1;
  }
  *((_QWORD *)this + 76) = v2;
  if ( !v2 )
  {
    v5 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v5 + 24) = 143LL;
    WdLogEvent5_WdLowResource(v5);
  }
  return this;
}
