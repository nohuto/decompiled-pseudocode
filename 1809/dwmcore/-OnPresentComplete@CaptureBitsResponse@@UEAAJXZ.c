/*
 * XREFs of ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x1800743F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBits@CaptureBitsResponse@@IEAAJXZ @ 0x1800744A0 (-GetBits@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800745B0 (-MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ @ 0x1800746A8 (-CalcSectionBitmapSize@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::OnPresentComplete(DWORD *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  signed int v4; // ebx
  HANDLE FileMappingW; // rax
  unsigned int v6; // ecx
  int Bits; // eax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  signed int LastError; // eax
  int v13; // r9d
  int v14; // r9d
  DWORD dwMaximumSizeLow; // [rsp+20h] [rbp-18h]
  DWORD dwMaximumSizeLowa; // [rsp+20h] [rbp-18h]

  v2 = CaptureBitsResponse::CalcSectionBitmapSize((CaptureBitsResponse *)this);
  v4 = v2;
  if ( v2 < 0 )
  {
    dwMaximumSizeLow = 311;
    v13 = v2;
  }
  else
  {
    SetLastError(0);
    FileMappingW = CreateFileMappingW((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0LL, 4u, 0, this[32], 0LL);
    *((_QWORD *)this + 14) = FileMappingW;
    if ( FileMappingW )
      goto LABEL_3;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    dwMaximumSizeLow = 321;
    if ( v4 >= 0 )
      v4 = -2003304445;
    v13 = v4;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v13, dwMaximumSizeLow);
LABEL_3:
  if ( v4 < 0 )
  {
    dwMaximumSizeLowa = 98;
    v14 = v4;
  }
  else
  {
    Bits = CaptureBitsResponse::MapSectionBitmap((CaptureBitsResponse *)this);
    v4 = Bits;
    if ( Bits < 0 )
    {
      dwMaximumSizeLowa = 100;
    }
    else
    {
      Bits = CaptureBitsResponse::GetBits((CaptureBitsResponse *)this);
      v4 = Bits;
      if ( Bits >= 0 )
        goto LABEL_6;
      dwMaximumSizeLowa = 104;
    }
    v14 = Bits;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v14, dwMaximumSizeLowa);
LABEL_6:
  v8 = (*(__int64 (__fastcall **)(DWORD *, _QWORD))(*(_QWORD *)this + 32LL))(this, (unsigned int)v4);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6Bu);
  return v10;
}
