/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800CEFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180044098 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  void *v8; // r15
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v13; // r9d
  INT v14; // r8d
  INT v15; // r9d
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  unsigned int v20; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v22; // r8d
  unsigned int v23; // edi
  unsigned __int64 v24; // r14
  LPVOID v25; // rax
  int v26; // eax
  unsigned int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-79h]
  unsigned int v29; // [rsp+20h] [rbp-79h]
  struct IUnknown *v30; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v33; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-25h] BYREF
  unsigned int v35[2]; // [rsp+78h] [rbp-21h] BYREF
  void *v36; // [rsp+80h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v38[4]; // [rsp+90h] [rbp-9h] BYREF

  *(_QWORD *)v35 = 0LL;
  v37 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  v30 = 0LL;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, unsigned int *))this + 25))(*((_QWORD *)this + 25), &IID_IWICBitmap, v35);
  v9 = *(_QWORD *)v35;
  if ( *(_QWORD *)v35 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, struct IUnknown **))(**(_QWORD **)v35 + 64LL))(
            *(_QWORD *)v35,
            a2,
            (unsigned int)a3,
            &v30);
    v11 = v10;
    if ( v10 < 0 )
    {
      v28 = 90;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v30->lpVtbl[1].QueryInterface)(
              v30,
              &v34,
              &v33);
      v11 = v10;
      if ( v10 < 0 )
      {
        v28 = 92;
      }
      else
      {
        v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v30->lpVtbl[1].AddRef)(v30, &v32);
        v11 = v10;
        if ( v10 < 0 )
        {
          v28 = 93;
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v30->lpVtbl[1].Release)(
                  v30,
                  &v31,
                  &v36);
          v11 = v10;
          if ( v10 < 0 )
          {
            v28 = 94;
          }
          else
          {
            v10 = CBitmap::HrLock(
                    (CWICBitmapWrapper *)((char *)this - 24),
                    v34,
                    v33,
                    (CWICBitmapWrapper *)((char *)this + 160),
                    v32,
                    v31,
                    v36,
                    a3,
                    a4,
                    0,
                    v30);
            v11 = v10;
            if ( v10 >= 0 )
            {
              v30 = 0LL;
              goto LABEL_8;
            }
            v28 = 110;
          }
        }
      }
    }
    v13 = v10;
    goto LABEL_15;
  }
  if ( a3 != WICBitmapLockRead )
  {
    v11 = -2003292412;
    v28 = 128;
LABEL_22:
    v13 = v11;
    goto LABEL_15;
  }
  memset(v38, 0, sizeof(v38));
  if ( a2 )
  {
    if ( a2->m128i_i32[2] <= 0
      || a2->m128i_i32[3] <= 0
      || (v14 = *((_DWORD *)this + 36), a2->m128i_i32[0] >= v14)
      || (v15 = *((_DWORD *)this + 37), a2->m128i_i32[1] >= v15) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x80070057, 0xB6u, 0LL);
    }
    else
    {
      v16 = _mm_cvtsi128_si32(*a2);
      *(__m128i *)v38 = *a2;
      v17 = v38[2];
      v38[0] = v16;
      if ( v16 < 0 )
      {
        v17 = v16 + v38[2];
        v16 = 0;
        v38[0] = 0;
        v38[2] = v17;
      }
      if ( v17 + v16 > v14 )
      {
        v17 = v14 - v16;
        v38[2] = v14 - v16;
      }
      v18 = v38[1];
      v19 = v38[3];
      if ( (v38[1] & 0x80000000) != 0 )
      {
        v19 = v38[1] + v38[3];
        v38[1] = 0;
        v38[3] = v19;
        v18 = 0;
      }
      if ( (int)(v19 + v18) > v15 )
      {
        v19 = v15 - v18;
        v38[3] = v15 - v18;
      }
      if ( v17 <= 0 || (int)v19 <= 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, 0x80070057, 0xAEu, 0LL);
    }
  }
  else
  {
    v20 = *((_DWORD *)this + 37);
    v38[2] = *((_DWORD *)this + 36);
    v38[3] = v20;
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 40));
  if ( !PixelFormatSize || v22 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v27 = -2147024362;
    v11 = -2147024362;
    v29 = 195;
LABEL_52:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v27, v29, 0LL);
    if ( v8 )
      operator delete(v8);
    goto LABEL_54;
  }
  v23 = (((v22 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v24 = v23 * (unsigned __int64)*((unsigned int *)this + 37);
  if ( v24 > 0xFFFFFFFF )
  {
    v13 = -2147024362;
    v11 = -2147024362;
    v28 = 197;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v13, v28, 0LL);
    goto LABEL_54;
  }
  v25 = DefaultHeap::Alloc((unsigned int)v24);
  v8 = v25;
  if ( !v25 )
  {
    v11 = -2147024882;
    v28 = 200;
    goto LABEL_22;
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, LPVOID))(**((_QWORD **)this + 25) + 56LL))(
          *((_QWORD *)this + 25),
          v38,
          v23,
          (unsigned int)v24,
          v25);
  v11 = v26;
  if ( v26 < 0 )
  {
    v29 = 205;
    goto LABEL_50;
  }
  v26 = CBitmap::HrLock(
          (CWICBitmapWrapper *)((char *)this - 24),
          v38[2],
          v38[3],
          (CWICBitmapWrapper *)((char *)this + 160),
          v23,
          v24,
          v8,
          WICBitmapLockRead,
          a4,
          1,
          0LL);
  v11 = v26;
  if ( v26 < 0 )
  {
    v29 = 215;
LABEL_50:
    v27 = v26;
    goto LABEL_52;
  }
LABEL_54:
  if ( v30 )
    ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl->Release)(v30);
LABEL_8:
  if ( *(_QWORD *)v35 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v35 + 16LL))(*(_QWORD *)v35);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v37);
  return v11;
}
