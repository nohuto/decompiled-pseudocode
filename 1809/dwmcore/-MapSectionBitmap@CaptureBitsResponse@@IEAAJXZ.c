/*
 * XREFs of ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800745B0
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800743F0 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x180161400 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180092B64 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::MapSectionBitmap(CaptureBitsResponse *this)
{
  void *v2; // rax
  int v3; // eax
  unsigned int v4; // ecx
  struct IBitmapSource *v5; // rsi
  signed int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  signed int LastError; // eax
  unsigned int v11; // ecx
  struct IUnknown *v12; // [rsp+30h] [rbp-18h]
  struct IBitmapSource *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  SetLastError(0);
  v2 = MapViewOfFile(*((HANDLE *)this + 14), 2u, 0, 0, *((unsigned int *)this + 32));
  *((_QWORD *)this + 15) = v2;
  if ( v2 )
  {
    memset_0(v2, 0, *((unsigned int *)this + 32));
    v3 = HrCreateBitmapFromMemoryEx(
           *((_DWORD *)this + 22),
           *((_DWORD *)this + 23),
           (CaptureBitsResponse *)((char *)this + 100),
           *((_DWORD *)this + 33),
           *((_DWORD *)this + 32),
           *((unsigned __int8 **)this + 15),
           v12,
           &v13);
    v5 = v13;
    v6 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x164u);
    }
    else
    {
      v7 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, char *))v13)(
             v13,
             &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
             (char *)this + 136);
      v6 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x16Au);
    }
    if ( v5 )
      (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  else
  {
    LastError = GetLastError();
    v6 = LastError;
    if ( LastError > 0 )
      v6 = (unsigned __int16)LastError | 0x80070000;
    if ( v6 >= 0 )
      v6 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v6, 0x154u);
  }
  return (unsigned int)v6;
}
