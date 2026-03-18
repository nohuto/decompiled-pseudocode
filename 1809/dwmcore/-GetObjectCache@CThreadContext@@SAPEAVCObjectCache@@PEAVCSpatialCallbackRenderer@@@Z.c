/*
 * XREFs of ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSpatialCallbackRenderer@@@Z @ 0x1801E2164
 * Callers:
 *     ??_ECSpatialCallbackRenderer@@UEAAPEAXI@Z @ 0x180183940 (--_ECSpatialCallbackRenderer@@UEAAPEAXI@Z.c)
 *     ?Create@CSpatialCallbackRenderer@@SAJPEAUIDwmSpatialRenderTarget@@PEAUIDwmSpatialWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMPEAPEAV1@@Z @ 0x1801839B4 (-Create@CSpatialCallbackRenderer@@SAJPEAUIDwmSpatialRenderTarget@@PEAUIDwmSpatialWorld@@AEBUD2D_.c)
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800B3C40 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CSpatialCallbackRenderer *a1)
{
  int Current; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]
  struct CThreadContext *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Current = CThreadContext::GetCurrent(&v4);
  if ( Current < 0 )
    ModuleFailFastForHRESULT(Current, retaddr);
  return (struct CThreadContext *)((char *)v4 + 24);
}
