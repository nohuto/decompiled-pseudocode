/*
 * XREFs of ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800D6CD8
 * Callers:
 *     ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x1800D6C40 (-ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_D.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800E70C0 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A5C0C (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x180246250 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::RemoveTree(CMonitorTreeAssociation *this, struct CVisualTree *a2)
{
  unsigned int v2; // edi
  int v3; // ebx
  __int64 i; // rdi
  int v7; // ebp
  CDirtyRegion *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int j; // r8d
  __int64 v13; // rax
  __int64 v14; // rcx

  v2 = 0;
  v3 = *((_DWORD *)this + 10) - 1;
  if ( v3 >= 0 )
  {
    for ( i = 16LL * v3; ; i -= 16LL )
    {
      v7 = v3;
      v8 = *(CDirtyRegion **)(*((_QWORD *)this + 2) + i + 8);
      if ( v8 == a2 )
      {
        CDirtyRegion::Release(v8);
        v9 = *((unsigned int *)this + 10);
        if ( v3 >= (unsigned int)v9 )
        {
          v2 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070057, 0x19Fu, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, 0x80070057, 0x62u, 0LL);
          return v2;
        }
        v10 = *((_QWORD *)this + 2);
        for ( j = v3; j < (int)v9 - 1; LODWORD(v9) = *((_DWORD *)this + 10) )
        {
          v13 = 2LL * j;
          v9 = 2LL * ++j;
          *(_OWORD *)(v10 + 8 * v13) = *(_OWORD *)(v10 + 8 * v9);
        }
        *((_DWORD *)this + 10) = v9 - 1;
      }
      --v3;
      if ( v7 <= 0 )
        return 0;
    }
  }
  return v2;
}
