/*
 * XREFs of ?Initialize@CMit@@AEAAJXZ @ 0x1800E0DAC
 * Callers:
 *     ?Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800E0D40 (-Create@CMit@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800B2BA4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800D0CBC (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CMit::Initialize(CMit *this)
{
  int v2; // eax
  __int64 v3; // rcx
  signed int v4; // ebx
  HANDLE EventW; // rax
  HANDLE v6; // rax
  signed int LastError; // eax
  unsigned int v9; // r9d
  signed int v10; // eax
  unsigned int v11; // [rsp+20h] [rbp-B8h]
  unsigned __int16 v12[66]; // [rsp+30h] [rbp-A8h] BYREF
  int v13; // [rsp+B4h] [rbp-24h]

  memset_0(v12, 0, 0x90uLL);
  StringCchCopyW(v12, 0x40uLL, (size_t *)L"Capture");
  v13 = 1;
  v2 = CMmcssTask::Set((struct _RTL_CRITICAL_SECTION *)((char *)this + 32), (const struct DWM_MMTASK *)v12, 0);
  v4 = v2;
  if ( v2 < 0 )
  {
    v9 = v2;
    v11 = 115;
    goto LABEL_17;
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
    if ( v4 >= 0 )
      v4 = -2003304445;
    v11 = 121;
    goto LABEL_13;
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
    if ( v4 >= 0 )
      v4 = -2003304445;
    v11 = 127;
LABEL_13:
    v9 = v4;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v9, v11, 0LL);
  }
  return (unsigned int)v4;
}
