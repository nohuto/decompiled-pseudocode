/*
 * XREFs of imp_VfWdfMemoryGetBuffer @ 0x1C00BDDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfMemoryGetBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFMEMORY__ *Memory,
        unsigned __int64 *BufferSize)
{
  return WdfVersion.Functions.pfnWdfMemoryGetBuffer(DriverGlobals, Memory, BufferSize);
}
