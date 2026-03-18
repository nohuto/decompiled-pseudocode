/*
 * XREFs of ?QueryInterface@CD3DDeviceLevel1@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180057840
 * Callers:
 *     ?GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x1800540C0 (-GetD2DContext@CHwSurfaceRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x18021C23C (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 *     ?GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z @ 0x18023DBB8 (-GetDefaultD2DContext@CSwRenderTargetGetBounds@@IEAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceLevel1::QueryInterface(CD3DDeviceLevel1 *this, const struct _GUID *a2, void **a3)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = -2147024809;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v4 )
      goto LABEL_12;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data4;
    if ( v5 )
    {
      v3 = -2147467262;
      this = 0LL;
    }
    else
    {
LABEL_12:
      v3 = 0;
    }
    *a3 = this;
    if ( v3 >= 0 )
      (*(void (__fastcall **)(CD3DDeviceLevel1 *))(*(_QWORD *)this + 8LL))(this);
  }
  return (unsigned int)v3;
}
