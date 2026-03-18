/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive8@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800B9C60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x18004D22C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CSwRenderTargetGetBounds *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vector deleting destructor'(
        CSwRenderTargetGetBounds *lpMem,
        char a2)
{
  struct CObjectCache *ObjectCache; // rax

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      CSwRenderTargetGetBounds::PrepareForReuse(lpMem);
    }
    else
    {
      ObjectCache = CThreadContext::GetObjectCache(lpMem);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        operator delete(lpMem);
      }
      else
      {
        *(_QWORD *)lpMem = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = lpMem;
      }
    }
  }
  return lpMem;
}
