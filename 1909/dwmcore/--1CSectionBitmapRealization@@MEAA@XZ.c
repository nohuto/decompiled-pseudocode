/*
 * XREFs of ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1800CD69C
 * Callers:
 *     ??_ECSectionBitmapRealization@@MEAAPEAXI@Z @ 0x1800CD660 (--_ECSectionBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??_GCSectionBitmapSubRectRealization@@UEAAPEAXI@Z @ 0x180255650 (--_GCSectionBitmapSubRectRealization@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSectionBitmapRealization::~CSectionBitmapRealization(CSectionBitmapRealization *this)
{
  __int64 v2; // rcx
  void *v3; // rdi
  HANDLE CurrentProcess; // rax
  void *v5; // rcx

  *(_QWORD *)this = &CSectionBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DBitmapCacheSourceRealization::`vftable'{for `ID2DBitmapCache'};
  *((_QWORD *)this + 3) = &CD2DBitmapCacheSourceRealization::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 11) = &CSectionBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 18) = &CSectionBitmapRealization::`vftable'{for `IBitmapRealization'};
  *((_QWORD *)this + 52) = &CSectionBitmapRealization::`vftable';
  v2 = *((_QWORD *)this + 58);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = (void *)*((_QWORD *)this + 57);
  if ( v3 )
  {
    CurrentProcess = GetCurrentProcess();
    NtUnmapViewOfSection(CurrentProcess, v3);
    *((_QWORD *)this + 57) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 54);
  if ( v5 && *((_BYTE *)this + 424) )
    CloseHandle(v5);
  CBitmapRealization::~CBitmapRealization(this);
}
