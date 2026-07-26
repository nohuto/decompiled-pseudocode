/*
 * XREFs of ndisMSetNicSwitchAttributes @ 0x1C00BA684
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMSetNicSwitchAttributes(void **a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  unsigned __int8 v6; // r9
  unsigned __int16 v7; // r10
  __int64 v8; // rcx
  unsigned __int8 v9; // r8
  unsigned __int16 v10; // dx
  size_t v11; // rsi
  PVOID PoolWithTag; // rax
  PVOID v13; // rax
  PVOID v14; // rax
  _WORD *v15; // rdx
  unsigned __int16 v16; // ax
  size_t v17; // r8
  _WORD *v18; // rdx
  unsigned __int16 v19; // ax
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  unsigned int v24; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qq(0x8Cu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2);
  v5 = *(_QWORD *)(a2 + 32);
  v6 = *(_BYTE *)(v5 + 1);
  if ( v6
    && (v7 = *(_WORD *)(v5 + 2), v7 >= 0x20u)
    && (v8 = *(_QWORD *)(a2 + 40), (v9 = *(_BYTE *)(v8 + 1)) != 0)
    && (v10 = *(_WORD *)(v8 + 2), v10 >= 0x20u) )
  {
    if ( a1[449] || a1[448] )
    {
      v4 = -1073676283;
      goto LABEL_27;
    }
    if ( v9 >= 2u && (v10 < 0x74u || *(_DWORD *)(v8 + 12) || *(_DWORD *)(v8 + 16) || *(_DWORD *)(v8 + 20))
      || v6 >= 2u && (v7 < 0x74u || *(_DWORD *)(v5 + 12) || *(_DWORD *)(v5 + 16) || *(_DWORD *)(v5 + 20)) )
    {
      v4 = -1073741637;
    }
    else
    {
      v11 = 132LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
      a1[449] = PoolWithTag;
      if ( PoolWithTag )
      {
        v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
        a1[450] = v13;
        if ( v13 )
        {
          v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x84uLL, 0x666F444Eu);
          a1[448] = v14;
          if ( v14 )
          {
            memset(a1[450], 0, 0x84uLL);
            memset(a1[449], 0, 0x84uLL);
            memset(a1[448], 0, 0x84uLL);
            v15 = *(_WORD **)(a2 + 32);
            v16 = v15[1];
            v17 = v16;
            if ( v16 >= 0x84u )
              v17 = 132LL;
            memmove(a1[448], v15, v17);
            v18 = *(_WORD **)(a2 + 40);
            v19 = v18[1];
            if ( v19 < 0x84u )
              v11 = v19;
            memmove(a1[449], v18, v11);
            memmove(a1[450], *(const void **)(a2 + 40), v11);
            goto LABEL_27;
          }
        }
      }
      v4 = -1073741670;
    }
  }
  else
  {
    v4 = -1073741811;
  }
  v21 = a1[449];
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0);
    a1[449] = 0LL;
  }
  v22 = a1[450];
  if ( v22 )
  {
    ExFreePoolWithTag(v22, 0);
    a1[450] = 0LL;
  }
  v23 = a1[448];
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0);
    a1[448] = 0LL;
  }
LABEL_27:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    v24 = v4;
    WPP_SF_qqd(0x8Du, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, a2, v24);
  }
  return v4;
}
