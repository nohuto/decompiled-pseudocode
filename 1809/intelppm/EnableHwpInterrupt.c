/*
 * XREFs of EnableHwpInterrupt @ 0x1C00069D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void EnableHwpInterrupt()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v1; // [rsp+8h] [rbp+8h]

  if ( *(_WORD *)((char *)&WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 5) )
  {
    v0 = __readmsr(0x773u);
    v1 = v0;
    if ( BYTE6(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    {
      LODWORD(v0) = v0 & 0xFFFFFFFC | 1;
      LODWORD(v1) = v0;
    }
    if ( BYTE5(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
      LODWORD(v1) = v0 | 4;
    __writemsr(0x773u, v1);
  }
  if ( HIBYTE(WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    __writemsr(0x1B2u, __readmsr(0x1B2u) | 0x2000000);
}
