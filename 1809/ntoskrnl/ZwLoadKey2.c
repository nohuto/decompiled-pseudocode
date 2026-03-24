/*
 * XREFs of ZwLoadKey2 @ 0x1401BA1D0
 * Callers:
 *     BiLoadHive @ 0x1407112E4 (BiLoadHive.c)
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
