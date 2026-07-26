/*
 * XREFs of ndisMCoOidRequestToRequest @ 0x1C006AFF0
 * Callers:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1C0069CEC (WPP_RECORDER_SF_qqDd.c)
 *     NdisMCoRequestComplete @ 0x1C0086810 (NdisMCoRequestComplete.c)
 */

__int64 __fastcall ndisMCoOidRequestToRequest(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  __int64 v5; // r15
  unsigned int v7; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v9; // rsi
  NDIS_STATUS v10; // eax
  char v12[4]; // [rsp+40h] [rbp-38h]

  v3 = *(_DWORD *)(a3 + 32);
  v5 = a2;
  v7 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      52,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      a3,
      *(_DWORD *)(a3 + 32));
  }
  if ( *(_DWORD *)(a3 + 4) == 12 )
  {
    v7 = -1073741637;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xB0uLL, 0x6572444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xB0uLL);
      v9[8] = *(_DWORD *)(a3 + 4);
      v9[10] = *(_DWORD *)(a3 + 32);
      *((_QWORD *)v9 + 6) = *(_QWORD *)(a3 + 40);
      v9[14] = *(_DWORD *)(a3 + 48);
      v9[15] = *(_DWORD *)(a3 + 52);
      v9[16] = *(_DWORD *)(a3 + 56);
      v9[6] |= 0x400u;
      *((_QWORD *)v9 + 1) = a3;
      v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _DWORD *))(a1[470] + 288LL))(a1[3], v5, v9);
      v7 = v10;
      if ( v10 != 259 )
      {
        NdisMCoRequestComplete(v10, a1, (PNDIS_REQUEST)v9);
        v7 = 259;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = v7;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0x35u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)a1,
      a3,
      v3,
      *(_DWORD *)v12);
  }
  return v7;
}
