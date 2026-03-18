/*
 * XREFs of ??0CFormatConverter@@QEAA@XZ @ 0x180222680
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180222FA0 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     <none>
 */

CFormatConverter *__fastcall CFormatConverter::CFormatConverter(CFormatConverter *this)
{
  CFormatConverter *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *(_QWORD *)this = &CFormatConverter::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CFormatConverter::`vftable'{for `IBitmapSource'};
  *((_QWORD *)this + 14) = &CScanPipeline::`vftable';
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 15) = (char *)this + 152;
  *((_QWORD *)this + 16) = (char *)this + 152;
  *((_DWORD *)this + 34) = 10;
  *((_DWORD *)this + 35) = 10;
  *((_DWORD *)this + 168) = 0;
  *((_QWORD *)this + 81) = (char *)this + 680;
  *((_QWORD *)this + 82) = (char *)this + 680;
  *((_DWORD *)this + 166) = 3;
  *((_DWORD *)this + 167) = 3;
  *((_DWORD *)this + 182) = 0;
  *((_QWORD *)this + 88) = (char *)this + 736;
  *((_QWORD *)this + 89) = (char *)this + 736;
  *((_DWORD *)this + 180) = 2;
  *((_DWORD *)this + 181) = 2;
  result = this;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  return result;
}
