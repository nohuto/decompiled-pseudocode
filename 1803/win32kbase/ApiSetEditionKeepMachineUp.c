/*
 * XREFs of ApiSetEditionKeepMachineUp @ 0x1C0066B04
 * Callers:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C01215E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionKeepMachineUp(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  if ( (int)IsEditionKeepMachineUpSupported() < 0 )
    return 0LL;
  else
    return EditionKeepMachineUp(a1, a2, a3, a4);
}
