/*
 * XREFs of ?RemoveDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJPEAVIRenderTargetDesktop@@@Z @ 0x18018CEC8
 * Callers:
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A74CC (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CUINTDesktopAssociation::RemoveDesktopRenderTarget(
        CUINTDesktopAssociation *this,
        struct IRenderTargetDesktop *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // ebx
  unsigned int v5; // r8d
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx

  v2 = *((_DWORD *)this + 6);
  v3 = 0;
  v5 = v2 - 1;
  if ( (int)(v2 - 1) >= 0 )
  {
    v6 = *(_QWORD *)this;
    while ( *(struct IRenderTargetDesktop **)(v6 + 16LL * v5 + 8) != a2 )
    {
      if ( (--v5 & 0x80000000) != 0 )
        return v3;
    }
    if ( v5 < v2 )
    {
      for ( ; v5 < v2 - 1; v2 = *((_DWORD *)this + 6) )
      {
        v8 = 2LL * v5;
        v9 = 2LL * ++v5;
        *(_OWORD *)(v6 + 8 * v8) = *(_OWORD *)(v6 + 8 * v9);
      }
      *((_DWORD *)this + 6) = v2 - 1;
    }
    else
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x19Fu, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80070057, 0x51u, 0LL);
    }
  }
  return v3;
}
