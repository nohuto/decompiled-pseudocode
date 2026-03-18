/*
 * XREFs of ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0253430
 * Callers:
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C023E180 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z @ 0x1C024DB84 (-GetReportExtendedUsage@InteractiveControlManager@@QEAAJKKGGGPEAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C024DE40 (-GetReportInfo@InteractiveControlManager@@QEAAJKKPEAUtagINTERACTIVECTRL_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InteractiveControlDevice::GetInputReport(
        InteractiveControlDevice *this,
        int a2,
        struct InteractiveControlInput **a3)
{
  struct InteractiveControlInput **v3; // rcx
  struct InteractiveControlInput *i; // rax

  v3 = (struct InteractiveControlInput **)((char *)this + 16);
  for ( i = *v3; ; i = *(struct InteractiveControlInput **)i )
  {
    if ( i == (struct InteractiveControlInput *)v3 )
    {
      *a3 = 0LL;
      return 0LL;
    }
    if ( *((_DWORD *)i + 8) == a2 )
      break;
  }
  *a3 = i;
  return 1LL;
}
