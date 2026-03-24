/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1403273A8
 * Callers:
 *     BiDeleteElement @ 0x14071259C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140713370 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x1408F0880 (BcdDeleteObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14016E4C8 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1403272E0 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 */

__int64 __fastcall BiSetFirmwareModifiedFromObject(void *a1)
{
  int v1; // edi
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v1 = BiOpenStoreKeyFromObject(a1, &v3);
  if ( v1 >= 0 )
    BiSetFirmwareModified(v3, 1);
  if ( v3 )
    BiCloseKey(v3);
  return (unsigned int)v1;
}
