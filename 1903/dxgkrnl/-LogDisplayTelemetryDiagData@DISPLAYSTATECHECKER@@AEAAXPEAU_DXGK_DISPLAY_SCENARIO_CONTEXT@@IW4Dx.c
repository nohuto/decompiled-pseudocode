/*
 * XREFs of ?LogDisplayTelemetryDiagData@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@IW4DxgkrnlLiveDumpFailureReason@1@@Z @ 0x1C0296570
 * Callers:
 *     ?LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02962FC (-LogAllDisplayDiagInfo@DISPLAYSTATECHECKER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z @ 0x1C0049C4C (-GetDisplayAdapterDiagData@DISPLAYSTATECHECKER@@AEAAPEAVDISPLAYDIAGNOSTICADAPTERDATA@@I@Z.c)
 *     _TlgCreateSz @ 0x1C0049D94 (_TlgCreateSz.c)
 *     ?LogDisplayTelemetrySourceInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEBU_DXG_BLACKBOX_DISPLAY_SOURCE_INFO@@@Z @ 0x1C02967A8 (-LogDisplayTelemetrySourceInfo@DISPLAYSTATECHECKER@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEB.c)
 */

void __fastcall DISPLAYSTATECHECKER::LogDisplayTelemetryDiagData(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int16 v5; // r10
  unsigned int v6; // ecx
  LPCGUID v7; // r9
  _DWORD *v8; // rsi
  int v9; // ecx
  unsigned int i; // r14d
  struct DISPLAYDIAGNOSTICADAPTERDATA *DisplayAdapterDiagData; // rax
  DISPLAYSTATECHECKER *v12; // rcx
  struct DISPLAYDIAGNOSTICADAPTERDATA *v13; // r15
  unsigned int v14; // esi
  __int64 v15; // r8
  char v16; // [rsp+30h] [rbp-99h] BYREF
  char v17; // [rsp+31h] [rbp-98h] BYREF
  __int16 v18; // [rsp+32h] [rbp-97h] BYREF
  int v19; // [rsp+34h] [rbp-95h] BYREF
  int v20; // [rsp+38h] [rbp-91h] BYREF
  __int64 v21; // [rsp+40h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-79h] BYREF
  __int64 *v23; // [rsp+70h] [rbp-59h]
  __int64 v24; // [rsp+78h] [rbp-51h]
  __int16 *v25; // [rsp+80h] [rbp-49h]
  __int64 v26; // [rsp+88h] [rbp-41h]
  __int64 v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  char *v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  int *v31; // [rsp+B0h] [rbp-19h]
  __int64 v32; // [rsp+B8h] [rbp-11h]
  char *v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+D0h] [rbp+7h] BYREF
  int *v36; // [rsp+E0h] [rbp+17h]
  __int64 v37; // [rsp+E8h] [rbp+1Fh]

  v2 = 0;
  if ( dword_1C00A1888 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000400uLL) )
  {
    v6 = *(_DWORD *)(a1 + 1812);
    v23 = &v21;
    v21 = 16779264LL;
    v25 = &v18;
    v27 = a1 + 1832;
    v16 = *(_BYTE *)(a1 + 1812);
    v29 = &v16;
    v19 = (v6 >> 8) & 1;
    v31 = &v19;
    v17 = v6 >> 9;
    v33 = &v17;
    v24 = 8LL;
    v18 = v5;
    v26 = 2LL;
    v28 = 16LL;
    v30 = 1LL;
    v32 = 4LL;
    v34 = 1LL;
    TlgCreateSz(&pDesc, (LPCSTR)(a1 + 1816));
    v20 = (int)v7;
    v36 = &v20;
    v37 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C0073CDE, (LPCGUID)(a2 + 8), v7, 0xAu, &pData);
  }
  v8 = (_DWORD *)(a1 + 1812);
  v9 = *(_DWORD *)(a1 + 1812);
  if ( (_BYTE)v9 == 8 )
  {
    if ( *(_QWORD *)(a1 + 1792) )
      a1 = *(_QWORD *)(a1 + 1792);
    if ( (v9 & 0x1FE00) != 0 )
    {
      do
      {
        DISPLAYSTATECHECKER::LogDisplayTelemetrySourceInfo(
          (DISPLAYSTATECHECKER *)(224LL * v2),
          (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
          (const struct _DXG_BLACKBOX_DISPLAY_SOURCE_INFO *)(224LL * v2 + a1 + 16));
        ++v2;
      }
      while ( v2 < (unsigned int)(unsigned __int8)(*v8 >> 9) );
    }
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 5880); ++i )
    {
      DisplayAdapterDiagData = DISPLAYSTATECHECKER::GetDisplayAdapterDiagData((DISPLAYSTATECHECKER *)a1, i);
      v13 = DisplayAdapterDiagData;
      if ( DisplayAdapterDiagData )
      {
        v14 = 0;
        if ( *((_DWORD *)DisplayAdapterDiagData + 234) )
        {
          do
          {
            if ( v14 >= 4 )
            {
              v15 = 0LL;
            }
            else
            {
              v12 = (DISPLAYSTATECHECKER *)v14;
              v15 = (__int64)v13 + 224 * v14 + 40;
            }
            if ( v15 )
              DISPLAYSTATECHECKER::LogDisplayTelemetrySourceInfo(
                v12,
                (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2,
                (const struct _DXG_BLACKBOX_DISPLAY_SOURCE_INFO *)(v15 + 16));
            ++v14;
          }
          while ( v14 < *((_DWORD *)v13 + 234) );
        }
      }
    }
  }
}
