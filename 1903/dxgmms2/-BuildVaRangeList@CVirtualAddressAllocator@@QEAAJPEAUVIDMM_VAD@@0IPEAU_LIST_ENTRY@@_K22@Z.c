/*
 * XREFs of ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C00B7918
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B08C4 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001EB4 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111@Z @ 0x1C0017744 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 */

__int64 __fastcall CVirtualAddressAllocator::BuildVaRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        struct VIDMM_VAD *a3,
        unsigned int a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // rdi
  __int64 v10; // rcx
  char *v11; // rdi
  char *v12; // r13
  unsigned int i; // ebx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  PVOID v16; // r10
  __int64 v17; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v19; // rax
  _BYTE v21[32]; // [rsp+60h] [rbp-48h] BYREF
  char v23; // [rsp+C8h] [rbp+20h]
  unsigned __int64 v24; // [rsp+E8h] [rbp+40h]

  v23 = a4;
  v9 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, this + 7);
  v24 = a8 - a6;
  v10 = (unsigned int)v9;
  v11 = (char *)*((_QWORD *)a2 + 3 * v9 + 12);
  v12 = (char *)a2 + 24 * v10 + 96;
  for ( i = 0; v11 != v12; v11 = *(char **)v11 )
  {
    v14 = *((_QWORD *)v11 + 11);
    if ( a7 <= v14 )
      break;
    v15 = *((_QWORD *)v11 + 12);
    if ( a6 < v15 )
    {
      if ( a6 > v14 )
        v14 = a6;
      if ( a7 < v15 )
        v15 = a7;
      v16 = operator new[](0x88uLL, 0x39346956u, PagedPool);
      if ( v16 )
        v17 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                (__int64)v16,
                (__int64)a3,
                v14 + v24,
                v15 + v24,
                v23,
                *((_QWORD *)v11 + 6),
                v14 + *((_QWORD *)v11 + 8) - *((_QWORD *)v11 + 11),
                (int)(*((_DWORD *)v11 + 14) << 28) >> 28,
                *((_QWORD *)v11 + 10),
                *((_QWORD *)v11 + 9),
                *((_QWORD *)v11 + 14),
                *((_QWORD *)v11 + 13));
      else
        v17 = 0LL;
      if ( !v17 )
      {
        i = -1073741801;
        break;
      }
      Blink = a5->Blink;
      v19 = (struct _LIST_ENTRY *)(v17 + 8);
      if ( Blink->Flink != a5 )
        __fastfail(3u);
      v19->Flink = a5;
      v19->Blink = Blink;
      Blink->Flink = v19;
      a5->Blink = v19;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return i;
}
