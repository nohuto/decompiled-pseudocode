/*
 * XREFs of KiPublishProcessorFeatures @ 0x1409AAE10
 * Callers:
 *     KiSetProcessorSignature @ 0x14056F7A8 (KiSetProcessorSignature.c)
 * Callees:
 *     <none>
 */

bool KiPublishProcessorFeatures()
{
  bool result; // al

  result = (KeFeatureBits2 & 2) != 0;
  MEMORY[0xFFFFF78000000295] = result;
  return result;
}
