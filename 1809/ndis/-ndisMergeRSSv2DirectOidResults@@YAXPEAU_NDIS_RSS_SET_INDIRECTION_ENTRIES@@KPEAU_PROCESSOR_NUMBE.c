/*
 * XREFs of ?ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBER@@U2@K11PEAH@Z @ 0x1C008021C
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C007FCC8 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     WPP_SF_dddDL @ 0x1C0081920 (WPP_SF_dddDL.c)
 */

void __fastcall ndisMergeRSSv2DirectOidResults(
        struct _NDIS_RSS_SET_INDIRECTION_ENTRIES *a1,
        unsigned int a2,
        struct _PROCESSOR_NUMBER *a3,
        struct _PROCESSOR_NUMBER a4,
        unsigned int a5,
        struct _PROCESSOR_NUMBER *a6,
        struct _PROCESSOR_NUMBER *a7,
        int *a8)
{
  unsigned int NumberOfRssEntries; // r13d
  UCHAR *v9; // rsi
  unsigned int v11; // r10d
  unsigned __int16 v12; // bp
  __int64 v13; // r9
  int v14; // r14d
  int v15; // edi
  unsigned __int16 v16; // r15
  struct _PROCESSOR_NUMBER *v18; // [rsp+90h] [rbp+18h]

  v18 = a3;
  NumberOfRssEntries = a1->NumberOfRssEntries;
  v9 = &a1->Header.Type + a1->RssEntryTableOffset;
  v11 = a2;
  v12 = 0;
  if ( NumberOfRssEntries )
  {
    v13 = 0LL;
    do
    {
      v14 = *(_DWORD *)&v9[24 * v12 + 20];
      v15 = *(_DWORD *)&v9[24 * v12 + 8];
      v16 = *(_WORD *)&v9[24 * v12 + 12];
      if ( v14 )
      {
        if ( (unsigned __int8)byte_1C00A025A >= 2u )
        {
          WPP_SF_dddDL(
            10LL,
            3LL * v12,
            *(unsigned int *)&v9[24 * v12 + 4],
            v13,
            v16,
            v15,
            *(_DWORD *)&v9[24 * v12 + 20]);
          a3 = v18;
          v11 = a2;
        }
        if ( (v15 & 2) != 0 )
        {
          *a7 = a4;
        }
        else if ( (v15 & 1) != 0 )
        {
          __debugbreak();
        }
        else
        {
          a6[v16] = a3[v16 % v11];
        }
        if ( !*a8 )
          *a8 = v14;
      }
      else if ( (v15 & 3) == 1 )
      {
        __debugbreak();
      }
      v13 = ++v12;
    }
    while ( v12 < NumberOfRssEntries );
  }
}
