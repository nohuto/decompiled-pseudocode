/*
 * XREFs of ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800229C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x180022970 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COcclusionContext::DrawGeometry(
        COcclusionContext *this,
        struct CLegacyMilBrush *a2,
        struct CGeometry *a3)
{
  struct CCachedVisualImage *CachedBrushCVINoRef; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // edx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(struct CLegacyMilBrush *, __int64, struct CGeometry *))(*(_QWORD *)a2 + 48LL))(
         a2,
         81LL,
         a3) )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a2);
    if ( CachedBrushCVINoRef )
    {
      v7 = *((_QWORD *)this + 102);
      *((_QWORD *)&v14 + 1) = CachedBrushCVINoRef;
      v8 = *((unsigned int *)this + 296);
      *(_QWORD *)&v14 = v7;
      LOBYTE(v15) = 1;
      v9 = v8 + 1;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB8u, 0LL);
      }
      else if ( v9 <= *((_DWORD *)this + 295) )
      {
        v12 = 5 * v8;
        v13 = *((_QWORD *)this + 145);
        *(_OWORD *)(v13 + 8 * v12) = v14;
        *(_OWORD *)(v13 + 8 * v12 + 16) = v15;
        *(_QWORD *)(v13 + 8 * v12 + 32) = v16;
        *((_DWORD *)this + 296) = v9;
      }
      else
      {
        v10 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 1160, 40LL, 1LL, &v14);
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC3u, 0LL);
      }
    }
  }
  return 0LL;
}
