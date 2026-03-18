/*
 * XREFs of ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N@Z @ 0x1C003A628
 * Callers:
 *     _DxgDbgBugcheckCallback @ 0x1C0039640 (_DxgDbgBugcheckCallback.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01D2280 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C02032EC (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?TdrGatherPowerTriage@@YA?AU_DPI_DBG_POWER_ACTIVITY@@XZ @ 0x1C003A8D0 (-TdrGatherPowerTriage@@YA-AU_DPI_DBG_POWER_ACTIVITY@@XZ.c)
 *     DpiGetDbgInfoAdapters @ 0x1C00432A0 (DpiGetDbgInfoAdapters.c)
 */

__int64 __fastcall TdrCollectBugcheckSecondaryDumpData(_QWORD *a1, unsigned int a2, char a3)
{
  char v3; // r12
  unsigned __int64 v4; // r15
  unsigned __int16 i; // cx
  __int64 v8; // rax
  unsigned __int16 v9; // r14
  int v10; // esi
  __int64 v11; // rsi
  unsigned __int16 j; // dx
  int v13; // r10d
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rcx
  unsigned __int16 v17; // r14
  char v18; // cl
  __int64 v19; // rax
  unsigned __int16 v20; // bx
  __int64 v21; // rdx
  unsigned __int64 RecentEvents; // r9
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // rdx
  _DWORD v27[9]; // [rsp+28h] [rbp-91h]
  __int64 v28; // [rsp+4Ch] [rbp-6Dh]
  _DWORD v29[28]; // [rsp+60h] [rbp-59h] BYREF

  v3 = a3;
  v4 = a2;
  if ( a2 <= 0xA8 )
    return 0LL;
  if ( a1 )
  {
    for ( i = 0; i < 0x15u; ++i )
    {
      v8 = i;
      a1[v8] = 0LL;
    }
    *(_DWORD *)a1 = 21;
  }
  v9 = 0;
  v10 = 8;
  if ( a2 >= 0xB0 )
  {
    if ( a1 )
    {
      *((_DWORD *)a1 + 42) = 2;
      v9 = 1;
      *((_BYTE *)a1 + 172) = word_1C008E75C;
      *((_BYTE *)a1 + 173) = 0;
      *((_DWORD *)a1 + 2) = 168;
      *((_DWORD *)a1 + 3) = 9;
    }
  }
  else
  {
    v10 = 0;
  }
  v11 = (unsigned int)(v10 + 168);
  memset(v29, 0, sizeof(v29));
  if ( (int)DpiGetDbgInfoAdapters(v29) >= 0 )
  {
    for ( j = 0; j < 7u; ++j )
    {
      if ( (unsigned int)v11 >= (unsigned int)v4 )
        break;
      v13 = v29[4 * j];
      if ( !v13 )
        break;
      v14 = 16;
      if ( v11 + 16 > v4 )
        v14 = 0;
      if ( v14 )
      {
        ++v9;
        if ( a1 )
        {
          *(_DWORD *)((char *)a1 + v11 + 4) = v29[4 * j + 1];
          *(_DWORD *)((char *)a1 + v11 + 8) = v29[4 * j + 2];
          v15 = (*(_DWORD *)((char *)a1 + v11 + 12) ^ v29[4 * j + 3]) & 3;
          *(_DWORD *)((char *)a1 + v11) = v13;
          *(_DWORD *)((char *)a1 + v11 + 12) ^= v15;
          v16 = v9;
          HIDWORD(a1[v16]) = j + 32;
          LODWORD(a1[v16]) = v11;
        }
        v11 = (unsigned int)(v14 + v11);
      }
    }
  }
  v17 = v9 + 1;
  if ( a1 )
  {
    v18 = TdrGatherPowerTriage() ^ *((_BYTE *)a1 + v11);
    v19 = v17;
    *((_BYTE *)a1 + v11) ^= v18 & 3;
    LODWORD(a1[v19]) = v11;
    v11 = (unsigned int)(v11 + 8);
    HIDWORD(a1[v19]) = 48;
  }
  v27[0] = 1;
  v27[1] = 32;
  v20 = 0;
  v27[2] = 32;
  v27[6] = 32;
  v27[8] = 32;
  v27[3] = 64;
  v27[4] = 64;
  v27[5] = 64;
  v27[7] = 64;
  v28 = 64LL;
  do
  {
    if ( (unsigned int)v11 >= (unsigned int)v4 )
      break;
    if ( v3 )
      v21 = 0xFFFFFFFFLL;
    else
      v21 = (unsigned int)v27[v20];
    RecentEvents = (unsigned int)WdLogGetRecentEvents(v20, v21, 0LL, 0LL);
    if ( v11 + RecentEvents < RecentEvents || v11 + RecentEvents > v4 )
      RecentEvents = (unsigned int)(v4 - v11);
    if ( (_DWORD)RecentEvents )
    {
      ++v17;
      if ( a1 )
      {
        if ( a3 )
          v23 = 0xFFFFFFFFLL;
        else
          v23 = (unsigned int)v27[v20];
        v24 = WdLogGetRecentEvents(v20, v23, (char *)a1 + (unsigned int)v11, RecentEvents);
        v25 = v17;
        LODWORD(RecentEvents) = v24;
        LODWORD(a1[v25]) = v11;
        HIDWORD(a1[v25]) = v20 + 16;
      }
      v3 = a3;
      v11 = (unsigned int)(RecentEvents + v11);
    }
    ++v20;
  }
  while ( v20 < 0xBu );
  return (unsigned int)v11;
}
