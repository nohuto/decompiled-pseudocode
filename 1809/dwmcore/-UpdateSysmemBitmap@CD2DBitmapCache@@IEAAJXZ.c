/*
 * XREFs of ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x18001C158
 * Callers:
 *     ?UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVCSecondaryD2DBitmap@@@Z @ 0x1800952E0 (-UpdateCachedBitmap@CD2DBitmapCache@@IEAAJV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::UpdateSysmemBitmap(CD2DBitmapCache *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  unsigned int v4; // ecx
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 48LL))(
          *((_QWORD *)this + 6) + 16LL,
          0LL,
          v6) )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 56LL))(
           *((_QWORD *)this + 6) + 16LL,
           v6,
           *((_QWORD *)this + 4));
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x19Au);
  }
  return v2;
}
