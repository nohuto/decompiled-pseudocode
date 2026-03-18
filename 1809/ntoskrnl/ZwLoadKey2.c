/*
 * XREFs of ZwLoadKey2 @ 0x1401BA1B0
 * Callers:
 *     BiLoadHive @ 0x140711304 (BiLoadHive.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwLoadKey2(
        POBJECT_ATTRIBUTES KeyObjectAttributes,
        POBJECT_ATTRIBUTES FileObjectAttributes,
        ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyObjectAttributes, FileObjectAttributes, *(_QWORD *)&Flags);
}
