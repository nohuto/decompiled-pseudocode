/*
 * XREFs of ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x18025FB8C
 * Callers:
 *     ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x18025FA9C (-ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x18025FDA4 (-ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x18026011C (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 *     ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x180260898 (-InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::ApplyColorKeyToBitmapWorker(
        CBitmapColorKey *this,
        __int64 (__fastcall ***a2)(struct IBitmapDest *, GUID *, __int64 *),
        const struct CColorKey *a3)
{
  __int64 (__fastcall *v6)(struct IBitmapDest *, GUID *, __int64 *); // rax
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 (__fastcall **v12)(struct IBitmapDest *, GUID *, __int64 *); // rax
  signed int v13; // eax
  __int64 v14; // rcx
  signed int inited; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  signed int v19; // eax
  __int64 v20; // rcx
  signed int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // r9d
  signed int v24; // eax
  __int64 v25; // rcx
  struct IPixelFormat *v27; // [rsp+30h] [rbp-50h] BYREF
  INT v28; // [rsp+38h] [rbp-48h] BYREF
  INT v29; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-40h] BYREF
  __int64 v31; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v32[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 *v33; // [rsp+58h] [rbp-28h] BYREF
  struct WICRect v34; // [rsp+60h] [rbp-20h] BYREF

  v6 = **a2;
  v31 = 0LL;
  v27 = 0LL;
  v7 = v6((struct IBitmapDest *)a2, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v31);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xFCu, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64, INT *, INT *))(*(_QWORD *)v31 + 32LL))(v31, &v28, &v29);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xFEu, 0LL);
    }
    else
    {
      v34.Width = v28;
      v34.Height = v29;
      v12 = *a2;
      *(_QWORD *)&v34.X = 0LL;
      v13 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *), struct WICRect *, __int64, struct IPixelFormat **))v12[3])(
              a2,
              &v34,
              2LL,
              &v27);
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x109u, 0LL);
      }
      else
      {
        inited = CBitmapColorKey::InitPixelFormatInfo(this, v27);
        v9 = inited;
        if ( inited < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, inited, 0x10Bu, 0LL);
        }
        else
        {
          v17 = CBitmapColorKey::InitColorKey(this, a3);
          v9 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x10Cu, 0LL);
          }
          else
          {
            v19 = (*(__int64 (__fastcall **)(struct IPixelFormat *, _BYTE *, unsigned __int8 **))(*(_QWORD *)v27 + 48LL))(
                    v27,
                    v32,
                    &v33);
            v9 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x10Eu, 0LL);
            }
            else
            {
              v21 = (*(__int64 (__fastcall **)(struct IPixelFormat *, unsigned int *))(*(_QWORD *)v27 + 40LL))(
                      v27,
                      &v30);
              v9 = v21;
              if ( v21 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x10Fu, 0LL);
              }
              else
              {
                v24 = CBitmapColorKey::ApplyColorKeyToBuffer(this, &v34, v30, v23, v33);
                v9 = v24;
                if ( v24 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x122u, 0LL);
              }
            }
          }
        }
      }
    }
  }
  if ( v27 )
    (*(void (__fastcall **)(struct IPixelFormat *))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return v9;
}
