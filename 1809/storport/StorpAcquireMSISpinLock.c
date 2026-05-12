/*
 * XREFs of StorpAcquireMSISpinLock @ 0x1C003F6A0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000E3C0 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003B974 (WPP_SF_.c)
 */

__int64 __fastcall StorpAcquireMSISpinLock(__int64 a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = 0;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 - 16);
    if ( !*(_BYTE *)(*(_QWORD *)v4 + 4513LL) )
      return (unsigned int)-1056964601;
    v5 = *(_QWORD *)(*(_QWORD *)v4 + 4496LL);
    if ( a2 < *(_DWORD *)(v5 + 4) )
    {
      *a3 = KeAcquireInterruptSpinLock(*(PKINTERRUPT *)(v5 + 48LL * a2 + 24));
      return v3;
    }
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x37u,
      (__int64)&WPP_890ff0257e5a37fc61b1814295f1a13c_Traceguids);
  }
  return (unsigned int)-1056964602;
}
