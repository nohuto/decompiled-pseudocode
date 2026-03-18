/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C015A39C
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C015A2F8 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C0044A80 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C015A470 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C015A4B8 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C015D348 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C015D6F4 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this)
{
  BLTQUEUE *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  BLTQUEUE *v19; // rcx

  v2 = (BLTQUEUE *)operator new[](0xAC8uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = BLTQUEUE::BLTQUEUE(v2, 0LL, 0xFFFFFFFF, (struct _KEVENT *)((char *)this + 16), 0);
  *((_QWORD *)this + 1) = v2;
  if ( v2 )
  {
    v7 = BLTQUEUE::Startup(v2);
    v11 = v7;
    if ( v7 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v9, v8, v10);
      *(_QWORD *)(v18 + 24) = v11;
      WdLogEvent5_WdError(v18);
    }
    else
    {
      BLTQUEUE::EnableVSync(*((BLTQUEUE **)this + 1));
      if ( *(_BYTE *)this )
      {
        v15 = 64;
      }
      else
      {
        v14 = *((_DWORD *)DXGGLOBAL::GetGlobal(v13, v12) + 76028);
        if ( v14 )
          v15 = 0x3E8u / (v14 + 1);
        else
          v15 = 0;
        if ( !v15 )
          v15 = 32;
      }
      BLTQUEUE::UpdateDisplayModeInfo(*((BLTQUEUE **)this + 1), (struct _D3DDDI_RATIONAL)(v15 | 0x100000000LL), 0x300u);
    }
    if ( (int)v11 < 0 )
    {
      v19 = (BLTQUEUE *)*((_QWORD *)this + 1);
      if ( v19 )
      {
        BLTQUEUE::`scalar deleting destructor'(v19, 1);
        *((_QWORD *)this + 1) = 0LL;
      }
    }
    return (unsigned int)v11;
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v4, v3, v5, v6);
    *(_QWORD *)(v17 + 24) = 43LL;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}
