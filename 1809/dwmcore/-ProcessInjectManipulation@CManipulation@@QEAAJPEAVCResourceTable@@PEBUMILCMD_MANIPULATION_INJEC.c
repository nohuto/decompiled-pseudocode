/*
 * XREFs of ?ProcessInjectManipulation@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_INJECTMANIPULATION@@PEBXI@Z @ 0x1801A5B6C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1801A58EC (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 */

__int64 __fastcall CManipulation::ProcessInjectManipulation(
        CManipulation *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATION_INJECTMANIPULATION *a3,
        _OWORD *a4)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  _OWORD v12[8]; // [rsp+20h] [rbp-88h] BYREF

  v4 = a4[1];
  v12[0] = *a4;
  v5 = a4[2];
  v12[1] = v4;
  v6 = a4[3];
  v12[2] = v5;
  v7 = a4[4];
  v12[3] = v6;
  v8 = a4[5];
  v12[4] = v7;
  v9 = a4[6];
  v12[5] = v8;
  v10 = a4[7];
  v12[6] = v9;
  v12[7] = v10;
  return CManipulation::InjectManipulation(this, (const struct InjectManipulationArgs *)v12);
}
