/*
 * XREFs of BiSetFirmwareModifiedFromObject @ 0x140348BE4
 * Callers:
 *     BiDeleteElement @ 0x14073C8D8 (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 *     BcdDeleteObject @ 0x14092E510 (BcdDeleteObject.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1401779A0 (BiSetFirmwareModified.c)
 *     BiOpenStoreKeyFromObject @ 0x140348B00 (BiOpenStoreKeyFromObject.c)
 *     BiCloseKey @ 0x14073DCB4 (BiCloseKey.c)
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
