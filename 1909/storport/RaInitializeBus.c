/*
 * XREFs of RaInitializeBus @ 0x1C006E738
 * Callers:
 *     RaidAdapterHack @ 0x1C001A7A8 (RaidAdapterHack.c)
 *     RaidAdapterConfigureResources @ 0x1C001C010 (RaidAdapterConfigureResources.c)
 * Callees:
 *     RaQueryInterface @ 0x1C001A884 (RaQueryInterface.c)
 */

__int64 __fastcall RaInitializeBus(bool *a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = RaQueryInterface(a2, (__int64)a2, a3, a4, (__int64)(a1 + 8));
  *a1 = (int)result >= 0;
  return result;
}
