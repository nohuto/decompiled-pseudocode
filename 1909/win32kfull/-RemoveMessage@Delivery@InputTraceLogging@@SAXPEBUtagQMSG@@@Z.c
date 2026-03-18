/*
 * XREFs of ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0029FF4
 * Callers:
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0029B90 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 * Callees:
 *     ?IsMouseInputMessage@InputTraceLogging@@CA_NI@Z @ 0x1C002AA20 (-IsMouseInputMessage@InputTraceLogging@@CA_NI@Z.c)
 *     IsPointerInputMessage @ 0x1C002ADA0 (IsPointerInputMessage.c)
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Delivery::RemoveMessage(const struct tagQMSG *a1)
{
  unsigned int v1; // ecx
  int v2; // r9d
  int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // rax
  int v6; // [rsp+30h] [rbp-68h] BYREF
  __int64 v7; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  if ( ((unsigned int)IsPointerInputMessage(*((unsigned int *)a1 + 6))
     || InputTraceLogging::IsMouseInputMessage(v1)
     || (unsigned int)(v2 - 256) <= 9
     || v2 == 255)
    && dword_1C03202C0 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C03202C0, 0x10uLL) )
    {
      v5 = *(_QWORD *)(v4 + 136);
      v11 = 0;
      v14 = 0;
      v7 = v5;
      v9 = &v7;
      v12 = &v6;
      v10 = 8;
      v6 = v3;
      v13 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C03202C0, &unk_1C02E6B30, 0LL, 0LL, 4u, &pData);
    }
  }
}
