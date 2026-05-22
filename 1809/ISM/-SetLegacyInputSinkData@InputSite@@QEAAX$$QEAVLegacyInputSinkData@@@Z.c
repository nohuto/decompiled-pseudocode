/*
 * XREFs of ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x1800211E4
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18001D93C (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputSite::SetLegacyInputSinkData(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 384) )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v4);
    *(_BYTE *)(a1 + 384) = 0;
  }
  *(_QWORD *)(a1 + 32) = *(_QWORD *)a2;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 8);
  *(_WORD *)(a1 + 48) = *(_WORD *)(a2 + 16);
  *(_QWORD *)(a1 + 52) = *(_QWORD *)(a2 + 20);
  result = *(unsigned int *)(a2 + 28);
  *(_DWORD *)(a1 + 60) = result;
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 208);
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 224);
  *(_OWORD *)(a1 + 272) = *(_OWORD *)(a2 + 240);
  *(_OWORD *)(a1 + 288) = *(_OWORD *)(a2 + 256);
  *(_OWORD *)(a1 + 304) = *(_OWORD *)(a2 + 272);
  *(_OWORD *)(a1 + 320) = *(_OWORD *)(a2 + 288);
  *(_OWORD *)(a1 + 336) = *(_OWORD *)(a2 + 304);
  *(_OWORD *)(a1 + 352) = *(_OWORD *)(a2 + 320);
  *(_OWORD *)(a1 + 368) = *(_OWORD *)(a2 + 336);
  *(_BYTE *)(a1 + 384) = 1;
  return result;
}
