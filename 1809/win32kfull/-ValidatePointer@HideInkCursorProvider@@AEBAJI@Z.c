/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C0237B4C
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C0237210 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0221ADC (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ValidatePointer(
        HideInkCursorProvider *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  int v6; // eax
  char v8; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v9[2]; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v11; // [rsp+60h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+6Ch] [rbp+23h]
  const char *v14; // [rsp+70h] [rbp+27h]
  int v15; // [rsp+78h] [rbp+2Fh]
  int v16; // [rsp+7Ch] [rbp+33h]
  char *v17; // [rsp+80h] [rbp+37h]
  int v18; // [rsp+88h] [rbp+3Fh]
  int v19; // [rsp+8Ch] [rbp+43h]

  *(_QWORD *)v9 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v9, a3);
  v5 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v4) = 19;
    v6 = *(_DWORD *)(*(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v9 + 16LL), v4) + 480) + 24LL);
    if ( v6 != 5 )
    {
      v5 = -1073741811;
      if ( dword_1C030C390 > 2u )
      {
        v13 = 0;
        v16 = 0;
        v19 = 0;
        v11 = v9;
        v8 = v6;
        v14 = "Not an integrated pen device";
        v9[0] = -1073741811;
        v12 = 4;
        v15 = 29;
        v17 = &v8;
        v18 = 1;
        TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D657A, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else if ( dword_1C030C390 > 2u )
  {
    v13 = 0;
    v16 = 0;
    v9[0] = PointerInfoByPointerId;
    v11 = v9;
    v14 = "Wrong thread (or invalid pointer id)";
    v12 = 4;
    v15 = 37;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D5F95, 0LL, 0LL, 4u, &pData);
  }
  return v5;
}
