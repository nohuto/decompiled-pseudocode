/*
 * XREFs of ZwLoadKey2 @ 0x1401C2130
 * Callers:
 *     BiLoadHive @ 0x14073F16C (BiLoadHive.c)
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
