/*
 * XREFs of ?ndisPcwGetInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B98D8
 * Callers:
 *     ?ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z @ 0x1C00B95BC (-ndisPcwMatchInstance@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B9708 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00F843C (-ndisPcwEnumerateSingleInstance@@YAJPEAU_PCW_BUFFER@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z @ 0x1C0012BB8 (-RtlUnicodeStringCopyString@@YAJPEAU_UNICODE_STRING@@PEB_W@Z.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ @ 0x1C0012F04 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEB_WZZ.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0012F8C (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C005184C (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 */

__int64 __fastcall ndisPcwGetInstanceName(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const wchar_t *a2,
        struct _UNICODE_STRING *a3)
{
  __int64 result; // rax
  ULONG v6; // r8d
  _UNICODE_STRING *pModifiedInstanceName; // rdx

  if ( (_DWORD)a2 == -2 )
    return RtlUnicodeStringCopy(a3, &ndisPcwSystemTotalInstanceName, (ULONG)a3);
  if ( (_DWORD)a2 == 4095 )
    result = RtlUnicodeStringCopyString(a3, a2);
  else
    result = RtlUnicodeStringPrintf(a3, L"%u, ", (unsigned int)a2);
  if ( (int)result >= 0 )
  {
    pModifiedInstanceName = a1->pModifiedInstanceName;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = a1->pAdapterInstanceName;
    return RtlUnicodeStringCat(a3, pModifiedInstanceName, v6);
  }
  return result;
}
