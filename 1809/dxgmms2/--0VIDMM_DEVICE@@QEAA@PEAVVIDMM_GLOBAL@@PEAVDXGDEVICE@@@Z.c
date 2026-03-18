/*
 * XREFs of ??0VIDMM_DEVICE@@QEAA@PEAVVIDMM_GLOBAL@@PEAVDXGDEVICE@@@Z @ 0x1C006AB5C
 * Callers:
 *     VidMmCreateDevice @ 0x1C000FE60 (VidMmCreateDevice.c)
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C006BF94 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1C008D070 (-InitPagingProcess@VIDMM_PAGING_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00023E8 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

VIDMM_DEVICE *__fastcall VIDMM_DEVICE::VIDMM_DEVICE(VIDMM_DEVICE *this, struct VIDMM_GLOBAL *a2, struct DXGDEVICE *a3)
{
  char *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  VIDMM_DEVICE *result; // rax
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  *((_BYTE *)this + 50) &= 0xF0u;
  *((_DWORD *)this + 13) &= 0xFFFFFFF8;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 3) = a3;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_WORD *)this + 24) = 1;
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 926);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 1748);
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 17) = (char *)this + 128;
  *((_QWORD *)this + 16) = (char *)this + 128;
  *((_QWORD *)this + 19) = (char *)this + 144;
  *((_QWORD *)this + 18) = (char *)this + 144;
  *((_QWORD *)this + 21) = (char *)this + 160;
  *((_QWORD *)this + 20) = (char *)this + 160;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  memset((char *)this + 248, 0, 0x24uLL);
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, (struct _KTHREAD **)a2 + 5155);
  v5 = (char *)a2 + 41328;
  v6 = (_QWORD *)((char *)this + 192);
  v7 = *(_QWORD *)v5;
  if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
    __fastfail(3u);
  *v6 = v7;
  *((_QWORD *)this + 25) = v5;
  *(_QWORD *)(v7 + 8) = v6;
  *(_QWORD *)v5 = v6;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  result = this;
  *((_QWORD *)this + 36) = 0LL;
  return result;
}
