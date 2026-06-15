/*
 * XREFs of ?LogTelemetry@AudioSrvVolumeTelemetry@@IEAA_NXZ @ 0x1800BD154
 * Callers:
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x1800BD3D4 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x1800C4E10 (--1CVolumeControlBase@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

char __fastcall AudioSrvVolumeTelemetry::LogTelemetry(AudioSrvVolumeTelemetry *this)
{
  char v1; // di
  __int64 v3; // rsi

  v1 = 0;
  if ( *((_QWORD *)this + 1) )
  {
    v3 = *((_QWORD *)this + 1);
    if ( GetTickCount64() - v3 > 0x3E8 )
    {
      (**(void (__fastcall ***)(AudioSrvVolumeTelemetry *, __int64, _QWORD))this)(
        this,
        v3 - *((_QWORD *)this + 2),
        *((unsigned int *)this + 6));
      return 1;
    }
  }
  return v1;
}
