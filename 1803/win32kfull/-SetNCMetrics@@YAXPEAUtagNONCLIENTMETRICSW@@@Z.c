/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C0054B60
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C0053DAC (xxxSetWindowNCMetrics.c)
 * Callees:
 *     bSetDevDragWidth @ 0x1C0055238 (bSetDevDragWidth.c)
 *     UpdateDesktopThresholds @ 0x1C0065140 (UpdateDesktopThresholds.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  INT v2; // r13d
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  int v12; // ebx
  INT v13; // ebx
  INT v14; // edx
  int v15; // edi
  INT v16; // edx
  INT v17; // edi
  INT v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // ebx
  int v26; // ecx
  int v27; // edi
  int v28; // esi

  SetDpiDepSysMet(0LL);
  SetDpiDepSysMet(1LL);
  SetDpiDepSysMet(10LL);
  SetDpiDepSysMet(11LL);
  SetDpiDepSysMet(3LL);
  SetDpiDepSysMet(4LL);
  SetDpiDepSysMet(12LL);
  SetDpiDepSysMet(13LL);
  SetDpiDepSysMet(2LL);
  if ( *(_DWORD *)a1 == 504 )
    SetDpiDepSysMet(29LL);
  SetDpiDepSysMet(20LL);
  SetDpiDepSysMet(21LL);
  SetDpiDepSysMet(20LL);
  SetDpiDepSysMet(21LL);
  SetDpiDepSysMet(23LL);
  SetDpiDepSysMet(24LL);
  SetDpiDepSysMet(22LL);
  SetDpiDepSysMet(25LL);
  SetDpiDepSysMet(26LL);
  SetDpiDepSysMet(9LL);
  v2 = *((_DWORD *)a1 + 1);
  *(_DWORD *)(GetSessionDpiServerInfo(v4, v3, v5) + 4) = v2;
  SetDpiDepSysMet(14LL);
  SetDpiDepSysMet(15LL);
  v6 = Get96DpiMetrics();
  v11 = Get96DpiServerInfo(v8, v7, v9, v10);
  v12 = *(_DWORD *)(v11 + 20) + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v12 )
    v12 = EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2456LL) = v12;
  v13 = 8;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v14 = 8;
  else
    v14 = EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2452LL) = v14;
  v15 = *(_DWORD *)(v6 + 44) + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v15 )
    v15 = EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2500LL) = v15;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v16 = 8;
  else
    v16 = EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2496LL) = v16;
  v17 = *(_DWORD *)(v6 + 28);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v17 )
    v17 = EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2508LL) = v17;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > 8 )
    v13 = EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2504LL) = v13;
  *(_DWORD *)(gpsi + 2440LL) = *(_DWORD *)(gpsi + 2508LL) + 1;
  *(_DWORD *)(gpsi + 2412LL) = *(_DWORD *)(gpsi + 2456LL) + 1;
  *(_DWORD *)(gpsi + 2492LL) = *(_DWORD *)(gpsi + 2500LL) + 1;
  *(_DWORD *)(gpsi + 2520LL) = EngMulDiv(*(_DWORD *)(gpsi + 2400LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2448LL) = EngMulDiv(*(_DWORD *)(gpsi + 2328LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2420LL) = EngMulDiv(*(_DWORD *)(gpsi + 2300LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2404LL) = EngMulDiv(*(_DWORD *)(gpsi + 2284LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2408LL) = EngMulDiv(*(_DWORD *)(gpsi + 2288LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2444LL) = EngMulDiv(*(_DWORD *)(gpsi + 2324LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2416LL) = EngMulDiv(*(_DWORD *)(gpsi + 2296LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v18 = EngMulDiv(v2, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v23 = Get96DpiServerInfo(v20, v19, v21, v22);
  v24 = 2460LL;
  *(_DWORD *)(v23 + 4) = v18;
  v25 = v18 + 3;
  do
  {
    *(_DWORD *)(v24 + gpsi) = v25;
    v24 += 4LL;
  }
  while ( v24 < 2468 );
  v26 = *(_DWORD *)(gpsi + 2520LL);
  v27 = v26 + *(_DWORD *)(gpsi + 2460LL);
  v28 = v26 + *(_DWORD *)(gpsi + 2464LL);
  SetDpiDepSysMet(16LL);
  SetDpiDepSysMet(17LL);
  *(_DWORD *)(gpsi + 2468LL) = *(_DWORD *)(gpsi + 2456LL)
                             + 3 * *(_DWORD *)(gpsi + 2452LL)
                             + 2 * (v27 + 2 + 2 * *(_DWORD *)(v11 + 16));
  *(_DWORD *)(gpsi + 2472LL) = *(_DWORD *)(gpsi + 2412LL) + 2 * v28;
  *(_DWORD *)(gpsi + 2128LL) = *(_DWORD *)(gpsi + 2336LL) + 6;
  bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), (unsigned int)(*((_DWORD *)a1 + 1) + 3));
  UpdateDesktopThresholds();
}
