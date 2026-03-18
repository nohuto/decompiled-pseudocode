/*
 * XREFs of ?GetCompositionSurfaceInfoByLuid@CCompositionSurfaceManager@@QEAAPEAVCCompositionSurfaceInfo@@U_LUID@@@Z @ 0x18002AE34
 * Callers:
 *     ?GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18002AD70 (-GetOrCreateCompositionSurfaceInfo@CCompositionSurfaceManager@@QEAAJPEAXPEAPEAVCCompositionSurfa.c)
 * Callees:
 *     <none>
 */

struct CCompositionSurfaceInfo *__fastcall CCompositionSurfaceManager::GetCompositionSurfaceInfoByLuid(
        CCompositionSurfaceManager *this,
        struct _LUID a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD Buffer[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer[0] = a2;
  v2 = 0LL;
  Buffer[1] = 0LL;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v3 )
    return (struct CCompositionSurfaceInfo *)v3[1];
  return (struct CCompositionSurfaceInfo *)v2;
}
