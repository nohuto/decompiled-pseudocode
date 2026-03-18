/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x18001A804
 * Callers:
 *     ?Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18001A700 (-Create@CSecondarySysmemBitmap@@SAJIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(enum DXGI_FORMAT *this)
{
  unsigned __int8 PixelFormatSize; // al
  unsigned int v3; // ecx
  int v4; // ebx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rcx
  SIZE_T v7; // r8
  LPVOID v8; // rax
  int v9; // eax

  PixelFormatSize = GetPixelFormatSize(this[31]);
  if ( PixelFormatSize && *((_DWORD *)this + 28) <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v4 = 0;
    v5 = (((*((_DWORD *)this + 28) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v4 = -2147024362;
    v5 = 0LL;
  }
  *((_DWORD *)this + 30) = v5;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v4, 0x33u);
  }
  else
  {
    v6 = *((unsigned int *)this + 29);
    v4 = 0;
    if ( this != (enum DXGI_FORMAT *)-136LL && *((_DWORD *)this + 29) && v5 && v5 < 0xFFFFFFFFFFFFFFFFuLL / v6 )
    {
      v7 = v6 * v5;
      if ( !v7 )
        v7 = 1LL;
      v8 = HeapAlloc(WPF::g_processHeap, 0, v7);
      *((_QWORD *)this + 17) = v8;
      if ( !v8 )
        v4 = -2147024882;
    }
    else
    {
      v4 = -2147024809;
    }
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v4, 0x3Au);
    }
    else
    {
      v9 = -1;
      if ( *((unsigned int *)this + 30) * (unsigned __int64)*((unsigned int *)this + 29) <= 0xFFFFFFFF )
        v9 = *((_DWORD *)this + 30) * *((_DWORD *)this + 29);
      *((_DWORD *)this + 36) = v9;
      (*(void (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
    }
  }
  return (unsigned int)v4;
}
