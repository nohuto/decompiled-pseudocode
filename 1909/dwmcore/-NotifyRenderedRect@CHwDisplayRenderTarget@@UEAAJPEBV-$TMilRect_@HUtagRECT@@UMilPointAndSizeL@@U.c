/*
 * XREFs of ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180064BD0
 * Callers:
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@WJA@EAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800F0580 (-NotifyRenderedRect@CHwDisplayRenderTarget@@WJA@EAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL.c)
 * Callees:
 *     ?IntersectUnsafe@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800487D8 (-IntersectUnsafe@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x180064D10 (-ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::NotifyRenderedRect(CHwDisplayRenderTarget *a1, _DWORD *a2)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v12; // [rsp+38h] [rbp-19h] BYREF
  int v13; // [rsp+40h] [rbp-11h]
  int v14; // [rsp+44h] [rbp-Dh]
  void *lpMem; // [rsp+48h] [rbp-9h] BYREF
  _DWORD v16[3]; // [rsp+50h] [rbp-1h] BYREF
  _DWORD v17[2]; // [rsp+5Ch] [rbp+Bh] BYREF
  _DWORD v18[13]; // [rsp+64h] [rbp+13h] BYREF

  v4 = 0;
  if ( (int)CHwDisplayRenderTarget::ValidateDeviceAndSwapChain(a1) >= 0 )
  {
    v5 = *((_DWORD *)a1 + 2);
    v6 = 0;
    v7 = *((_DWORD *)a1 + 3);
    v8 = 0;
    v12 = 0LL;
    v13 = v5;
    v14 = v7;
    if ( a2 )
    {
      TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IntersectUnsafe(&v12, a2);
      v5 = v13;
      v8 = HIDWORD(v12);
      v6 = v12;
      v7 = v14;
    }
    if ( v5 > v6 && v7 > v8 )
    {
      lpMem = v16;
      if ( v6 >= v5 || v8 >= v7 )
      {
        v16[0] = 0;
      }
      else
      {
        v17[0] = v8;
        v16[0] = 2;
        v16[1] = v6;
        v16[2] = v5;
        v17[1] = (unsigned int)v16 + 1 + 27 - (unsigned int)v17;
        v18[2] = v6;
        v18[3] = v5;
        v18[1] = (unsigned int)v16 + 1 + 27 - (unsigned int)v18 + 8;
        v18[0] = v7;
      }
      v9 = (*(__int64 (__fastcall **)(CHwDisplayRenderTarget *, void **))(*(_QWORD *)a1 + 280LL))(a1, &lpMem);
      v4 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1DDu, 0LL);
      if ( v16 != lpMem )
        operator delete(lpMem);
    }
  }
  return v4;
}
