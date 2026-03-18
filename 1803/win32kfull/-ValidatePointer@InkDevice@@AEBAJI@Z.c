/*
 * XREFs of ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C0210704
 * Callers:
 *     ?ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z @ 0x1C020FA50 (-ProcessInkFeedbackCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXI@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C01F996C (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::ValidatePointer(InkDevice *this, unsigned int a2, const struct tagPOINTER_INFO **a3)
{
  int PointerInfoByPointerId; // eax
  __int64 v5; // rdx
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  int v12; // edx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  char v18; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v19[2]; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  unsigned int *v21; // [rsp+68h] [rbp+17h]
  __int64 v22; // [rsp+70h] [rbp+1Fh]
  const char *v23; // [rsp+78h] [rbp+27h]
  __int64 v24; // [rsp+80h] [rbp+2Fh]
  char *v25; // [rsp+88h] [rbp+37h]
  __int64 v26; // [rsp+90h] [rbp+3Fh]

  *(_QWORD *)v19 = 0LL;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v19, a3);
  v8 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    LOBYTE(v5) = 19;
    v9 = *(_QWORD *)(HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v19 + 16LL), v5) + 480);
    v12 = *(_DWORD *)(v9 + 24);
    if ( v12 == 5 )
    {
      v13 = *(_QWORD *)(v9 + 16);
      v14 = *(_DWORD *)(v13 + 1472);
      if ( v14 == 0x80000000 || v14 == 11 || v14 == 13 )
      {
        v15 = *(_QWORD *)(v13 + 464);
        if ( *(unsigned __int16 *)(v15 + 112) == *((_DWORD *)this + 34)
          && *(unsigned __int16 *)(v15 + 110) == *((_DWORD *)this + 33) )
        {
          v16 = *(_QWORD **)(v9 + 304);
          if ( v16 && *v16 )
          {
            if ( !byte_1C032FC0C )
            {
              if ( (unsigned int)pRelatedActivityId > 5
                && TlgKeywordOn((TraceLoggingHProvider)&pRelatedActivityId, 0x400000000000uLL) )
              {
                TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3DCE, v10, v11, 2u, &pData);
              }
              byte_1C032FC0C = 1;
            }
            v8 = -1073741811;
            if ( (unsigned int)pRelatedActivityId > 2 )
            {
              v19[0] = -1073741811;
              v22 = 4LL;
              v21 = v19;
              v23 = "The pointer device contains calibration data";
              v24 = 45LL;
              TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v10, v11, 4u, &pData);
            }
          }
        }
        else
        {
          v8 = -1073741823;
          if ( (unsigned int)pRelatedActivityId > 2 )
          {
            v19[0] = -1073741823;
            v21 = v19;
            v22 = 4LL;
            v23 = "Pointer device not supported by the ink device";
            v24 = 47LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v10, v11, 4u, &pData);
          }
        }
      }
      else
      {
        v8 = -1073741811;
        if ( (unsigned int)pRelatedActivityId > 2 )
        {
          v19[0] = -1073741811;
          v22 = 4LL;
          v21 = v19;
          v23 = "Pointer device not mapped to the integrated display";
          v24 = 52LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v10, v11, 4u, &pData);
        }
      }
    }
    else
    {
      v8 = -1073741811;
      if ( (unsigned int)pRelatedActivityId > 2 )
      {
        v19[0] = -1073741811;
        v21 = v19;
        v23 = "Not an integrated pen device";
        v25 = &v18;
        v22 = 4LL;
        v24 = 29LL;
        v18 = v12;
        v26 = 1LL;
        TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3B73, v10, v11, 5u, &pData);
      }
    }
  }
  else if ( (unsigned int)pRelatedActivityId > 2 )
  {
    v19[0] = PointerInfoByPointerId;
    v22 = 4LL;
    v21 = v19;
    v23 = "Wrong thread (or invalid pointer id)";
    v24 = 37LL;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E3E0E, v6, v7, 4u, &pData);
  }
  return v8;
}
