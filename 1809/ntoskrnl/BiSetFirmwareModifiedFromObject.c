/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x140327598
 * Callers:
 *     BiDeleteElement @ 0x14071383C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140714610 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x1408F1B40 (BcdDeleteObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14016E5C8 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1403274D0 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x140714B90 (BiCloseKey.c)
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
