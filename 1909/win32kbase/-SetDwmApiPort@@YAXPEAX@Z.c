/*
 * XREFs of ?SetDwmApiPort@@YAXPEAX@Z @ 0x1C0067ABC
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C006747C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C006767C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetDwmApiPort(void *a1)
{
  if ( !a1 && g_pDwmApiPort )
    ObfDereferenceObject(g_pDwmApiPort);
  g_pDwmApiPort = a1;
}
