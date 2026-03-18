/*
 * XREFs of ??1CPolygon@@UEAA@XZ @ 0x1801BC4A8
 * Callers:
 *     ??_GCPolygon@@UEAAPEAXI@Z @ 0x1801BC530 (--_GCPolygon@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPolygon::~CPolygon(CPolygon *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CPolygon::`vftable';
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, CPolygon *))(*(_QWORD *)v2 + 224LL))(v2, this);
    v3 = *((_QWORD *)this + 31);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 31) = 0LL;
    }
  }
  v4 = *((_QWORD *)this + 32);
  if ( v4 )
  {
    *((_QWORD *)this + 32) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
}
