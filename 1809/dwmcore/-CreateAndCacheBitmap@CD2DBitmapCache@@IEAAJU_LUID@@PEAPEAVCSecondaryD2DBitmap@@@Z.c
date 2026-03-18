/*
 * XREFs of ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800953F8
 * Callers:
 *     ?GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVID2DBitmap@@@Z @ 0x180095114 (-GetBitmapInternalNoRef@CD2DBitmapCache@@IEAAJU_LUID@@VDisplayId@@_NPEBV-$TMilRect@IUMilRectU@@U.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z @ 0x180097210 (-Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800EC020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800EC088 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmapCache::CreateAndCacheBitmap(
        CD2DBitmapCache *this,
        struct _LUID a2,
        struct CSecondaryD2DBitmap **a3)
{
  __int64 v4; // rcx
  const struct CResourceTag *v7; // rdi
  const struct PixelFormatInfo *v8; // rax
  int v9; // eax
  __int64 v10; // rcx
  int v11; // ebx
  struct CSecondaryD2DBitmap *v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // edx
  int v17; // eax
  int v19; // eax
  int v20; // r9d
  unsigned int v21; // [rsp+20h] [rbp-40h]
  struct CSecondaryD2DBitmap *v22; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+3Ch] [rbp-24h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-20h] BYREF

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 4);
  v22 = 0LL;
  (*(void (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v4 + 32LL))(v4, &v24, &v23);
  if ( dword_18030BC98 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18030BC98);
    if ( dword_18030BC98 == -1 )
    {
      dword_18030BCA8 = 24;
      qword_18030BCA0 = (__int64)"DWM Sysmem Source Bitmap";
      dword_18030BCB8 = 23;
      qword_18030BCB0 = (__int64)"DWM Cross-Device Bitmap";
      Init_thread_footer(&dword_18030BC98);
    }
  }
  v7 = (const struct CResourceTag *)off_1803059D8;
  if ( !*((_QWORD *)this + 5) )
    v7 = off_1803059D0;
  v8 = (const struct PixelFormatInfo *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 4) + 24LL))(
                                         *((_QWORD *)this + 4),
                                         v25);
  v9 = CSecondaryD2DBitmap::Create(a2, v24, v23, v8, v7, &v22);
  v11 = v9;
  if ( v9 < 0 )
  {
    v21 = 277;
    v20 = v9;
  }
  else
  {
    v12 = v22;
    v25[0] = (char *)this + 24;
    v13 = *((_DWORD *)v22 + 20);
    v14 = v13 + 1;
    v11 = v13 + 1 < v13 ? 0x80070216 : 0;
    if ( v13 + 1 < v13 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xB5u);
    }
    else if ( v14 > *((_DWORD *)v22 + 19) )
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v22 + 56, 8, 1, v25);
      v11 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v19, 0xC0u);
    }
    else
    {
      LODWORD(v10) = *((_DWORD *)v22 + 20);
      *(_QWORD *)(*((_QWORD *)v22 + 7) + 8LL * v13) = v25[0];
      *((_DWORD *)v12 + 20) = v14;
    }
    if ( v11 < 0 )
    {
      v21 = 283;
    }
    else
    {
      v15 = *((_DWORD *)this + 20);
      v16 = v15 + 1;
      v11 = v15 + 1 < v15 ? 0x80070216 : 0;
      if ( v15 + 1 < v15 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v11, 0xB5u);
      }
      else if ( v16 <= *((_DWORD *)this + 19) )
      {
        v10 = *((unsigned int *)this + 20);
        *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v10) = v22;
        *((_DWORD *)this + 20) = v16;
      }
      else
      {
        v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8, 1, &v22);
        v11 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v17, 0xC0u);
      }
      if ( v11 >= 0 )
      {
        *a3 = v22;
        return (unsigned int)v11;
      }
      v21 = 285;
    }
    v20 = v11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v20, v21);
  if ( v22 )
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v22 + 16LL))(v22);
  return (unsigned int)v11;
}
