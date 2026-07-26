/*
 * XREFs of ndisOidPostIovCreateVPort @ 0x1C00B23A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisIovAddVPortToPFList@@YAXPEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00AF958 (-ndisIovAddVPortToPFList@@YAXPEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovAddVPortToVFList@@YAXPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00AF9A8 (-ndisIovAddVPortToVFList@@YAXPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostIovCreateVPort(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rax
  struct _NDIS_VPORT_BLOCK *v5; // rbx
  void *v6; // rcx
  __int64 *v7; // rcx
  unsigned int VPortId; // r9d
  _LIST_ENTRY *v9; // rax
  _LIST_ENTRY *Flink; // rcx
  _NDIS_OPEN_BLOCK *Open; // r8
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_OpenLink; // rdx
  _LIST_ENTRY *v15; // rax
  _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // r8
  _LIST_ENTRY *j; // rax
  _LIST_ENTRY *v18; // rcx
  _LIST_ENTRY *p_SwitchLink; // rdx
  _LIST_ENTRY *v20; // rax
  struct _NDIS_VF_BLOCK *AttachedFunction; // rcx
  KIRQL v22; // r10

  v1 = a1[4];
  v3 = *a1;
  v4 = *a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      47,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v1);
    v4 = *a1;
  }
  if ( v4 )
  {
    v5 = *(struct _NDIS_VPORT_BLOCK **)(v1 + 152);
    if ( v5 )
    {
      if ( *((_DWORD *)a1 + 10) )
      {
        v6 = *(void **)(v1 + 152);
        *(_BYTE *)(((unsigned __int64)v5->VPortParams.VPortId >> 3) + *(_QWORD *)(v3 + 4760)) &= ~(1 << (v5->VPortParams.VPortId & 7));
        ExFreePoolWithTag(v6, 0);
        goto LABEL_7;
      }
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
      *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
      v7 = *(__int64 **)(v3 + 4744);
      if ( v7 == (__int64 *)(v3 + 4744) )
      {
LABEL_15:
        v9 = (_LIST_ENTRY *)v7[1];
        Flink = v9->Flink;
        if ( v9->Flink->Blink != v9 )
          goto LABEL_29;
        v5->AdapterLink.Flink = Flink;
        v5->AdapterLink.Blink = v9;
        Flink->Blink = &v5->AdapterLink;
        v9->Flink = &v5->AdapterLink;
        ++*(_DWORD *)(v3 + 4736);
      }
      else
      {
        VPortId = v5->VPortParams.VPortId;
        while ( *((_DWORD *)v7 + 31) != VPortId )
        {
          if ( *((_DWORD *)v7 + 31) <= VPortId )
          {
            v7 = (__int64 *)*v7;
            if ( v7 != (__int64 *)(v3 + 4744) )
              continue;
          }
          goto LABEL_15;
        }
      }
      Open = v5->Open;
      for ( i = Open->VPortList.Flink; i != &Open->VPortList; i = i->Flink )
      {
        if ( HIDWORD(i[6].Blink) > v5->VPortParams.VPortId )
          break;
      }
      Blink = i->Blink;
      p_OpenLink = &v5->OpenLink;
      v15 = Blink->Flink;
      if ( Blink->Flink->Blink == Blink )
      {
        v5->OpenLink.Blink = Blink;
        p_OpenLink->Flink = v15;
        v15->Blink = p_OpenLink;
        Blink->Flink = p_OpenLink;
        ++Open->NumActiveVPorts;
        NicSwitch = v5->NicSwitch;
        for ( j = NicSwitch->VPortList.Flink; j != &NicSwitch->VPortList; j = j->Flink )
        {
          if ( HIDWORD(j[5].Blink) > v5->VPortParams.VPortId )
            break;
        }
        v18 = j->Blink;
        p_SwitchLink = &v5->SwitchLink;
        v20 = v18->Flink;
        if ( v18->Flink->Blink == v18 )
        {
          p_SwitchLink->Flink = v20;
          v5->SwitchLink.Blink = v18;
          v20->Blink = p_SwitchLink;
          v18->Flink = p_SwitchLink;
          ++NicSwitch->NumActiveVPorts;
          NicSwitch->NonDefaultQueuePairsInUse += v5->VPortParams.NumQueuePairs;
          AttachedFunction = (struct _NDIS_VF_BLOCK *)v5->AttachedFunction;
          if ( (v5->Flags & 2) != 0 )
            ndisIovAddVPortToVFList(AttachedFunction, v5);
          else
            ndisIovAddVPortToPFList((struct _NDIS_PF_BLOCK *)AttachedFunction, v5);
          *(_QWORD *)(v3 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v22);
          goto LABEL_7;
        }
      }
LABEL_29:
      __fastfail(3u);
    }
  }
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      48,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v3,
      v1);
}
