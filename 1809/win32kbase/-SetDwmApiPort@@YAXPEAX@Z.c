/*
 * XREFs of ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0097FBC
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C0097AB0 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0097CC0 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDwmApiPort(void *a1)
{
  if ( !a1 && g_pDwmApiPort )
    ObfDereferenceObject(g_pDwmApiPort);
  g_pDwmApiPort = a1;
}
