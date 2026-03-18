/*
 * XREFs of ?SetInformation@CRedirectedGDISurface@@QEAAJW4_RedirectGDISurfaceInformationClass@@KPEAX@Z @ 0x1800D3604
 * Callers:
 *     ?RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ @ 0x180039F5C (-RegisterForSignaling@CGdiSpriteBitmap@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CRedirectedGDISurface::SetInformation(__int64 a1, int a2, unsigned int a3, unsigned int *a4)
{
  int v4; // ebx
  signed int v8; // eax
  signed int LastError; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = 0;
  if ( a2 == 1 )
  {
    SetLastError(0);
    if ( (unsigned int)DwmHLSurfSetSignalOnDirty(*(_QWORD *)(a1 + 24), 0LL, qword_180340600, *a4) )
      return (unsigned int)v4;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = -2003304445;
    v10 = 308;
    goto LABEL_22;
  }
  if ( a2 == 4 )
  {
    if ( a3 < 0x20 )
    {
      v4 = -2147024872;
      v10 = 319;
    }
    else
    {
      SetLastError(0);
      if ( (unsigned int)DwmHLSurfSetSignalOnDirty(
                           *(_QWORD *)(a1 + 24),
                           *((_QWORD *)a4 + 3),
                           *((_QWORD *)a4 + 2),
                           a4[2]) )
        return (unsigned int)v4;
      v8 = GetLastError();
      v4 = v8;
      if ( v8 > 0 )
        v4 = (unsigned __int16)v8 | 0x80070000;
      if ( v4 >= 0 )
        v4 = -2003304445;
      v10 = 325;
    }
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802C1BD8, 1u, v4, v10, 0LL);
    return (unsigned int)v4;
  }
  if ( (unsigned int)(a2 - 5) > 1 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802C1BD8, 1u, 0x80070057, 0x155u, 0LL);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(a1, &dword_1802C1BD8, 1u, 0x88982F04, 0x150u, 0LL);
  }
  return (unsigned int)v4;
}
