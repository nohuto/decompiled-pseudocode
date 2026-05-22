/*
 * XREFs of ?ConvertDIPSToPixels@ControllerProcessor@@AEAAKAEBK@Z @ 0x180075DA4
 * Callers:
 *     ?RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ @ 0x180076D58 (-RefreshCursorMagnetismRegistrySettings@ControllerProcessor@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ControllerProcessor::ConvertDIPSToPixels(ControllerProcessor *this, const unsigned int *a2)
{
  int v2; // ebx
  int v3; // eax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 276) + 24LL))(*((_QWORD *)this + 276), &v6);
  v5 = 100;
  if ( v3 >= 0 && (int)GetScaleFactorForMonitor(v6, &v5) >= 0 )
    return (unsigned int)(int)(float)((float)((float)v5 / 100.0) * (float)v2);
  return (unsigned int)v2;
}
