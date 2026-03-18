/*
 * XREFs of ?WriteDiagnosticEntry@DXGDIAGNOSTICSWITHMUTEX@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C003F374
 * Callers:
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C023DED8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00052D8 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall DXGDIAGNOSTICSWITHMUTEX::WriteDiagnosticEntry(
        DXGDIAGNOSTICSWITHMUTEX *this,
        struct _DXGK_DIAG_HEADER *a2,
        __int64 a3)
{
  DXGFASTMUTEX *v5; // rcx
  __int64 v6; // rax
  unsigned int v8; // ebx

  v5 = (DXGFASTMUTEX *)*((_QWORD *)this + 5);
  if ( v5 )
  {
    DXGFASTMUTEX::Acquire(v5);
    v8 = DXGDIAGNOSTICS::WriteDiagnosticEntry(this, a2);
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 5));
    return v8;
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(0LL, a2, a3);
    *(_QWORD *)(v6 + 24) = this;
    WdLogEvent5_WdWarning(v6);
    return 3223193060LL;
  }
}
