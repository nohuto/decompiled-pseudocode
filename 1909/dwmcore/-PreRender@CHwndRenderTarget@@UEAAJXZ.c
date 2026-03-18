/*
 * XREFs of ?PreRender@CHwndRenderTarget@@UEAAJXZ @ 0x1800C3440
 * Callers:
 *     <none>
 * Callees:
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180033BE4 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ @ 0x1801A7774 (-EnsureDirtyRegion@CHwndRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::PreRender(CHwndRenderTarget *this)
{
  unsigned int v1; // edi
  CHwndRenderTarget *v4; // rsi
  signed int v5; // eax
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  CDirtyRegion *v9; // rcx

  v1 = 0;
  *((_BYTE *)this + 797) = 0;
  if ( !*((_QWORD *)this + 16) )
  {
    v4 = (CHwndRenderTarget *)((char *)this - 64);
    v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 368LL))((char *)this - 64);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802BE078, 2u, v5, 0x2A5u, 0LL);
    }
    else
    {
      v7 = CHwndRenderTarget::EnsureDirtyRegion(v4);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BE078, 2u, v7, 0x2A7u, 0LL);
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
