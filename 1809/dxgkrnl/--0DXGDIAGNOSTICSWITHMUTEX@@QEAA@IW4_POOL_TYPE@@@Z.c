/*
 * XREFs of ??0DXGDIAGNOSTICSWITHMUTEX@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C003F13C
 * Callers:
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C023D850 (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C001F0AC (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 */

DXGDIAGNOSTICSWITHMUTEX *__fastcall DXGDIAGNOSTICSWITHMUTEX::DXGDIAGNOSTICSWITHMUTEX(
        DXGDIAGNOSTICSWITHMUTEX *this,
        unsigned int a2,
        enum _POOL_TYPE a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rax

  DXGDIAGNOSTICS::DXGDIAGNOSTICS(this, a2, PagedPool);
  v4 = operator new(0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    *((_DWORD *)v4 + 7) = 47;
    *((_DWORD *)v4 + 8) = 32;
    v4[2] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  *((_QWORD *)this + 5) = v4;
  if ( !v4 )
  {
    v5 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v5 + 24) = 137LL;
    WdLogEvent5_WdLowResource(v5);
  }
  return this;
}
