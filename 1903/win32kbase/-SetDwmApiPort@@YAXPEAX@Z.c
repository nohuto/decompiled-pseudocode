/*
 * XREFs of ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C00AC0FC
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00ABABC (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C00ABCBC (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDwmApiPort(void *a1)
{
  if ( !a1 && g_pDwmApiPort )
    ObfDereferenceObject(g_pDwmApiPort);
  g_pDwmApiPort = a1;
}
