/*
 * XREFs of ndisIovAllocateVF @ 0x1C00F8AEC
 * Callers:
 *     ndisOidPreIovAllocateVF @ 0x1C00F9540 (ndisOidPreIovAllocateVF.c)
 * Callees:
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisIovFindSwitchBySwitchId @ 0x1C006FF78 (ndisIovFindSwitchBySwitchId.c)
 */

char __fastcall ndisIovAllocateVF(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r12
  char v4; // si
  __int64 v5; // rax
  int v6; // ebx
  _BYTE *OidSourceHandle; // rax
  _BYTE *v8; // r13
  __int64 v9; // rsi
  __int64 *SwitchBySwitchId; // rax
  __int64 *v11; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // r14

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)a1;
  v4 = 1;
  v5 = v1;
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    WPP_SF_q(0x1Fu, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3);
    v5 = *(_QWORD *)(a1 + 32);
  }
  *(_DWORD *)(v5 + 64) = 1632;
  v6 = 0;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  OidSourceHandle = (_BYTE *)ndisGetOidSourceHandle(v1);
  v8 = OidSourceHandle;
  if ( OidSourceHandle && *OidSourceHandle == 18 )
  {
    v9 = *(_QWORD *)(v1 + 40);
    if ( *(_WORD *)(v9 + 1626) != 0xFFFF
      || *(_DWORD *)(v9 + 1628) != -1
      || (SwitchBySwitchId = ndisIovFindSwitchBySwitchId(v3, *(_DWORD *)(v9 + 8)), (v11 = SwitchBySwitchId) == 0LL)
      || *((_DWORD *)SwitchBySwitchId + 18) == *((_DWORD *)SwitchBySwitchId + 158) )
    {
      v6 = -1073741811;
LABEL_9:
      *(_DWORD *)(a1 + 40) = v6;
      v4 = 1;
      goto LABEL_15;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x6C0uLL, 0x6F69444Eu);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = -1073741670;
      goto LABEL_9;
    }
    memset(PoolWithTag, 0, 0x6C0uLL);
    v13[18] = 1;
    *((_QWORD *)v13 + 6) = v3;
    *((_QWORD *)v13 + 7) = v8;
    *((_QWORD *)v13 + 8) = v11;
    *((_QWORD *)v13 + 11) = v13 + 20;
    *((_QWORD *)v13 + 10) = v13 + 20;
    memmove(v13 + 24, (const void *)v9, 0x660uLL);
    *(_QWORD *)(v1 + 144) = v13;
    v4 = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 40) = -1073741637;
    v6 = -1073741637;
  }
LABEL_15:
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_qD(0x20u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v3, v6);
  return v4;
}
