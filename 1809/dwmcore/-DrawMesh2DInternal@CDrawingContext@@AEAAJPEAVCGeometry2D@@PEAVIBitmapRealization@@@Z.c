/*
 * XREFs of ?DrawMesh2DInternal@CDrawingContext@@AEAAJPEAVCGeometry2D@@PEAVIBitmapRealization@@@Z @ 0x180163444
 * Callers:
 *     ?DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z @ 0x180163220 (-DrawMesh2D@CDrawingContext@@UEAAJPEAVCGeometry2D@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ffff @ 0x180167760 (McTemplateU0ffff.c)
 *     ?GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z @ 0x1801C04D4 (-GetMeshData@CGeometry2D@@QEAAJQEAPEBUMilVertexXYZDUV2@@PEAIQEAPEBI1@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawMesh2DInternal(
        CDrawingContext *this,
        struct CGeometry2D *a2,
        struct IBitmapRealization *a3)
{
  void *v5; // rbx
  int v7; // r8d
  int v8; // r9d
  int v9; // eax
  __int64 v10; // rcx
  int v11; // edi
  int MeshData; // eax
  __int64 v13; // rcx
  unsigned int v14; // r14d
  __int64 v15; // rdi
  LPVOID v16; // rax
  __int64 v17; // rcx
  unsigned int *v18; // r8
  _OWORD *v19; // rcx
  struct MilVertexXYZDUV2 *v20; // r9
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  float v24; // xmm10_4
  float v25; // xmm6_4
  float v26; // xmm13_4
  float v27; // xmm11_4
  unsigned __int8 (__fastcall *v28)(struct IBitmapRealization *, _DWORD *, _QWORD); // rax
  float v29; // xmm14_4
  float v30; // xmm12_4
  float v31; // xmm13_4
  float v32; // xmm6_4
  float v33; // xmm7_4
  float v34; // xmm14_4
  float v35; // xmm8_4
  float v36; // xmm9_4
  int v37; // eax
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // eax
  __int64 v42; // rcx
  int v43; // r8d
  int v44; // eax
  __int64 v45; // rcx
  unsigned int v47[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v48; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v49[2]; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v50[20]; // [rsp+68h] [rbp-A0h] BYREF
  struct MilVertexXYZDUV2 *v51; // [rsp+B8h] [rbp-50h] BYREF
  float v52; // [rsp+C0h] [rbp-48h]
  float v53; // [rsp+C4h] [rbp-44h]
  float v54; // [rsp+C8h] [rbp-40h]
  float v55; // [rsp+CCh] [rbp-3Ch]
  unsigned int *v56[3]; // [rsp+D0h] [rbp-38h] BYREF
  _OWORD v57[4]; // [rsp+E8h] [rbp-20h] BYREF

  v49[0] = 0LL;
  v48 = 0LL;
  v5 = 0LL;
  if ( EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context[0], &EVTDESC_ETWGUID_DRAWEVENT) )
  {
    (*(void (__fastcall **)(struct CGeometry2D *, unsigned int **))(*(_QWORD *)a2 + 168LL))(a2, v56);
    CMILMatrix::Transform2DBoundsHelper<0>((CDrawingContext *)((char *)this + 280), (__int64)v56, (float *)&v51);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0ffff(
        (unsigned int)Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
        v7,
        v8,
        SLOBYTE(v52),
        SLOBYTE(v53));
  }
  v49[0] = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IBitmapRealization *, char *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)a3 + 136LL))(
         a3,
         (char *)this + 392,
         0LL,
         0LL,
         v49);
  v47[0] = v9;
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xFF9u);
  }
  else
  {
    v51 = 0LL;
    v47[0] = 0;
    v56[0] = 0LL;
    v47[1] = 0;
    MeshData = CGeometry2D::GetMeshData(a2, &v51, v47, (const unsigned int **const)v56, &v47[1]);
    v47[0] = MeshData;
    v11 = MeshData;
    if ( MeshData < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, MeshData, 0x1006u);
    }
    else
    {
      v14 = v47[1];
      v15 = v47[1];
      v16 = operator new(saturated_mul(v47[1], 0x20uLL));
      v5 = v16;
      if ( v16 )
      {
        if ( v14 )
        {
          v18 = v56[0];
          v19 = v16;
          v20 = v51;
          do
          {
            v21 = *v18++;
            v21 *= 32LL;
            *v19 = *(_OWORD *)((char *)v20 + v21);
            v19 += 2;
            *(v19 - 1) = *(_OWORD *)((char *)v20 + v21 + 16);
            --v15;
          }
          while ( v15 );
        }
        v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 48) + 224LL))(
                *((_QWORD *)this + 48),
                4LL,
                &v48);
        v47[0] = v22;
        v11 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1011u);
        }
        else
        {
          v24 = 0.0;
          v25 = 0.0;
          v26 = FLOAT_1_0;
          v27 = 0.0;
          v28 = *(unsigned __int8 (__fastcall **)(struct IBitmapRealization *, _DWORD *, _QWORD))(*(_QWORD *)a3 + 40LL);
          v29 = FLOAT_1_0;
          v57[0] = _xmm;
          v30 = 0.0;
          v57[1] = _xmm;
          v57[2] = _xmm;
          v57[3] = _xmm;
          v50[16] = 0;
          if ( v28(a3, v50, 0LL) )
          {
            v31 = *(float *)v50;
            v32 = *(float *)&v50[1];
            v33 = *(float *)&v50[4];
            v34 = *(float *)&v50[5];
            v35 = *(float *)&v50[12];
            v36 = *(float *)&v50[13];
            (*(void (__fastcall **)(struct IBitmapRealization *, unsigned int *, unsigned int *))(*(_QWORD *)a3 + 32LL))(
              a3,
              v47,
              &v47[1]);
            v29 = v34 * (float)(int)v47[1];
            v24 = (float)(int)v47[1] * v32;
            v26 = v31 * (float)(int)v47[0];
            v25 = (float)(int)v47[0] * v33;
            v27 = (float)(int)v47[0] * v35;
            v30 = (float)(int)v47[1] * v36;
          }
          v37 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _OWORD *, int))(*(_QWORD *)v48 + 72LL))(
                  v48,
                  0LL,
                  0LL,
                  v57,
                  64);
          v47[0] = v37;
          v11 = v37;
          if ( v37 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x1029u);
          }
          else
          {
            v51 = (struct MilVertexXYZDUV2 *)__PAIR64__(LODWORD(v24), LODWORD(v26));
            v52 = v25;
            v53 = v29;
            v54 = v27;
            v55 = v30;
            v39 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct MilVertexXYZDUV2 **, int))(*(_QWORD *)v48 + 72LL))(
                    v48,
                    1LL,
                    0LL,
                    &v51,
                    24);
            v47[0] = v39;
            v11 = v39;
            if ( v39 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0x102Cu);
            }
            else
            {
              (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v48 + 112LL))(
                v48,
                0LL,
                v49[0],
                1LL);
              v41 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, void *, unsigned int))(*(_QWORD *)v48 + 64LL))(
                      v48,
                      L"vertices",
                      0LL,
                      v5,
                      32 * v14);
              v47[0] = v41;
              v11 = v41;
              if ( v41 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x1033u);
              }
              else
              {
                v43 = 12;
                if ( *((_DWORD *)this + 69) != 2 )
                  v43 = 0;
                v44 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, int, int))(**((_QWORD **)this + 48) + 96LL))(
                        *((_QWORD *)this + 48),
                        ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                        v48,
                        0LL,
                        0LL,
                        1,
                        v43);
                v47[0] = v44;
                v11 = v44;
                if ( v44 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x103Au);
              }
            }
          }
        }
      }
      else
      {
        v11 = -2147024882;
        v47[0] = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x1009u);
      }
    }
  }
  TranslateDXGIorD3DErrorInContext(v11, 0, v47);
  if ( v48 )
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v48 + 112LL))(v48, 0LL, 0LL, 1LL);
  if ( v5 )
    WPF::ProcessHeapImpl::Free(v5);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(v49);
  return v47[0];
}
