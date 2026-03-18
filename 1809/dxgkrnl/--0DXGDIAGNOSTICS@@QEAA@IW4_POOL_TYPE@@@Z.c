/*
 * XREFs of ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C001F0AC
 * Callers:
 *     ??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C003F13C (--0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0152300 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C015434C (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

DXGDIAGNOSTICS *__fastcall DXGDIAGNOSTICS::DXGDIAGNOSTICS(DXGDIAGNOSTICS *this, unsigned int a2, POOL_TYPE a3)
{
  PVOID v5; // rax
  __int64 v7; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = 35;
  v5 = operator new[](a2, 0x4B677844u, a3);
  *((_QWORD *)this + 4) = v5;
  if ( v5 )
  {
    *((_DWORD *)this + 4) = a2;
    memset(v5, 0, a2);
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v7 + 24) = *((unsigned int *)this + 4);
    WdLogEvent5_WdLowResource(v7);
  }
  return this;
}
