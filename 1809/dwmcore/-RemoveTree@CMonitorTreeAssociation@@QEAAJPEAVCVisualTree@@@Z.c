/*
 * XREFs of ?RemoveTree@CMonitorTreeAssociation@@QEAAJPEAVCVisualTree@@@Z @ 0x1800784B8
 * Callers:
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077790 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x180078420 (-ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESK.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x180159404 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x18020E6F4 (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMonitorTreeAssociation::RemoveTree(CMonitorTreeAssociation *this, struct CVisualTree *a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  __int64 v6; // rsi
  int v7; // r14d
  CMILRefCountBase *v8; // rcx
  unsigned int v9; // ecx
  __int64 v10; // r9
  unsigned int i; // r8d
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ecx

  v2 = 0;
  v3 = *((_DWORD *)this + 10) - 1;
  if ( v3 >= 0 )
  {
    v6 = 16LL * v3;
    do
    {
      v7 = v3;
      v8 = *(CMILRefCountBase **)(*((_QWORD *)this + 2) + v6 + 8);
      if ( v8 == a2 )
      {
        CMILRefCountBase::Release(v8);
        v9 = *((_DWORD *)this + 10);
        if ( v3 >= v9 )
        {
          v2 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x19Cu);
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, -2147024809, 0x64u);
          return v2;
        }
        v10 = *((_QWORD *)this + 2);
        for ( i = v3; i < v9 - 1; v9 = *((_DWORD *)this + 10) )
        {
          v13 = 2LL * i;
          v14 = 2LL * ++i;
          *(_OWORD *)(v10 + 8 * v13) = *(_OWORD *)(v10 + 8 * v14);
        }
        *((_DWORD *)this + 10) = v9 - 1;
      }
      --v3;
      v6 -= 16LL;
    }
    while ( v7 > 0 );
  }
  return v2;
}
