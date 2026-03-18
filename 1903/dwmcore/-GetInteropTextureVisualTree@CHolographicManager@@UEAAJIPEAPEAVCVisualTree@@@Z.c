/*
 * XREFs of ?GetInteropTextureVisualTree@CHolographicManager@@UEAAJIPEAPEAVCVisualTree@@@Z @ 0x1802419F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1802419B4 (-FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z.c)
 */

__int64 __fastcall CHolographicManager::GetInteropTextureVisualTree(RTL_SRWLOCK *this, int a2, struct CVisualTree **a3)
{
  unsigned int v6; // ebp
  struct CHolographicInteropTexture *InteropTextureByBindId; // rax
  volatile signed __int32 *v8; // rax

  *a3 = 0LL;
  v6 = -2147467259;
  AcquireSRWLockShared(this + 13);
  InteropTextureByBindId = CHolographicManager::FindInteropTextureByBindId((CHolographicManager *)this, a2);
  if ( InteropTextureByBindId )
  {
    v8 = (volatile signed __int32 *)*((_QWORD *)InteropTextureByBindId + 10);
    *a3 = (struct CVisualTree *)v8;
  }
  else
  {
    v8 = (volatile signed __int32 *)*a3;
  }
  if ( v8 )
  {
    _InterlockedIncrement(v8 + 2);
    v6 = 0;
  }
  ReleaseSRWLockShared(this + 13);
  return v6;
}
