/*
 * XREFs of ndisSendNBLToFilter @ 0x1C0010130
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C0059B2C (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C005BD5C (ndisFLoopbackNetBufferLists.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisSendNBLToFilter(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v5; // rcx
  struct _NET_BUFFER_LIST *v7; // rsi
  _NDIS_PCW_DATA_BLOCK *v8; // rax
  char v9; // r12
  __int64 v10; // r13
  KIRQL v11; // di
  unsigned int v12; // ebp
  struct NDIS_PCW_CONTEXT v13; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+18h]

  v15 = a3;
  v14 = (__int64)a2;
  v5 = *(_DWORD **)(a1 + 2584);
  v7 = a2;
  if ( *(_BYTE *)v5 == 5
    && (v5[14] & 0x8000) != 0
    && !v5[86]
    && (*(_BYTE *)(a1 + 91) && (*(_WORD *)(a1 + 1820) > 1u || *(_BYTE *)(a1 + 2007))
     || (a4 & 2) != 0
     || (*(_DWORD *)(a1 + 120) & 0x4000) != 0) )
  {
    ndisFLoopbackNetBufferLists(v5, a2, (__int64)&v14);
    v7 = (struct _NET_BUFFER_LIST *)v14;
  }
  if ( v7 )
  {
    v8 = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
    v9 = 0;
    v10 = *(_QWORD *)(a1 + 2568);
    v11 = 2;
    v13.CurrentCpu = -1;
    v12 = *(_DWORD *)(a1 + 80);
    v13.PcwBlock = v8;
    v13.DatapathEventsMask = *(_DWORD *)(a1 + 48);
    v13.DatapathCyclesMask = v12;
    if ( v10 == a1 && (v12 & 0x80) != 0 )
    {
      if ( (a4 & 1) == 0 )
      {
        v11 = KfRaiseIrql(2u);
        v9 = 1;
      }
      if ( (v12 & 0x80) != 0 )
      {
        ndisPcwStartCycleCounter(&v13, 7u);
        LOBYTE(v12) = v13.DatapathCyclesMask;
      }
    }
    ndisInvokeNextSendHandler(
      v7,
      v15,
      a4,
      *(struct _NDIS_OBJECT_HEADER **)(a1 + 2584),
      *(void **)(a1 + 2568),
      *(void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))(a1 + 2664));
    if ( v10 == a1 )
    {
      if ( (v12 & 0x80u) != 0 )
        ndisPcwEndCycleCounter(&v13, 7u, 0x14uLL);
      if ( v9 )
      {
        if ( v11 != 2 )
          KeLowerIrql(v11);
      }
    }
  }
}
