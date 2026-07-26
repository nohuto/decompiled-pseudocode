/*
 * XREFs of ?ndisIovFreeVF@@YAHPEAU_NDIS_VF_BLOCK@@@Z @ 0x1C00B09AC
 * Callers:
 *     ndisOidPostIovFreeVF @ 0x1C00B2530 (ndisOidPostIovFreeVF.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisIovFreeVF(struct _NDIS_VF_BLOCK *a1)
{
  unsigned int v1; // ebx
  struct _NDIS_VF_BLOCK *v2; // rdi
  _NDIS_MINIPORT_BLOCK *Miniport; // rsi
  _NDIS_OPEN_BLOCK *Open; // rbp
  _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // r14
  KIRQL v6; // r9
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v9; // rdx
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *v11; // r8
  _LIST_ENTRY *v12; // rdx

  v1 = 0;
  v2 = a1;
  LOBYTE(Miniport) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      37,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      0,
      (char)a1);
  if ( v2->NumAttachedVPorts )
  {
    v1 = -1073741811;
    goto LABEL_16;
  }
  Miniport = v2->Miniport;
  Open = v2->Open;
  NicSwitch = v2->NicSwitch;
  v6 = KeAcquireSpinLockRaiseToDpc(&Miniport->Lock);
  Miniport->MiniportThread = KeGetCurrentThread();
  Flink = v2->AdapterLink.Flink;
  if ( (struct _NDIS_VF_BLOCK *)v2->AdapterLink.Flink->Blink != v2 )
    goto LABEL_19;
  Blink = v2->AdapterLink.Blink;
  if ( (struct _NDIS_VF_BLOCK *)Blink->Flink != v2 )
    goto LABEL_19;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  --Miniport->NumAllocatedVFs;
  if ( Open )
  {
    v9 = v2->OpenLink.Flink;
    if ( v9->Blink != &v2->OpenLink )
      goto LABEL_19;
    v10 = v2->OpenLink.Blink;
    if ( v10->Flink != &v2->OpenLink )
      goto LABEL_19;
    v10->Flink = v9;
    v9->Blink = v10;
    --Open->NumAllocatedVFs;
  }
  if ( NicSwitch )
  {
    v11 = v2->SwitchLink.Flink;
    if ( v11->Blink == &v2->SwitchLink )
    {
      v12 = v2->SwitchLink.Blink;
      if ( v12->Flink == &v2->SwitchLink )
      {
        v12->Flink = v11;
        v11->Blink = v12;
        --NicSwitch->NumAllocatedVFs;
        goto LABEL_15;
      }
    }
LABEL_19:
    __fastfail(3u);
  }
LABEL_15:
  Miniport->MiniportThread = 0LL;
  KeReleaseSpinLock(&Miniport->Lock, v6);
  ExFreePoolWithTag(v2, 0);
  LOBYTE(v2) = 0;
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      38,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)Miniport,
      (char)v2,
      v1);
  return v1;
}
