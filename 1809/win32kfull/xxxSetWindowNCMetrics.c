/*
 * XREFs of xxxSetWindowNCMetrics @ 0x1C00BF2F4
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00C2B5C (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1C00EBBA8 (xxxInitWindowStation.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01C6DC4 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C00BF534 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     xxxSetNCFonts @ 0x1C00BF664 (xxxSetNCFonts.c)
 *     CreateBitmapStrip @ 0x1C00C0060 (CreateBitmapStrip.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00C014C (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

_BOOL8 __fastcall xxxSetWindowNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ecx
  int v9; // edi
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rcx
  __int64 SessionDpiMetrics; // rax
  int v24; // edx
  int v25; // r8d
  __int64 v26; // r9
  int v27; // ecx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v35; // [rsp+20h] [rbp-E0h] BYREF
  int TWIPSMetricById; // [rsp+24h] [rbp-DCh]
  int v37; // [rsp+28h] [rbp-D8h]
  int v38; // [rsp+2Ch] [rbp-D4h]
  int v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+34h] [rbp-CCh]
  int v41; // [rsp+94h] [rbp-6Ch]
  int v42; // [rsp+98h] [rbp-68h]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]
  int v45; // [rsp+214h] [rbp+114h]

  if ( !(unsigned int)xxxSetNCFonts() )
    return 0LL;
  if ( !a2 )
  {
    v35 = 504;
    if ( a3 >= 0 )
      TWIPSMetricById = a3;
    else
      TWIPSMetricById = GetTWIPSMetricById(a1, 0x88u, -15);
    v37 = GetTWIPSMetricById(a1, 0x98u, -240);
    v38 = GetTWIPSMetricById(a1, 0x99u, -240);
    v39 = GetTWIPSMetricById(a1, 0x89u, -270);
    v40 = GetTWIPSMetricById(a1, 0x8Au, -270);
    v41 = GetTWIPSMetricById(a1, 0x8Cu, -195);
    v42 = GetTWIPSMetricById(a1, 0x8Du, -195);
    v43 = GetTWIPSMetricById(a1, 0x8Fu, -270);
    v44 = GetTWIPSMetricById(a1, 0x90u, -270);
    v45 = GetTWIPSMetricById(a1, 0x9Eu, 0);
    a2 = (struct tagNONCLIENTMETRICSW *)&v35;
  }
  v8 = 1;
  if ( *((int *)a2 + 1) > 1 )
    v8 = *((_DWORD *)a2 + 1);
  v9 = 8;
  v10 = 50;
  if ( v8 < 50 )
    v10 = v8;
  v11 = *((_DWORD *)a2 + 125);
  *((_DWORD *)a2 + 1) = v10;
  v12 = 100;
  if ( v11 <= 0 )
    v11 = 0;
  if ( v11 < 100 )
    v12 = v11;
  v13 = 8;
  *((_DWORD *)a2 + 125) = v12;
  if ( *((int *)a2 + 2) > 8 )
    v13 = *((_DWORD *)a2 + 2);
  v14 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 2) = v13;
  v15 = 8;
  if ( v14 > 8 )
    v15 = v14;
  v16 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 3) = v15;
  v17 = 8LL;
  if ( v16 > 8 )
    v17 = (unsigned int)v16;
  *((_DWORD *)a2 + 4) = v17;
  v19 = *(_DWORD *)(GetSessionDpiServerInfo(v17, v6, v7) + 20);
  v21 = *((_DWORD *)a2 + 5);
  v22 = (unsigned int)(v19 + 2);
  if ( v21 <= (int)v22 )
    v21 = *(_DWORD *)(GetSessionDpiServerInfo(v22, v18, v20) + 20) + 2;
  *((_DWORD *)a2 + 5) = v21;
  SessionDpiMetrics = GetSessionDpiMetrics(v22, v18, v20);
  v24 = 8;
  v25 = *((_DWORD *)a2 + 55);
  v26 = SessionDpiMetrics;
  if ( *((int *)a2 + 29) > 8 )
    v24 = *((_DWORD *)a2 + 29);
  v27 = *((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 29) = v24;
  v28 = *(_DWORD *)(SessionDpiMetrics + 44);
  v29 = *((_DWORD *)a2 + 54);
  v30 = v28 + 2;
  if ( v27 <= v30 )
    v27 = v30;
  *((_DWORD *)a2 + 30) = v27;
  if ( v29 > 8 )
    v9 = v29;
  *((_DWORD *)a2 + 54) = v9;
  if ( v25 <= *(_DWORD *)(v26 + 28) )
    v25 = *(_DWORD *)(v26 + 28);
  *((_DWORD *)a2 + 55) = v25;
  SetNCMetrics(a2);
  return (unsigned int)CreateBitmapStrip(v32, v31, v33) != 0;
}
