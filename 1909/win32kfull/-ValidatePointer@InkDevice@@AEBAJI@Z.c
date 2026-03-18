/*
 * XREFs of ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C02522E0
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0251590 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0239BF0 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::ValidatePointer(InkDevice *this, unsigned int a2, const struct tagPOINTER_INFO **a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  char v14; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v15[2]; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  unsigned int *v17; // [rsp+68h] [rbp+17h]
  __int64 v18; // [rsp+70h] [rbp+1Fh]
  const char *v19; // [rsp+78h] [rbp+27h]
  __int64 v20; // [rsp+80h] [rbp+2Fh]
  char *v21; // [rsp+88h] [rbp+37h]
  __int64 v22; // [rsp+90h] [rbp+3Fh]

  *(_QWORD *)v15 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v15, a3);
  v7 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v5) = 19;
    v8 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v15 + 16LL), v5, v6) + 480);
    if ( *(_DWORD *)(v8 + 24) == 5 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      v10 = *(_DWORD *)(v9 + 1968);
      if ( v10 == 0x80000000 || v10 == 11 || v10 == 13 )
      {
        v11 = *(_QWORD *)(v9 + 464);
        if ( *(unsigned __int16 *)(v11 + 112) == *((_DWORD *)this + 34)
          && *(unsigned __int16 *)(v11 + 110) == *((_DWORD *)this + 33) )
        {
          v12 = *(_QWORD **)(v8 + 344);
          if ( v12 && *v12 )
          {
            if ( !byte_1C0330D50 )
            {
              if ( dword_1C031F298 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C031F298, 0x400000000000uLL) )
                TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8ACE, 0LL, 0LL, 2u, &pData);
              byte_1C0330D50 = 1;
            }
            v7 = -1073741811;
            if ( dword_1C031F298 > 2u )
            {
              v15[0] = -1073741811;
              v18 = 4LL;
              v17 = v15;
              v19 = "The pointer device contains calibration data";
              v20 = 45LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &pData);
            }
          }
        }
        else
        {
          v7 = -1073741823;
          if ( dword_1C031F298 > 2u )
          {
            v15[0] = -1073741823;
            v17 = v15;
            v18 = 4LL;
            v19 = "Pointer device not supported by the ink device";
            v20 = 47LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &pData);
          }
        }
      }
      else
      {
        v7 = -1073741811;
        if ( dword_1C031F298 > 2u )
        {
          v15[0] = -1073741811;
          v18 = 4LL;
          v17 = v15;
          v19 = "Pointer device not mapped to the integrated display";
          v20 = 52LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &pData);
        }
      }
    }
    else
    {
      v7 = -1073741811;
      if ( dword_1C031F298 > 2u )
      {
        v15[0] = -1073741811;
        v17 = v15;
        v19 = "Not an integrated pen device";
        v14 = *(_BYTE *)(v8 + 24);
        v21 = &v14;
        v18 = 4LL;
        v20 = 29LL;
        v22 = 1LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8815, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else if ( dword_1C031F298 > 2u )
  {
    v15[0] = PointerInfoByPointerId;
    v18 = 4LL;
    v17 = v15;
    v19 = "Wrong thread (or invalid pointer id)";
    v20 = 37LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &pData);
  }
  return v7;
}
