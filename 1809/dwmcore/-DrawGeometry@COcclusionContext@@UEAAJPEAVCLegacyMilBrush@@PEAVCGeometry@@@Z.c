/*
 * XREFs of ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1800696B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x18006A820 (-GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
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
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h]
  __int64 v16; // [rsp+50h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(struct CLegacyMilBrush *, __int64, struct CGeometry *))(*(_QWORD *)a2 + 48LL))(
         a2,
         77LL,
         a3) )
  {
    CachedBrushCVINoRef = CImageLegacyMilBrush::GetCachedBrushCVINoRef(a2);
    if ( CachedBrushCVINoRef )
    {
      v7 = *((_QWORD *)this + 101);
      *((_QWORD *)&v14 + 1) = CachedBrushCVINoRef;
      v8 = *((unsigned int *)this + 294);
      *(_QWORD *)&v14 = v7;
      LOBYTE(v15) = 1;
      v9 = v8 + 1;
      if ( (int)v8 + 1 < (unsigned int)v8 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, (int)v8 + 1 < (unsigned int)v8 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v9 > *((_DWORD *)this + 293) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 1152, 40, 1, &v14);
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC0u);
      }
      else
      {
        v10 = 5 * v8;
        v11 = *((_QWORD *)this + 144);
        *(_OWORD *)(v11 + 8 * v10) = v14;
        *(_OWORD *)(v11 + 8 * v10 + 16) = v15;
        *(_QWORD *)(v11 + 8 * v10 + 32) = v16;
        *((_DWORD *)this + 294) = v9;
      }
    }
  }
  return 0LL;
}
