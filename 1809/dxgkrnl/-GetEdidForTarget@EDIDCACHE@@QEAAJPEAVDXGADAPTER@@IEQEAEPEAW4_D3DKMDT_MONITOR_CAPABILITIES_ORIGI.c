/*
 * XREFs of ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00B6044
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ @ 0x1C00B5F38 (-_RetrieveMonitorDescriptorsFromCache@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C021B9F0 (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?ReadEdidFromRegistry@EDIDCACHE@@QEAAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C021BF20 (-ReadEdidFromRegistry@EDIDCACHE@@QEAAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

__int64 __fastcall EDIDCACHE::GetEdidForTarget(
        EDIDCACHE *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *const a5,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *a6)
{
  struct DXGFASTMUTEX *v10; // rdx
  _QWORD *v11; // rcx
  unsigned int i; // edx
  EDIDCACHE *v13; // rcx
  unsigned int v14; // ebx
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !a5 )
    return 3221225713LL;
  v10 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( !v10 )
    return 3221225659LL;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, v10, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  v11 = (_QWORD *)((char *)this + 12);
  for ( i = 0; i < 4; ++i )
  {
    if ( *((_DWORD *)v11 - 1) == (unsigned int)*(_QWORD *)((char *)a2 + 276)
      && *v11 == __PAIR64__(a3, HIDWORD(*(_QWORD *)((char *)a2 + 276))) )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)this + 152 * i + 24);
      *((_OWORD *)a5 + 1) = *(_OWORD *)((char *)this + 152 * i + 40);
      *((_OWORD *)a5 + 2) = *(_OWORD *)((char *)this + 152 * i + 56);
      *((_OWORD *)a5 + 3) = *(_OWORD *)((char *)this + 152 * i + 72);
      *((_OWORD *)a5 + 4) = *(_OWORD *)((char *)this + 152 * i + 88);
      *((_OWORD *)a5 + 5) = *(_OWORD *)((char *)this + 152 * i + 104);
      *((_OWORD *)a5 + 6) = *(_OWORD *)((char *)this + 152 * i + 120);
      *((_OWORD *)a5 + 7) = *(_OWORD *)((char *)this + 152 * i + 136);
      if ( a6 )
        *a6 = *((enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN *)this + 38 * i + 5);
      goto LABEL_18;
    }
    v11 += 19;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  if ( !a4 || (int)EDIDCACHE::ReadEdidFromRegistry(v13, a3, a5, a6) < 0 )
  {
    v14 = -1073741275;
    goto LABEL_8;
  }
  EDIDCACHE::AddEdid(this, a2, a3, 0, a5, *a6);
LABEL_18:
  v14 = 0;
LABEL_8:
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
  return v14;
}
