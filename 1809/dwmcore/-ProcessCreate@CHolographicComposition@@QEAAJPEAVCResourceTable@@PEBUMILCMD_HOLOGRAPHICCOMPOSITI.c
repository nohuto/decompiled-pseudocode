/*
 * XREFs of ?ProcessCreate@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITION_CREATE@@@Z @ 0x18020BF98
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z @ 0x18020A548 (-AddHolographicComposition@CHolographicManager@@QEAA_NPEAVCHolographicComposition@@@Z.c)
 *     ?SetState@CHolographicComposition@@UEAAJJ@Z @ 0x18020C060 (-SetState@CHolographicComposition@@UEAAJJ@Z.c)
 */

__int64 __fastcall CHolographicComposition::ProcessCreate(
        CHolographicComposition *this,
        struct CResourceTable *a2,
        const struct MILCMD_HOLOGRAPHICCOMPOSITION_CREATE *a3)
{
  bool v5; // al

  if ( *((_BYTE *)this + 108) )
    return 2147947423LL;
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)this + 26) = *((_DWORD *)a3 + 6);
  v5 = CHolographicManager::AddHolographicComposition(*((CHolographicManager **)this + 10), this);
  *((_BYTE *)this + 109) = v5;
  *((_BYTE *)this + 108) = v5;
  if ( !v5 )
    CHolographicComposition::SetState((CHolographicComposition *)((char *)this + 64), -2147467259);
  return 0LL;
}
