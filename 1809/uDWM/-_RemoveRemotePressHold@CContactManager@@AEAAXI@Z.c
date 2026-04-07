/*
 * XREFs of ?_RemoveRemotePressHold@CContactManager@@AEAAXI@Z @ 0x180095408
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009281C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z @ 0x18000B3C8 (-StopAndRemoveFromRootNode@CContactManager@@AEAAXPEAVCTouchVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007BD68 (-RemoveAt@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CContactManager::_RemoveRemotePressHold(CContactManager *this, int a2)
{
  signed int v3; // ebx
  __int64 *v4; // r14
  __int64 v5; // rdi
  struct CTouchVisual *v6; // rsi

  v3 = *((_DWORD *)this + 68) - 1;
  if ( v3 >= 0 )
  {
    v4 = (__int64 *)((char *)this + 248);
    v5 = 16LL * v3;
    do
    {
      if ( *(_DWORD *)(*v4 + v5) == a2 )
      {
        v6 = *(struct CTouchVisual **)(*v4 + v5 + 8);
        CContactManager::StopAndRemoveFromRootNode(this, v6);
        if ( v6 )
          CBaseObject::Release(v6);
        DynArray<CIconicBitmapPending,0>::RemoveAt(v4, v3);
      }
      v5 -= 16LL;
      --v3;
    }
    while ( v3 >= 0 );
  }
}
