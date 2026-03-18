/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180072940
 * Callers:
 *     <none>
 * Callees:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18009676C (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  void *v8; // r14
  unsigned __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // r9d
  INT v14; // r8d
  INT v15; // r9d
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // r8d
  signed int v19; // ecx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v21; // ecx
  SIZE_T v22; // r10
  unsigned int v23; // esi
  unsigned int v24; // r15d
  SIZE_T v25; // r8
  LPVOID v26; // rax
  unsigned int v27; // ecx
  int v28; // eax
  int v29; // r9d
  unsigned int v30; // [rsp+20h] [rbp-79h]
  unsigned int v31; // [rsp+20h] [rbp-79h]
  struct IUnknown *v32; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v33; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v35; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v36; // [rsp+74h] [rbp-25h] BYREF
  unsigned int v37[2]; // [rsp+78h] [rbp-21h] BYREF
  void *v38; // [rsp+80h] [rbp-19h] BYREF
  char *v39; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v40[4]; // [rsp+90h] [rbp-9h] BYREF

  *(_QWORD *)v37 = 0LL;
  v32 = 0LL;
  v39 = (char *)this + 96;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, unsigned int *))this + 25))(*((_QWORD *)this + 25), &IID_IWICBitmap, v37);
  LODWORD(v9) = v37[0];
  if ( *(_QWORD *)v37 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, struct IUnknown **))(**(_QWORD **)v37 + 64LL))(
            *(_QWORD *)v37,
            a2,
            (unsigned int)a3,
            &v32);
    v11 = v10;
    if ( v10 < 0 )
    {
      v30 = 94;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v32->lpVtbl[1].QueryInterface)(
              v32,
              &v36,
              &v35);
      v11 = v10;
      if ( v10 < 0 )
      {
        v30 = 96;
      }
      else
      {
        v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v32->lpVtbl[1].AddRef)(v32, &v34);
        v11 = v10;
        if ( v10 < 0 )
        {
          v30 = 97;
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v32->lpVtbl[1].Release)(
                  v32,
                  &v33,
                  &v38);
          v11 = v10;
          if ( v10 < 0 )
          {
            v30 = 98;
          }
          else
          {
            v10 = CBitmap::HrLock(
                    (CWICBitmapWrapper *)((char *)this - 24),
                    v36,
                    v35,
                    (CWICBitmapWrapper *)((char *)this + 160),
                    v34,
                    v33,
                    v38,
                    a3,
                    a4,
                    0,
                    v32);
            v11 = v10;
            if ( v10 >= 0 )
            {
              v32 = 0LL;
              goto LABEL_8;
            }
            v30 = 114;
          }
        }
      }
    }
    v13 = v10;
    goto LABEL_16;
  }
  if ( a3 != WICBitmapLockRead )
  {
    v11 = -2003292412;
    v30 = 132;
LABEL_15:
    v13 = v11;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v13, v30);
    goto LABEL_59;
  }
  memset(v40, 0, sizeof(v40));
  if ( a2 )
  {
    if ( a2->m128i_i32[2] <= 0
      || a2->m128i_i32[3] <= 0
      || (v14 = *((_DWORD *)this + 36), a2->m128i_i32[0] >= v14)
      || (v15 = *((_DWORD *)this + 37), a2->m128i_i32[1] >= v15) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024809, 0xBAu);
    }
    else
    {
      v16 = _mm_cvtsi128_si32(*a2);
      *(__m128i *)v40 = *a2;
      v17 = v40[2];
      v40[0] = v16;
      if ( v16 < 0 )
      {
        v17 = v16 + v40[2];
        v16 = 0;
        v40[2] = v17;
        v40[0] = 0;
      }
      if ( v17 + v16 > v14 )
      {
        v17 = v14 - v16;
        v40[2] = v14 - v16;
      }
      v18 = v40[1];
      v19 = v40[3];
      if ( (v40[1] & 0x80000000) != 0 )
      {
        v19 = v40[1] + v40[3];
        v18 = 0;
        v40[3] += v40[1];
        v40[1] = 0;
      }
      if ( (int)(v19 + v18) > v15 )
      {
        v19 = v15 - v18;
        v40[3] = v15 - v18;
      }
      if ( v17 <= 0 || v19 <= 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024809, 0xB2u);
    }
  }
  else
  {
    v40[0] = 0;
    v40[1] = 0;
    v40[2] = *((_DWORD *)this + 36);
    v40[3] = *((_DWORD *)this + 37);
  }
  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 40));
  if ( !PixelFormatSize || (v21 = *((_DWORD *)this + 36), v21 > 0x7FFFFFF8u / PixelFormatSize) )
  {
    v29 = -2147024362;
    v31 = 199;
    v11 = -2147024362;
    goto LABEL_56;
  }
  v23 = (((v21 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v9 = v23 * (unsigned __int64)*((unsigned int *)this + 37);
  v24 = -1;
  if ( v9 <= 0xFFFFFFFF )
    v24 = v23 * *((_DWORD *)this + 37);
  v11 = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v9 > 0xFFFFFFFF )
  {
    v30 = 201;
    goto LABEL_15;
  }
  v25 = v24;
  if ( !v24 )
    v25 = v22;
  v26 = HeapAlloc(WPF::g_processHeap, 0, v25);
  v8 = v26;
  if ( !v26 )
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, -2147024882, 0xCCu);
    goto LABEL_57;
  }
  v28 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, LPVOID))(**((_QWORD **)this + 25) + 56LL))(
          *((_QWORD *)this + 25),
          v40,
          v23,
          v24,
          v26);
  v11 = v28;
  if ( v28 < 0 )
  {
    v31 = 209;
    goto LABEL_53;
  }
  v28 = CBitmap::HrLock(
          (CWICBitmapWrapper *)((char *)this - 24),
          v40[2],
          v40[3],
          (CWICBitmapWrapper *)((char *)this + 160),
          v23,
          v24,
          v8,
          WICBitmapLockRead,
          a4,
          1,
          0LL);
  v11 = v28;
  if ( v28 < 0 )
  {
    v31 = 219;
LABEL_53:
    v29 = v28;
LABEL_56:
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v29, v31);
LABEL_57:
    if ( v8 )
      WPF::ProcessHeapImpl::Free(v8);
  }
LABEL_59:
  if ( v32 )
    ((void (__fastcall *)(struct IUnknown *))v32->lpVtbl->Release)(v32);
LABEL_8:
  if ( *(_QWORD *)v37 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v37 + 16LL))(*(_QWORD *)v37);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v39);
  return v11;
}
