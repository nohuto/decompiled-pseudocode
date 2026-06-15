/*
 * XREFs of ?LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z @ 0x180110B90
 * Callers:
 *     VerifyCriticalProcessing @ 0x180110564 (VerifyCriticalProcessing.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 */

void __fastcall LogSpatialCriticalProcessingList(const unsigned __int16 *a1)
{
  const WCHAR *v1; // r9
  unsigned __int8 v2; // r10
  int v3; // r11d
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  int v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v10; // [rsp+70h] [rbp+27h]
  int v11; // [rsp+78h] [rbp+2Fh]
  int v12; // [rsp+7Ch] [rbp+33h]
  int *v13; // [rsp+80h] [rbp+37h]
  int v14; // [rsp+88h] [rbp+3Fh]
  int v15; // [rsp+8Ch] [rbp+43h]

  if ( (unsigned int)hProvider > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, v1);
      v12 = 0;
      v15 = 0;
      v10 = &v6;
      v7 = v2;
      v13 = &v7;
      v6 = v3;
      v11 = 4;
      v14 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180175186, v4, v5, 5u, &pData);
    }
  }
}
