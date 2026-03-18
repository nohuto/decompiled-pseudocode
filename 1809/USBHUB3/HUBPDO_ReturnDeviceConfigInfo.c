/*
 * XREFs of HUBPDO_ReturnDeviceConfigInfo @ 0x1C00131A8
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00150A0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     HUBID_BuildHardwareID @ 0x1C00193BC (HUBID_BuildHardwareID.c)
 *     HUBID_BuildCompatibleID @ 0x1C0019B98 (HUBID_BuildCompatibleID.c)
 *     memmove @ 0x1C003C640 (memmove.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBPDO_ReturnDeviceConfigInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  unsigned __int16 v5; // r9
  int v6; // edi
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned __int16 v14; // r9
  __int64 v15; // rsi
  POOL_TYPE v16; // ecx
  PVOID PoolWithTag; // rax
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx

  v2 = *(_QWORD *)(a2 + 184);
  v4 = *(_QWORD *)(v2 + 8);
  if ( !v4 )
  {
    v5 = 19;
LABEL_3:
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      v5,
      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids);
    return (unsigned int)-1073741811;
  }
  if ( *(_DWORD *)v4 != 1 )
  {
    v5 = 20;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(v4 + 4) != 204 )
  {
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 1432LL),
      3u,
      5u,
      0x15u,
      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
      *(_DWORD *)(v4 + 4),
      204);
    return (unsigned int)-1073741789;
  }
  memset(*(void **)(v2 + 8), 0, 0xCCuLL);
  *(_DWORD *)(v4 + 8) = 0;
  v7 = 0;
  *(_DWORD *)v4 = 1;
  *(_DWORD *)(v4 + 4) = 204;
  v8 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v8 + 2496) & 2) != 0 )
  {
    *(_DWORD *)(v4 + 8) = 1;
    v7 = 1;
    v8 = *(_QWORD *)(a1 + 16);
  }
  if ( *(_WORD *)(v8 + 2458) >= 0x200u )
  {
    *(_DWORD *)(v4 + 8) = 1;
    v7 = 1;
    v8 = *(_QWORD *)(a1 + 16);
  }
  if ( (*(_DWORD *)(v8 + 40) & 2) != 0 )
  {
    v7 |= 8u;
    *(_DWORD *)(v4 + 8) = v7;
    v8 = *(_QWORD *)(a1 + 16);
  }
  if ( (*(_DWORD *)(v8 + 40) & 2) != 0 )
  {
    v7 |= 4u;
    *(_DWORD *)(v4 + 8) = v7;
    v8 = *(_QWORD *)(a1 + 16);
  }
  if ( *(_DWORD *)(v8 + 256) == 2 )
  {
    v7 |= 2u;
    *(_DWORD *)(v4 + 8) = v7;
    v8 = *(_QWORD *)(a1 + 16);
  }
  if ( (*(_DWORD *)(v8 + 40) & 0x100) != 0 )
  {
    v7 |= 0x20u;
    *(_DWORD *)(v4 + 8) = v7;
    v8 = *(_QWORD *)(a1 + 16);
  }
  if ( !*(_BYTE *)(v8 + 240) )
  {
    v7 |= 0x10u;
    *(_DWORD *)(v4 + 8) = v7;
    v8 = *(_QWORD *)(a1 + 16);
  }
  if ( *(_DWORD *)(v8 + 92) == 100 )
    *(_DWORD *)(v4 + 8) = v7 | 0x40;
  v9 = *(_QWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v9 + 1632) & 1) != 0 )
  {
    *(_DWORD *)(v4 + 132) |= 1u;
    v10 = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(v4 + 136) = *(_OWORD *)(v10 + 1664);
    *(_OWORD *)(v4 + 152) = *(_OWORD *)(v10 + 1680);
    *(_OWORD *)(v4 + 168) = *(_OWORD *)(v10 + 1696);
    *(_OWORD *)(v4 + 184) = *(_OWORD *)(v10 + 1712);
    *(_DWORD *)(v4 + 200) = *(_DWORD *)(v10 + 1728);
    v9 = *(_QWORD *)(a1 + 24);
  }
  v11 = HUBID_BuildCompatibleID(v9, 0LL, v4 + 28);
  v12 = *(_QWORD *)(a1 + 24);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v11 = HUBID_BuildHardwareID(v12, 0LL, v4 + 12);
    v15 = *(_QWORD *)(a1 + 24);
    v6 = v11;
    if ( v11 >= 0 )
    {
      v6 = 0;
      *(_QWORD *)(v4 + 44) = 0LL;
      *(_QWORD *)(v4 + 52) = 0LL;
      if ( *(_QWORD *)(v15 + 2168) && *(_DWORD *)(v15 + 2164) )
      {
        v16 = ExDefaultNonPagedPoolType;
        *(_OWORD *)(v4 + 44) = *(_OWORD *)(v15 + 2160);
        PoolWithTag = ExAllocatePoolWithTag(v16, *(unsigned int *)(v15 + 2164), 0x64334855u);
        *(_QWORD *)(v4 + 52) = PoolWithTag;
        if ( PoolWithTag )
          memmove(PoolWithTag, *(const void **)(v15 + 2168), *(unsigned int *)(v15 + 2164));
        else
          v6 = -1073741670;
      }
      goto LABEL_36;
    }
    v13 = *(_QWORD *)(v15 + 8);
    v14 = 23;
  }
  else
  {
    v13 = *(_QWORD *)(v12 + 8);
    v14 = 22;
  }
  WPP_RECORDER_SF_d(
    *(_QWORD *)(v13 + 1432),
    3u,
    5u,
    v14,
    (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
    v11);
LABEL_36:
  if ( v6 < 0 )
  {
    v18 = *(void **)(v4 + 36);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0x64334855u);
      *(_QWORD *)(v4 + 36) = 0LL;
      *(_DWORD *)(v4 + 32) = 0;
    }
    v19 = *(void **)(v4 + 20);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0x64334855u);
      *(_QWORD *)(v4 + 20) = 0LL;
      *(_DWORD *)(v4 + 16) = 0;
    }
    v20 = *(void **)(v4 + 52);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0x64334855u);
      *(_QWORD *)(v4 + 52) = 0LL;
      *(_DWORD *)(v4 + 48) = 0;
    }
  }
  return (unsigned int)v6;
}
