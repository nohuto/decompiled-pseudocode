/*
 * XREFs of ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800491F4
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x180048CA0 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z @ 0x1800493EC (-SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18006402C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@AEAAJXZ @ 0x1800D3BF0 (-DirtyFromAccum@CGdiSpriteBitmap@@AEAAJXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RegisterForSignaling(CGdiSpriteBitmap *this)
{
  unsigned int v1; // edi
  char v2; // si
  char v4; // si
  __int64 v5; // rcx
  int v6; // eax
  int v7; // eax
  unsigned int v8; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  __int64 v12; // [rsp+30h] [rbp-20h] BYREF
  int v13; // [rsp+38h] [rbp-18h]
  int v14; // [rsp+3Ch] [rbp-14h]
  __int64 v15; // [rsp+40h] [rbp-10h]
  __int64 v16; // [rsp+48h] [rbp-8h]
  unsigned int v17; // [rsp+70h] [rbp+20h] BYREF

  v1 = 0;
  v2 = *((_BYTE *)this + 116) >> 5;
  v17 = 0;
  v4 = v2 & 1;
  if ( (*((_BYTE *)this + 116) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v5 = *((_QWORD *)this + 10);
    if ( *((_QWORD *)this + 47) )
    {
      v17 = 1;
      v10 = CRedirectedGDISurface::SetInformation(v5, 1LL, 4LL, &v17);
      v17 = v10;
      v1 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802BF9B0, 1u, v10, 0x3EFu, 0LL);
        goto LABEL_7;
      }
      v4 = 1;
    }
    else
    {
      v6 = *((_DWORD *)this + 22);
      v12 = 0LL;
      v14 = v6;
      v15 = *((_QWORD *)this + 54);
      v16 = *((_QWORD *)this + 53);
      v13 = 1;
      v7 = CRedirectedGDISurface::SetInformation(v5, 4LL, 32LL, &v12);
      v17 = v7;
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802BF9B0, 1u, v7, 0x3E7u, 0LL);
        goto LABEL_7;
      }
    }
    *((_BYTE *)this + 116) |= 8u;
  }
  if ( v4 )
    CGdiSpriteBitmap::DirtyFromAccum(this);
LABEL_7:
  TranslateDXGIorD3DErrorInContext(v1, 10LL, &v17);
  return v17;
}
