/*
 * XREFs of ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C022EA78
 * Callers:
 *     ?EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ @ 0x1C022E994 (-EnsureEmulationRunning@REMOTE_VSYNC@@AEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C003DFC8 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0154E7C (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C015503C (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C0246284 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z @ 0x1C0248E30 (-UpdateDisplayModeInfo@BLTQUEUE@@QEAAXU_D3DDDI_RATIONAL@@I@Z.c)
 */

__int64 __fastcall REMOTE_VSYNC::StartEmulation(REMOTE_VSYNC *this)
{
  BLTQUEUE *v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // ecx
  __int64 v12; // rax
  BLTQUEUE *v13; // rcx

  v2 = (BLTQUEUE *)operator new(0xA90uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v2 )
    v2 = BLTQUEUE::BLTQUEUE(v2, 0LL, -1, (struct _KEVENT *)((char *)this + 16), 0);
  *((_QWORD *)this + 1) = v2;
  if ( v2 )
  {
    v6 = BLTQUEUE::Startup((char *)v2);
    v8 = v6;
    if ( v6 < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v12 + 24) = v8;
      WdLogEvent5_WdError(v12);
    }
    else
    {
      BLTQUEUE::EnableVSync(*((BLTQUEUE **)this + 1));
      if ( *(_BYTE *)this )
      {
        v10 = 64;
      }
      else
      {
        v11 = *((_DWORD *)DXGGLOBAL::GetGlobal(v9) + 5110);
        if ( v11 )
          v10 = 0x3E8u / (v11 + 1);
        else
          v10 = 0;
        if ( !v10 )
          v10 = 32;
      }
      BLTQUEUE::UpdateDisplayModeInfo(*((BLTQUEUE **)this + 1), (struct _D3DDDI_RATIONAL)(v10 | 0x100000000LL), 0x300u);
    }
    if ( (int)v8 < 0 )
    {
      v13 = (BLTQUEUE *)*((_QWORD *)this + 1);
      if ( v13 )
      {
        BLTQUEUE::`scalar deleting destructor'(v13, 1);
        *((_QWORD *)this + 1) = 0LL;
      }
    }
    return (unsigned int)v8;
  }
  else
  {
    v4 = WdLogNewEntry5_WdLowResource(v3);
    *(_QWORD *)(v4 + 24) = 43LL;
    WdLogEvent5_WdLowResource(v4);
    return 3221225495LL;
  }
}
