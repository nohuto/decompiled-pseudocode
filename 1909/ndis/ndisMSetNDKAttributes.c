/*
 * XREFs of ndisMSetNDKAttributes @ 0x1C0119B60
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C002F6A0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0012380 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

__int64 __fastcall ndisMSetNDKAttributes(struct _NDIS_MINIPORT_BLOCK *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdi
  _OWORD *PoolWithTag; // rax
  int v7; // edx
  _OWORD *v8; // rbp
  __int64 v9; // rax

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
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0xC0uLL);
        v8[2] = *(_OWORD *)v5;
        v8[3] = *(_OWORD *)(v5 + 16);
        v8[4] = *(_OWORD *)(v5 + 32);
        *((_QWORD *)v8 + 10) = *(_QWORD *)(v5 + 48);
        v9 = *(_QWORD *)(v5 + 48);
        *(_OWORD *)((char *)v8 + 88) = *(_OWORD *)v9;
        *(_OWORD *)((char *)v8 + 104) = *(_OWORD *)(v9 + 16);
        *(_OWORD *)((char *)v8 + 120) = *(_OWORD *)(v9 + 32);
        *(_OWORD *)((char *)v8 + 136) = *(_OWORD *)(v9 + 48);
        *(_OWORD *)((char *)v8 + 152) = *(_OWORD *)(v9 + 64);
        *(_OWORD *)((char *)v8 + 168) = *(_OWORD *)(v9 + 80);
        *((_QWORD *)v8 + 23) = *(_QWORD *)(v9 + 96);
        *((_QWORD *)v8 + 10) = (char *)v8 + 88;
        *((_BYTE *)v8 + 24) = *(_BYTE *)(a2 + 4);
        *((_QWORD *)v8 + 1) = 0LL;
        *((_DWORD *)v8 + 4) = 0;
        a1->NDKBlock = v8;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v7,
            1,
            10,
            (struct _GUID *)&WPP_7d9b7fceb86b3e0c581cc7ec67c1581a_Traceguids,
            (char)a1);
        }
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
