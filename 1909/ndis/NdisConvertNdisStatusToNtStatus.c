/*
 * XREFs of NdisConvertNdisStatusToNtStatus @ 0x1C001A480
 * Callers:
 *     NdisWdfRegisterMiniportDriver @ 0x1C009F350 (NdisWdfRegisterMiniportDriver.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0106E7C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NdisConvertNdisStatusToNtStatus(int a1)
{
  __int64 result; // rax

  if ( a1 > 0 && a1 != 259 && a1 != 1076035585 )
    return 3221225473LL;
  result = 3221225507LL;
  if ( a1 != -1073676266 )
    return (unsigned int)a1;
  return result;
}
