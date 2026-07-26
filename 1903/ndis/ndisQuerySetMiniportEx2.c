/*
 * XREFs of ndisQuerySetMiniportEx2 @ 0x1C003400C
 * Callers:
 *     ?ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003347C (-ndisQuerySupportedGuidToOidList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisQueryOidList @ 0x1C00339D4 (ndisQueryOidList.c)
 * Callees:
 *     ndisQuerySetMiniportEx @ 0x1C0006A60 (ndisQuerySetMiniportEx.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00693E4 (WPP_RECORDER_SF_DD_ea_1C00693E4.c)
 *     WPP_RECORDER_SF_Ddd @ 0x1C006964C (WPP_RECORDER_SF_Ddd_ea_1C006964C.c)
 */

__int64 __fastcall ndisQuerySetMiniportEx2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        ULONG Tag,
        _QWORD *a8,
        unsigned int *a9,
        _DWORD *a10)
{
  unsigned int v10; // esi
  void *v11; // rdi
  unsigned int i; // eax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  unsigned int v18; // ebx
  unsigned int v20; // ecx
  PVOID PoolWithTag; // rax
  int v22; // edx
  int v23; // [rsp+20h] [rbp-28h]

  v10 = 0;
  v11 = 0LL;
  for ( i = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, 0LL); ; i = ndisQuerySetMiniportEx(a1, 0LL, a3, 0, 0LL, 0LL) )
  {
    v18 = i;
    if ( i != -1073676268 && i != -2147483643 && i != -1073676266 )
      break;
    v20 = *(_DWORD *)(a3 + 56);
    if ( v20 <= v10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ddd(*((_QWORD *)WPP_GLOBAL_Control + 8), v15, v16, v17, v23, *(_DWORD *)(a3 + 32), v20, v10);
      v18 = -1073741823;
      goto LABEL_19;
    }
    v10 = *(_DWORD *)(a3 + 56);
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v10 = *(_DWORD *)(a3 + 56);
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10, Tag);
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v22) = 2;
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v22,
          11,
          11,
          (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
          v10,
          *(_DWORD *)(a3 + 32));
      }
      v18 = -1073741670;
      break;
    }
    *(_QWORD *)(a3 + 40) = PoolWithTag;
    *(_DWORD *)(a3 + 48) = v10;
  }
  if ( !v18 )
  {
    *a10 = *(_DWORD *)(a3 + 52);
    goto LABEL_7;
  }
LABEL_19:
  v10 = 0;
  *a10 = 0;
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    v11 = 0LL;
  }
LABEL_7:
  *a8 = v11;
  *a9 = v10;
  return v18;
}
