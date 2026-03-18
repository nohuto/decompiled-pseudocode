/*
 * XREFs of ??0EDIDCACHE@@QEAA@XZ @ 0x1C0170438
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C016DDBC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C01704D4 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 */

EDIDCACHE *__fastcall EDIDCACHE::EDIDCACHE(EDIDCACHE *this)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rax

  *((_BYTE *)this + 624) = 0;
  memset(this, 0, 0x260uLL);
  *((_DWORD *)this + 154) = -1;
  *((_DWORD *)this + 155) = 1;
  EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, 0, 0, 0);
  v2 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
  {
    *v2 = 0LL;
    v2[1] = 0LL;
    v2[2] = 0LL;
    *((_DWORD *)v2 + 6) = 0;
    *((_DWORD *)v2 + 7) = 51;
    *((_DWORD *)v2 + 8) = 1;
  }
  *((_QWORD *)this + 76) = v2;
  if ( !v2 )
  {
    v8 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v8 + 24) = 143LL;
    WdLogEvent5_WdLowResource(v8);
  }
  return this;
}
