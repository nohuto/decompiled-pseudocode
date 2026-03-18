/*
 * XREFs of ?TraceWindowResizeTelemetry@@YAXPEAUtagWND@@@Z @ 0x1C01C1858
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C3590 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetProcessImageFilename @ 0x1C0006AB4 (GetProcessImageFilename.c)
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C00BD824 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GreGetWindowResizeTelemetry @ 0x1C023C83C (GreGetWindowResizeTelemetry.c)
 */

void __fastcall TraceWindowResizeTelemetry(HWND *a1)
{
  HWND *v1; // rbx
  HWND v2; // rax
  PVOID *v3; // rcx
  __int64 ProcessImageFilename; // rbx
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  int v7; // [rsp+30h] [rbp-49h] BYREF
  LPCWSTR pwsz; // [rsp+38h] [rbp-41h] BYREF
  int v9; // [rsp+40h] [rbp-39h]
  _DWORD v10[2]; // [rsp+44h] [rbp-35h] BYREF
  char v11; // [rsp+4Ch] [rbp-2Dh] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-9h] BYREF
  int *v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+88h] [rbp+Fh]
  int v16; // [rsp+8Ch] [rbp+13h]
  _DWORD *v17; // [rsp+90h] [rbp+17h]
  int v18; // [rsp+98h] [rbp+1Fh]
  int v19; // [rsp+9Ch] [rbp+23h]
  LPCWSTR *p_pwsz; // [rsp+A0h] [rbp+27h]
  int v21; // [rsp+A8h] [rbp+2Fh]
  int v22; // [rsp+ACh] [rbp+33h]
  char *v23; // [rsp+B0h] [rbp+37h]
  int v24; // [rsp+B8h] [rbp+3Fh]
  int v25; // [rsp+BCh] [rbp+43h]

  v1 = a1;
  if ( (unsigned int)GreGetWindowResizeTelemetry(*a1) )
  {
    v2 = v1[5];
    v7 = 0;
    if ( (*((_BYTE *)v2 + 234) & 0x40) != 0 )
    {
      v1 = (HWND *)v1[11];
      v7 = 1;
      if ( !v1 )
        return;
      do
      {
        if ( (*((_BYTE *)v1[5] + 235) & 1) != 0 )
          break;
        v1 = (HWND *)v1[8];
      }
      while ( v1 );
    }
    if ( v1 )
    {
      v3 = (PVOID *)*((_QWORD *)v1[2] + 52);
      pwsz = &::pwsz;
      ProcessImageFilename = GetProcessImageFilename(v3, (wchar_t **)&pwsz);
      if ( ProcessImageFilename )
      {
        if ( (unsigned int)hProvider > 5 )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
          {
            TlgCreateWsz(&pDesc, pwsz);
            v16 = 0;
            v19 = 0;
            v22 = 0;
            v25 = 0;
            v10[0] = v9;
            v17 = v10;
            LODWORD(pwsz) = v10[1];
            p_pwsz = &pwsz;
            v23 = &v11;
            v14 = &v7;
            v15 = 4;
            v18 = 4;
            v21 = 4;
            v24 = 4;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E3219, v5, v6, 7u, &pData);
          }
        }
        FreeTmpBuffer(ProcessImageFilename);
      }
    }
  }
}
