/*
 * XREFs of PiDrvDbGetFilePathVolume @ 0x14028B608
 * Callers:
 *     PiDrvDbResolveSystemFilePath @ 0x1408400C8 (PiDrvDbResolveSystemFilePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDrvDbGetFilePathVolume(unsigned __int16 *a1)
{
  __int16 v1; // dx
  unsigned __int16 v2; // r8

  v1 = *a1;
  v2 = 0;
  if ( *a1 && a1[1] == 58 )
  {
    if ( (unsigned __int16)(v1 - 65) > 0x19u )
    {
      if ( (unsigned __int16)(v1 - 97) <= 0x19u )
        return (unsigned __int16)(v1 - 32);
    }
    else
    {
      return *a1;
    }
  }
  return v2;
}
