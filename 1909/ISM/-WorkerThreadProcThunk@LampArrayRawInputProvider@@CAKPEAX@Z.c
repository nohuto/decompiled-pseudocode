/*
 * XREFs of ?WorkerThreadProcThunk@LampArrayRawInputProvider@@CAKPEAX@Z @ 0x18002AB30
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x1800084F0 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ @ 0x180016850 (-WorkerThreadProc@LampArrayRawInputProvider@@AEAAJXZ.c)
 */

__int64 __fastcall LampArrayRawInputProvider::WorkerThreadProcThunk(LampArrayDevice ***Parameter)
{
  DWORD v2; // edi
  HMODULE v3; // rbx

  if ( Parameter )
  {
    v2 = LampArrayRawInputProvider::WorkerThreadProc(Parameter);
    v3 = (HMODULE)Parameter[12];
    Parameter[12] = 0LL;
    LampArrayRawInputProvider::Release((LampArrayRawInputProvider *)Parameter);
    FreeLibraryAndExitThread(v3, v2);
  }
  return 87LL;
}
