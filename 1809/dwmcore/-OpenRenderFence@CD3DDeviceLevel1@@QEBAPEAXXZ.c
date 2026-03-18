/*
 * XREFs of ?OpenRenderFence@CD3DDeviceLevel1@@QEBAPEAXXZ @ 0x18008ABEC
 * Callers:
 *     ?Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z @ 0x18008AB80 (-Construct@AdapterInfo@CSurfaceManager@@QEAAXPEAVCDXGIAdapterLimited@@PEAVCD3DDeviceManager@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR_MaybeFailFast(0x88980003, 0LL, 0, LastError, 0xD2u);
  }
  return TargetHandle;
}
