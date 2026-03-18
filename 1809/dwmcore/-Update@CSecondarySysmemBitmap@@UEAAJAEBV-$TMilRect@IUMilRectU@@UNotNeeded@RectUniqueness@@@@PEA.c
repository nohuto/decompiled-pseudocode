/*
 * XREFs of ?Update@CSecondarySysmemBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18001B080
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z @ 0x18009B26C (-AddValidRect@CSecondaryBitmap@@IEAAJAEBUMilRectU@@@Z.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x18009B420 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009B4BC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Update(enum DXGI_FORMAT *this, struct MilRectU *a2, __int64 a3)
{
  enum DXGI_FORMAT v6; // ecx
  _DWORD *v7; // rax
  unsigned int v8; // ebp
  int valid; // eax
  unsigned int v10; // ebx
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-68h]
  _BYTE v14[16]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v15; // [rsp+40h] [rbp-48h] BYREF

  v15 = *(_OWORD *)a2;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(this, &v15)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v10 = -2147024809;
    v13 = 122;
    goto LABEL_15;
  }
  v7 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a3 + 24LL))(a3, &v15);
  v6 = *((_DWORD *)this + 27);
  if ( *v7 != v6 )
  {
    v10 = -2003292288;
    v13 = 127;
LABEL_15:
    v12 = v10;
    goto LABEL_16;
  }
  v8 = *((_DWORD *)this + 26) * *((_DWORD *)a2 + 1) + *(_DWORD *)a2 * (GetPixelFormatSize(v6) >> 3);
  if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 40LL))(a3, v14) != DisplayId::None
    || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a3 + 48LL))(a3) )
  {
    memset_0((void *)(v8 + *((_QWORD *)this + 15)), 0, *((unsigned int *)this + 32) - (unsigned __int64)v8);
    *((_BYTE *)this + 132) = 1;
  }
  else
  {
    valid = (*(__int64 (__fastcall **)(__int64, struct MilRectU *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a3 + 56LL))(
              a3,
              a2,
              *((unsigned int *)this + 26),
              *((_DWORD *)this + 32) - v8,
              v8 + *((_QWORD *)this + 15));
    v10 = valid;
    if ( valid < 0 )
    {
      v13 = 145;
LABEL_12:
      v12 = valid;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v12, v13);
      return v10;
    }
  }
  valid = CSecondaryBitmap::AddValidRect((CSecondaryBitmap *)this, a2);
  v10 = valid;
  if ( valid < 0 )
  {
    v13 = 154;
    goto LABEL_12;
  }
  return v10;
}
