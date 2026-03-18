/*
 * XREFs of DxgkGetMonitorEdid @ 0x1C023B9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x1C0239510 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetMonitorEdid(
        struct _LUID a1,
        unsigned int a2,
        const GUID *a3,
        unsigned int *a4,
        unsigned __int8 *a5)
{
  unsigned int v5; // r9d

  v5 = (unsigned int)a3;
  LOBYTE(a3) = 1;
  return DxgkGetMonitorDescriptor(a1, a2, a3, v5, a4, a5);
}
