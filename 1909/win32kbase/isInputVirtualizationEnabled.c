/*
 * XREFs of isInputVirtualizationEnabled @ 0x1C0031CC8
 * Callers:
 *     xxxUserProcessCallout @ 0x1C002CAF0 (xxxUserProcessCallout.c)
 *     isChildPartition @ 0x1C0031698 (isChildPartition.c)
 *     isRootPartition @ 0x1C0031CA8 (isRootPartition.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C005B550 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     NtUserInitialize @ 0x1C00A1B20 (NtUserInitialize.c)
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x1C00A85D0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 *     ?PostInitialize@CKeyboardSensor@@EEAAJXZ @ 0x1C00A8760 (-PostInitialize@CKeyboardSensor@@EEAAJXZ.c)
 *     ?PostInitialize@CMouseSensor@@EEAAJXZ @ 0x1C00A8E30 (-PostInitialize@CMouseSensor@@EEAAJXZ.c)
 *     InputUnInitialize @ 0x1C00B1A04 (InputUnInitialize.c)
 * Callees:
 *     <none>
 */

bool isInputVirtualizationEnabled()
{
  return gbInputVirtualizationEnabled && gSessionId == gInputVirtualizationSessionId;
}
