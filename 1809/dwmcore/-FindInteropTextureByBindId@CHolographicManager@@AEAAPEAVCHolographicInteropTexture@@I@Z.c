/*
 * XREFs of ?FindInteropTextureByBindId@CHolographicManager@@AEAAPEAVCHolographicInteropTexture@@I@Z @ 0x18020B23C
 * Callers:
 *     ?AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z @ 0x18020A86C (-AddInteropTexture@CHolographicManager@@QEAA_NPEAVCHolographicInteropTexture@@@Z.c)
 *     ?GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z @ 0x18020B26C (-GetInteropTextureVisualTree@CHolographicManager@@QEAAJIPEAPEAVCVisualTree@@@Z.c)
 * Callees:
 *     <none>
 */

struct CHolographicInteropTexture *__fastcall CHolographicManager::FindInteropTextureByBindId(
        CHolographicManager *this,
        int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  v2 = *((_QWORD *)this + 15);
  v3 = 0LL;
  while ( v2 != *((_QWORD *)this + 16) )
  {
    if ( *(_DWORD *)(*(_QWORD *)v2 + 120LL) == a2 )
      return *(struct CHolographicInteropTexture **)v2;
    v2 += 8LL;
  }
  return (struct CHolographicInteropTexture *)v3;
}
