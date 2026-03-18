/*
 * XREFs of ?DrawMesh2DInternal@CDrawingContext@@AEAAJPEAVCGeometry2D@@PEAVIBitmapRealization@@@Z @ 0x18019A00C
 * Callers:
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180199DD0 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ffff @ 0x180160DB4 (McTemplateU0ffff.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x18020F92C (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawMesh2DInternal(
        CDrawingContext *this,
        struct CGeometry2D *a2,
        struct IBitmapRealization *a3)
{
  void *v5; // rbx
  __int64 v7; // r8
  signed int v8; // eax
  __int64 v9; // rcx
  int v10; // edi
  signed int MeshData; // eax
  __int64 v12; // rcx
  unsigned int v13; // r14d
  __int64 v14; // rdi
  LPVOID v15; // rax
  __int64 v16; // rcx
  unsigned int *v17; // r8
  _OWORD *v18; // rcx
  struct MilVertexXYZDUV2 *v19; // r9
  __int64 v20; // rax
  signed int v21; // eax
  __int64 v22; // rcx
  float v23; // xmm6_4
  float v24; // xmm8_4
  float v25; // xmm7_4
  float v26; // xmm10_4
  unsigned __int8 (__fastcall *v27)(struct IBitmapRealization *, _DWORD *, _QWORD); // rax
  float v28; // xmm9_4
  float v29; // xmm11_4
  float v30; // xmm7_4
  float v31; // xmm6_4
  float v32; // xmm8_4
  float v33; // xmm9_4
  float v34; // xmm10_4
  float v35; // xmm11_4
  signed int v36; // eax
  __int64 v37; // rcx
  signed int v38; // eax
  __int64 v39; // rcx
  signed int v40; // eax
  __int64 v41; // rcx
  int v42; // r9d
  signed int v43; // eax
  __int64 v44; // rcx
  unsigned int v46[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v48[2]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v49[20]; // [rsp+68h] [rbp-A0h] BYREF
  struct MilVertexXYZDUV2 *v50; // [rsp+B8h] [rbp-50h] BYREF
  float v51; // [rsp+C0h] [rbp-48h]
  float v52; // [rsp+C4h] [rbp-44h]
  float v53; // [rsp+C8h] [rbp-40h]
  float v54; // [rsp+CCh] [rbp-3Ch]
  unsigned int *v55[3]; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v56[4]; // [rsp+E8h] [rbp-20h] BYREF

  v48[0] = 0LL;
  v47 = 0LL;
  v5 = 0LL;
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    (*(void (__fastcall **)(struct CGeometry2D *, unsigned int **))(*(_QWORD *)a2 + 208LL))(a2, v55);
    CMILMatrix::Transform2DBoundsHelper<0>((CDrawingContext *)((char *)this + 280), (__int64)v55, (float *)&v50);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0ffff(
        Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT,
        v7,
        *((float *)&v50 + 1),
        SLOBYTE(v51),
        SLOBYTE(v52));
  }
  v8 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)a3 + 136LL))(
         a3,
         (char *)this + 392,
         0LL,
         0LL,
         v48);
  v46[0] = v8;
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x19Eu, 0LL);
  }
  else
  {
    v50 = 0LL;
    v46[0] = 0;
    v55[0] = 0LL;
    v46[1] = 0;
    MeshData = CGeometry2D::GetMeshData(a2, &v50, v46, (const unsigned int **const)v55, &v46[1]);
    v46[0] = MeshData;
    v10 = MeshData;
    if ( MeshData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, MeshData, 0x1ABu, 0LL);
    }
    else
    {
      v13 = v46[1];
      v14 = v46[1];
      v15 = operator new(saturated_mul(v46[1], 0x20uLL));
      v5 = v15;
      if ( v15 )
      {
        if ( v13 )
        {
          v17 = v55[0];
          v18 = v15;
          v19 = v50;
          do
          {
            v20 = *v17++;
            v20 *= 32LL;
            *v18 = *(_OWORD *)((char *)v19 + v20);
            v18 += 2;
            *(v18 - 1) = *(_OWORD *)((char *)v19 + v20 + 16);
            --v14;
          }
          while ( v14 );
        }
        v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 48) + 224LL))(
                *((_QWORD *)this + 48),
                4LL,
                &v47);
        v46[0] = v21;
        v10 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x1B6u, 0LL);
        }
        else
        {
          v23 = 0.0;
          v24 = 0.0;
          LODWORD(v25) = (_DWORD)FLOAT_1_0;
          v26 = 0.0;
          v27 = *(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _DWORD *, _QWORD))(*(_QWORD *)a3 + 40LL);
          v28 = *(float *)&FLOAT_1_0;
          v56[0] = _xmm;
          v29 = 0.0;
          v56[1] = _xmm;
          v56[2] = _xmm;
          v56[3] = _xmm;
          v49[16] = 0;
          if ( v27(a3, v49, 0LL) )
          {
            v30 = *(float *)v49;
            v31 = *(float *)&v49[1];
            v32 = *(float *)&v49[4];
            v33 = *(float *)&v49[5];
            v34 = *(float *)&v49[12];
            v35 = *(float *)&v49[13];
            (*(void (__fastcall **)(struct IBitmapRealization *, unsigned int *, unsigned int *))(*(_QWORD *)a3 + 32LL))(
              a3,
              v46,
              &v46[1]);
            v23 = v31 * (float)(int)v46[1];
            v25 = v30 * (float)(int)v46[0];
            v24 = v32 * (float)(int)v46[0];
            v26 = v34 * (float)(int)v46[0];
            v28 = v33 * (float)(int)v46[1];
            v29 = v35 * (float)(int)v46[1];
          }
          v36 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v47 + 72LL))(
                  v47,
                  0LL,
                  0LL,
                  v56,
                  64);
          v46[0] = v36;
          v10 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x1CEu, 0LL);
          }
          else
          {
            v50 = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v23), LODWORD(v25));
            v51 = v24;
            v52 = v28;
            v53 = v26;
            v54 = v29;
            v38 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct MilVertexXYZDUV2 **, int))(*(_QWORD *)v47 + 72LL))(
                    v47,
                    1LL,
                    0LL,
                    &v50,
                    24);
            v46[0] = v38;
            v10 = v38;
            if ( v38 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x1D1u, 0LL);
            }
            else
            {
              (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v47 + 112LL))(
                v47,
                0LL,
                v48[0],
                1LL);
              v40 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, void *, unsigned int))(*(_QWORD *)v47 + 64LL))(
                      v47,
                      L"vertices",
                      0LL,
                      v5,
                      32 * v13);
              v46[0] = v40;
              v10 = v40;
              if ( v40 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x1D8u, 0LL);
              }
              else
              {
                v42 = 12;
                if ( *((_DWORD *)this + 69) != 2 )
                  v42 = 0;
                v43 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, int, int))(**((_QWORD **)this + 48) + 96LL))(
                        *((_QWORD *)this + 48),
                        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                        v47,
                        0LL,
                        0LL,
                        1,
                        v42);
                v46[0] = v43;
                v10 = v43;
                if ( v43 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x1DFu, 0LL);
              }
            }
          }
        }
      }
      else
      {
        v10 = -2147024882;
        v46[0] = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x8007000E, 0x1AEu, 0LL);
      }
    }
  }
  TranslateDXGIorD3DErrorInContext(v10, 0, v46);
  if ( v47 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v47 + 112LL))(v47, 0LL, 0LL, 1LL);
  if ( v5 )
    operator delete(v5);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v48);
  return v46[0];
}
