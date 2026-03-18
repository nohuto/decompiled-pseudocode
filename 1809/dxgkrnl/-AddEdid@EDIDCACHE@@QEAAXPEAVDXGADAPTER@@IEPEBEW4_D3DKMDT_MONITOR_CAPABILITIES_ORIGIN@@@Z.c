/*
 * XREFs of ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C021B9F0
 * Callers:
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C00B6044 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C029DDC8 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0003174 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C015569C (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z @ 0x1C021BBC8 (-FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C021C0F4 (-WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 */

void __fastcall EDIDCACHE::AddEdid(
        EDIDCACHE *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        char a4,
        unsigned __int8 *a5,
        enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN a6)
{
  struct DXGFASTMUTEX *v8; // rdx
  struct _LUID v11; // rbx
  unsigned __int8 *v12; // rbp
  int EdidInCache; // eax
  EDIDCACHE *v14; // rcx
  enum _D3DKMDT_MONITOR_CAPABILITIES_ORIGIN v15; // r14d
  __int64 v16; // rcx
  unsigned int v17; // esi
  EDIDCACHE *v18; // r8
  unsigned int v19; // edx
  unsigned int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v23[48]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF

  v8 = (struct DXGFASTMUTEX *)*((_QWORD *)this + 76);
  if ( v8 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, v8, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    v11 = *(struct _LUID *)((char *)a2 + 276);
    v12 = a5;
    EdidInCache = EDIDCACHE::FindEdidInCache(this, v11, a3, a5);
    if ( EdidInCache == -1 )
    {
      v15 = a6;
      if ( a4 )
      {
        if ( a6 == D3DKMDT_MCO_MONITORDESCRIPTOR )
        {
          EDIDCACHE::WriteEdidToRegistry(v14, a3, v12, D3DKMDT_MCO_MONITORDESCRIPTOR);
          if ( (int)EDID_V1_GetPhysicalSize(v16, v12, &v22, &v24) >= 0 )
            EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, v22, v24, 0);
        }
      }
      v17 = 0;
      v18 = this;
      v19 = 0;
      while ( *(_QWORD *)v18 )
      {
        v20 = v19;
        if ( *(_QWORD *)v18 >= *((_QWORD *)this + 19 * v17) )
          v20 = v17;
        ++v19;
        v18 = (EDIDCACHE *)((char *)v18 + 152);
        v17 = v20;
        if ( v19 >= 4 )
          goto LABEL_15;
      }
      v17 = v19;
LABEL_15:
      v21 = 152LL * v17;
      *(struct _LUID *)((char *)this + v21 + 8) = v11;
      *(_DWORD *)((char *)this + v21 + 16) = a3;
      *(_DWORD *)((char *)this + v21 + 20) = v15;
      *(_QWORD *)((char *)this + v21) = MEMORY[0xFFFFF78000000014];
      *(_OWORD *)((char *)this + v21 + 24) = *(_OWORD *)v12;
      *(_OWORD *)((char *)this + v21 + 40) = *((_OWORD *)v12 + 1);
      *(_OWORD *)((char *)this + v21 + 56) = *((_OWORD *)v12 + 2);
      *(_OWORD *)((char *)this + v21 + 72) = *((_OWORD *)v12 + 3);
      *(_OWORD *)((char *)this + v21 + 88) = *((_OWORD *)v12 + 4);
      *(_OWORD *)((char *)this + v21 + 104) = *((_OWORD *)v12 + 5);
      *(_OWORD *)((char *)this + v21 + 120) = *((_OWORD *)v12 + 6);
      *(_OWORD *)((char *)this + v21 + 136) = *((_OWORD *)v12 + 7);
    }
    else
    {
      *((_QWORD *)this + 19 * EdidInCache) = MEMORY[0xFFFFF78000000014];
    }
    if ( v23[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  }
}
