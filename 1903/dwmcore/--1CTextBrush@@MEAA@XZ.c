/*
 * XREFs of ??1CTextBrush@@MEAA@XZ @ 0x1801FC80C
 * Callers:
 *     ??_GCTextBrush@@MEAAPEAXI@Z @ 0x1801FC880 (--_GCTextBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTextBrush::~CTextBrush(CTextBrush *this)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 20);
  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (void *)*((_QWORD *)this + 13);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
    operator delete(v4);
  CSpriteVisualContent::~CSpriteVisualContent(this);
}
