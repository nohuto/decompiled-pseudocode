/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C025009C
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C024F760 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0239BF0 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ValidatePointer(
        HideInkCursorProvider *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // ebx
  __int64 v7; // rcx
  char v9; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v10[2]; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  const char *v15; // [rsp+70h] [rbp+27h]
  int v16; // [rsp+78h] [rbp+2Fh]
  int v17; // [rsp+7Ch] [rbp+33h]
  char *v18; // [rsp+80h] [rbp+37h]
  int v19; // [rsp+88h] [rbp+3Fh]
  int v20; // [rsp+8Ch] [rbp+43h]

  *(_QWORD *)v10 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v10, a3);
  v6 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v4) = 19;
    v7 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v10 + 16LL), v4, v5) + 480);
    if ( *(_DWORD *)(v7 + 24) != 5 )
    {
      v6 = -1073741811;
      if ( dword_1C031F298 > 2u )
      {
        v14 = 0;
        v17 = 0;
        v20 = 0;
        v12 = v10;
        v15 = "Not an integrated pen device";
        v9 = *(_BYTE *)(v7 + 24);
        v18 = &v9;
        v10[0] = -1073741811;
        v13 = 4;
        v16 = 29;
        v19 = 1;
        TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8815, 0LL, 0LL, 5u, &pData);
      }
    }
  }
  else if ( dword_1C031F298 > 2u )
  {
    v14 = 0;
    v17 = 0;
    v10[0] = PointerInfoByPointerId;
    v12 = v10;
    v15 = "Wrong thread (or invalid pointer id)";
    v13 = 4;
    v16 = 37;
    TlgWrite((TraceLoggingHProvider)&dword_1C031F298, &unk_1C02E8230, 0LL, 0LL, 4u, &pData);
  }
  return v6;
}
