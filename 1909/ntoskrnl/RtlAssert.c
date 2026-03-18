/*
 * XREFs of RtlAssert @ 0x14030DE60
 * Callers:
 *     KsepGetShimCallbacksForDriver @ 0x14070BA44 (KsepGetShimCallbacksForDriver.c)
 *     KseShimDatabaseClose @ 0x14070C7F4 (KseShimDatabaseClose.c)
 *     KsepStringConcatenate @ 0x14070EC5C (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x14070EDA0 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x14070F0A4 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14070F0DC (KsepStringDuplicateUnicode.c)
 *     KsepStringDuplicate @ 0x14073B5A0 (KsepStringDuplicate.c)
 *     KseDriverUnloadImage @ 0x1407483A8 (KseDriverUnloadImage.c)
 *     KsepStringTransform @ 0x14074DBF8 (KsepStringTransform.c)
 *     KsepRegistryQueryDWORD @ 0x14075D998 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x14075DA7C (KsepRegistryQuerySZ.c)
 *     KsepStringSplitMultiString @ 0x140883864 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x140883B44 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x140883F4C (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x140A0289C (KseShimDatabaseBootInitialize.c)
 *     KsepEngineInitialize @ 0x140A0299C (KsepEngineInitialize.c)
 *     KsepEngineReadFlags @ 0x140A02D9C (KsepEngineReadFlags.c)
 * Callees:
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x1401C16B0 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x1401CC690 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x14030AC00 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x1408D2EA4 (RtlpTerminateCurrentProcess.c)
 */

void __stdcall RtlAssert(PVOID VoidFailedAssertion, PVOID VoidFileName, ULONG LineNumber, PSTR MutableMessage)
{
  PSTR v8; // r9
  bool v9; // zf
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  __int64 v13; // [rsp+30h] [rbp-528h]
  CHAR Response[16]; // [rsp+40h] [rbp-518h] BYREF
  CONTEXT ContextRecord; // [rsp+50h] [rbp-508h] BYREF

  RtlCaptureContext(&ContextRecord);
  while ( 1 )
  {
    LODWORD(v13) = LineNumber;
    v8 = (PSTR)&Src;
    if ( MutableMessage )
      v8 = MutableMessage;
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Assertion failed: %s%s\n***   Source File: %s, line %ld\n\n",
      v8,
      VoidFailedAssertion,
      VoidFileName,
      v13);
    if ( (MEMORY[0xFFFFF780000002D4] & 3) != 3 )
      break;
    if ( !DbgPrompt(
            "Break repeatedly, break Once, Ignore, terminate Process, or terminate Thread (boipt)? ",
            Response,
            2u) )
    {
      __debugbreak();
LABEL_18:
      RtlpTerminateCurrentProcess();
      return;
    }
    if ( Response[0] > 98 )
    {
      v10 = Response[0] - 105;
      v9 = Response[0] == 105;
    }
    else
    {
      if ( Response[0] == 98 || Response[0] == 66 )
        goto LABEL_16;
      v10 = Response[0] - 73;
      v9 = Response[0] == 73;
    }
    if ( v9 )
      return;
    v11 = v10 - 6;
    if ( !v11 )
    {
LABEL_16:
      DbgPrintEx(0x65u, 0, "Execute '.cxr %p' to dump context\n", &ContextRecord);
      __debugbreak();
    }
    v12 = v11 - 1;
    if ( !v12 )
      goto LABEL_18;
    if ( v12 == 4 )
      ZwTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, -1073741823);
  }
}
