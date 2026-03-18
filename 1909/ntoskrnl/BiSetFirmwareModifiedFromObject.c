/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x140348644
 * Callers:
 *     BiDeleteElement @ 0x14073E7D8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x14092DF84 (BcdDeleteObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140178090 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x140348560 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x14073FBB4 (BiCloseKey.c)
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
