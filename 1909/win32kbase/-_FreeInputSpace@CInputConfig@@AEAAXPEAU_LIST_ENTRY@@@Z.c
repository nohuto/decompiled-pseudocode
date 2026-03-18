/*
 * XREFs of ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00A0D14
 * Callers:
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0051768 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ??_GCInputConfig@@AEAAPEAXI@Z @ 0x1C00B1C70 (--_GCInputConfig@@AEAAPEAXI@Z.c)
 *     ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C0185AFC (-CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C0185C0C (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x1C00A0D78 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputConfig::_FreeInputSpace(CInputConfig *this, struct _LIST_ENTRY *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx

  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  CInputSpace::FreeRegions((CInputSpace *)&a2[1]);
  Win32FreePool((__int64)a2);
}
