/*
 * XREFs of ?ndisMergeRSSv2DirectOidResults@@YAXPEAU_NDIS_RSS_SET_INDIRECTION_ENTRIES@@KPEAU_PROCESSOR_NUMBER@@U2@K11PEAH@Z @ 0x1C00C5374
 * Callers:
 *     ?ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU_PROCESSOR_NUMBER@@U3@G22@Z @ 0x1C00C4E20 (-ndisInternalSetRSSv2IndirectionTable@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@GPEAU.c)
 * Callees:
 *     WPP_RECORDER_SF_dddDL @ 0x1C00C6E18 (WPP_RECORDER_SF_dddDL.c)
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
  unsigned int v11; // r9d
  unsigned __int16 v12; // bp
  char v13; // cl
  int v14; // r14d
  int v15; // edi
  unsigned __int16 v16; // r15
  int v17; // [rsp+20h] [rbp-68h]
  struct _PROCESSOR_NUMBER *v19; // [rsp+A0h] [rbp+18h]

  v19 = a3;
  NumberOfRssEntries = a1->NumberOfRssEntries;
  v9 = &a1->Header.Type + a1->RssEntryTableOffset;
  v11 = a2;
  v12 = 0;
  if ( NumberOfRssEntries )
  {
    v13 = 0;
    do
    {
      v14 = *(_DWORD *)&v9[24 * v12 + 20];
      v15 = *(_DWORD *)&v9[24 * v12 + 8];
      v16 = *(_WORD *)&v9[24 * v12 + 12];
      if ( v14 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_dddDL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3 * v12,
            (_DWORD)a3,
            10,
            v17,
            *(_DWORD *)&v9[24 * v12 + 4],
            v13,
            v16,
            v15,
            *(_DWORD *)&v9[24 * v12 + 20]);
          a3 = v19;
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
