/*
 * XREFs of ?ndisIovAllocateVF@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00AF828
 * Callers:
 *     ndisOidPreIovAllocateVF @ 0x1C00B2A00 (ndisOidPreIovAllocateVF.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisGetOidSourceHandle @ 0x1C0035164 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00B08E0 (-ndisIovFindSwitchBySwitchId@@YAPEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisIovAllocateVF(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r15
  struct _NDIS_MINIPORT_BLOCK *v3; // r12
  char v4; // si
  __int64 v5; // rax
  int v6; // ebx
  _BYTE *OidSourceHandle; // rax
  int v8; // edx
  _BYTE *v9; // r13
  __int64 v10; // rsi
  struct _NDIS_NIC_SWITCH_BLOCK *SwitchBySwitchId; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *v12; // r14
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // rbp

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = 1;
  v5 = v1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      26,
      31,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3);
    v5 = *((_QWORD *)a1 + 4);
  }
  *(_DWORD *)(v5 + 64) = 1632;
  v6 = 0;
  *(_DWORD *)(*((_QWORD *)a1 + 4) + 60LL) = 0;
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  v9 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v10 = *(_QWORD *)(v1 + 40);
    if ( *(_WORD *)(v10 + 1626) == 0xFFFF
      && *(_DWORD *)(v10 + 1628) == -1
      && (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v10 + 8)), (v12 = SwitchBySwitchId) != 0LL)
      && SwitchBySwitchId->NumAllocatedVFs != SwitchBySwitchId->SwitchParameters.NumVFs )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6C0uLL, 0x6F69444Eu);
      v14 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x6C0uLL);
        v14[18] = 1;
        *((_QWORD *)v14 + 6) = v3;
        *((_QWORD *)v14 + 7) = v9;
        *((_QWORD *)v14 + 8) = v12;
        *((_QWORD *)v14 + 11) = v14 + 20;
        *((_QWORD *)v14 + 10) = v14 + 20;
        memmove(v14 + 24, (const void *)v10, 0x660uLL);
        *(_QWORD *)(v1 + 144) = v14;
        v4 = 0;
      }
      else
      {
        v6 = -1073741670;
        v4 = 1;
      }
      *((_DWORD *)a1 + 10) = v6;
    }
    else
    {
      LOBYTE(v6) = 13;
      v4 = 1;
      *((_DWORD *)a1 + 10) = -1073741811;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
    LOBYTE(v6) = -69;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      26,
      32,
      (struct _GUID *)&WPP_75eef42a2ecf379be2bfd46d452e97a5_Traceguids,
      (char)v3,
      v6);
  }
  return v4;
}
