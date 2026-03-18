/*
 * XREFs of ??0DXGDEVICE@@QEAA@PEAVADAPTER_RENDER@@PEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@U_D3DKMT_CREATEDEVICEFLAGS@@PEAVDXGPROCESS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@@Z @ 0x1C00E02B4
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@@Z @ 0x1C00E0678 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003F0B8 (-InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::DXGDEVICE(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  char v11; // al
  char v12; // cl
  __int64 v13; // rdx
  DXGADAPTER *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  DXGK_VIRTUAL_GPU_PARAV *v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 40) = a6;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 1LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 56;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_DWORD *)(a1 + 152) = -1;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_DWORD *)(a1 + 176) = 41;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 200) = 55;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_DWORD *)(a1 + 224) = -1;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_DWORD *)(a1 + 248) = 57;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_DWORD *)(a1 + 272) = 58;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 296) = -1;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_DWORD *)(a1 + 320) = -1;
  *(_DWORD *)(a1 + 328) = a7;
  *(_DWORD *)(a1 + 352) = a5;
  *(_QWORD *)(a1 + 332) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 368) = a1 + 360;
  *(_QWORD *)(a1 + 360) = a1 + 360;
  *(_QWORD *)(a1 + 384) = a1 + 376;
  *(_QWORD *)(a1 + 376) = a1 + 376;
  *(_QWORD *)(a1 + 400) = a1 + 392;
  *(_QWORD *)(a1 + 392) = a1 + 392;
  *(_QWORD *)(a1 + 416) = a1 + 408;
  *(_QWORD *)(a1 + 408) = a1 + 408;
  *(_QWORD *)(a1 + 432) = a1 + 424;
  *(_QWORD *)(a1 + 424) = a1 + 424;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_DWORD *)(a1 + 456) = -1;
  *(_DWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 648) = 0LL;
  *(_QWORD *)(a1 + 656) = 0LL;
  *(_QWORD *)(a1 + 664) = 0LL;
  *(_QWORD *)(a1 + 672) = 0LL;
  *(_DWORD *)(a1 + 680) = -1;
  *(_QWORD *)(a1 + 1728) = a8;
  *(_QWORD *)(a1 + 1736) = 0LL;
  *(_DWORD *)(a1 + 1744) = 0x1000000;
  *(_BYTE *)(a1 + 1749) ^= (*(_BYTE *)(a1 + 1749) ^ *(_BYTE *)(*(_QWORD *)(a2 + 16) + 185LL)) & 1;
  v11 = *(_BYTE *)(a1 + 1749);
  v12 = v11 ^ (*(_BYTE *)(a6 + 299) >> 2);
  *(_WORD *)(a1 + 1750) = 0;
  *(_DWORD *)(a1 + 1752) = 0;
  *(_QWORD *)(a1 + 1760) = 0LL;
  *(_BYTE *)(a1 + 1749) = v11 ^ v12 & 2;
  *(_QWORD *)(a1 + 1768) = 0LL;
  *(_QWORD *)(a1 + 1776) = 1LL;
  *(_WORD *)(a1 + 1784) = 0;
  *(_BYTE *)(a1 + 1786) = 0;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  memset((void *)(a1 + 520), 0, 0x80uLL);
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  memset((void *)(a1 + 704), 0, 0x80uLL);
  memset((void *)(a1 + 832), 0, 0x240uLL);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  memset((void *)(a1 + 1408), 0, 0x140uLL);
  if ( (*(_BYTE *)(a1 + 1749) & 1) == 0 && a4 )
  {
    *(_QWORD *)(a1 + 344) = *a4;
    *a4 = 0LL;
  }
  *(_QWORD *)(a1 + 696) = a1 + 688;
  *(_QWORD *)(a1 + 688) = a1 + 688;
  v14 = *(DXGADAPTER **)(a1 + 1728);
  if ( v14 || (v14 = *(DXGADAPTER **)(a2 + 16), *((_QWORD *)v14 + 319)) && (*(_QWORD *)(a1 + 1728) = v14) != 0LL )
  {
    if ( !*((_QWORD *)v14 + 319) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v20 + 24) = 633LL;
      WdLogEvent5_WdAssertion(v20);
      v14 = *(DXGADAPTER **)(a1 + 1728);
    }
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(v14) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v21 + 24) = 634LL;
      WdLogEvent5_WdAssertion(v21);
    }
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 1728) + 24LL));
    *(_DWORD *)(a1 + 1736) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1728) + 2552LL) + 80LL);
  }
  *(_BYTE *)(a1 + 1748) = *(_BYTE *)(a6 + 298) != 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) + 2492LL) )
  {
    v17 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 1751) = 1;
    *(_BYTE *)(v17 + 265) = 1;
  }
  v18 = *(DXGK_VIRTUAL_GPU_PARAV **)(a1 + 80);
  if ( v18 )
    DXGK_VIRTUAL_GPU_PARAV::InsertDxgDevice(v18, (struct _LIST_ENTRY *)(a1 + 88));
  return a1;
}
