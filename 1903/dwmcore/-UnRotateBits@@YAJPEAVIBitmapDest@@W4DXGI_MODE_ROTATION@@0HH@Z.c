/*
 * XREFs of ?UnRotateBits@@YAJPEAVIBitmapDest@@W4DXGI_MODE_ROTATION@@0HH@Z @ 0x18025232C
 * Callers:
 *     ?GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x1800B1370 (-GetBits@CHwndRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // r12d
  int v15; // eax
  int v16; // ebx
  __int64 (__fastcall *v17)(__int64, _BYTE *); // r8
  __int64 v18; // r9
  int *v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  int v22; // r14d
  int v23; // r8d
  char *v24; // r15
  size_t v25; // rbx
  int v26; // r12d
  int v27; // esi
  unsigned int v29; // [rsp+20h] [rbp-61h]
  __int64 v30; // [rsp+30h] [rbp-51h] BYREF
  int v31; // [rsp+38h] [rbp-49h] BYREF
  int v32; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v33; // [rsp+40h] [rbp-41h] BYREF
  size_t Size; // [rsp+48h] [rbp-39h]
  int v35; // [rsp+50h] [rbp-31h] BYREF
  unsigned int v36; // [rsp+54h] [rbp-2Dh] BYREF
  unsigned int v37; // [rsp+58h] [rbp-29h]
  void *v38; // [rsp+60h] [rbp-21h] BYREF
  char v39[4]; // [rsp+68h] [rbp-19h] BYREF
  char v40[4]; // [rsp+6Ch] [rbp-15h] BYREF
  __int64 v41; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v42[2]; // [rsp+78h] [rbp-9h] BYREF
  int v43; // [rsp+80h] [rbp-1h]
  int v44; // [rsp+84h] [rbp+3h]
  _BYTE v45[16]; // [rsp+88h] [rbp+7h] BYREF

  v5 = *(_QWORD *)a1;
  v30 = 0LL;
  v33 = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, __int64 *))(v5 + 24))(a1, 0LL, 1LL, &v30);
  v13 = v11;
  if ( v11 < 0 )
  {
    v29 = 54;
    goto LABEL_37;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v30 + 32LL))(v30, &v32, &v31);
  v13 = v11;
  if ( v11 < 0 )
  {
    v29 = 56;
    goto LABEL_37;
  }
  v14 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 24LL))(v30, v45);
  v42[1] = a5;
  v42[0] = a4;
  if ( a2 != DXGI_MODE_ROTATION_ROTATE90 )
  {
    if ( a2 == DXGI_MODE_ROTATION_ROTATE180 )
    {
      v43 = v32;
      v15 = v31;
      goto LABEL_9;
    }
    if ( a2 != DXGI_MODE_ROTATION_ROTATE270 )
    {
      v13 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)(a2 - 3), 0LL, 0, 0x80070057, 0x4Fu, 0LL);
      goto LABEL_38;
    }
  }
  v43 = v31;
  v15 = v32;
LABEL_9:
  v44 = v15;
  v11 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _DWORD *, __int64, __int64 *))(*(_QWORD *)a3 + 24LL))(
          a3,
          v42,
          2LL,
          &v33);
  v13 = v11;
  if ( v11 < 0 )
  {
    v29 = 88;
  }
  else
  {
    v16 = GetPixelFormatSize(v14) >> 3;
    LODWORD(Size) = v16;
    v19 = (int *)v17(v18, v45);
    v20 = GetPixelFormatSize(*v19) >> 3;
    if ( v16 != (_DWORD)v20 )
    {
      v13 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, 0x80070057, 0x63u, 0LL);
      goto LABEL_38;
    }
    v11 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, v39, &v41);
    v13 = v11;
    if ( v11 < 0 )
    {
      v29 = 105;
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 40LL))(v30, &v35);
      v13 = v11;
      if ( v11 < 0 )
      {
        v29 = 106;
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(__int64, char *, void **))(*(_QWORD *)v33 + 48LL))(v33, v40, &v38);
        v13 = v11;
        if ( v11 < 0 )
        {
          v29 = 111;
        }
        else
        {
          v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 40LL))(v33, &v36);
          v37 = v11;
          v13 = v11;
          if ( v11 >= 0 )
          {
            v21 = v44;
            v22 = 0;
            if ( v44 <= 0 )
              goto LABEL_38;
            v23 = v43;
            v24 = (char *)v38;
            v25 = (unsigned int)Size;
            while ( 1 )
            {
              v26 = 0;
              if ( v23 <= 0 )
                goto LABEL_28;
              do
              {
                switch ( a2 )
                {
                  case DXGI_MODE_ROTATION_ROTATE90:
                    v9 = v22;
                    v27 = v23 - v26;
                    goto LABEL_25;
                  case DXGI_MODE_ROTATION_ROTATE180:
                    v9 = v23 - v26 - 1;
                    v27 = v21 - v22;
LABEL_25:
                    v10 = v27 - 1;
                    break;
                  case DXGI_MODE_ROTATION_ROTATE270:
                    v10 = v26;
                    v9 = v21 - v22 - 1;
                    break;
                }
                memcpy_0(v24, (const void *)(v41 + (unsigned int)(v10 * v35) + (unsigned int)(v9 * v25)), v25);
                v23 = v43;
                v24 += v25;
                v21 = v44;
                ++v26;
              }
              while ( v26 < v43 );
              v24 = (char *)v38;
LABEL_28:
              ++v22;
              v24 += v36;
              v38 = v24;
              if ( v22 >= v21 )
              {
                v13 = v37;
                goto LABEL_38;
              }
            }
          }
          v29 = 112;
        }
      }
    }
  }
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, v29, 0LL);
LABEL_38:
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return v13;
}
