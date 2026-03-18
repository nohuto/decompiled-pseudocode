/*
 * XREFs of ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x180093504
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180092F84 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180038C28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ @ 0x180091978 (-DirtyFromAccum@CGdiSpriteBitmap@@IEAAJXZ.c)
 *     ?SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z @ 0x18009274C (-SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CGdiSpriteBitmap::RegisterForSignaling(CGdiSpriteBitmap *this)
{
  int v1; // edi
  char v2; // si
  char v4; // si
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h]
  __int64 v14; // [rsp+48h] [rbp-8h]
  int v15; // [rsp+70h] [rbp+20h] BYREF

  v1 = 0;
  v2 = *((_BYTE *)this + 116) >> 5;
  v15 = 0;
  v4 = v2 & 1;
  if ( (*((_BYTE *)this + 116) & 8) != 0 )
  {
    v4 = 1;
  }
  else
  {
    if ( *((_QWORD *)this + 47) )
    {
      v9 = *((_QWORD *)this + 10);
      v15 = 1;
      v10 = CRedirectedGDISurface::SetInformation(v9, 1, 4u, (unsigned int *)&v15);
      v15 = v10;
      v1 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_18029B794, 1u, v10, 0x401u);
        goto LABEL_7;
      }
      v4 = 1;
    }
    else
    {
      memset_0(v12, 0, 0x20uLL);
      v5 = *((_QWORD *)this + 10);
      v12[3] = *((_DWORD *)this + 22);
      v13 = *((_QWORD *)this + 54);
      v14 = *((_QWORD *)this + 53);
      v12[2] = 1;
      v6 = CRedirectedGDISurface::SetInformation(v5, 4, 0x20u, v12);
      v15 = v6;
      v1 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_18029B794, 1u, v6, 0x3F9u);
        goto LABEL_7;
      }
    }
    *((_BYTE *)this + 116) |= 8u;
  }
  if ( v4 )
    CGdiSpriteBitmap::DirtyFromAccum(this);
LABEL_7:
  TranslateDXGIorD3DErrorInContext(v1, 10, &v15);
  return (unsigned int)v15;
}
