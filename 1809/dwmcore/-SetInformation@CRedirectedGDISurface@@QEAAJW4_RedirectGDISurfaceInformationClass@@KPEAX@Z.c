/*
 * XREFs of ?SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z @ 0x18009274C
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ @ 0x180093504 (-RegisterForSignaling@CGdiSpriteBitmap@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::SetInformation(__int64 a1, int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  __int64 v6; // rsi
  int v8; // r9d
  signed int LastError; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v6 = a1;
  if ( a2 == 1 )
  {
    SetLastError(0);
    if ( (unsigned int)DwmHLSurfSetSignalOnDirty(*(_QWORD *)(v6 + 24), 0LL, qword_18030BED0, *a4) )
      return v4;
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v10 = 308;
    goto LABEL_19;
  }
  if ( a2 != 4 )
  {
    if ( (unsigned int)(a2 - 5) > 1 )
    {
      v4 = -2147024809;
      v10 = 341;
    }
    else
    {
      v4 = -2003292412;
      v10 = 336;
    }
    v8 = v4;
    goto LABEL_22;
  }
  if ( a3 < 0x20 )
  {
    v4 = -2147024872;
    v10 = 319;
    v8 = -2147024872;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_18029BCF8, 1u, v8, v10);
    return v4;
  }
  SetLastError(0);
  if ( !(unsigned int)DwmHLSurfSetSignalOnDirty(*(_QWORD *)(v6 + 24), *((_QWORD *)a4 + 3), *((_QWORD *)a4 + 2), a4[2]) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v10 = 325;
LABEL_19:
    LODWORD(a1) = -2003304445;
    if ( LastError >= 0 )
      LastError = -2003304445;
    v8 = LastError;
    v4 = LastError;
    goto LABEL_22;
  }
  return v4;
}
