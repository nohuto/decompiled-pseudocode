/*
 * XREFs of RtlAssert @ 0x1402EFA50
 * Callers:
 *     KseShimDatabaseClose @ 0x14067EB4C (KseShimDatabaseClose.c)
 *     KsepStringConcatenate @ 0x14067EED4 (KsepStringConcatenate.c)
 *     KsepRegistryOpenKey @ 0x14067F018 (KsepRegistryOpenKey.c)
 *     KsepStringFree @ 0x14067F30C (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14067F344 (KsepStringDuplicateUnicode.c)
 *     KsepGetShimCallbacksForDriver @ 0x140681A38 (KsepGetShimCallbacksForDriver.c)
 *     KsepStringDuplicate @ 0x14070E038 (KsepStringDuplicate.c)
 *     KseDriverUnloadImage @ 0x1407102DC (KseDriverUnloadImage.c)
 *     KsepStringTransform @ 0x140721ED8 (KsepStringTransform.c)
 *     KsepRegistryQueryDWORD @ 0x140729394 (KsepRegistryQueryDWORD.c)
 *     KsepRegistryQuerySZ @ 0x14072946C (KsepRegistryQuerySZ.c)
 *     KsepStringSplitMultiString @ 0x140849ED4 (KsepStringSplitMultiString.c)
 *     KsepRegistryCreateKey @ 0x14084A1B4 (KsepRegistryCreateKey.c)
 *     KsepRegistryQueryValue @ 0x14084A5AC (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AFFF4 (KseShimDatabaseBootInitialize.c)
 *     KsepEngineInitialize @ 0x1409B00F4 (KsepEngineInitialize.c)
 *     KsepEngineReadFlags @ 0x1409B04F4 (KsepEngineReadFlags.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwTerminateThread @ 0x1401B8D50 (ZwTerminateThread.c)
 *     RtlCaptureContext @ 0x1401C5650 (RtlCaptureContext.c)
 *     DbgPrompt @ 0x1402ECB80 (DbgPrompt.c)
 *     RtlpTerminateCurrentProcess @ 0x1408968DC (RtlpTerminateCurrentProcess.c)
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
    v8 = (PSTR)&File;
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
