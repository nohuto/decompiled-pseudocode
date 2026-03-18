/*
 * XREFs of ?ProcessInput@Keyboard@InputTraceLogging@@SAXPEBU_KEYBOARD_INPUT_DATA@@_N@Z @ 0x1C017B2A8
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017B370 (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Keyboard::ProcessInput(const struct _KEYBOARD_INPUT_DATA *a1)
{
  unsigned __int8 v1; // r9
  __int64 v2; // r10
  UINT32 cData; // r11d
  __int16 v4; // ax
  BOOL v5; // [rsp+30h] [rbp-68h] BYREF
  int v6; // [rsp+34h] [rbp-64h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  BOOL *v8; // [rsp+60h] [rbp-38h]
  UINT32 v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  int *v11; // [rsp+70h] [rbp-28h]
  UINT32 v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  if ( dword_1C020CB50 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x4000uLL) )
    {
      v4 = *(_WORD *)(v2 + 4);
      v10 = 0;
      v9 = cData;
      v13 = 0;
      v5 = (v4 & 1) == 0;
      v8 = &v5;
      v6 = v1;
      v11 = &v6;
      v12 = cData;
      TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E5400, 0LL, 0LL, cData, &pData);
    }
  }
}
