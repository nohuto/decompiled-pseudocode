/*
 * XREFs of ?HasDDAChanged@CDisplay@@QEBA_NXZ @ 0x18001D798
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800B6770 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ @ 0x1801A6DF0 (-HandleDDAArrivalOrDeparture@CDesktopRenderTarget@@EEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CDisplay::HasDDAChanged(CDisplay *this)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    LOBYTE(v2) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) != 0;
    LOBYTE(v2) = *((unsigned __int8 *)this + 319) != v2;
  }
  return v2;
}
