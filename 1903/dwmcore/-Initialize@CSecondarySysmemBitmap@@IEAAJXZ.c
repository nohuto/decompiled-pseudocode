/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18001C69C
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18001C59C (-Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(CSecondarySysmemBitmap *this)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v3; // ecx
  int v4; // ebx
  unsigned int v5; // r9d
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ecx

  PixelFormatSize = GetPixelFormatSize(*((enum DXGI_FORMAT *)this + 31));
  if ( PixelFormatSize && *((_DWORD *)this + 28) <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v4 = 0;
    v5 = (((*((_DWORD *)this + 28) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v4 = -2147024362;
    v5 = 0;
  }
  *((_DWORD *)this + 30) = v5;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v4, 0x2Fu, 0LL);
  }
  else
  {
    v6 = HrMalloc(v5, *((unsigned int *)this + 29), (void **)this + 17);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x35u, 0LL);
    }
    else
    {
      v8 = -1;
      if ( *((unsigned int *)this + 30) * (unsigned __int64)*((unsigned int *)this + 29) <= 0xFFFFFFFF )
        v8 = *((_DWORD *)this + 30) * *((_DWORD *)this + 29);
      *((_DWORD *)this + 36) = v8;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
    }
  }
  return (unsigned int)v4;
}
