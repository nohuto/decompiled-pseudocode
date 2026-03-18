/*
 * XREFs of ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800D2030
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800D20E0 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800D21DC (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800D22D4 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::OnPresentComplete(DWORD *this)
{
  signed int v2; // eax
  __int64 v3; // rcx
  int v4; // ebx
  HANDLE FileMappingW; // rax
  __int64 v6; // rcx
  int Bits; // eax
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed int LastError; // eax
  __int64 v13; // rcx
  unsigned int v14; // r9d
  DWORD dwMaximumSizeLow; // [rsp+20h] [rbp-18h]

  v2 = CaptureBitsResponse::CalcSectionBitmapSize((CaptureBitsResponse *)this);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x135u, 0LL);
  }
  else
  {
    SetLastError(0);
    FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 4u, 0, this[32], 0LL);
    *((_QWORD *)this + 14) = FileMappingW;
    if ( !FileMappingW )
    {
      LastError = GetLastError();
      v4 = LastError;
      if ( LastError > 0 )
        v4 = (unsigned __int16)LastError | 0x80070000;
      if ( v4 >= 0 )
        v4 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v4, 0x13Fu, 0LL);
    }
  }
  if ( v4 < 0 )
  {
    v14 = v4;
    dwMaximumSizeLow = 96;
  }
  else
  {
    Bits = CaptureBitsResponse::MapSectionBitmap((CaptureBitsResponse *)this);
    v4 = Bits;
    if ( Bits < 0 )
    {
      dwMaximumSizeLow = 98;
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits((CaptureBitsResponse *)this);
      v4 = Bits;
      if ( Bits >= 0 )
        goto LABEL_6;
      dwMaximumSizeLow = 102;
    }
    v14 = Bits;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v14, dwMaximumSizeLow, 0LL);
LABEL_6:
  v8 = (*(__int64 (__fastcall **)(DWORD *, _QWORD))(*(_QWORD *)this + 48LL))(this, (unsigned int)v4);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x69u, 0LL);
  return v10;
}
