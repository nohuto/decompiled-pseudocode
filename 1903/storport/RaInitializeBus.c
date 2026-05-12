/*
 * XREFs of RaInitializeBus @ 0x1C006DF38
 * Callers:
 *     RaidAdapterHack @ 0x1C001CFD8 (RaidAdapterHack.c)
 *     RaidAdapterConfigureResources @ 0x1C001D45C (RaidAdapterConfigureResources.c)
 * Callees:
 *     RaQueryInterface @ 0x1C001D0B4 (RaQueryInterface.c)
 */

__int64 __fastcall RaInitializeBus(bool *a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = RaQueryInterface(a2, (__int64)a2, a3, a4, (__int64)(a1 + 8));
  *a1 = (int)result >= 0;
  return result;
}
