/*
 * XREFs of ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180215140
 * Callers:
 *     <none>
 * Callees:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x18007F41C (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x18021552C (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x180215E5C (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x18023430C (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CFormatConverter::CopyPixels(
        CFormatConverter *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *v5; // r13
  __int64 v10; // rcx
  int v11; // ebx
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx
  INT Y; // r15d
  void (__fastcall ***v16)(_QWORD, GUID *, unsigned int *); // rcx
  unsigned __int8 PixelFormatSize; // al
  SIZE_T v18; // r9
  SIZE_T v19; // r8
  LPVOID v20; // rax
  INT Height; // eax
  bool v22; // r14
  bool v23; // zf
  INT Width; // r12d
  INT v25; // esi
  __int64 v26; // rcx
  unsigned int v28; // [rsp+20h] [rbp-91h]
  unsigned int v29; // [rsp+60h] [rbp-51h] BYREF
  unsigned int v30; // [rsp+64h] [rbp-4Dh] BYREF
  int X; // [rsp+68h] [rbp-49h]
  unsigned int v32[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v33; // [rsp+78h] [rbp-39h] BYREF
  unsigned int v34; // [rsp+80h] [rbp-31h] BYREF
  struct _RTL_CRITICAL_SECTION *v35; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int8 *v36[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-11h] BYREF
  int v38; // [rsp+A8h] [rbp-9h]
  int v39; // [rsp+ACh] [rbp-5h]

  v5 = a5;
  v29 = a3;
  v35 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v33 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( !a5 )
  {
    v11 = -2147024809;
    v28 = 231;
LABEL_3:
    v12 = v11;
LABEL_45:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v12, v28);
    goto LABEL_46;
  }
  if ( !*((_QWORD *)this + 6) )
  {
    v11 = -2003292404;
    v28 = 236;
    goto LABEL_3;
  }
  if ( !a2 )
  {
    a2 = (const struct WICRect *)&v37;
    v38 = *((_DWORD *)this + 20);
    v39 = *((_DWORD *)this + 21);
    v37 = 0LL;
  }
  v13 = HrCheckBufferSize(*((_DWORD *)this + 17), a3, a2, a4);
  v11 = v13;
  if ( v13 < 0 )
  {
    v28 = 249;
LABEL_44:
    v12 = v13;
    goto LABEL_45;
  }
  v14 = *((_QWORD *)this + 6);
  Y = a2->Y;
  X = a2->X;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14) - 2 <= 1 )
  {
    v16 = (void (__fastcall ***)(_QWORD, GUID *, unsigned int *))*((_QWORD *)this + 6);
    *(_QWORD *)v32 = 0LL;
    (**v16)(v16, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, v32);
    if ( *(_QWORD *)v32 )
    {
      (*(void (__fastcall **)(_QWORD, const struct WICRect *, __int64, __int64 *))(**(_QWORD **)v32 + 24LL))(
        *(_QWORD *)v32,
        a2,
        1LL,
        &v33);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
    }
  }
  if ( v33 )
  {
    v36[0] = 0LL;
    v30 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)v33 + 48LL))(
            v33,
            &v30,
            v36);
    v11 = v13;
    if ( v13 < 0 )
    {
      v28 = 284;
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)v33 + 32LL))(v33, &v29, v32);
      v11 = v13;
      if ( v13 < 0 )
      {
        v28 = 292;
      }
      else
      {
        v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 40LL))(v33, &v34);
        v11 = v13;
        if ( v13 < 0 )
        {
          v28 = 298;
        }
        else
        {
          v13 = CFormatConverter::CopyPixelsHelper(
                  (CFormatConverter *)((char *)this - 16),
                  X,
                  Y,
                  v29,
                  v32[0],
                  v34,
                  v30,
                  v36[0],
                  a3,
                  a4,
                  a5);
          v11 = v13;
          if ( v13 >= 0 )
            goto LABEL_46;
          v28 = 312;
        }
      }
    }
    goto LABEL_44;
  }
  if ( !*((_QWORD *)this + 95) )
  {
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 14));
    if ( PixelFormatSize && *((_DWORD *)this + 20) <= 0x7FFFFFF8u / PixelFormatSize )
    {
      v11 = 0;
      v10 = (((*((_DWORD *)this + 20) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    }
    else
    {
      v11 = -2147024362;
      v10 = 0LL;
    }
    *((_DWORD *)this + 192) = v10;
    if ( v11 < 0 )
    {
      v28 = 323;
      goto LABEL_3;
    }
    v19 = (unsigned int)v10;
    if ( !(_DWORD)v10 )
      v19 = v18;
    v20 = HeapAlloc(WPF::g_processHeap, 0, v19);
    *((_QWORD *)this + 95) = v20;
    if ( !v20 )
    {
      v11 = -2147024882;
      v28 = 326;
      goto LABEL_3;
    }
  }
  Height = a2->Height;
  v22 = 0;
  v23 = a2->X == 0;
  Width = a2->Width;
  *(struct WICRect *)v36 = *a2;
  HIDWORD(v36[1]) = 1;
  if ( v23 && !a2->Y && Width == *((_DWORD *)this + 20) )
    v22 = Height == *((_DWORD *)this + 21);
  v25 = Height + Y;
  while ( Y < v25 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 6) + 48LL))(
            *((_QWORD *)this + 6),
            v36,
            *((unsigned int *)this + 192),
            *((unsigned int *)this + 192),
            *((_QWORD *)this + 95));
    v11 = v13;
    if ( v13 < 0 )
    {
      v28 = 377;
      goto LABEL_44;
    }
    CScanPipeline::Run((CFormatConverter *)((char *)this + 96), v5, *((const void **)this + 95), Width, X, Y);
    v5 += v29;
    ++HIDWORD(v36[0]);
    ++Y;
  }
  if ( v22 )
    ReleaseDecoderCopyBuffers(*((struct IUnknown **)this + 6));
LABEL_46:
  v26 = v33;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v11, 0x19Cu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v35);
  return (unsigned int)v11;
}
