/*
 * XREFs of ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C0252A20
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0251CD0 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C023A210 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::ValidatePointer(
        InkDevice *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3,
        __int64 a4)
{
  int PointerInfoByPointerId; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char v16; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v17[2]; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  unsigned int *v19; // [rsp+68h] [rbp+17h]
  __int64 v20; // [rsp+70h] [rbp+1Fh]
  const char *v21; // [rsp+78h] [rbp+27h]
  __int64 v22; // [rsp+80h] [rbp+2Fh]
  char *v23; // [rsp+88h] [rbp+37h]
  __int64 v24; // [rsp+90h] [rbp+3Fh]

  *(_QWORD *)v17 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v17, a3, a4);
  v9 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v6) = 19;
    v10 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v17 + 16LL), v6, v7, v8) + 480);
    if ( *(_DWORD *)(v10 + 24) == 5 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = *(_DWORD *)(v11 + 1952);
      if ( v12 == 0x80000000 || v12 == 11 || v12 == 13 )
      {
        v13 = *(_QWORD *)(v11 + 464);
        if ( *(unsigned __int16 *)(v13 + 112) == *((_DWORD *)this + 34)
          && *(unsigned __int16 *)(v13 + 110) == *((_DWORD *)this + 33) )
        {
          v14 = *(_QWORD **)(v10 + 344);
          if ( v14 && *v14 )
          {
            if ( !byte_1C0332D60 )
            {
              if ( dword_1C0321298 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0321298, 0x400000000000uLL) )
                TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E950E, 0LL, 0LL, 2u, &pData);
              byte_1C0332D60 = 1;
            }
            v9 = -1073741811;
            if ( dword_1C0321298 > 2u )
            {
              v17[0] = -1073741811;
              v20 = 4LL;
              v19 = v17;
              v21 = "The pointer device contains calibration data";
              v22 = 45LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8C70, 0LL, 0LL, 4u, &pData);
            }
          }
        }
        else
        {
          v9 = -1073741823;
          if ( dword_1C0321298 > 2u )
          {
            v17[0] = -1073741823;
            v19 = v17;
            v20 = 4LL;
            v21 = "Pointer device not supported by the ink device";
            v22 = 47LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8C70, 0LL, 0LL, 4u, &pData);
          }
        }
      }
      else
      {
        v9 = -1073741811;
        if ( dword_1C0321298 > 2u )
        {
          v17[0] = -1073741811;
          v20 = 4LL;
          v19 = v17;
          v21 = "Pointer device not mapped to the integrated display";
          v22 = 52LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8C70, 0LL, 0LL, 4u, &pData);
        }
      }
    }
    else
    {
      v9 = -1073741811;
      if ( dword_1C0321298 > 2u )
      {
        v17[0] = -1073741811;
        v19 = v17;
        v21 = "Not an integrated pen device";
        v16 = *(_BYTE *)(v10 + 24);
        v23 = &v16;
        v20 = 4LL;
        v22 = 29LL;
        v24 = 1LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E9255, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else if ( dword_1C0321298 > 2u )
  {
    v17[0] = PointerInfoByPointerId;
    v20 = 4LL;
    v19 = v17;
    v21 = "Wrong thread (or invalid pointer id)";
    v22 = 37LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8C70, 0LL, 0LL, 4u, &pData);
  }
  return v9;
}
