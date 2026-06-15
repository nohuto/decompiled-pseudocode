/*
 * XREFs of ?LogSpatialCriticalProcessingList@@YAXPEBGKK_N@Z @ 0x1800057DC
 * Callers:
 *     VerifyCriticalProcessing @ 0x1800060A4 (VerifyCriticalProcessing.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 */

void __fastcall LogSpatialCriticalProcessingList(const unsigned __int16 *a1)
{
  const WCHAR *v1; // r11
  LPCGUID v2; // r9
  int v3; // r10d
  LPCGUID v4; // r8
  int v5; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp+17h] BYREF
  int *v9; // [rsp+70h] [rbp+27h]
  int v10; // [rsp+78h] [rbp+2Fh]
  int v11; // [rsp+7Ch] [rbp+33h]
  int *v12; // [rsp+80h] [rbp+37h]
  int v13; // [rsp+88h] [rbp+3Fh]
  int v14; // [rsp+8Ch] [rbp+43h]

  if ( (unsigned int)hProvider > 4 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      TlgCreateWsz(&pDesc, v1);
      v11 = 0;
      v14 = 0;
      v9 = &v5;
      v6 = (unsigned __int8)v2;
      v12 = &v6;
      v5 = v3;
      v10 = 4;
      v13 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180179337, v4, v2, 5u, &pData);
    }
  }
}
