/*
 * XREFs of KiPublishProcessorFeatures @ 0x1409ABE10
 * Callers:
 *     KiSetProcessorSignature @ 0x1405707A8 (KiSetProcessorSignature.c)
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
