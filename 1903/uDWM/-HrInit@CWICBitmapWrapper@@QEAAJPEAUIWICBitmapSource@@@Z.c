/*
 * XREFs of ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x1800476FC
 * Callers:
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180047668 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 * Callees:
 *     ?HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z @ 0x180047820 (-HrMilPfToPixelFormatInfo@@YAJW4Enum@MilPixelFormat@@PEAUPixelFormatInfo@@@Z.c)
 *     ?HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z @ 0x1800478F4 (-HrWicPfToMil@@YAJAEBU_GUID@@PEAW4Enum@MilPixelFormat@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::HrInit(CWICBitmapWrapper *this, struct IWICBitmapSource *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  double v10; // xmm1_8
  float v11; // xmm0_4
  void *v13; // [rsp+28h] [rbp-40h]
  unsigned int v14; // [rsp+30h] [rbp-38h] BYREF
  double v15; // [rsp+38h] [rbp-30h] BYREF
  double v16; // [rsp+40h] [rbp-28h] BYREF
  struct _GUID v17; // [rsp+48h] [rbp-20h] BYREF

  v4 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, struct _GUID *))a2->lpVtbl->GetPixelFormat)(a2, &v17);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x2Au, v13);
  }
  else
  {
    v6 = HrWicPfToMil(&v17, (enum MilPixelFormat::Enum *)&v14);
    v5 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x2Bu, v13);
    }
    else
    {
      v7 = HrMilPfToPixelFormatInfo(v14, (char *)this + 200);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x32u, v13);
      }
      else
      {
        v8 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, char *, char *))a2->lpVtbl->GetSize)(
               a2,
               (char *)this + 184,
               (char *)this + 188);
        v5 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x34u, v13);
        }
        else
        {
          v9 = ((__int64 (__fastcall *)(struct IWICBitmapSource *, double *, double *))a2->lpVtbl->GetResolution)(
                 a2,
                 &v15,
                 &v16);
          v5 = v9;
          if ( v9 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x35u, v13);
          }
          else
          {
            v10 = v16;
            v11 = v15;
            *((_QWORD *)this + 30) = a2;
            *((float *)this + 48) = v11;
            *((float *)this + 49) = v10;
            ((void (__fastcall *)(struct IWICBitmapSource *))a2->lpVtbl->AddRef)(a2);
          }
        }
      }
    }
  }
  return v5;
}
