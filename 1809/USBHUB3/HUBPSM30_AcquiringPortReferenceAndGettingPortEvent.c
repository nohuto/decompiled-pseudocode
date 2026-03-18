/*
 * XREFs of HUBPSM30_AcquiringPortReferenceAndGettingPortEvent @ 0x1C0010740
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0004C20 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBMUX_AcquirePortPowerReference @ 0x1C000DBE8 (HUBMUX_AcquirePortPowerReference.c)
 */

__int64 __fastcall HUBPSM30_AcquiringPortReferenceAndGettingPortEvent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 960);
  HUBMUX_AcquirePortPowerReference((volatile signed __int32 *)v1);
  if ( *(int *)(*(_QWORD *)v1 + 40LL) < 0 && (*(_WORD *)(v1 + 184) & 0x1E0) == 0xE0 )
    WPP_RECORDER_SF_(*(_QWORD *)(v1 + 1432), 2u, 4u, 0x6Du, (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
  return HUBHTX_Get30PortChangeEvent((_QWORD *)v1, v2);
}
