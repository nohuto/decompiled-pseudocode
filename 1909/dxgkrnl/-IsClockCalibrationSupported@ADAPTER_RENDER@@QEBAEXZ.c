/*
 * XREFs of ?IsClockCalibrationSupported@ADAPTER_RENDER@@QEBAEXZ @ 0x1C0002404
 * Callers:
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C00D0AB8 (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015FC34 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_RENDER::IsClockCalibrationSupported(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 2);
  result = 0;
  if ( *(_QWORD *)(v1 + 776) )
    return *(_DWORD *)(v1 + 2184) >= 4864;
  return result;
}
