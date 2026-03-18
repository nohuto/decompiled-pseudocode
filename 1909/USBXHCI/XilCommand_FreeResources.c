/*
 * XREFs of XilCommand_FreeResources @ 0x1C000C074
 * Callers:
 *     Command_PrepareHardware @ 0x1C005E440 (Command_PrepareHardware.c)
 *     Command_ReleaseHardware @ 0x1C005E5E0 (Command_ReleaseHardware.c)
 * Callees:
 *     XilCommand_FreeSecureResources @ 0x1C000C0A0 (XilCommand_FreeSecureResources.c)
 *     XilCoreCommand_FreeResources @ 0x1C0047404 (XilCoreCommand_FreeResources.c)
 */

__int64 __fastcall XilCommand_FreeResources(__int64 a1)
{
  _BYTE *v1; // rcx

  v1 = (_BYTE *)(a1 + 136);
  if ( *v1 )
    return XilCommand_FreeSecureResources();
  else
    return XilCoreCommand_FreeResources(v1 + 32);
}
