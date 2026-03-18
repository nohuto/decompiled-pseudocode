/*
 * XREFs of ?GetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@PEAKPEAX@Z @ 0x18003C34C
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x18003A174 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18003C250 (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z @ 0x18008D894 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAJAEAVCRegion@@_N@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800D3A94 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

__int64 __fastcall CRedirectedGDISurface::GetInformation(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // r9d
  signed int v16; // eax
  signed int v17; // eax
  signed int LastError; // eax
  unsigned int v19; // [rsp+20h] [rbp-60h]
  int v20; // [rsp+50h] [rbp-30h] BYREF
  int v21; // [rsp+54h] [rbp-2Ch]
  int v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+5Ch] [rbp-24h]
  __int64 v24; // [rsp+68h] [rbp-18h]
  __int64 v25; // [rsp+70h] [rbp-10h]
  __int64 v26; // [rsp+78h] [rbp-8h]

  v7 = 0;
  if ( !a2 )
  {
    if ( a3 && *a3 >= 0x38u )
    {
      *a3 = 56;
      SetLastError(0);
      if ( (unsigned int)DwmHLSurfGetDirtyRgn(
                           *(_QWORD *)(a1 + 24),
                           *(_QWORD *)a4,
                           *(_QWORD *)(a4 + 8),
                           *(_QWORD *)(a4 + 16),
                           *(_QWORD *)(a4 + 24),
                           *(_QWORD *)(a4 + 32),
                           *(_QWORD *)(a4 + 40),
                           a4 + 48,
                           a4 + 52) )
        return v7;
      LastError = GetLastError();
      v7 = LastError;
      if ( LastError > 0 )
        v7 = (unsigned __int16)LastError | 0x80070000;
      v19 = 232;
      if ( (v7 & 0x80000000) == 0 )
        v7 = -2003304445;
      goto LABEL_19;
    }
    v19 = 219;
LABEL_36:
    v15 = -2147024872;
    v7 = -2147024872;
    goto LABEL_37;
  }
  v9 = a2 - 2;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      memset_0(&v20, 0, 0x20uLL);
      if ( !a3 || *a3 < 0x20u )
      {
        v19 = 244;
        goto LABEL_36;
      }
      *a3 = 32;
      SetLastError(0);
      if ( (unsigned int)DwmGetRedirectionStyle(*(_QWORD *)(a1 + 24), &v20) )
      {
        *(_DWORD *)a4 = v20;
        *(_DWORD *)(a4 + 8) = v21;
        *(_DWORD *)(a4 + 12) = v22;
        *(_QWORD *)(a4 + 16) = v23;
        *(_QWORD *)(a4 + 24) = v24;
        return v7;
      }
      v16 = GetLastError();
      v7 = v16;
      if ( v16 > 0 )
        v7 = (unsigned __int16)v16 | 0x80070000;
      v19 = 249;
      if ( (v7 & 0x80000000) == 0 )
        v7 = -2003304445;
    }
    else
    {
      v7 = -2147024809;
      v19 = 260;
    }
LABEL_19:
    v15 = v7;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802C1BE0, 3u, v15, v19, 0LL);
    return v7;
  }
  memset_0(&v20, 0, 0x30uLL);
  if ( !a3 || *a3 < 0x138u )
  {
    v19 = 124;
    goto LABEL_36;
  }
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  v10 = *(_QWORD *)(a1 + 24);
  *a3 = 312;
  if ( (unsigned int)DwmGetSurfaceData(v10, &v20) )
  {
    v11 = v20;
    *(_DWORD *)(a4 + 32) = v21;
    *(_DWORD *)(a4 + 36) = v22;
    *(_DWORD *)(a4 + 40) = HIDWORD(v23);
    *(_QWORD *)(a4 + 16) = v24;
    v12 = v11 - 1;
    if ( v12 )
    {
      *(_QWORD *)(a4 + 24) = 0LL;
      if ( v12 == 1 )
      {
        v13 = v25;
        *(_DWORD *)a4 = 2;
        *(_DWORD *)(a4 + 44) = 87;
        *(_DWORD *)(a4 + 48) = 1;
        *(_QWORD *)(a4 + 56) = v13;
        *(_QWORD *)(a4 + 64) = v26;
      }
      else
      {
        *(_DWORD *)a4 = 0;
        *(_QWORD *)(a4 + 64) = 0LL;
        *(_DWORD *)(a4 + 48) = 0;
      }
    }
    else
    {
      *(_QWORD *)(a4 + 24) = v26;
      v14 = v25;
      *(_DWORD *)a4 = 1;
      *(_DWORD *)(a4 + 48) = 0;
      *(_QWORD *)(a4 + 56) = v14;
      *(_QWORD *)(a4 + 64) = 0LL;
    }
  }
  else
  {
    *(_DWORD *)a4 = 0;
    *(_QWORD *)(a4 + 24) = 0LL;
    *(_DWORD *)(a4 + 48) = 0;
    *(_QWORD *)(a4 + 64) = 0LL;
    v17 = GetLastError();
    v7 = v17;
    if ( v17 > 0 )
      return (unsigned __int16)v17 | 0x80070000;
  }
  return v7;
}
