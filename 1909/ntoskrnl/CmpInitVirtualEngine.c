/*
 * XREFs of CmpInitVirtualEngine @ 0x140762CBC
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     <none>
 */

bool CmpInitVirtualEngine()
{
  bool result; // al

  result = 0;
  if ( !CmpShareSystemHives )
    result = CmVEEnabled == 1;
  CmpVEEnabled = result;
  return result;
}
