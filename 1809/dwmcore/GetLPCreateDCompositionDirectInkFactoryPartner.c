/*
 * XREFs of GetLPCreateDCompositionDirectInkFactoryPartner @ 0x180206308
 * Callers:
 *     ?CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x180206294 (-CreateDirectInkFactory@CD2DGenericInk@@SAJPEAUID2D1DeviceContext@@PEAPEAUIDCompositionDirectInk.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall GetLPCreateDCompositionDirectInkFactoryPartner(FARPROC *a1)
{
  signed int v1; // ebx
  FARPROC ProcAddress; // rax
  HMODULE LibraryW; // rax
  signed int LastError; // eax
  __int64 v6; // rcx
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v1 = dword_18030C550;
  if ( dword_18030C550 < 0 )
  {
    v8 = 18;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, v1, v8);
    goto LABEL_14;
  }
  ProcAddress = (FARPROC)qword_18030C558;
  if ( qword_18030C558 )
    goto LABEL_11;
  SetLastError(0);
  LibraryW = LoadLibraryW(L"Windows.UI.Input.Inking.dll");
  if ( !LibraryW )
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    v8 = 23;
    if ( v1 >= 0 )
      v1 = -2003304445;
    goto LABEL_13;
  }
  ProcAddress = GetProcAddress(LibraryW, "CreateDCompositionDirectInkFactoryPartner");
  qword_18030C558 = (__int64)ProcAddress;
  if ( ProcAddress )
  {
LABEL_11:
    *a1 = ProcAddress;
  }
  else
  {
    v1 = -2147467261;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147467261, 0x1Cu);
  }
LABEL_14:
  dword_18030C550 = v1;
  return (unsigned int)v1;
}
