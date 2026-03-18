/*
 * XREFs of Simulator_TestNotifyRet @ 0x1C0063E34
 * Callers:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     AMLIRegEventHandler @ 0x1C0005980 (AMLIRegEventHandler.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     Simulator_AsyncEvalObjectCallBack @ 0x1C00633B0 (Simulator_AsyncEvalObjectCallBack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Simulator_TestNotifyRet(_DWORD *Argument1, int a2)
{
  if ( g_SimulatorCallbackObject )
  {
    Argument1[18] = a2;
    Argument1[2] = 2;
    ExNotifyCallback(g_SimulatorCallbackObject, Argument1, 0LL);
    return (unsigned int)Argument1[18];
  }
  else
  {
    __debugbreak();
    return 3221225473LL;
  }
}
