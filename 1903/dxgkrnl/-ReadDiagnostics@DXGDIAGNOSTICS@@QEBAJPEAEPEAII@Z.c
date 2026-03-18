/*
 * XREFs of ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C00411D8
 * Callers:
 *     DxgkIddGetAdapterSessionDiagnostics @ 0x1C0234438 (DxgkIddGetAdapterSessionDiagnostics.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C02403A0 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C02724DC (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 *     ?CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0295810 (-CreateBlackScreenLiveDump@DISPLAYSTATECHECKER@@AEAAJK_K000PEAW4DxgkrnlLiveDumpFailureReason@1@@.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02B0AD8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z @ 0x1C0001064 (-ReadDiagnosticsInternal@DXGDIAGNOSTICS@@AEBAJIIQEAEPEAI@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?IsCurrentProcessAdmin@@YAEXZ @ 0x1C0032ECC (-IsCurrentProcessAdmin@@YAEXZ.c)
 */

__int64 __fastcall DXGDIAGNOSTICS::ReadDiagnostics(
        DXGFASTMUTEX **this,
        unsigned __int8 *a2,
        unsigned int *a3,
        int CurrentProcessSessionId)
{
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int DiagnosticsInternal; // ebx

  if ( !a3 )
    return 3221225485LL;
  if ( a2 )
  {
    v9 = *a3;
    if ( *a3 )
      memset(a2, 0, v9);
  }
  else
  {
    v9 = 0;
  }
  if ( CurrentProcessSessionId == -1 && !IsCurrentProcessAdmin() )
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v11, v10);
  DXGFASTMUTEX::Acquire(this[7]);
  DiagnosticsInternal = DXGDIAGNOSTICS::ReadDiagnosticsInternal(
                          (DXGDIAGNOSTICS *)this,
                          CurrentProcessSessionId,
                          v9,
                          a2,
                          a3);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this[7]);
  if ( *a3 > v9 )
    return (unsigned int)-2147483643;
  return DiagnosticsInternal;
}
