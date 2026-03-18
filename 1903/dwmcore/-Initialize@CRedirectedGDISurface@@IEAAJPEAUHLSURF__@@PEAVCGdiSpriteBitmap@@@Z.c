/*
 * XREFs of ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x1800CBEE0
 * Callers:
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800CBE48 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18005A24C (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0pp @ 0x180165B20 (McTemplateU0pp.c)
 */

__int64 __fastcall CRedirectedGDISurface::Initialize(
        CRedirectedGDISurface *this,
        HLSURF a2,
        struct CGdiSpriteBitmap *a3)
{
  __int64 v5; // rcx
  _QWORD *inserted; // rax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // rcx
  signed int LastError; // eax
  unsigned int v13; // [rsp+20h] [rbp-30h]
  _QWORD Buffer[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int NewElement; // [rsp+60h] [rbp+10h] BYREF

  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = a3;
  Buffer[1] = this;
  v5 = *((_QWORD *)this + 2);
  Buffer[0] = a2;
  LOBYTE(NewElement) = 0;
  Buffer[2] = a3;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)(v5 + 8), Buffer, 0x18u, (PBOOLEAN)&NewElement);
  if ( !inserted )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x2Au, 0LL);
    v13 = 72;
LABEL_14:
    NewElement = v8;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v8, v13, 0LL);
    goto LABEL_7;
  }
  if ( !(_BYTE)NewElement )
  {
    inserted[2] = a3;
    inserted[1] = this;
  }
  v8 = 0;
  *((_BYTE *)this + 40) = 1;
  NewElement = 0;
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfOpenCompositorRef(*((_QWORD *)this + 3)) )
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    v13 = 76;
    goto LABEL_14;
  }
  *((_BYTE *)this + 41) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0pp(
      v9,
      &EVTDESC_PROCESS_GDISPRITE_LOGICALSURFACE_ASSOCIATION,
      *((_QWORD *)this + 4),
      *((_QWORD *)this + 3));
LABEL_7:
  TranslateDXGIorD3DErrorInContext(v8, 11, &NewElement);
  return NewElement;
}
