/*
 * XREFs of ?Draw@CPolygon@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801BEF88
 * Callers:
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18016DB2C (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolygon::Draw(CPolygon *this, struct CDrawingContext *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  char v6; // al
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  signed int v10; // eax
  __int64 v11; // rcx
  signed int v12; // eax
  __int64 v13; // rcx
  _BYTE v15[8]; // [rsp+40h] [rbp-28h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-20h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)this + 31);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 256LL))(v4);
    v7 = (__int64 *)*((_QWORD *)this + 31);
    v8 = *((_QWORD *)this + 27) + 132LL;
    v9 = *v7;
    if ( v6 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64 *, struct CDrawingContext *, __int64, _BYTE *, _BYTE *, _QWORD))(v9 + 288))(
              v7,
              a2,
              v8,
              v15,
              v16,
              0LL);
      v3 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x202u, 0LL);
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, struct CDrawingContext *, __int64, _BYTE *, _BYTE *))(v9 + 200))(
              v7,
              a2,
              v8,
              v15,
              v16);
      v3 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x209u, 0LL);
    }
  }
  return v3;
}
