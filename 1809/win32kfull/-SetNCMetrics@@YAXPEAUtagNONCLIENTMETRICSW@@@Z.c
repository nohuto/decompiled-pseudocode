/*
 * XREFs of ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00C014C
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00BF2F4 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     UpdateDesktopThresholds @ 0x1C00C09B0 (UpdateDesktopThresholds.c)
 *     bSetDevDragWidth @ 0x1C00C0E1C (bSetDevDragWidth.c)
 */

void __fastcall SetNCMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  int v2; // r8d
  int v3; // r8d
  unsigned int v4; // ebx
  INT v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 SessionDpiServerInfo; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r15
  int v15; // ebx
  INT v16; // ebx
  INT v17; // edx
  int v18; // edi
  INT v19; // edx
  INT v20; // edi
  INT v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  int v27; // ebx
  int v28; // ecx
  int v29; // r8d
  int v30; // edi
  int v31; // esi
  int v32; // ebx

  SetDpiDepSysMet(0LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(1LL, *((unsigned int *)a1 + 2));
  SetDpiDepSysMet(10LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(11LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(3LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(4LL, *((unsigned int *)a1 + 3));
  SetDpiDepSysMet(12LL, *((unsigned int *)a1 + 4));
  SetDpiDepSysMet(13LL, *((unsigned int *)a1 + 5));
  SetDpiDepSysMet(2LL, (unsigned int)(*(_DWORD *)(gpsi + 2336LL) + 1));
  if ( *(_DWORD *)a1 == 504 )
    SetDpiDepSysMet(29LL, *((unsigned int *)a1 + 125));
  v2 = *(_DWORD *)(gpsi + 2332LL) - 2;
  if ( v2 >= *(_DWORD *)(gpsi + 2304LL) / 2 )
    v2 = *(_DWORD *)(gpsi + 2304LL) / 2;
  SetDpiDepSysMet(20LL, v2 & 0xFFFFFFFE);
  v3 = *(_DWORD *)(gpsi + 2336LL) - 2;
  if ( v3 >= *(_DWORD *)(gpsi + 2308LL) / 2 )
    v3 = *(_DWORD *)(gpsi + 2308LL) / 2;
  SetDpiDepSysMet(21LL, v3 & 0xFFFFFFFE);
  v4 = *(_DWORD *)(gpsi + 2364LL);
  if ( (signed int)v4 >= *(_DWORD *)(gpsi + 2368LL) )
    v4 = *(_DWORD *)(gpsi + 2368LL);
  SetDpiDepSysMet(20LL, v4);
  SetDpiDepSysMet(21LL, v4);
  SetDpiDepSysMet(23LL, *((unsigned int *)a1 + 29));
  SetDpiDepSysMet(24LL, *((unsigned int *)a1 + 30));
  SetDpiDepSysMet(22LL, (unsigned int)(*(_DWORD *)(gpsi + 2380LL) + 1));
  SetDpiDepSysMet(25LL, *((unsigned int *)a1 + 54));
  SetDpiDepSysMet(26LL, *((unsigned int *)a1 + 55));
  SetDpiDepSysMet(9LL, (unsigned int)(*(_DWORD *)(gpsi + 2388LL) + 1));
  v5 = *((_DWORD *)a1 + 1);
  SessionDpiServerInfo = GetSessionDpiServerInfo(v7, v6, v8);
  *(_DWORD *)(SessionDpiServerInfo + 4) = v5;
  SetDpiDepSysMet(14LL, (unsigned int)(v5 + 3));
  SetDpiDepSysMet(15LL, (unsigned int)(v5 + 3));
  v10 = Get96DpiMetrics();
  v14 = Get96DpiServerInfo(v12, v11, v13);
  v15 = *(_DWORD *)(v14 + 20) + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v15 )
    v15 = EngMulDiv(*(_DWORD *)(gpsi + 2336LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2456LL) = v15;
  v16 = 8;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v17 = 8;
  else
    v17 = EngMulDiv(*(_DWORD *)(gpsi + 2332LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2452LL) = v17;
  v18 = *(_DWORD *)(v10 + 44) + 2;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v18 )
    v18 = EngMulDiv(*(_DWORD *)(gpsi + 2380LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2500LL) = v18;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) <= 8 )
    v19 = 8;
  else
    v19 = EngMulDiv(*(_DWORD *)(gpsi + 2376LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2496LL) = v19;
  v20 = *(_DWORD *)(v10 + 28);
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > v20 )
    v20 = EngMulDiv(*(_DWORD *)(gpsi + 2388LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2508LL) = v20;
  if ( EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL)) > 8 )
    v16 = EngMulDiv(*(_DWORD *)(gpsi + 2384LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2504LL) = v16;
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
  v21 = EngMulDiv(v5, 96, *(unsigned __int16 *)(gpsi + 6998LL));
  v25 = Get96DpiServerInfo(v23, v22, v24);
  v26 = 2460LL;
  *(_DWORD *)(v25 + 4) = v21;
  v27 = v21 + 3;
  do
  {
    *(_DWORD *)(v26 + gpsi) = v27;
    v26 += 4LL;
  }
  while ( v26 < 2468 );
  v28 = *(_DWORD *)(gpsi + 2520LL);
  v29 = *(_DWORD *)(gpsi + 2400LL);
  v30 = v28 + *(_DWORD *)(gpsi + 2460LL);
  v31 = v28 + *(_DWORD *)(gpsi + 2464LL);
  v32 = v29 + *(_DWORD *)(gpsi + 2344LL);
  SetDpiDepSysMet(
    16LL,
    (unsigned int)(*(_DWORD *)(gpsi + 2336LL)
                 + 3 * *(_DWORD *)(gpsi + 2332LL)
                 + 2 * (v29 + 2 + *(_DWORD *)(gpsi + 2340LL) + 2 * *(_DWORD *)(SessionDpiServerInfo + 16))));
  SetDpiDepSysMet(17LL, (unsigned int)(*(_DWORD *)(gpsi + 2292LL) + 2 * v32));
  *(_DWORD *)(gpsi + 2468LL) = *(_DWORD *)(gpsi + 2456LL)
                             + 3 * *(_DWORD *)(gpsi + 2452LL)
                             + 2 * (v30 + 2 + 2 * *(_DWORD *)(v14 + 16));
  *(_DWORD *)(gpsi + 2472LL) = *(_DWORD *)(gpsi + 2412LL) + 2 * v31;
  *(_DWORD *)(gpsi + 2128LL) = *(_DWORD *)(gpsi + 2336LL) + 6;
  bSetDevDragWidth(*(_QWORD *)(gpDispInfo + 40LL), (unsigned int)(*((_DWORD *)a1 + 1) + 3));
  UpdateDesktopThresholds();
}
