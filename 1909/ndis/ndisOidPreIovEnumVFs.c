/*
 * XREFs of ndisOidPreIovEnumVFs @ 0x1C00B38B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     ?ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z @ 0x1C00AFDDC (-ndisIovCopyVFInfo@@YAXPEAU_NDIS_NIC_SWITCH_VF_INFO@@PEAU_NDIS_VF_BLOCK@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B0AB0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPreIovEnumVFs(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  __int64 v2; // r15
  unsigned int NumAllocatedVFs; // esi
  _BYTE *v4; // r14
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // r13
  _DWORD *v6; // rbx
  char v7; // bp
  _DWORD *v8; // rcx
  int v9; // eax
  __int64 v10; // rdx
  _BYTE *OidSourceHandle; // rax
  __int64 v12; // r8
  KIRQL v13; // r9
  _LIST_ENTRY *p_VFList; // r12
  _QWORD *v15; // rdx
  bool v16; // zf
  unsigned int v17; // ecx
  unsigned int v18; // r15d
  __int64 v19; // rax
  _DWORD *v20; // rax
  unsigned int v21; // ecx
  struct _NDIS_NIC_SWITCH_VF_INFO *Flink; // rax
  struct _NDIS_NIC_SWITCH_VF_INFO *v23; // rbx
  struct _NDIS_VF_BLOCK *v24; // rdx
  __int64 v25; // rax
  KIRQL v28; // [rsp+98h] [rbp+10h]
  int v29; // [rsp+A0h] [rbp+18h]
  struct _NDIS_NIC_SWITCH_VF_INFO *v30; // [rsp+A8h] [rbp+20h]
  struct _NDIS_NIC_SWITCH_VF_INFO *v31; // [rsp+A8h] [rbp+20h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v2 = *(_QWORD *)(a1 + 32);
  NumAllocatedVFs = 0;
  v4 = 0LL;
  SwitchBySwitchId = 0LL;
  v6 = (_DWORD *)a1;
  v7 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      41,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1,
      (char)v1);
  *(_DWORD *)(v2 + 60) = 0;
  v8 = (_DWORD *)*((_QWORD *)v6 + 4);
  if ( v8[1] != 12 )
    goto LABEL_46;
  v6[10] = 0;
  if ( v8[12] < 0x18u )
  {
    v9 = -1073676268;
LABEL_8:
    v8[17] = 24;
    v6[10] = v9;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 64LL) = 0;
    goto LABEL_47;
  }
  if ( v8[13] < 0x18u )
  {
    v9 = -1073676266;
    goto LABEL_8;
  }
  if ( !v1 )
  {
    v7 = 0;
    goto LABEL_47;
  }
  v10 = *(_QWORD *)(*(_QWORD *)v6 + 4608LL);
  if ( v10 && *(_QWORD *)(*(_QWORD *)v6 + 3568LL) && (*(_BYTE *)(v10 + 8) & 3) == 3 )
  {
    v8[15] = 0;
    *(_DWORD *)(*((_QWORD *)v6 + 4) + 64LL) = 24;
    OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v2);
    if ( OidSourceHandle && *OidSourceHandle == 18 )
      v4 = OidSourceHandle;
    if ( (*(_DWORD *)(v12 + 4) & 1) == 0
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v1, *(_DWORD *)(v12 + 8))) != 0LL )
    {
      v28 = KeAcquireSpinLockRaiseToDpc(&v1->Lock);
      v13 = v28;
      v1->MiniportThread = KeGetCurrentThread();
      if ( v4 )
      {
        if ( SwitchBySwitchId )
        {
          v15 = (_QWORD *)*((_QWORD *)v4 + 101);
          while ( v15 != (_QWORD *)(v4 + 808) )
          {
            v16 = v15[6] == (_QWORD)SwitchBySwitchId;
            v17 = NumAllocatedVFs + 1;
            v15 = (_QWORD *)*v15;
            if ( !v16 )
              v17 = NumAllocatedVFs;
            NumAllocatedVFs = v17;
          }
        }
        else
        {
          NumAllocatedVFs = *((_DWORD *)v4 + 200);
        }
        p_VFList = (_LIST_ENTRY *)(v4 + 808);
      }
      else
      {
        if ( SwitchBySwitchId )
          NumAllocatedVFs = SwitchBySwitchId->NumAllocatedVFs;
        else
          NumAllocatedVFs = v1->NumAllocatedVFs;
        p_VFList = &v1->VFList;
      }
      v18 = 1632 * NumAllocatedVFs + 24;
      *(_DWORD *)(*((_QWORD *)v6 + 4) + 68LL) = v18;
      v19 = *((_QWORD *)v6 + 4);
      if ( v18 <= *(_DWORD *)(v19 + 52) )
      {
        v20 = *(_DWORD **)(v19 + 40);
        v20[3] = 24;
        *v20 = 1573248;
        v20[4] = NumAllocatedVFs;
        v20[5] = 1632;
        v21 = 0;
        v30 = (struct _NDIS_NIC_SWITCH_VF_INFO *)(v20 + 6);
        Flink = (struct _NDIS_NIC_SWITCH_VF_INFO *)p_VFList->Flink;
        v29 = 0;
        if ( p_VFList->Flink != p_VFList )
        {
          v23 = v30;
          do
          {
            if ( v21 >= NumAllocatedVFs )
              break;
            v24 = (struct _NDIS_VF_BLOCK *)((char *)Flink - 16);
            if ( !v4 )
              v24 = (struct _NDIS_VF_BLOCK *)Flink;
            Flink = *(struct _NDIS_NIC_SWITCH_VF_INFO **)Flink;
            v31 = Flink;
            if ( !SwitchBySwitchId || v24->NicSwitch == SwitchBySwitchId )
            {
              ndisIovCopyVFInfo(v23, v24);
              v23 = (struct _NDIS_NIC_SWITCH_VF_INFO *)((char *)v23 + 1632);
              Flink = v31;
              v21 = ++v29;
            }
          }
          while ( Flink != (struct _NDIS_NIC_SWITCH_VF_INFO *)p_VFList );
          v6 = (_DWORD *)a1;
          v13 = v28;
        }
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v13);
        v25 = *((_QWORD *)v6 + 4);
        v6[10] = 0;
        *(_DWORD *)(v25 + 60) = v18;
      }
      else
      {
        v6[10] = -1073676266;
        v1->MiniportThread = 0LL;
        KeReleaseSpinLock(&v1->Lock, v28);
      }
    }
    else
    {
      v6[10] = -1073741811;
    }
  }
  else
  {
LABEL_46:
    v6[10] = -1073741637;
  }
LABEL_47:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      42,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v1,
      v6[10]);
  return v7;
}
