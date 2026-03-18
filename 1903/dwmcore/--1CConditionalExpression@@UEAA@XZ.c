/*
 * XREFs of ??1CConditionalExpression@@UEAA@XZ @ 0x1801D3ED0
 * Callers:
 *     ??_ECConditionalExpression@@UEAAPEAXI@Z @ 0x1801D4030 (--_ECConditionalExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CConditionalExpression::~CConditionalExpression(CConditionalExpression *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rcx

  *(_QWORD *)this = &CConditionalExpression::`vftable';
  v2 = (__int64 *)*((_QWORD *)this + 41);
  v3 = (__int64 *)*((_QWORD *)this + 40);
  if ( v3 != v2 )
  {
    do
    {
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v3 + 1);
      v4 = *v3;
      if ( *v3 )
      {
        *v3 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v3 += 2;
    }
    while ( v3 != v2 );
    v3 = (__int64 *)*((_QWORD *)this + 40);
  }
  *((_QWORD *)this + 41) = v3;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 43);
  v5 = (__int64 *)*((_QWORD *)this + 40);
  if ( v5 )
  {
    v6 = (__int64 *)*((_QWORD *)this + 41);
    if ( v5 != v6 )
    {
      do
      {
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v5 + 1);
        v7 = *v5;
        if ( *v5 )
        {
          *v5 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        v5 += 2;
      }
      while ( v5 != v6 );
      v5 = (__int64 *)*((_QWORD *)this + 40);
    }
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 42) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 40) = 0LL;
    *((_QWORD *)this + 41) = 0LL;
    *((_QWORD *)this + 42) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
