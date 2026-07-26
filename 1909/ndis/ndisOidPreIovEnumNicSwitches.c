/*
 * XREFs of ndisOidPreIovEnumNicSwitches @ 0x1C00B3680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0032B4C (ndisIovNicSwitchWithoutIovSupported.c)
 *     ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z @ 0x1C00AFCB4 (-ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@@Z.c)
 */

char __fastcall ndisOidPreIovEnumNicSwitches(__int64 a1)
{
  __int64 v1; // rdi
  char v3; // si
  __int64 v4; // rax
  KSPIN_LOCK *v5; // r15
  KIRQL v6; // al
  unsigned int v7; // ecx
  KIRQL v8; // r13
  unsigned int v9; // ebp
  __int64 v10; // rax
  _DWORD *v11; // rax
  unsigned int v12; // r12d
  struct _NDIS_NIC_SWITCH_BLOCK *Flink; // r14
  struct _NDIS_NIC_SWITCH_INFO *v14; // rbp
  unsigned int v15; // r15d
  __int64 v16; // rax
  unsigned int v18; // [rsp+88h] [rbp+10h]

  v1 = *(_QWORD *)a1;
  v3 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      19,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      a1);
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 52LL) = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4LL) & 0xFFFFFFFD) != 0 )
    goto LABEL_4;
  if ( v1 )
  {
    if ( !ndisIovNicSwitchWithoutIovSupported(v1) )
    {
      v4 = *(_QWORD *)(v1 + 4608);
      if ( !v4 || !*(_QWORD *)(v1 + 3568) || (*(_BYTE *)(v4 + 8) & 3) != 3 )
      {
LABEL_4:
        *(_DWORD *)(a1 + 40) = -1073741637;
        goto LABEL_19;
      }
    }
    v5 = (KSPIN_LOCK *)(v1 + 96);
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 96));
    v7 = *(_DWORD *)(v1 + 4688);
    v8 = v6;
    *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
    v9 = 572 * v7 + 16;
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 56LL) = v9;
    v10 = *(_QWORD *)(a1 + 32);
    v18 = v9;
    if ( v9 <= *(_DWORD *)(v10 + 48) )
    {
      v11 = *(_DWORD **)(v10 + 40);
      v12 = 0;
      *v11 = 1048960;
      v11[1] = 16;
      v11[2] = v7;
      v11[3] = 572;
      Flink = *(struct _NDIS_NIC_SWITCH_BLOCK **)(v1 + 4696);
      if ( Flink != (struct _NDIS_NIC_SWITCH_BLOCK *)(v1 + 4696) )
      {
        v14 = (struct _NDIS_NIC_SWITCH_INFO *)(v11 + 4);
        v15 = v7;
        do
        {
          if ( v12 >= v15 )
            break;
          ndisIovCopyNicSwitchInfo(v14, Flink);
          Flink = (struct _NDIS_NIC_SWITCH_BLOCK *)Flink->AdapterLink.Flink;
          v14 = (struct _NDIS_NIC_SWITCH_INFO *)((char *)v14 + 572);
          ++v12;
        }
        while ( Flink != (struct _NDIS_NIC_SWITCH_BLOCK *)(v1 + 4696) );
        v9 = v18;
        v5 = (KSPIN_LOCK *)(v1 + 96);
      }
      *(_QWORD *)(v1 + 520) = 0LL;
      KeReleaseSpinLock(v5, v8);
      v16 = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(v16 + 52) = v9;
    }
    else
    {
      *(_QWORD *)(v1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v8);
      *(_DWORD *)(a1 + 40) = -1073676266;
    }
  }
  else
  {
    v3 = 0;
  }
LABEL_19:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      20,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      v1,
      *(_DWORD *)(a1 + 40));
  return v3;
}
