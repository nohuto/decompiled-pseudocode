/*
 * XREFs of ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800952E0
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x180095114 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18001A664 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18001C158 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateCachedBitmap(CD2DBitmapCache *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  int updated; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  _BYTE v16[16]; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3 + 264;
  v6 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)(a3 + 264) + 48LL))(a3 + 264, a2, v16) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 72LL))(*((_QWORD *)this + 4)) )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, v16, *((_QWORD *)this + 4));
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x162u);
    }
    else
    {
      v10 = CD2DBitmapCache::EnsureSysmemBitmap(this);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x166u);
      }
      else if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL)
                                                                            + 48LL))(
                  *((_QWORD *)this + 6) + 16LL,
                  a2,
                  0LL)
             || (updated = CD2DBitmapCache::UpdateSysmemBitmap(this), v6 = updated, updated >= 0) )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v3 + 56LL))(
                v3,
                v16,
                (*((_QWORD *)this + 6) + 96LL) & -(__int64)(*((_QWORD *)this + 6) != 0LL));
        v6 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x170u);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, updated, 0x16Au);
      }
    }
  }
  return v6;
}
