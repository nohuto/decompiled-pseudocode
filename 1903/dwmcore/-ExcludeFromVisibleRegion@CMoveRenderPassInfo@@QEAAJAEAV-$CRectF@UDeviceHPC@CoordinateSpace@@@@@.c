/*
 * XREFs of ?ExcludeFromVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180180678
 * Callers:
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C2FDC (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z @ 0x180180A94 (-SetLastLocalToWorldTransform@CMoveRenderPassInfo@@QEAAJPEBVCMILMatrix@@0PEAV2@PEA_N@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CMoveRenderPassInfo::ExcludeFromVisibleRegion(CMoveRenderPassInfo *this, float *a2, double a3)
{
  int v5; // ebx
  float v6; // xmm0_4
  int v7; // r9d
  float v8; // xmm0_4
  int v9; // r8d
  float v10; // xmm0_4
  int v11; // edx
  float v12; // xmm0_4
  unsigned __int32 v13; // ecx
  HRGN RectRgn; // rsi
  signed int v15; // eax
  __int64 v16; // rcx
  HRGN v17; // rax
  signed int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // r9d
  signed int LastError; // eax
  int LocalToWorldTransform; // eax
  unsigned int v24; // [rsp+20h] [rbp-30h]
  float v25; // [rsp+30h] [rbp-20h]
  float v26; // [rsp+30h] [rbp-20h]
  float v27; // [rsp+30h] [rbp-20h]
  float v28; // [rsp+30h] [rbp-20h]
  struct tagRECT rc; // [rsp+38h] [rbp-18h] BYREF

  v5 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 312LL))(*((_QWORD *)this + 9)) )
    return (unsigned int)v5;
  SetLastError(0);
  v6 = a2[3];
  if ( (LODWORD(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v6 - v6;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v7 = (int)v6 - LODWORD(a3);
  }
  else
  {
    v25 = v6 + 6291456.25;
    v7 = (int)(LODWORD(v25) << 10) >> 11;
  }
  v8 = a2[2];
  if ( (LODWORD(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v8 - v8;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v9 = (int)v8 - LODWORD(a3);
  }
  else
  {
    v26 = v8 + 6291456.25;
    v9 = (int)(LODWORD(v26) << 10) >> 11;
  }
  v10 = a2[1];
  if ( (LODWORD(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v10 - v10;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5));
    v11 = (int)v10 - LODWORD(a3);
  }
  else
  {
    v27 = v10 + 6291456.25;
    v11 = (int)(LODWORD(v27) << 10) >> 11;
  }
  v12 = *a2;
  if ( (*(_DWORD *)a2 & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v12 - v12;
    v13 = (int)v12 - _mm_cmple_ss(*(__m128 *)&a3, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v28 = v12 + 6291456.25;
    v13 = (int)(LODWORD(v28) << 10) >> 11;
  }
  RectRgn = CreateRectRgn(v13, v11, v9, v7);
  if ( RectRgn )
  {
    if ( *((_QWORD *)this + 1)
      || (SetLastError(0), v17 = CreateRectRgn(0, 0, 0, 0), (*((_QWORD *)this + 1) = v17) != 0LL) )
    {
      SetLastError(0);
      if ( CombineRgn(*((HRGN *)this + 1), *((HRGN *)this + 1), RectRgn, 4) )
      {
        if ( GetRgnBox(*((HRGN *)this + 1), &rc) != 1 )
          goto LABEL_38;
        LocalToWorldTransform = CMoveRenderPassInfo::SetLastLocalToWorldTransform(this, 0LL, 0LL, 0LL, 0LL);
        v5 = LocalToWorldTransform;
        if ( LocalToWorldTransform >= 0 )
          goto LABEL_38;
        v20 = LocalToWorldTransform;
        v24 = 218;
LABEL_37:
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v20, v24, 0LL);
LABEL_38:
        DeleteObject(RectRgn);
        return (unsigned int)v5;
      }
      LastError = GetLastError();
      v5 = LastError;
      if ( LastError > 0 )
        v5 = (unsigned __int16)LastError | 0x80070000;
      if ( v5 >= 0 )
        v5 = -2003304445;
      v24 = 206;
    }
    else
    {
      v18 = GetLastError();
      v5 = v18;
      if ( v18 > 0 )
        v5 = (unsigned __int16)v18 | 0x80070000;
      if ( v5 >= 0 )
        v5 = -2003304445;
      v24 = 200;
    }
    v20 = v5;
    goto LABEL_37;
  }
  v15 = GetLastError();
  v5 = v15;
  if ( v15 > 0 )
    v5 = (unsigned __int16)v15 | 0x80070000;
  if ( v5 >= 0 )
    v5 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v5, 0xC4u, 0LL);
  return (unsigned int)v5;
}
