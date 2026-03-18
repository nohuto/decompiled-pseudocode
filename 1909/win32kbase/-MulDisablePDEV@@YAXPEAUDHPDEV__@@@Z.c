/*
 * XREFs of ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0125320
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C001A510 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     EngFreeMem @ 0x1C0072250 (EngFreeMem.c)
 */

void __fastcall MulDisablePDEV(struct PDEV ***pv)
{
  __int64 v2; // r8
  struct PDEV **i; // rbx

  vSpDisableMultiMon(pv[4]);
  for ( i = *pv; i; i = (struct PDEV **)*i )
    PDEVOBJ::vUnreferencePdev(i + 7, 0, v2);
  EngFreeMem(pv);
}
