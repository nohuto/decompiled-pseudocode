/*
 * XREFs of ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800817C4
 * Callers:
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x180082DC4 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180083E6C (-DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180052A10 (-InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ContextualProcessing::ReceiveInput(const struct InputInfo *a1)
{
  const struct _TlgProvider_t *v2; // rax
  int v3; // ecx
  const char *v4; // rax
  const GUID *v5; // r8
  const struct _TlgProvider_t *v6; // r10
  const unsigned __int16 *v7; // rdx
  __int64 v8; // rcx
  int v9; // [rsp+30h] [rbp-19h] BYREF
  __int64 v10; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  __int64 *v12; // [rsp+60h] [rbp+17h]
  __int64 v13; // [rsp+68h] [rbp+1Fh]
  const unsigned __int16 *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  int *v17; // [rsp+80h] [rbp+37h]
  __int64 v18; // [rsp+88h] [rbp+3Fh]

  v2 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v2 > 4u
    && (*((_DWORD *)v2 + 4) & 0x400LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x400LL) == *((_QWORD *)v2 + 3) )
  {
    v3 = *(_DWORD *)a1;
    v10 = *((_QWORD *)a1 + 2);
    v12 = &v10;
    v13 = 8LL;
    v4 = InputTraceLogging::InputTypeToString(v3);
    v7 = &word_18014A10A;
    LODWORD(v8) = (_DWORD)v5;
    if ( v4 )
    {
      v7 = (const unsigned __int16 *)v4;
      v8 = -1LL;
      do
        ++v8;
      while ( v4[v8] != (_BYTE)v5 );
    }
    v14 = v7;
    v15 = v8 + 1;
    v9 = *((_DWORD *)a1 + 1);
    v17 = &v9;
    v16 = (int)v5;
    v18 = 4LL;
    TlgWrite(v6, &unk_180168B9C, v5, 0LL, 5u, &pData);
  }
}
