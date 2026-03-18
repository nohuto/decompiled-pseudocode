/*
 * XREFs of ?PreRender@CHwndRenderTarget@@UEAAJXZ @ 0x1800677A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18005CB5C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ @ 0x18015AD70 (-EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::PreRender(CHwndRenderTarget *this)
{
  unsigned int v1; // edi
  CHwndRenderTarget *v4; // rsi
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // eax
  unsigned int v8; // ecx
  CDirtyRegion *v9; // rcx

  v1 = 0;
  *((_BYTE *)this + 797) = 0;
  if ( !*((_QWORD *)this + 16) )
  {
    v4 = (CHwndRenderTarget *)((char *)this - 64);
    v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 240LL))((char *)this - 64);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_180292610, 2u, v5, 0x2A0u);
    }
    else
    {
      v7 = CHwndRenderTarget::EnsureDirtyRegion(v4);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180292610, 2u, v7, 0x2A2u);
      }
      else
      {
        v9 = (CDirtyRegion *)*((_QWORD *)this + 17);
        if ( v9 && *((_BYTE *)this + 97) )
        {
          CDirtyRegion::SetFullDirty(v9);
          *((_BYTE *)this + 97) = 0;
        }
      }
    }
  }
  return v1;
}
