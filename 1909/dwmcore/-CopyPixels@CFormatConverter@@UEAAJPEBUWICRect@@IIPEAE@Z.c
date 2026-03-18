/*
 * XREFs of ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802228E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800484B8 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x1800CC8F4 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x180222C94 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x18022353C (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x18025E088 (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CFormatConverter::CopyPixels(
        CFormatConverter *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *v5; // r12
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  INT Y; // r15d
  void (__fastcall ***v16)(_QWORD, GUID *, unsigned int *); // rcx
  void (__fastcall *v17)(_QWORD, const struct WICRect *, __int64, __int64 *); // rbx
  unsigned __int8 PixelFormatSize; // al
  SIZE_T v19; // rcx
  LPVOID v20; // rax
  INT Height; // eax
  bool v22; // r14
  bool v23; // zf
  INT Width; // r13d
  INT v25; // esi
  unsigned int v27; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v28[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v29; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v30; // [rsp+78h] [rbp-29h] BYREF
  int X; // [rsp+7Ch] [rbp-25h]
  unsigned int v32; // [rsp+80h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int8 *v34[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-1h] BYREF
  int v36; // [rsp+A8h] [rbp+7h]
  int v37; // [rsp+ACh] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = a5;
  v27 = a3;
  v33 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v29 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( !a5 )
  {
    v10 = -2147024809;
    v11 = 220LL;
    v12 = 2147942487LL;
LABEL_44:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\dwm\\common\\formatconverter\\formatconverter.cpp",
      (const char *)v12);
    goto LABEL_41;
  }
  if ( !*((_QWORD *)this + 6) )
  {
    v10 = -2003292404;
    v11 = 222LL;
    v12 = 2291674892LL;
    goto LABEL_44;
  }
  if ( !a2 )
  {
    a2 = (const struct WICRect *)&v35;
    v36 = *((_DWORD *)this + 20);
    v37 = *((_DWORD *)this + 21);
    v35 = 0LL;
  }
  v13 = HrCheckBufferSize(*((unsigned int *)this + 17), a3, a2, a4);
  v10 = v13;
  if ( v13 < 0 )
  {
    v11 = 234LL;
LABEL_43:
    v12 = (unsigned int)v13;
    goto LABEL_44;
  }
  v14 = *((_QWORD *)this + 6);
  Y = a2->Y;
  X = a2->X;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14) - 2 <= 1 )
  {
    v16 = (void (__fastcall ***)(_QWORD, GUID *, unsigned int *))*((_QWORD *)this + 6);
    *(_QWORD *)v28 = 0LL;
    (**v16)(v16, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, v28);
    if ( *(_QWORD *)v28 )
    {
      v17 = *(void (__fastcall **)(_QWORD, const struct WICRect *, __int64, __int64 *))(**(_QWORD **)v28 + 24LL);
      wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v29);
      v17(*(_QWORD *)v28, a2, 1LL, &v29);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v28 + 16LL))(*(_QWORD *)v28);
    }
  }
  if ( v29 )
  {
    v34[0] = 0LL;
    v30 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v29 + 48LL))(
            v29,
            &v30,
            v34);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = 269LL;
      goto LABEL_43;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v29 + 32LL))(v29, &v27, v28);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = 277LL;
      goto LABEL_43;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v29 + 40LL))(v29, &v32);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = 283LL;
      goto LABEL_43;
    }
    v13 = CFormatConverter::CopyPixelsHelper(
            (CFormatConverter *)((char *)this - 16),
            X,
            Y,
            v27,
            v28[0],
            v32,
            v30,
            v34[0],
            a3,
            a4,
            a5);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = 297LL;
      goto LABEL_43;
    }
  }
  else
  {
    if ( !*((_QWORD *)this + 95) )
    {
      PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 14));
      if ( PixelFormatSize && *((_DWORD *)this + 20) <= 0x7FFFFFF8u / PixelFormatSize )
      {
        v10 = 0;
        v19 = (((*((_DWORD *)this + 20) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
      }
      else
      {
        v10 = -2147024362;
        v19 = 0LL;
      }
      *((_DWORD *)this + 192) = v19;
      if ( v10 < 0 )
      {
        v12 = (unsigned int)v10;
        v11 = 308LL;
        goto LABEL_44;
      }
      v20 = DefaultHeap::Alloc(v19);
      *((_QWORD *)this + 95) = v20;
      if ( !v20 )
      {
        v10 = -2147024882;
        v11 = 311LL;
        v12 = 2147942414LL;
        goto LABEL_44;
      }
    }
    Height = a2->Height;
    v22 = 0;
    v23 = a2->X == 0;
    Width = a2->Width;
    *(struct WICRect *)v34 = *a2;
    HIDWORD(v34[1]) = 1;
    if ( v23 && !a2->Y && Width == *((_DWORD *)this + 20) )
      v22 = Height == *((_DWORD *)this + 21);
    v25 = Height + Y;
    while ( Y < v25 )
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 6)
                                                                                          + 48LL))(
              *((_QWORD *)this + 6),
              v34,
              *((unsigned int *)this + 192),
              *((unsigned int *)this + 192),
              *((_QWORD *)this + 95));
      v10 = v13;
      if ( v13 < 0 )
      {
        v11 = 362LL;
        goto LABEL_43;
      }
      CScanPipeline::Run((CFormatConverter *)((char *)this + 96), v5, *((const void **)this + 95), Width, X, Y);
      v5 += v27;
      ++HIDWORD(v34[0]);
      ++Y;
    }
    if ( v22 )
      ReleaseDecoderCopyBuffers(*((struct IUnknown **)this + 6));
  }
  v10 = 0;
LABEL_41:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v33);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v29);
  return (unsigned int)v10;
}
