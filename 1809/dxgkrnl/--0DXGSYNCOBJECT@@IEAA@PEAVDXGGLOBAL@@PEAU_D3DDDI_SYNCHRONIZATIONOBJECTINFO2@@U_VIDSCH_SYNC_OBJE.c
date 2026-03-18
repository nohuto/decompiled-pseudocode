/*
 * XREFs of ??0DXGSYNCOBJECT@@IEAA@PEAVDXGGLOBAL@@PEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@@Z @ 0x1C00DE348
 * Callers:
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00DDED4 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 * Callees:
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DXGSYNCOBJECT::DXGSYNCOBJECT(__int64 a1, __int64 a2, _OWORD *a3, int a4)
{
  __int128 v5; // xmm0

  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 33;
  *(_DWORD *)(a1 + 64) = 32;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_OWORD *)(a1 + 168) = *a3;
  *(_OWORD *)(a1 + 184) = a3[1];
  *(_OWORD *)(a1 + 200) = a3[2];
  *(_OWORD *)(a1 + 216) = a3[3];
  v5 = a3[4];
  *(_DWORD *)(a1 + 248) = a4;
  *(_DWORD *)(a1 + 252) = 0;
  *(_OWORD *)(a1 + 232) = v5;
  *(_QWORD *)(a1 + 256) = 0LL;
  memset((void *)(a1 + 120), 0, 0x28uLL);
  *(_QWORD *)(a1 + 104) = a1 + 96;
  *(_QWORD *)(a1 + 96) = a1 + 96;
  return a1;
}
