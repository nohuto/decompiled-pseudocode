/*
 * XREFs of FeatureServicing_43969648_EnableKey @ 0x140581E8C
 * Callers:
 *     IopCreateFile @ 0x14060BAC0 (IopCreateFile.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 * Callees:
 *     EvaluateCurrentState @ 0x1401B3674 (EvaluateCurrentState.c)
 */

char FeatureServicing_43969648_EnableKey()
{
  char result; // al

  if ( EvaluateCurrentState((_DWORD **)&g_Feature_Servicing_IoCheckFileObjectOpenedAsCopyDestination_43969648_FeatureDescriptorDetails) )
  {
    result = 1;
    EnableFeatureServicing_43969648 = 1;
  }
  else
  {
    EnableFeatureServicing_43969648 = 0;
    return 0;
  }
  return result;
}
