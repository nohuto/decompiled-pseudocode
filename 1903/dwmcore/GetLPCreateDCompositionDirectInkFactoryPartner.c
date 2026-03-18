/*
 * XREFs of GetLPCreateDCompositionDirectInkFactoryPartner @ 0x18016A674
 * Callers:
 *     ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x18016A5F4 (-CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInk.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall GetLPCreateDCompositionDirectInkFactoryPartner(FARPROC *a1)
{
  int v1; // ebx
  FARPROC ProcAddress; // rax
  HMODULE LibraryW; // rax
  signed int LastError; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v1 = dword_1803407A0;
  if ( dword_1803407A0 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, dword_1803407A0, 0x12u, 0LL);
    goto LABEL_13;
  }
  ProcAddress = (FARPROC)qword_180340798;
  if ( qword_180340798 )
    goto LABEL_11;
  SetLastError(0);
  LibraryW = LoadLibraryW(L"Windows.UI.Input.Inking.dll");
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "CreateDCompositionDirectInkFactoryPartner");
    qword_180340798 = (__int64)ProcAddress;
    if ( !ProcAddress )
    {
      v1 = -2147467261;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x80004003, 0x1Cu, 0LL);
      goto LABEL_13;
    }
LABEL_11:
    *a1 = ProcAddress;
    goto LABEL_13;
  }
  LastError = GetLastError();
  v1 = LastError;
  if ( LastError > 0 )
    v1 = (unsigned __int16)LastError | 0x80070000;
  if ( v1 >= 0 )
    v1 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v1, 0x17u, 0LL);
LABEL_13:
  dword_1803407A0 = v1;
  return (unsigned int)v1;
}
