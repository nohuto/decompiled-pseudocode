/*
 * XREFs of ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1C00FCFD4
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0077B80 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEB_W_K@Z @ 0x1C00FCE6C (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEB_W_K@Z.c)
 */

void __fastcall ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(
        char a1,
        const struct _GUID *a2,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *a3,
        struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *a4)
{
  const wchar_t **v5; // rdi
  __int64 v9; // rbp
  const wchar_t **v10; // rbx
  __int64 v11; // rdi

  v5 = (const wchar_t **)off_1C0087000;
  v9 = 11LL;
  do
  {
    if ( a3->WakeReasonUnspec )
      ndisPublishSleepStudyCustomData(a1, a2, *v5, a3->WakeReasonUnspec);
    a3 = (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)((char *)a3 + 4);
    ++v5;
    --v9;
  }
  while ( v9 );
  v10 = (const wchar_t **)off_1C0086FD0;
  v11 = 5LL;
  do
  {
    if ( a4->WakeReasonBadIndication )
      ndisPublishSleepStudyCustomData(a1, a2, *v10, a4->WakeReasonBadIndication);
    a4 = (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)((char *)a4 + 4);
    ++v10;
    --v11;
  }
  while ( v11 );
}
