/*
 * XREFs of ?ndisPdAwmDpcRoutine@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C007BC70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ?ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C007BD00 (-ndisTriggerPDDrainNotification@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall ndisPdAwmDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( (unsigned __int8)byte_1C00A026C >= 5u )
    WPP_SF_q(0x21u, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, DeferredContext[6]);
  *((_BYTE *)DeferredContext + 62) = 0;
  ndisTriggerPDDrainNotification((ULONG_PTR)DeferredContext);
}
