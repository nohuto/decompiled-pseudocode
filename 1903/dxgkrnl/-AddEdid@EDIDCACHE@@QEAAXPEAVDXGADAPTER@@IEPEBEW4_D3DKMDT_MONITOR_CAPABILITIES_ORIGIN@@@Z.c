/*
 * XREFs of ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IEPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C01702A4
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C017001C (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0250010 (-GetEdidForTarget@EDIDCACHE@@QEAAJPEAVDXGADAPTER@@IEQEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGI.c)
 * Callees:
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C0002568 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z @ 0x1C016C6E4 (-SetPhysicalDimensionOfInternalPanel@EDIDCACHE@@QEAAXJJE@Z.c)
 *     ?FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z @ 0x1C01703E8 (-FindEdidInCache@EDIDCACHE@@AEAAHU_LUID@@IPEBE@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C025062C (-WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
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
  unsigned int v16; // esi
  EDIDCACHE *v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
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
          if ( (int)EDID_V1_GetPhysicalSize(v20, v12, &v22, &v24) >= 0 )
            EDIDCACHE::SetPhysicalDimensionOfInternalPanel(this, v22, v24, 0);
        }
      }
      v16 = 0;
      v17 = this;
      v18 = 0;
      while ( *(_QWORD *)v17 )
      {
        v21 = v18;
        if ( *(_QWORD *)v17 >= *((_QWORD *)this + 19 * v16) )
          v21 = v16;
        ++v18;
        v17 = (EDIDCACHE *)((char *)v17 + 152);
        v16 = v21;
        if ( v18 >= 4 )
          goto LABEL_7;
      }
      v16 = v18;
LABEL_7:
      v19 = 152LL * v16;
      *(struct _LUID *)((char *)this + v19 + 8) = v11;
      *(_DWORD *)((char *)this + v19 + 16) = a3;
      *(_DWORD *)((char *)this + v19 + 20) = v15;
      *(_QWORD *)((char *)this + v19) = MEMORY[0xFFFFF78000000014];
      *(_OWORD *)((char *)this + v19 + 24) = *(_OWORD *)v12;
      *(_OWORD *)((char *)this + v19 + 40) = *((_OWORD *)v12 + 1);
      *(_OWORD *)((char *)this + v19 + 56) = *((_OWORD *)v12 + 2);
      *(_OWORD *)((char *)this + v19 + 72) = *((_OWORD *)v12 + 3);
      *(_OWORD *)((char *)this + v19 + 88) = *((_OWORD *)v12 + 4);
      *(_OWORD *)((char *)this + v19 + 104) = *((_OWORD *)v12 + 5);
      *(_OWORD *)((char *)this + v19 + 120) = *((_OWORD *)v12 + 6);
      *(_OWORD *)((char *)this + v19 + 136) = *((_OWORD *)v12 + 7);
    }
    else
    {
      *((_QWORD *)this + 19 * EdidInCache) = MEMORY[0xFFFFF78000000014];
    }
    if ( v23[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  }
}
