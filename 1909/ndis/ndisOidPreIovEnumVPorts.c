/*
 * XREFs of ndisOidPreIovEnumVPorts @ 0x1C00B3BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B4C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     ?ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00AFFA0 (-ndisIovCopyVPortInfo@@YAXPEAU_NDIS_NIC_SWITCH_VPORT_INFO@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B0AB0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00B0B48 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisOidPreIovEnumVPorts(__int64 a1, __int16 a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rsi
  __int64 v3; // rbp
  unsigned int NumAttachedVPorts; // r15d
  _NDIS_OPEN_BLOCK *v5; // r12
  struct _NDIS_VF_BLOCK *VFByVFId; // r14
  _NDIS_PF_BLOCK *PFBlock; // r13
  __int64 v8; // rbx
  char v9; // di
  _DWORD *v10; // r8
  int v11; // eax
  __int64 v12; // r8
  int v13; // r9d
  _NDIS_NIC_SWITCH_CAPABILITIES *v14; // r10
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  __int64 v16; // rdi
  _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *v18; // rbp
  bool v19; // zf
  KIRQL v20; // r8
  struct _NDIS_VPORT_BLOCK *p_AttachedVPortList; // rdi
  struct _NDIS_VPORT_BLOCK *v22; // rdx
  __int64 v23; // rax
  _NDIS_OPEN_BLOCK *v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // ebp
  __int64 v27; // rax
  _DWORD *v28; // rax
  struct _NDIS_VPORT_BLOCK *Flink; // r14
  unsigned int v30; // eax
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v31; // rbp
  struct _NDIS_VPORT_BLOCK *v32; // rdx
  __int64 v33; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // [rsp+40h] [rbp-68h]
  struct _NDIS_VF_BLOCK *v36; // [rsp+48h] [rbp-60h]
  struct _NDIS_NIC_SWITCH_VPORT_INFO *v37; // [rsp+50h] [rbp-58h]
  struct _NDIS_MINIPORT_BLOCK *v38; // [rsp+58h] [rbp-50h]
  KIRQL v40; // [rsp+B8h] [rbp+10h]
  int v41; // [rsp+C0h] [rbp+18h]
  unsigned int v42; // [rsp+C8h] [rbp+20h]

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  NumAttachedVPorts = 0;
  v38 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = 0LL;
  SwitchBySwitchId = 0LL;
  VFByVFId = 0LL;
  v36 = 0LL;
  PFBlock = 0LL;
  v8 = a1;
  v9 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      53,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      (char)v2);
  }
  *(_DWORD *)(v3 + 60) = 0;
  v10 = *(_DWORD **)(v8 + 32);
  if ( v10[1] == 12 )
  {
    *(_DWORD *)(v8 + 40) = 0;
    if ( v10[12] < 0x1Cu )
    {
      v11 = -1073676268;
LABEL_8:
      v10[17] = 28;
      *(_DWORD *)(v8 + 40) = v11;
      *(_DWORD *)(*(_QWORD *)(v8 + 32) + 60LL) = 0;
      *(_DWORD *)(*(_QWORD *)(v8 + 32) + 64LL) = 0;
      goto LABEL_71;
    }
    if ( v10[13] < 0x1Cu )
    {
      v11 = -1073676266;
      goto LABEL_8;
    }
    if ( !v2 )
    {
      v9 = 0;
      goto LABEL_71;
    }
    if ( ndisIovNicSwitchWithoutIovSupported((__int64)v2)
      || (SriovCurrentCapabilities = v2->SriovCurrentCapabilities) != 0LL
      && v2->NicSwitchCurrentCapabilities != v14
      && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
    {
      v16 = *(_QWORD *)(v3 + 40);
      *(_DWORD *)(v12 + 60) = (_DWORD)v14;
      *(_DWORD *)(*(_QWORD *)(v8 + 32) + 64LL) = v13;
      OidSourceHandle = (_NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v3);
      if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
        v5 = OidSourceHandle;
      if ( (*(_DWORD *)(v16 + 4) & 2) != 0 )
      {
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v2, *(_DWORD *)(v16 + 8));
        v18 = SwitchBySwitchId;
        if ( !SwitchBySwitchId )
        {
LABEL_20:
          *(_DWORD *)(v8 + 40) = -1073741811;
LABEL_21:
          v9 = 1;
          goto LABEL_71;
        }
      }
      else
      {
        v18 = 0LL;
      }
      if ( (*(_DWORD *)(v16 + 4) & 1) != 0 )
      {
        a2 = *(_WORD *)(v16 + 12);
        if ( a2 == -1 )
        {
          PFBlock = v2->PFBlock;
          v19 = PFBlock == 0LL;
        }
        else
        {
          VFByVFId = ndisIovFindVFByVFId(v2, a2);
          v36 = VFByVFId;
          v19 = VFByVFId == 0LL;
        }
        if ( v19 )
          goto LABEL_20;
      }
      v40 = KeAcquireSpinLockRaiseToDpc(&v2->Lock);
      v20 = v40;
      v2->MiniportThread = KeGetCurrentThread();
      if ( !v5 )
      {
        if ( PFBlock )
        {
          NumAttachedVPorts = PFBlock->NumAttachedVPorts;
          p_AttachedVPortList = (struct _NDIS_VPORT_BLOCK *)&PFBlock->AttachedVPortList;
        }
        else if ( VFByVFId )
        {
          NumAttachedVPorts = VFByVFId->NumAttachedVPorts;
          p_AttachedVPortList = (struct _NDIS_VPORT_BLOCK *)&VFByVFId->AttachedVPortList;
        }
        else if ( v18 )
        {
          NumAttachedVPorts = v18->NumActiveVPorts;
          p_AttachedVPortList = (struct _NDIS_VPORT_BLOCK *)&v18->VPortList;
        }
        else
        {
          NumAttachedVPorts = v2->NumActiveVPorts;
          p_AttachedVPortList = (struct _NDIS_VPORT_BLOCK *)&v2->VPortList;
        }
LABEL_51:
        v26 = 576 * NumAttachedVPorts + 28;
        v42 = v26;
        *(_DWORD *)(*(_QWORD *)(v8 + 32) + 68LL) = v26;
        v27 = *(_QWORD *)(v8 + 32);
        if ( v26 <= *(_DWORD *)(v27 + 52) )
        {
          v28 = *(_DWORD **)(v27 + 40);
          *v28 = 1835392;
          v28[4] = 28;
          v28[5] = NumAttachedVPorts;
          v28[6] = 576;
          Flink = (struct _NDIS_VPORT_BLOCK *)p_AttachedVPortList->AdapterLink.Flink;
          v37 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)(v28 + 7);
          v30 = 0;
          v41 = 0;
          if ( (struct _NDIS_VPORT_BLOCK *)p_AttachedVPortList->AdapterLink.Flink != p_AttachedVPortList )
          {
            v31 = v37;
            do
            {
              if ( v30 >= NumAttachedVPorts )
                break;
              if ( v36 || PFBlock )
              {
                v32 = (struct _NDIS_VPORT_BLOCK *)((char *)Flink - 48);
              }
              else if ( SwitchBySwitchId )
              {
                v32 = (struct _NDIS_VPORT_BLOCK *)((char *)Flink - 32);
              }
              else if ( v5 )
              {
                v32 = (struct _NDIS_VPORT_BLOCK *)((char *)Flink - 16);
              }
              else
              {
                v32 = Flink;
              }
              Flink = (struct _NDIS_VPORT_BLOCK *)Flink->AdapterLink.Flink;
              if ( !v5 || v5 == v32->Open )
              {
                ndisIovCopyVPortInfo(v31, v32);
                v31 = (struct _NDIS_NIC_SWITCH_VPORT_INFO *)((char *)v31 + 576);
                v30 = ++v41;
              }
            }
            while ( Flink != p_AttachedVPortList );
            v8 = a1;
            v2 = v38;
            v26 = v42;
            v20 = v40;
          }
          v2->MiniportThread = 0LL;
          KeReleaseSpinLock(&v2->Lock, v20);
          v33 = *(_QWORD *)(v8 + 32);
          *(_DWORD *)(v8 + 40) = 0;
          *(_DWORD *)(v33 + 60) = v26;
        }
        else
        {
          *(_DWORD *)(v8 + 40) = -1073676266;
          v2->MiniportThread = 0LL;
          KeReleaseSpinLock(&v2->Lock, v40);
        }
        goto LABEL_21;
      }
      if ( PFBlock )
      {
        p_AttachedVPortList = (struct _NDIS_VPORT_BLOCK *)&PFBlock->AttachedVPortList;
      }
      else if ( VFByVFId )
      {
        p_AttachedVPortList = (struct _NDIS_VPORT_BLOCK *)&VFByVFId->AttachedVPortList;
      }
      else
      {
        if ( !v18 )
        {
          NumAttachedVPorts = v5->NumActiveVPorts;
          p_AttachedVPortList = (struct _NDIS_VPORT_BLOCK *)&v5->VPortList;
          goto LABEL_51;
        }
        p_AttachedVPortList = (struct _NDIS_VPORT_BLOCK *)&v18->VPortList;
      }
      v22 = (struct _NDIS_VPORT_BLOCK *)p_AttachedVPortList->AdapterLink.Flink;
      while ( v22 != p_AttachedVPortList )
      {
        if ( VFByVFId || (v23 = 48LL, PFBlock) )
          v23 = 32LL;
        v24 = *(_NDIS_OPEN_BLOCK **)((char *)&v22->AdapterLink.Flink + v23);
        v25 = NumAttachedVPorts + 1;
        v22 = (struct _NDIS_VPORT_BLOCK *)v22->AdapterLink.Flink;
        if ( v24 != v5 )
          v25 = NumAttachedVPorts;
        NumAttachedVPorts = v25;
      }
      goto LABEL_51;
    }
  }
  *(_DWORD *)(v8 + 40) = -1073741637;
LABEL_71:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      26,
      54,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v2,
      *(_DWORD *)(v8 + 40));
  }
  return v9;
}
