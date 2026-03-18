/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x1403272A8
 * Callers:
 *     BiDeleteElement @ 0x1407125BC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140713390 (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x1408F08A0 (BcdDeleteObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14016E4A8 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x1403271E0 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x140713910 (BiCloseKey.c)
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
