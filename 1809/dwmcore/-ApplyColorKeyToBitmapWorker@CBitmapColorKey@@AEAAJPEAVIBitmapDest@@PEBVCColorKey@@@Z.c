/*
 * XREFs of ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1802335E0
 * Callers:
 *     ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x180233508 (-ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z @ 0x1802337C0 (-ApplyColorKeyToBuffer@CBitmapColorKey@@AEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z @ 0x180233B1C (-InitColorKey@CBitmapColorKey@@AEAAJPEBVCColorKey@@@Z.c)
 *     ?InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z @ 0x180234280 (-InitPixelFormatInfo@CBitmapColorKey@@AEAAJPEAVIPixelFormat@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::ApplyColorKeyToBitmapWorker(
        CBitmapColorKey *this,
        __int64 (__fastcall ***a2)(struct IBitmapDest *, GUID *, __int64 *),
        const struct CColorKey *a3)
{
  __int64 (__fastcall **v3)(struct IBitmapDest *, GUID *, __int64 *); // rax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  int inited; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  unsigned int v22; // r9d
  int v23; // eax
  __int64 v24; // rcx
  struct IPixelFormat *v26; // [rsp+30h] [rbp-50h] BYREF
  INT v27; // [rsp+38h] [rbp-48h] BYREF
  INT v28; // [rsp+3Ch] [rbp-44h] BYREF
  unsigned int v29; // [rsp+40h] [rbp-40h] BYREF
  __int64 v30; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v31[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int8 *v32; // [rsp+58h] [rbp-28h] BYREF
  struct WICRect v33; // [rsp+60h] [rbp-20h] BYREF

  v3 = *a2;
  v30 = 0LL;
  v26 = 0LL;
  v7 = (*v3)((struct IBitmapDest *)a2, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, &v30);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xFFu);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64, INT *, INT *))(*(_QWORD *)v30 + 32LL))(v30, &v27, &v28);
    v9 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x101u);
    }
    else
    {
      v33.X = 0;
      v33.Y = 0;
      v33.Width = v27;
      v33.Height = v28;
      v12 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct IBitmapDest *, GUID *, __int64 *), struct WICRect *, __int64, struct IPixelFormat **))(*a2)[3])(
              a2,
              &v33,
              2LL,
              &v26);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x10Cu);
      }
      else
      {
        inited = CBitmapColorKey::InitPixelFormatInfo(this, v26);
        v9 = inited;
        if ( inited < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, inited, 0x10Eu);
        }
        else
        {
          v16 = CBitmapColorKey::InitColorKey(this, a3);
          v9 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x10Fu);
          }
          else
          {
            v18 = (*(__int64 (__fastcall **)(struct IPixelFormat *, _BYTE *, unsigned __int8 **))(*(_QWORD *)v26 + 48LL))(
                    v26,
                    v31,
                    &v32);
            v9 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x111u);
            }
            else
            {
              v20 = (*(__int64 (__fastcall **)(struct IPixelFormat *, unsigned int *))(*(_QWORD *)v26 + 40LL))(
                      v26,
                      &v29);
              v9 = v20;
              if ( v20 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x112u);
              }
              else
              {
                v23 = CBitmapColorKey::ApplyColorKeyToBuffer(this, &v33, v29, v22, v32);
                v9 = v23;
                if ( v23 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x125u);
              }
            }
          }
        }
      }
    }
  }
  if ( v26 )
    (*(void (__fastcall **)(struct IPixelFormat *))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return v9;
}
