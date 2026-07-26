/*
 * XREFs of ndisMSetNDKAttributes @ 0x1C00F77DC
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00C95F0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009B60 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 __fastcall ndisMSetNDKAttributes(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  _OWORD *PoolWithTag; // rax
  _OWORD *v7; // rbp
  __int64 v8; // rax

  v2 = 0;
  if ( *(_BYTE *)(a2 + 1) == 1
    && *(_WORD *)(a2 + 2) == 16
    && (v5 = *(_QWORD *)(a2 + 8)) != 0
    && *(_BYTE *)v5 == 0x80
    && *(_BYTE *)(v5 + 1) == 1
    && *(_WORD *)(v5 + 2) >= 0x38u
    && *(_QWORD *)(v5 + 48) )
  {
    if ( ndisGetNDKBlock(a1) )
    {
      return (unsigned int)-1073741808;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC0uLL, 0x726B444Eu);
      v7 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xC0uLL);
        v7[2] = *(_OWORD *)v5;
        v7[3] = *(_OWORD *)(v5 + 16);
        v7[4] = *(_OWORD *)(v5 + 32);
        *((_QWORD *)v7 + 10) = *(_QWORD *)(v5 + 48);
        v8 = *(_QWORD *)(v5 + 48);
        *(_OWORD *)((char *)v7 + 88) = *(_OWORD *)v8;
        *(_OWORD *)((char *)v7 + 104) = *(_OWORD *)(v8 + 16);
        *(_OWORD *)((char *)v7 + 120) = *(_OWORD *)(v8 + 32);
        *(_OWORD *)((char *)v7 + 136) = *(_OWORD *)(v8 + 48);
        *(_OWORD *)((char *)v7 + 152) = *(_OWORD *)(v8 + 64);
        *(_OWORD *)((char *)v7 + 168) = *(_OWORD *)(v8 + 80);
        *((_QWORD *)v7 + 23) = *(_QWORD *)(v8 + 96);
        *((_QWORD *)v7 + 10) = (char *)v7 + 88;
        *((_BYTE *)v7 + 24) = *(_BYTE *)(a2 + 4);
        *((_QWORD *)v7 + 1) = 0LL;
        *((_DWORD *)v7 + 4) = 0;
        a1->NDKBlock = v7;
      }
      else
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
          WPP_SF_q(0xAu, &WPP_e68d36612dfd3fb7c9a22b3f1abef3ac_Traceguids, (__int64)a1);
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
