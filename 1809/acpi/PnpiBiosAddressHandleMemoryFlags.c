/*
 * XREFs of PnpiBiosAddressHandleMemoryFlags @ 0x1C0099590
 * Callers:
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009A0DC (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C009F444 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00AF9C0 (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002680 (WPP_RECORDER_SF_D.c)
 */

__int16 __fastcall PnpiBiosAddressHandleMemoryFlags(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int16 v5; // dx
  __int16 result; // ax

  v4 = *(_BYTE *)(a1 + 5) & 0x1E;
  if ( (*(_BYTE *)(a1 + 5) & 0x1E) != 0 )
  {
    switch ( v4 )
    {
      case 2:
        *(_WORD *)(a2 + 4) |= 0x20u;
        break;
      case 4:
        *(_WORD *)(a2 + 4) |= 8u;
        break;
      case 6:
        *(_WORD *)(a2 + 4) |= 4u;
        break;
      default:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xDu,
          0xAu,
          (__int64)&WPP_19c1b0bbd5523038c65c89ceb5c545fb_Traceguids,
          *(unsigned __int8 *)(a1 + 5));
        break;
    }
  }
  v5 = *(_WORD *)(a2 + 4);
  result = v5 | 1;
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    v5 |= 1u;
  *(_WORD *)(a2 + 4) = v5;
  return result;
}
