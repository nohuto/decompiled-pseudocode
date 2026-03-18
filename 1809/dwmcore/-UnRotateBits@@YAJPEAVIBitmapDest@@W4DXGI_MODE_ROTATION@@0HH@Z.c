/*
 * XREFs of ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x180179710
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800900B0 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnRotateBits(
        struct IBitmapDest *a1,
        enum DXGI_MODE_ROTATION a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  __int64 v5; // rax
  int v9; // edi
  int v10; // esi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // r12d
  int v15; // eax
  int v16; // ebx
  int *v17; // rax
  __int64 v18; // rcx
  int v19; // edx
  int v20; // r14d
  int v21; // r8d
  char *v22; // r15
  size_t v23; // rbx
  int v24; // r12d
  int v25; // esi
  unsigned int v27; // [rsp+20h] [rbp-61h]
  __int64 v28; // [rsp+30h] [rbp-51h] BYREF
  int v29; // [rsp+38h] [rbp-49h] BYREF
  int v30; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v31; // [rsp+40h] [rbp-41h] BYREF
  size_t Size; // [rsp+48h] [rbp-39h]
  int v33; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+54h] [rbp-2Dh] BYREF
  unsigned int v35; // [rsp+58h] [rbp-29h]
  void *v36; // [rsp+60h] [rbp-21h] BYREF
  char v37[4]; // [rsp+68h] [rbp-19h] BYREF
  char v38[4]; // [rsp+6Ch] [rbp-15h] BYREF
  __int64 v39; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v40[2]; // [rsp+78h] [rbp-9h] BYREF
  int v41; // [rsp+80h] [rbp-1h]
  int v42; // [rsp+84h] [rbp+3h]
  _BYTE v43[16]; // [rsp+88h] [rbp+7h] BYREF

  v5 = *(_QWORD *)a1;
  v28 = 0LL;
  v31 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, __int64 *))(v5 + 24))(a1, 0LL, 1LL, &v28);
  v13 = v11;
  if ( v11 < 0 )
  {
    v27 = 54;
    goto LABEL_37;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v28 + 32LL))(v28, &v30, &v29);
  v13 = v11;
  if ( v11 < 0 )
  {
    v27 = 56;
    goto LABEL_37;
  }
  v14 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v28 + 24LL))(v28, v43);
  v40[1] = a5;
  v40[0] = a4;
  if ( a2 != DXGI_MODE_ROTATION_ROTATE90 )
  {
    if ( a2 == DXGI_MODE_ROTATION_ROTATE180 )
    {
      v41 = v30;
      v15 = v29;
      goto LABEL_9;
    }
    if ( a2 != DXGI_MODE_ROTATION_ROTATE270 )
    {
      v13 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)(a2 - 3), 0LL, 0, -2147024809, 0x4Fu);
      goto LABEL_38;
    }
  }
  v41 = v29;
  v15 = v30;
LABEL_9:
  v42 = v15;
  v11 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, __int64 *))(*(_QWORD *)a3 + 24LL))(
          a3,
          v40,
          2LL,
          &v31);
  v13 = v11;
  if ( v11 < 0 )
  {
    v27 = 88;
  }
  else
  {
    v16 = GetPixelFormatSize(v14) >> 3;
    LODWORD(Size) = v16;
    v17 = (int *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v31 + 24LL))(v31, v43);
    v18 = GetPixelFormatSize(*v17) >> 3;
    if ( v16 != (_DWORD)v18 )
    {
      v13 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024809, 0x63u);
      goto LABEL_38;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, v37, &v39);
    v13 = v11;
    if ( v11 < 0 )
    {
      v27 = 105;
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v28 + 40LL))(v28, &v33);
      v13 = v11;
      if ( v11 < 0 )
      {
        v27 = 106;
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(__int64, char *, void **))(*(_QWORD *)v31 + 48LL))(v31, v38, &v36);
        v13 = v11;
        if ( v11 < 0 )
        {
          v27 = 111;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v31 + 40LL))(v31, &v34);
          v35 = v11;
          v13 = v11;
          if ( v11 >= 0 )
          {
            v19 = v42;
            v20 = 0;
            if ( v42 <= 0 )
              goto LABEL_38;
            v21 = v41;
            v22 = (char *)v36;
            v23 = (unsigned int)Size;
            while ( 1 )
            {
              v24 = 0;
              if ( v21 <= 0 )
                goto LABEL_28;
              do
              {
                switch ( a2 )
                {
                  case DXGI_MODE_ROTATION_ROTATE90:
                    v9 = v20;
                    v25 = v21 - v24;
                    goto LABEL_25;
                  case DXGI_MODE_ROTATION_ROTATE180:
                    v9 = v21 - v24 - 1;
                    v25 = v19 - v20;
LABEL_25:
                    v10 = v25 - 1;
                    break;
                  case DXGI_MODE_ROTATION_ROTATE270:
                    v10 = v24;
                    v9 = v19 - v20 - 1;
                    break;
                }
                memcpy_0(v22, (const void *)(v39 + (unsigned int)(v10 * v33) + (unsigned int)(v9 * v23)), v23);
                v21 = v41;
                v22 += v23;
                v19 = v42;
                ++v24;
              }
              while ( v24 < v41 );
              v22 = (char *)v36;
LABEL_28:
              ++v20;
              v22 += v34;
              v36 = v22;
              if ( v20 >= v19 )
              {
                v13 = v35;
                goto LABEL_38;
              }
            }
          }
          v27 = 112;
        }
      }
    }
  }
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v27);
LABEL_38:
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return v13;
}
