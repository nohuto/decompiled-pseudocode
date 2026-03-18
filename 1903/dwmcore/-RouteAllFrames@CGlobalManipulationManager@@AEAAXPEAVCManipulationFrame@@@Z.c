/*
 * XREFs of ?RouteAllFrames@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18023A3D4
 * Callers:
 *     ?ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180239830 (-ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18023A10C (-Remove@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@V.c)
 *     ?RouteFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18023A46C (-RouteFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CGlobalManipulationManager::RouteAllFrames(
        CGlobalManipulationManager *this,
        struct CManipulationFrame *a2)
{
  int v2; // ebx
  _QWORD *v5; // r15
  __int64 v6; // rsi
  struct CManipulationFrame **v7; // r14

  v2 = 0;
  if ( *((int *)this + 84) > 0 )
  {
    v5 = (_QWORD *)((char *)this + 328);
    v6 = 0LL;
    do
    {
      v7 = (struct CManipulationFrame **)(v6 + *v5);
      if ( *v7 == a2 )
        break;
      CGlobalManipulationManager::RouteFrameInput(this, *v7);
      if ( *((_DWORD *)*v7 + 5) == *((_DWORD *)*v7 + 4) )
      {
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Remove(
          (__int64)v5,
          v7);
      }
      else
      {
        ++v2;
        v6 += 8LL;
      }
    }
    while ( v2 < *((_DWORD *)this + 84) );
  }
  CGlobalManipulationManager::RouteFrameInput(this, a2);
}
