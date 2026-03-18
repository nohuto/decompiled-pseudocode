/*
 * XREFs of ?SetShellClip@Mouse@InputTraceLogging@@SAXPEAUtagRECT@@K@Z @ 0x1C0177C24
 * Callers:
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C010CF00 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z @ 0x1C0177B84 (-SetShellClip@CCursorClip@@QEAAJPEAUtagRECT@@K@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::Mouse::SetShellClip(struct tagRECT *a1, unsigned int a2)
{
  unsigned int v2; // r9d
  unsigned int i; // ebx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  struct tagRECT *v6; // [rsp+58h] [rbp+7h]
  int v7; // [rsp+60h] [rbp+Fh]
  int v8; // [rsp+64h] [rbp+13h]
  LONG *p_top; // [rsp+68h] [rbp+17h]
  int v10; // [rsp+70h] [rbp+1Fh]
  int v11; // [rsp+74h] [rbp+23h]
  LONG *p_right; // [rsp+78h] [rbp+27h]
  int v13; // [rsp+80h] [rbp+2Fh]
  int v14; // [rsp+84h] [rbp+33h]
  LONG *p_bottom; // [rsp+88h] [rbp+37h]
  int v16; // [rsp+90h] [rbp+3Fh]
  int v17; // [rsp+94h] [rbp+43h]
  unsigned int v18; // [rsp+C0h] [rbp+6Fh] BYREF

  v18 = a2;
  v2 = a2;
  if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x40uLL) )
  {
    v8 = 0;
    v6 = (struct tagRECT *)&v18;
    v7 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E6F21, 0LL, 0LL, 3u, &pData);
    v2 = v18;
  }
  for ( i = 0; i < v2; ++i )
  {
    if ( dword_1C020FB50 > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x40uLL) )
      {
        v8 = 0;
        v11 = 0;
        v14 = 0;
        v7 = 4;
        v17 = 0;
        v6 = &a1[i];
        v10 = 4;
        v13 = 4;
        p_top = &v6->top;
        p_right = &v6->right;
        p_bottom = &v6->bottom;
        v16 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E6F4F, 0LL, 0LL, 6u, &pData);
        v2 = v18;
      }
    }
  }
}
