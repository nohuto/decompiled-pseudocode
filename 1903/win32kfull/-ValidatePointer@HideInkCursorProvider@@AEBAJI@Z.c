/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C02507DC
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C024FEA0 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C023A210 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ValidatePointer(
        HideInkCursorProvider *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3,
        __int64 a4)
{
  int PointerInfoByPointerId; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rcx
  char v11; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v12[2]; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp+17h]
  int v15; // [rsp+68h] [rbp+1Fh]
  int v16; // [rsp+6Ch] [rbp+23h]
  const char *v17; // [rsp+70h] [rbp+27h]
  int v18; // [rsp+78h] [rbp+2Fh]
  int v19; // [rsp+7Ch] [rbp+33h]
  char *v20; // [rsp+80h] [rbp+37h]
  int v21; // [rsp+88h] [rbp+3Fh]
  int v22; // [rsp+8Ch] [rbp+43h]

  *(_QWORD *)v12 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v12, a3, a4);
  v8 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v5) = 19;
    v9 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v12 + 16LL), v5, v6, v7) + 480);
    if ( *(_DWORD *)(v9 + 24) != 5 )
    {
      v8 = -1073741811;
      if ( dword_1C0321298 > 2u )
      {
        v16 = 0;
        v19 = 0;
        v22 = 0;
        v14 = v12;
        v17 = "Not an integrated pen device";
        v11 = *(_BYTE *)(v9 + 24);
        v20 = &v11;
        v12[0] = -1073741811;
        v15 = 4;
        v18 = 29;
        v21 = 1;
        TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E9255, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else if ( dword_1C0321298 > 2u )
  {
    v16 = 0;
    v19 = 0;
    v12[0] = PointerInfoByPointerId;
    v14 = v12;
    v17 = "Wrong thread (or invalid pointer id)";
    v15 = 4;
    v18 = 37;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8C70, 0LL, 0LL, 4u, &pData);
  }
  return v8;
}
