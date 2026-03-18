/*
 * XREFs of ?OpenRenderFence@CD3DDeviceLevel1@@QEBAPEAXXZ @ 0x1800CEEE0
 * Callers:
 *     ?Construct@AdapterInfo@CGlobalSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x1800CEE74 (-Construct@AdapterInfo@CGlobalSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManage.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

HANDLE __fastcall CD3DDeviceLevel1::OpenRenderFence(HANDLE *this)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v3; // rax
  signed int LastError; // eax
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  TargetHandle = 0LL;
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v3 = GetCurrentProcess();
  if ( !DuplicateHandle(v3, this[75], CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, 0LL, 0, LastError, 0xD0u, 0LL);
  }
  return TargetHandle;
}
