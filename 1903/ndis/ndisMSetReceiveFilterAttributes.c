/*
 * XREFs of ndisMSetReceiveFilterAttributes @ 0x1C0021654
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6B0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisMCheckReceiveFilterPacketCoalescingAttributes@@YAHPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1C00218C0 (-ndisMCheckReceiveFilterPacketCoalescingAttributes@@YAHPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z.c)
 *     ?ndisShouldSuppressReceiveFilterCapabilities@@YAEPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z @ 0x1C00218D8 (-ndisShouldSuppressReceiveFilterCapabilities@@YAEPEAU_NDIS_RECEIVE_FILTER_CAPABILITIES@@@Z.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisMSetReceiveFilterAttributes(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ebx
  struct _NDIS_RECEIVE_FILTER_CAPABILITIES *v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  size_t v8; // rbp
  PVOID PoolWithTag; // rax
  PVOID v10; // rax
  PVOID v11; // rax
  _WORD *v12; // rdx
  unsigned __int16 v13; // ax
  size_t v14; // r8
  _WORD *v15; // rdx
  unsigned __int16 v16; // ax
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  char v21; // [rsp+30h] [rbp-28h]

  v2 = a2;
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      135,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v21);
  }
  v5 = *(struct _NDIS_RECEIVE_FILTER_CAPABILITIES **)(v2 + 16);
  if ( !v5->Header.Revision || v5->Header.Size < 0x38u )
  {
    v4 = -1073741811;
LABEL_30:
    if ( (int)(v4 + 0x80000000) >= 0 && v4 != -1073676283 )
      goto LABEL_32;
    goto LABEL_21;
  }
  v6 = *(_QWORD *)(v2 + 24);
  if ( !*(_BYTE *)(v6 + 1) || *(_WORD *)(v6 + 2) < 0x38u )
  {
    v4 = -1073741811;
    goto LABEL_32;
  }
  if ( ndisShouldSuppressReceiveFilterCapabilities(v5)
    || ndisShouldSuppressReceiveFilterCapabilities(*(struct _NDIS_RECEIVE_FILTER_CAPABILITIES **)(v2 + 24)) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v4;
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      13,
      136,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      *(_QWORD *)(v2 + 16),
      *(_QWORD *)(v2 + 24));
    goto LABEL_21;
  }
  v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(*(struct _NDIS_RECEIVE_FILTER_CAPABILITIES **)(v2 + 16));
  if ( v4 )
    goto LABEL_30;
  v4 = ndisMCheckReceiveFilterPacketCoalescingAttributes(*(struct _NDIS_RECEIVE_FILTER_CAPABILITIES **)(v2 + 24));
  if ( v4 )
    goto LABEL_30;
  if ( !*(_QWORD *)(a1 + 3544) && !*(_QWORD *)(a1 + 3536) )
  {
    v8 = 84LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
    *(_QWORD *)(a1 + 3544) = PoolWithTag;
    if ( PoolWithTag )
    {
      v10 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
      *(_QWORD *)(a1 + 3552) = v10;
      if ( v10 )
      {
        v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x54uLL, 0x666F444Eu);
        *(_QWORD *)(a1 + 3536) = v11;
        if ( v11 )
        {
          memset(*(void **)(a1 + 3552), 0, 0x54uLL);
          memset(*(void **)(a1 + 3544), 0, 0x54uLL);
          memset(*(void **)(a1 + 3536), 0, 0x54uLL);
          v12 = *(_WORD **)(v2 + 16);
          v13 = v12[1];
          v14 = v13;
          if ( v13 >= 0x54u )
            v14 = 84LL;
          memmove(*(void **)(a1 + 3536), v12, v14);
          v15 = *(_WORD **)(v2 + 24);
          v16 = v15[1];
          if ( v16 < 0x54u )
            v8 = v16;
          memmove(*(void **)(a1 + 3544), v15, v8);
          memmove(*(void **)(a1 + 3552), *(const void **)(v2 + 24), v8);
          *(_DWORD *)(a1 + 3532) = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 12LL);
          *(_DWORD *)(a1 + 3528) = *(_DWORD *)(*(_QWORD *)(v2 + 24) + 8LL);
          goto LABEL_21;
        }
      }
    }
    v4 = -1073741670;
LABEL_32:
    v18 = *(void **)(a1 + 3544);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *(_QWORD *)(a1 + 3544) = 0LL;
    }
    v19 = *(void **)(a1 + 3552);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *(_QWORD *)(a1 + 3552) = 0LL;
    }
    v20 = *(void **)(a1 + 3536);
    if ( v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *(_QWORD *)(a1 + 3536) = 0LL;
    }
    goto LABEL_21;
  }
  v4 = -1073676283;
LABEL_21:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      137,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v2,
      v4);
  }
  return v4;
}
