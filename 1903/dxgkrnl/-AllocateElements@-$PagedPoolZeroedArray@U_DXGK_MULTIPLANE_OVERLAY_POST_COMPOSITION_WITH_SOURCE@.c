/*
 * XREFs of ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C022BA44
 * Callers:
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C022BFA8 (-CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 * Callees:
 *     memset @ 0x1C0025300 (memset.c)
 */

PVOID __fastcall PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,1>::AllocateElements(
        _DWORD *a1,
        unsigned int a2)
{
  __int64 v4; // rdi
  PVOID result; // rax

  v4 = a2;
  if ( a2 <= 1 )
  {
    result = a1 + 2;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / a2 < 0x2C )
      return 0LL;
    result = ExAllocatePoolWithTag(PagedPool, 44LL * a2, 0x4B677844u);
  }
  *(_QWORD *)a1 = result;
  a1[13] = a2;
  if ( result )
  {
    memset(result, 0, 44 * v4);
    return *(PVOID *)a1;
  }
  return result;
}
