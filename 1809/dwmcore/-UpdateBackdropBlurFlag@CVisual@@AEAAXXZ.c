/*
 * XREFs of ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x1800A57F8
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800A59B0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x1800A5950 (-GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z.c)
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x1800A8C8C (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::UpdateBackdropBlurFlag(CVisual **this)
{
  char v2; // bp
  char v3; // si
  char v4; // di
  struct CSpriteVisualContent *v5; // rdi
  __int64 v6; // rdx
  _BYTE *v7; // rax
  char v8; // dl
  int v9; // r9d
  CVisual *v10; // rcx
  char v11; // dl
  CVisual *v12; // rcx
  struct CSpriteVisualContent *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  if ( CVisual::GetContentAsSpriteNoRef((CVisual *)this, &v13) )
  {
    v5 = v13;
    if ( (*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)v13 + 48LL))(v13, 163LL) )
    {
      v3 = 1;
      v4 = 0;
    }
    else
    {
      LOBYTE(v6) = 1;
      (*(void (__fastcall **)(struct CSpriteVisualContent *, __int64))(*(_QWORD *)v5 + 312LL))(v5, v6);
      v7 = (_BYTE *)*((_QWORD *)v5 + 8);
      v4 = 0;
      if ( v7 )
      {
        v2 = v7[192];
        v3 = v7[194];
        v4 = v7[193];
      }
    }
  }
  if ( v4 != ((*((_BYTE *)this + 94) & 0x20) != 0) )
    *((_BYTE *)this + 94) ^= (*((_BYTE *)this + 94) ^ (32 * v4)) & 0x20;
  v8 = *((_BYTE *)this + 272);
  v9 = -1;
  if ( v2 != (v8 & 1) )
  {
    v12 = this[10];
    if ( v2 )
    {
      if ( v12 )
      {
        CVisual::PropagateBackdropUpdates(v12, 1, 0);
        v8 = *((_BYTE *)this + 272);
      }
      v8 |= 1u;
    }
    else
    {
      if ( v12 )
      {
        CVisual::PropagateBackdropUpdates(v12, -1, 0);
        v8 = *((_BYTE *)this + 272);
      }
      v8 &= ~1u;
    }
    *((_BYTE *)this + 272) = v8;
  }
  if ( v3 != ((v8 & 2) != 0) )
  {
    v10 = this[10];
    if ( v3 )
    {
      if ( v10 )
      {
        CVisual::PropagateBackdropUpdates(v10, 0, 1);
        v8 = *((_BYTE *)this + 272);
      }
      v11 = v8 | 2;
    }
    else
    {
      if ( v10 )
      {
        CVisual::PropagateBackdropUpdates(v10, 0, v9);
        v8 = *((_BYTE *)this + 272);
      }
      v11 = v8 & 0xFD;
    }
    *((_BYTE *)this + 272) = v11;
  }
}
