/*
 * XREFs of ?Initialize@CGlobalSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1800DF954
 * Callers:
 *     ?Create@CGlobalSurfaceManager@@SAJPEAVCComposition@@PEAPEAVCSurfaceManager@@PEAPEAX2@Z @ 0x1800DF8BC (-Create@CGlobalSurfaceManager@@SAJPEAVCComposition@@PEAPEAVCSurfaceManager@@PEAPEAX2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ @ 0x1800DFA68 (-CreateTokenThread@CGlobalSurfaceManager@@IEAAJXZ.c)
 */

__int64 __fastcall CGlobalSurfaceManager::Initialize(CGlobalSurfaceManager *this, void **a2, void **a3)
{
  void **v3; // rsi
  void **v4; // r14
  SIZE_T *v5; // r12
  HANDLE *v7; // r13
  __int64 v10; // rcx
  int v11; // ebx
  LPVOID v12; // rax
  int TokenThread; // eax
  int v14; // ebx
  HANDLE EventW; // rax
  unsigned int v17; // r9d
  signed int LastError; // eax
  signed int v19; // eax
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-38h]

  v3 = (void **)((char *)this + 592);
  qword_18033CC18 = (__int64)this;
  v4 = (void **)((char *)this + 584);
  qword_1803403A0 = (__int64)this;
  v5 = (SIZE_T *)((char *)this + 576);
  v7 = (HANDLE *)((char *)this + 560);
  v11 = NtTokenManagerOpenSectionAndEvents(
          (char *)this + 560,
          (char *)this + 576,
          (char *)this + 584,
          (char *)this + 592);
  if ( v11 < 0 )
  {
    v14 = v11 | 0x10000000;
    dwNumberOfBytesToMap = 128;
LABEL_10:
    v17 = v14;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v17, dwNumberOfBytesToMap, 0LL);
    return (unsigned int)v14;
  }
  SetLastError(0);
  v12 = MapViewOfFile(*v7, 4u, 0, 0, *v5);
  if ( !v12 )
  {
    LastError = GetLastError();
    v14 = LastError;
    if ( LastError > 0 )
      v14 = (unsigned __int16)LastError | 0x80070000;
    dwNumberOfBytesToMap = 134;
    if ( v14 >= 0 )
      v14 = -2003304445;
    goto LABEL_10;
  }
  *((_QWORD *)this + 71) = v12;
  TokenThread = CGlobalSurfaceManager::CreateTokenThread(this);
  v14 = TokenThread;
  if ( TokenThread < 0 )
  {
    v17 = TokenThread;
    dwNumberOfBytesToMap = 141;
    goto LABEL_19;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 43) = EventW;
  if ( !EventW )
  {
    v19 = GetLastError();
    v14 = v19;
    if ( v19 > 0 )
      v14 = (unsigned __int16)v19 | 0x80070000;
    dwNumberOfBytesToMap = 149;
    if ( v14 >= 0 )
      v14 = -2003304445;
    goto LABEL_10;
  }
  *a2 = *v4;
  *a3 = *v3;
  return (unsigned int)v14;
}
