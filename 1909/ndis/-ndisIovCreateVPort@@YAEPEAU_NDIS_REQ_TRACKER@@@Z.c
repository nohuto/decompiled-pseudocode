/*
 * XREFs of ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00B00AC
 * Callers:
 *     ndisOidPreIovCreateVPort @ 0x1C00B31D0 (ndisOidPreIovCreateVPort.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisGetOidSourceHandle @ 0x1C0035154 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1C00B06BC (-ndisIovDeleteVPort@@YAHPEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B0AB0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z @ 0x1C00B0B48 (-ndisIovFindVFByVFId@@YAPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@G@Z.c)
 */

char __fastcall ndisIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char *v2; // rsi
  struct _NDIS_VF_BLOCK *v3; // r15
  struct _NDIS_MINIPORT_BLOCK *v4; // r13
  int v5; // r12d
  char v7; // r14
  __int64 v8; // rax
  const struct _GUID *v9; // rdx
  _BYTE *OidSourceHandle; // rax
  int v11; // edx
  __int64 v12; // rdi
  int *v13; // rbx
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rbp
  _NDIS_NIC_SWITCH_CAPABILITIES *NicSwitchCurrentCapabilities; // r10
  struct _NDIS_VF_BLOCK *VFByVFId; // rax
  char *PoolWithTag; // rax
  __int64 v18; // rcx
  _OWORD *v19; // rax
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  unsigned __int8 *AllocatedVPortIndices; // rbp
  size_t AllocatedVPortIndicesLength; // r15
  __int64 v24; // rax
  unsigned __int8 *v25; // rcx
  _BYTE *v26; // rax
  _BYTE *v27; // rdi
  int v28; // eax
  __int64 v29; // r8
  int v30; // ecx
  int v31; // eax
  int v32; // r12d
  _BYTE *v33; // r12
  __int64 v35; // [rsp+40h] [rbp-58h]
  int v36; // [rsp+A0h] [rbp+8h]
  _NDIS_PF_BLOCK *PFBlock; // [rsp+A8h] [rbp+10h]
  _BYTE *v38; // [rsp+B0h] [rbp+18h]
  int *v39; // [rsp+B8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 4);
  v2 = 0LL;
  PFBlock = 0LL;
  v3 = 0LL;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = 0;
  v36 = 0;
  v35 = v1;
  v7 = 1;
  v8 = v1;
  v9 = &WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v9,
      26,
      45,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v4);
    v8 = *((_QWORD *)a1 + 4);
  }
  *(_DWORD *)(v8 + 64) = 572;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  v38 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v12 = *(_QWORD *)(v1 + 40);
    v39 = (int *)(v12 + 12);
    if ( *(_DWORD *)(v12 + 12) )
      goto LABEL_6;
    SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v4, *(_DWORD *)(v12 + 8));
    if ( !SwitchBySwitchId )
      goto LABEL_6;
    NicSwitchCurrentCapabilities = v4->NicSwitchCurrentCapabilities;
    if ( SwitchBySwitchId->NumActiveVPorts == NicSwitchCurrentCapabilities->MaxNumVPorts
      || *(_WORD *)(v12 + 16) > 0x200u )
    {
      goto LABEL_6;
    }
    v11 = *(unsigned __int16 *)(v12 + 532);
    if ( (_WORD)v11 == 0xFFFF )
    {
      PFBlock = v4->PFBlock;
      if ( !PFBlock || *(_DWORD *)(v12 + 544) != 2 )
        goto LABEL_6;
    }
    else
    {
      VFByVFId = ndisIovFindVFByVFId(v4, v11);
      v3 = VFByVFId;
      if ( !VFByVFId || VFByVFId->NumAttachedVPorts || *(_DWORD *)(v12 + 544) != 1 )
        goto LABEL_6;
    }
    if ( (NicSwitchCurrentCapabilities->NicSwitchCapabilities & 4) != 0 )
    {
      if ( *(_DWORD *)(v12 + 536) > NicSwitchCurrentCapabilities->MaxNumQueuePairs
                                  - SwitchBySwitchId->SwitchParameters.NumQueuePairsForDefaultVPort
                                  - SwitchBySwitchId->NonDefaultQueuePairsInUse )
      {
LABEL_6:
        v13 = (int *)((char *)a1 + 40);
        *v13 = -1073741811;
        goto LABEL_48;
      }
    }
    else if ( *(_DWORD *)(v12 + 536) != NicSwitchCurrentCapabilities->MaxNumQueuePairsPerNonDefaultVPort )
    {
      goto LABEL_6;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x388uLL, 0x6F69444Eu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v13 = (int *)((char *)a1 + 40);
      *v13 = -1073741670;
      goto LABEL_48;
    }
    memset(PoolWithTag, 0, 0x388uLL);
    *((_QWORD *)v2 + 10) = v38;
    *((_DWORD *)v2 + 26) = 1;
    *((_QWORD *)v2 + 9) = v4;
    *((_QWORD *)v2 + 11) = SwitchBySwitchId;
    if ( v3 )
      *((_DWORD *)v2 + 16) |= 2u;
    else
      v3 = (struct _NDIS_VF_BLOCK *)PFBlock;
    v18 = 5LL;
    *((_QWORD *)v2 + 12) = v3;
    v19 = v2 + 112;
    do
    {
      *v19 = *(_OWORD *)v12;
      v19[1] = *(_OWORD *)(v12 + 16);
      v19[2] = *(_OWORD *)(v12 + 32);
      v19[3] = *(_OWORD *)(v12 + 48);
      v19[4] = *(_OWORD *)(v12 + 64);
      v19[5] = *(_OWORD *)(v12 + 80);
      v19[6] = *(_OWORD *)(v12 + 96);
      v19 += 8;
      v20 = *(_OWORD *)(v12 + 112);
      v12 += 128LL;
      *(v19 - 1) = v20;
      --v18;
    }
    while ( v18 );
    *v19 = *(_OWORD *)v12;
    v19[1] = *(_OWORD *)(v12 + 16);
    v19[2] = *(_OWORD *)(v12 + 32);
    v19[3] = *(_OWORD *)(v12 + 48);
    v19[4] = *(_OWORD *)(v12 + 64);
    v19[5] = *(_OWORD *)(v12 + 80);
    v21 = *(_OWORD *)(v12 + 96);
    *((_QWORD *)v2 + 112) = 0LL;
    *((_QWORD *)v2 + 111) = 0LL;
    v19[6] = v21;
    *((_QWORD *)v2 + 110) = v2 + 872;
    *((_QWORD *)v2 + 109) = v2 + 872;
    AllocatedVPortIndices = v4->AllocatedVPortIndices;
    AllocatedVPortIndicesLength = v4->AllocatedVPortIndicesLength;
    if ( AllocatedVPortIndices )
    {
      v24 = 0LL;
      if ( (_DWORD)AllocatedVPortIndicesLength )
      {
        v25 = v4->AllocatedVPortIndices;
        while ( *v25 == 0xFF )
        {
          v5 += 8;
          v24 = (unsigned int)(v24 + 1);
          ++v25;
          v36 = v5;
          if ( (unsigned int)v24 >= (unsigned int)AllocatedVPortIndicesLength )
            goto LABEL_33;
        }
        v29 = (unsigned int)v24;
        v30 = 1;
        v31 = AllocatedVPortIndices[v24];
        v11 = 0;
        while ( (v31 & v30) != 0 )
        {
          v30 *= 2;
          if ( (unsigned int)++v11 >= 8 )
            goto LABEL_33;
        }
        AllocatedVPortIndices[v29] = v30 | v31;
        v32 = v11 + v5;
        goto LABEL_44;
      }
    }
LABEL_33:
    v26 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(AllocatedVPortIndicesLength + 64), 0x6F69444Eu);
    v27 = v26;
    if ( v26 )
    {
      v33 = &v26[AllocatedVPortIndicesLength];
      memset(&v26[AllocatedVPortIndicesLength], 0, 0x40uLL);
      if ( AllocatedVPortIndices )
      {
        memmove(v27, AllocatedVPortIndices, AllocatedVPortIndicesLength);
        *v33 = 1;
        ExFreePoolWithTag(AllocatedVPortIndices, 0);
        v32 = v36;
      }
      else
      {
        *v27 = 3;
        v32 = 1;
      }
      v4->AllocatedVPortIndices = v27;
      v4->AllocatedVPortIndicesLength = AllocatedVPortIndicesLength + 64;
LABEL_44:
      v13 = (int *)((char *)a1 + 40);
      *((_DWORD *)v2 + 31) = v32;
      *v39 = v32;
      *(_QWORD *)(v35 + 152) = v2;
      *v13 = 0;
      v7 = 0;
      goto LABEL_48;
    }
    v28 = -1073741670;
  }
  else
  {
    v28 = -1073741637;
  }
  v13 = (int *)((char *)a1 + 40);
  *v13 = v28;
  if ( v2 )
    ndisIovDeleteVPort(v2);
LABEL_48:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      26,
      46,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v4,
      *v13);
  }
  return v7;
}
