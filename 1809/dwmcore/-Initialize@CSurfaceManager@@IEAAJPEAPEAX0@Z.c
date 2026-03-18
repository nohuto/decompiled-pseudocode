/*
 * XREFs of ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x180088B2C
 * Callers:
 *     ?Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z @ 0x180088A8C (-Create@CSurfaceManager@@SAJPEAVCComposition@@PEAPEAV1@PEAPEAX2@Z.c)
 * Callees:
 *     ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x180088C3C (-CreateTokenThread@CSurfaceManager@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSurfaceManager::Initialize(CSurfaceManager *this, void **a2, void **a3)
{
  HANDLE EventW; // rax
  unsigned int v7; // ecx
  int v8; // ebx
  LPVOID v9; // rax
  int TokenThread; // eax
  int v11; // ebx
  signed int LastError; // eax
  int v14; // r9d
  signed int v15; // eax
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-38h]

  qword_180308270 = this;
  qword_180308A80 = (__int64)this;
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 43) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v11 = LastError;
    if ( LastError > 0 )
      v11 = (unsigned __int16)LastError | 0x80070000;
    dwNumberOfBytesToMap = 105;
    goto LABEL_11;
  }
  v8 = NtTokenManagerOpenSectionAndEvents(
         (char *)this + 512,
         (char *)this + 528,
         (char *)this + 536,
         (char *)this + 544);
  if ( v8 < 0 )
  {
    v11 = v8 | 0x10000000;
    dwNumberOfBytesToMap = 115;
LABEL_15:
    v14 = v11;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v14, dwNumberOfBytesToMap);
    return (unsigned int)v11;
  }
  SetLastError(0);
  v9 = MapViewOfFile(*((HANDLE *)this + 64), 4u, 0, 0, *((_QWORD *)this + 66));
  if ( !v9 )
  {
    v15 = GetLastError();
    v11 = v15;
    if ( v15 > 0 )
      v11 = (unsigned __int16)v15 | 0x80070000;
    dwNumberOfBytesToMap = 121;
LABEL_11:
    if ( v11 >= 0 )
      v11 = -2003304445;
    goto LABEL_15;
  }
  *((_QWORD *)this + 65) = v9;
  TokenThread = CSurfaceManager::CreateTokenThread(this);
  v11 = TokenThread;
  if ( TokenThread < 0 )
  {
    dwNumberOfBytesToMap = 128;
    v14 = TokenThread;
    goto LABEL_19;
  }
  *a2 = (void *)*((_QWORD *)this + 67);
  *a3 = (void *)*((_QWORD *)this + 68);
  return (unsigned int)v11;
}
