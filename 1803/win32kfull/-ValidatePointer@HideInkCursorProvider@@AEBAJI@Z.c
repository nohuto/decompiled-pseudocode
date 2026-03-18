/*
 * XREFs of ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C020E62C
 * Callers:
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C020DD60 (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C01F996C (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall HideInkCursorProvider::ValidatePointer(
        HideInkCursorProvider *this,
        unsigned int a2,
        const struct tagPOINTER_INFO **a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v4; // rdx
  const GUID *v5; // r8
  const GUID *v6; // r9
  unsigned int v7; // ebx
  int v8; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  char v12; // [rsp+30h] [rbp-19h] BYREF
  unsigned int v13[2]; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  unsigned int *v15; // [rsp+60h] [rbp+17h]
  int v16; // [rsp+68h] [rbp+1Fh]
  int v17; // [rsp+6Ch] [rbp+23h]
  const char *v18; // [rsp+70h] [rbp+27h]
  int v19; // [rsp+78h] [rbp+2Fh]
  int v20; // [rsp+7Ch] [rbp+33h]
  char *v21; // [rsp+80h] [rbp+37h]
  int v22; // [rsp+88h] [rbp+3Fh]
  int v23; // [rsp+8Ch] [rbp+43h]

  *(_QWORD *)v13 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v13, a3);
  v7 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v4) = 19;
    v8 = *(_DWORD *)(*(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v13 + 16LL), v4) + 480) + 24LL);
    if ( v8 != 5 )
    {
      v7 = -1073741811;
      if ( (unsigned int)pRelatedActivityId > 2 )
      {
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v15 = v13;
        v12 = v8;
        v18 = "Not an integrated pen device";
        v13[0] = -1073741811;
        v16 = 4;
        v19 = 29;
        v21 = &v12;
        v22 = 1;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3B73, v9, v10, 5u, &pData);
      }
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v17 = 0;
    v20 = 0;
    v13[0] = PointerInfoByPointerId;
    v15 = v13;
    v18 = "Wrong thread (or invalid pointer id)";
    v16 = 4;
    v19 = 37;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v5, v6, 4u, &pData);
  }
  return v7;
}
