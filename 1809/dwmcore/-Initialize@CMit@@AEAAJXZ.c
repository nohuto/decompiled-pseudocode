/*
 * XREFs of ?Initialize@CMit@@AEAAJXZ @ 0x180089A48
 * Callers:
 *     ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800899DC (-Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800842DC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18008A598 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CMit::Initialize(CMit *this)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  HANDLE EventW; // rax
  HANDLE v6; // rax
  signed int LastError; // eax
  int v9; // r9d
  signed int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v12[66]; // [rsp+30h] [rbp-A8h] BYREF
  int v13; // [rsp+B4h] [rbp-24h]

  memset_0(v12, 0, 0x90uLL);
  StringCchCopyW(v12, 0x40uLL, (size_t *)L"Capture");
  v13 = 1;
  v2 = CMmcssTask::Set((CMit *)((char *)this + 32), (const struct DWM_MMTASK *)v12, 0);
  v4 = v2;
  if ( v2 < 0 )
  {
    v11 = 115;
    v9 = v2;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v9, v11);
    return v4;
  }
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 2) = EventW;
  if ( !EventW )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v11 = 121;
    goto LABEL_9;
  }
  SetLastError(0);
  v6 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 14) = v6;
  if ( !v6 )
  {
    v10 = GetLastError();
    v4 = v10;
    if ( v10 > 0 )
      v4 = (unsigned __int16)v10 | 0x80070000;
    v11 = 127;
LABEL_9:
    if ( (v4 & 0x80000000) == 0 )
      v4 = -2003304445;
    v9 = v4;
    goto LABEL_15;
  }
  return v4;
}
