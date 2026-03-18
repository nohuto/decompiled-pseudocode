/*
 * XREFs of isInputVirtualizationEnabled @ 0x1C0032A18
 * Callers:
 *     xxxUserProcessCallout @ 0x1C002DC40 (xxxUserProcessCallout.c)
 *     isChildPartition @ 0x1C00323E8 (isChildPartition.c)
 *     isRootPartition @ 0x1C00329F8 (isRootPartition.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C0060E70 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C006F050 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     NtUserInitialize @ 0x1C00A2D60 (NtUserInitialize.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00A9360 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00A95E0 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     InputUnInitialize @ 0x1C00B44E4 (InputUnInitialize.c)
 * Callees:
 *     <none>
 */

bool isInputVirtualizationEnabled()
{
  return gbInputVirtualizationEnabled && gSessionId == gInputVirtualizationSessionId;
}
