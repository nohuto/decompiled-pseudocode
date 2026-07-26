/*
 * XREFs of ndisMSetSriovAttributes @ 0x1C00BAFE8
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ndisIovInitVf @ 0x1C00F9080 (ndisIovInitVf.c)
 */

__int64 __fastcall ndisMSetSriovAttributes(__int64 a1, __int64 a2)
{
  unsigned int LocallyUniqueId; // ebx
  __int64 v5; // rax
  size_t v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *PoolWithTag; // rax
  _WORD *v10; // rdx
  unsigned __int16 v11; // ax
  size_t v12; // r8
  _DWORD *v13; // rax
  _WORD *v14; // rdx
  unsigned __int16 v15; // ax
  __int64 v17; // rax
  void *v18; // rcx
  void *v19; // rcx

  LocallyUniqueId = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qq(0x8Eu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
  v5 = *(_QWORD *)(a2 + 48);
  if ( !*(_BYTE *)(v5 + 1) || (v6 = 12LL, *(_WORD *)(v5 + 2) < 0xCu) )
  {
    LocallyUniqueId = -1073741811;
LABEL_36:
    if ( (int)(LocallyUniqueId + 0x80000000) < 0 || LocallyUniqueId == -1073676283 )
      goto LABEL_22;
    goto LABEL_38;
  }
  v7 = *(_QWORD *)(a2 + 56);
  if ( !*(_BYTE *)(v7 + 1)
    || *(_WORD *)(v7 + 2) < 0xCu
    || (*(_BYTE *)(v5 + 8) & 3) == 3 && ((v8 = *(_QWORD *)(a1 + 3584)) == 0 || *(_BYTE *)(v8 + 1) < 2u)
    || (*(_BYTE *)(v7 + 8) & 3) == 3 && ((v17 = *(_QWORD *)(a1 + 3592)) == 0 || *(_BYTE *)(v17 + 1) < 2u) )
  {
    LocallyUniqueId = -1073741811;
LABEL_38:
    v18 = *(void **)(a1 + 4648);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(a1 + 4648) = 0LL;
    }
    v19 = *(void **)(a1 + 4640);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(a1 + 4640) = 0LL;
    }
    goto LABEL_22;
  }
  if ( *(_QWORD *)(a1 + 4648) || *(_QWORD *)(a1 + 4640) )
  {
    LocallyUniqueId = -1073676283;
    goto LABEL_22;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xCuLL, 0x6F69444Eu);
  *(_QWORD *)(a1 + 4640) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_29:
    LocallyUniqueId = -1073741670;
    goto LABEL_38;
  }
  *(_QWORD *)PoolWithTag = 0LL;
  PoolWithTag[2] = 0;
  v10 = *(_WORD **)(a2 + 48);
  v11 = v10[1];
  v12 = v11;
  if ( v11 >= 0xCu )
    v12 = 12LL;
  memmove(*(void **)(a1 + 4640), v10, v12);
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 8LL) & 3) != 3 || ndisSystemSupportsSriov )
  {
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0xCuLL, 0x6F69444Eu);
    *(_QWORD *)(a1 + 4648) = v13;
    if ( v13 )
    {
      *(_QWORD *)v13 = 0LL;
      v13[2] = 0;
      v14 = *(_WORD **)(a2 + 56);
      v15 = v14[1];
      if ( v15 < 0xCu )
        v6 = v15;
      memmove(*(void **)(a1 + 4648), v14, v6);
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(a1 + 4916));
      if ( !LocallyUniqueId )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 56) + 8LL) & 5) != 5 )
          goto LABEL_22;
        LocallyUniqueId = ndisIovInitVf(a1);
        if ( !LocallyUniqueId )
          goto LABEL_22;
      }
      goto LABEL_36;
    }
    goto LABEL_29;
  }
LABEL_22:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qqd(0x8Fu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2, LocallyUniqueId);
  return LocallyUniqueId;
}
