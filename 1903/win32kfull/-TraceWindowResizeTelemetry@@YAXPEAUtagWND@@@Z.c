/*
 * XREFs of ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01FB8C4
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetProcessImageFilename @ 0x1C0009A4C (GetProcessImageFilename.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x1C00B830C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GreGetWindowResizeTelemetry @ 0x1C026D1D8 (GreGetWindowResizeTelemetry.c)
 */

void __fastcall TraceWindowResizeTelemetry(HWND *a1)
{
  HWND *v1; // rbx
  HWND v2; // rax
  PVOID *v3; // rcx
  __int64 ProcessImageFilename; // rbx
  int v5; // [rsp+30h] [rbp-49h] BYREF
  LPCWSTR pwsz; // [rsp+38h] [rbp-41h] BYREF
  int v7; // [rsp+40h] [rbp-39h]
  _DWORD v8[2]; // [rsp+44h] [rbp-35h] BYREF
  char v9; // [rsp+4Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  int *v12; // [rsp+80h] [rbp+7h]
  int v13; // [rsp+88h] [rbp+Fh]
  int v14; // [rsp+8Ch] [rbp+13h]
  _DWORD *v15; // [rsp+90h] [rbp+17h]
  int v16; // [rsp+98h] [rbp+1Fh]
  int v17; // [rsp+9Ch] [rbp+23h]
  LPCWSTR *p_pwsz; // [rsp+A0h] [rbp+27h]
  int v19; // [rsp+A8h] [rbp+2Fh]
  int v20; // [rsp+ACh] [rbp+33h]
  char *v21; // [rsp+B0h] [rbp+37h]
  int v22; // [rsp+B8h] [rbp+3Fh]
  int v23; // [rsp+BCh] [rbp+43h]

  v1 = a1;
  if ( (unsigned int)GreGetWindowResizeTelemetry(*a1) )
  {
    v2 = v1[5];
    v5 = 0;
    if ( (*((_BYTE *)v2 + 234) & 0x40) != 0 )
    {
      v1 = (HWND *)v1[14];
      v5 = 1;
      if ( !v1 )
        return;
      do
      {
        if ( (*((_BYTE *)v1[5] + 235) & 1) != 0 )
          break;
        v1 = (HWND *)v1[11];
      }
      while ( v1 );
    }
    if ( v1 )
    {
      v3 = (PVOID *)*((_QWORD *)v1[2] + 52);
      pwsz = &word_1C02DAB68;
      ProcessImageFilename = GetProcessImageFilename(v3, (wchar_t **)&pwsz);
      if ( ProcessImageFilename )
      {
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            TlgCreateWsz(&pDesc, pwsz);
            v14 = 0;
            v17 = 0;
            v20 = 0;
            v23 = 0;
            v8[0] = v7;
            v15 = v8;
            LODWORD(pwsz) = v8[1];
            p_pwsz = &pwsz;
            v21 = &v9;
            v12 = &v5;
            v13 = 4;
            v16 = 4;
            v19 = 4;
            v22 = 4;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E8204, 0LL, 0LL, 7u, &pData);
          }
        }
        FreeTmpBuffer(ProcessImageFilename);
      }
    }
  }
}
