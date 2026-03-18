/*
 * XREFs of xxxSetWindowNCMetrics @ 0x1C0053DAC
 * Callers:
 *     UserOnGreTextReady @ 0x1C0050168 (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 *     xxxInitWindowStation @ 0x1C00B3FAC (xxxInitWindowStation.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01A4C48 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C0053FE8 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     xxxSetNCFonts @ 0x1C0054100 (xxxSetNCFonts.c)
 *     CreateBitmapStrip @ 0x1C0054A80 (CreateBitmapStrip.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C0054B60 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // edi
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  __int64 SessionDpiMetrics; // rax
  int v25; // edx
  int v26; // r8d
  __int64 v27; // r9
  int v28; // ecx
  int v29; // edx
  int v30; // eax
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v36; // [rsp+20h] [rbp-E0h] BYREF
  int TWIPSMetricById; // [rsp+24h] [rbp-DCh]
  int v38; // [rsp+28h] [rbp-D8h]
  int v39; // [rsp+2Ch] [rbp-D4h]
  int v40; // [rsp+30h] [rbp-D0h]
  int v41; // [rsp+34h] [rbp-CCh]
  int v42; // [rsp+94h] [rbp-6Ch]
  int v43; // [rsp+98h] [rbp-68h]
  int v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+FCh] [rbp-4h]
  int v46; // [rsp+214h] [rbp+114h]

  v8 = 0;
  if ( !(unsigned int)xxxSetNCFonts() )
    return 0LL;
  if ( !a2 )
  {
    v36 = 504;
    if ( a3 >= 0 )
      TWIPSMetricById = a3;
    else
      TWIPSMetricById = GetTWIPSMetricById(a1, 0x88u, -15);
    v38 = GetTWIPSMetricById(a1, 0x98u, -240);
    v39 = GetTWIPSMetricById(a1, 0x99u, -240);
    v40 = GetTWIPSMetricById(a1, 0x89u, -270);
    v41 = GetTWIPSMetricById(a1, 0x8Au, -270);
    v42 = GetTWIPSMetricById(a1, 0x8Cu, -195);
    v43 = GetTWIPSMetricById(a1, 0x8Du, -195);
    v44 = GetTWIPSMetricById(a1, 0x8Fu, -270);
    v45 = GetTWIPSMetricById(a1, 0x90u, -270);
    v46 = GetTWIPSMetricById(a1, 0x9Eu, 0);
    a2 = (struct tagNONCLIENTMETRICSW *)&v36;
  }
  v9 = 8;
  v10 = 1;
  if ( *((int *)a2 + 1) > 1 )
    v10 = *((_DWORD *)a2 + 1);
  v11 = 50;
  if ( v10 < 50 )
    v11 = v10;
  v12 = *((_DWORD *)a2 + 125);
  *((_DWORD *)a2 + 1) = v11;
  v13 = 100;
  if ( v12 <= 0 )
    v12 = 0;
  if ( v12 < 100 )
    v13 = v12;
  v14 = 8;
  *((_DWORD *)a2 + 125) = v13;
  if ( *((int *)a2 + 2) > 8 )
    v14 = *((_DWORD *)a2 + 2);
  v15 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 2) = v14;
  v16 = 8;
  if ( v15 > 8 )
    v16 = v15;
  v17 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 3) = v16;
  v18 = 8LL;
  if ( v17 > 8 )
    v18 = (unsigned int)v17;
  *((_DWORD *)a2 + 4) = v18;
  v20 = *(_DWORD *)(GetSessionDpiServerInfo(v18, v6, v7) + 20);
  v22 = *((_DWORD *)a2 + 5);
  v23 = (unsigned int)(v20 + 2);
  if ( v22 <= (int)v23 )
    v22 = *(_DWORD *)(GetSessionDpiServerInfo(v23, v19, v21) + 20) + 2;
  *((_DWORD *)a2 + 5) = v22;
  SessionDpiMetrics = GetSessionDpiMetrics(v23, v19, v21);
  v25 = 8;
  v26 = *((_DWORD *)a2 + 55);
  v27 = SessionDpiMetrics;
  if ( *((int *)a2 + 29) > 8 )
    v25 = *((_DWORD *)a2 + 29);
  v28 = *((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 29) = v25;
  v29 = *(_DWORD *)(SessionDpiMetrics + 44);
  v30 = *((_DWORD *)a2 + 54);
  v31 = v29 + 2;
  if ( v28 <= v31 )
    v28 = v31;
  *((_DWORD *)a2 + 30) = v28;
  if ( v30 > 8 )
    v9 = v30;
  *((_DWORD *)a2 + 54) = v9;
  if ( v26 <= *(_DWORD *)(v27 + 28) )
    v26 = *(_DWORD *)(v27 + 28);
  *((_DWORD *)a2 + 55) = v26;
  SetNCMetrics(a2);
  LOBYTE(v8) = (unsigned int)CreateBitmapStrip(v33, v32, v34) != 0;
  return v8;
}
