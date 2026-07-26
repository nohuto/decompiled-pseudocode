/*
 * XREFs of ndisMSetReceiveFilterAttributes @ 0x1C00BA430
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     ndisMCheckReceiveFilterPacketCoalescingAttributes @ 0x1C00BA634 (ndisMCheckReceiveFilterPacketCoalescingAttributes.c)
 *     ndisShouldSuppressReceiveFilterCapabilities @ 0x1C00BA64C (ndisShouldSuppressReceiveFilterCapabilities.c)
 */

__int64 __fastcall ndisMSetReceiveFilterAttributes(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax
  size_t v7; // rbp
  PVOID PoolWithTag; // rax
  PVOID v9; // rax
  PVOID v10; // rax
  _WORD *v11; // rdx
  unsigned __int16 v12; // ax
  size_t v13; // r8
  _WORD *v14; // rdx
  unsigned __int16 v15; // ax
  void *v17; // rcx
  void *v18; // rcx
  void *v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qq(0x89u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
  v5 = *(_QWORD *)(a2 + 16);
  if ( !*(_BYTE *)(v5 + 1) || *(_WORD *)(v5 + 2) < 0x38u )
  {
    v4 = -1073741811;
LABEL_30:
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073676283 )
      goto LABEL_32;
    goto LABEL_21;
  }
  v6 = *(_QWORD *)(a2 + 24);
  if ( !*(_BYTE *)(v6 + 1) || *(_WORD *)(v6 + 2) < 0x38u )
  {
    v4 = -1073741811;
    goto LABEL_32;
  }
  if ( (unsigned __int8)((__int64 (*)(void))ndisShouldSuppressReceiveFilterCapabilities)()
    || (unsigned __int8)ndisShouldSuppressReceiveFilterCapabilities(*(_QWORD *)(a2 + 24)) )
  {
    if ( (unsigned __int8)byte_1C00A025C < 4u )
      return v4;
    WPP_SF_qqq(0x8Au, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
    goto LABEL_21;
  }
  v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(*(_QWORD *)(a2 + 16));
  if ( v4 )
    goto LABEL_30;
  v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(*(_QWORD *)(a2 + 24));
  if ( v4 )
    goto LABEL_30;
  if ( !*(_QWORD *)(a1 + 3568) && !*(_QWORD *)(a1 + 3560) )
  {
    v7 = 84LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
    *(_QWORD *)(a1 + 3568) = PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
      *(_QWORD *)(a1 + 3576) = v9;
      if ( v9 )
      {
        v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
        *(_QWORD *)(a1 + 3560) = v10;
        if ( v10 )
        {
          memset(*(void **)(a1 + 3576), 0, 0x54uLL);
          memset(*(void **)(a1 + 3568), 0, 0x54uLL);
          memset(*(void **)(a1 + 3560), 0, 0x54uLL);
          v11 = *(_WORD **)(a2 + 16);
          v12 = v11[1];
          v13 = v12;
          if ( v12 >= 0x54u )
            v13 = 84LL;
          memmove(*(void **)(a1 + 3560), v11, v13);
          v14 = *(_WORD **)(a2 + 24);
          v15 = v14[1];
          if ( v15 < 0x54u )
            v7 = v15;
          memmove(*(void **)(a1 + 3568), v14, v7);
          memmove(*(void **)(a1 + 3576), *(const void **)(a2 + 24), v7);
          *(_DWORD *)(a1 + 3556) = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 12LL);
          *(_DWORD *)(a1 + 3552) = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
          goto LABEL_21;
        }
      }
    }
    v4 = -1073741670;
LABEL_32:
    v17 = *(void **)(a1 + 3568);
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *(_QWORD *)(a1 + 3568) = 0LL;
    }
    v18 = *(void **)(a1 + 3576);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(a1 + 3576) = 0LL;
    }
    v19 = *(void **)(a1 + 3560);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(a1 + 3560) = 0LL;
    }
    goto LABEL_21;
  }
  v4 = -1073676283;
LABEL_21:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    LODWORD(v20) = v4;
    WPP_SF_qqd(0x8Bu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2, v20);
  }
  return v4;
}
