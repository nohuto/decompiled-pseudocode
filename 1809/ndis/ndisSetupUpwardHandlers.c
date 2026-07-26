/*
 * XREFs of ndisSetupUpwardHandlers @ 0x1C001B450
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C001B3F8 (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 */

__int64 (__fastcall *__fastcall ndisSetupUpwardHandlers(__int64 a1))(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // rsi
  int v3; // edi
  int v4; // edx
  __int64 v5; // rcx
  bool v6; // r8
  unsigned int v7; // eax
  int v8; // edx
  bool v9; // zf
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 (__fastcall *result)(ULONG_PTR); // rax

  v1 = *(_QWORD *)(a1 + 2064);
  v3 = 0;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(65LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  v4 = *(_DWORD *)(v1 + 60);
  *(_QWORD *)(v1 + 472) = *(_QWORD *)(a1 + 2448);
  *(_QWORD *)(v1 + 480) = *(_QWORD *)(a1 + 2408);
  *(_QWORD *)(v1 + 488) = *(_QWORD *)(a1 + 2416);
  *(_QWORD *)(v1 + 496) = *(_QWORD *)(a1 + 2424);
  *(_QWORD *)(v1 + 504) = *(_QWORD *)(a1 + 2456);
  *(_QWORD *)(v1 + 512) = *(_QWORD *)(a1 + 2328);
  *(_QWORD *)(v1 + 520) = *(_QWORD *)(a1 + 2336);
  *(_QWORD *)(v1 + 528) = *(_QWORD *)(a1 + 2344);
  v5 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 248LL);
  v6 = v5 != 0;
  v7 = v4 & 0xFFFFFFFE;
  v8 = v4 | 1;
  v9 = v5 == 0;
  v10 = *(_QWORD *)(v1 + 112);
  if ( v9 )
    v8 = v7;
  *(_DWORD *)(v1 + 60) = v8;
  *(_BYTE *)(a1 + 2007) = 0;
  while ( v10 )
  {
    v13 = *(_QWORD *)(v10 + 120);
    if ( v6 || !*(_QWORD *)(*(_QWORD *)(v10 + 16) + 248LL) )
    {
      *(_DWORD *)(v10 + 60) &= ~1u;
    }
    else
    {
      *(_DWORD *)(v10 + 60) |= 1u;
      v6 = 1;
    }
    v14 = v3 + 1;
    if ( (*(_DWORD *)(v13 + 56) & 0x8000) == 0 )
      v14 = v3;
    v3 = v14;
    v15 = *(_QWORD *)(v13 + 600);
    if ( v15 )
    {
      *(_QWORD *)(v10 + 472) = v15;
      *(_QWORD *)(v10 + 480) = *(_QWORD *)(v13 + 24);
      *(_QWORD *)(v10 + 488) = *(_QWORD *)(v13 + 664);
      v11 = v13;
    }
    else
    {
      *(_QWORD *)(v10 + 472) = *(_QWORD *)(v13 + 472);
      *(_QWORD *)(v10 + 480) = *(_QWORD *)(v13 + 480);
      *(_QWORD *)(v10 + 488) = *(_QWORD *)(v13 + 488);
      v11 = *(_QWORD *)(v13 + 496);
    }
    *(_QWORD *)(v10 + 496) = v11;
    v12 = *(_QWORD *)(v13 + 616);
    if ( v12 )
    {
      if ( !v3 )
      {
        ++*(_BYTE *)(a1 + 2007);
        v12 = *(_QWORD *)(v13 + 616);
      }
      *(_QWORD *)(v10 + 504) = v12;
      *(_QWORD *)(v10 + 512) = *(_QWORD *)(v13 + 24);
      *(_QWORD *)(v10 + 520) = *(_QWORD *)(v13 + 664);
    }
    else
    {
      *(_QWORD *)(v10 + 504) = *(_QWORD *)(v13 + 504);
      *(_QWORD *)(v10 + 512) = *(_QWORD *)(v13 + 512);
      *(_QWORD *)(v10 + 520) = *(_QWORD *)(v13 + 520);
      v13 = *(_QWORD *)(v13 + 528);
    }
    *(_QWORD *)(v10 + 528) = v13;
    v10 = *(_QWORD *)(v10 + 112);
  }
  v16 = *(_QWORD *)(a1 + 2056);
  v17 = v3 + 1;
  v18 = *(_QWORD *)(v16 + 600);
  if ( (*(_DWORD *)(v16 + 56) & 0x8000) == 0 )
    v17 = v3;
  if ( v18 )
  {
    *(_QWORD *)(a1 + 2632) = v18;
    *(_QWORD *)(a1 + 2592) = *(_QWORD *)(v16 + 24);
    *(_QWORD *)(a1 + 2600) = *(_QWORD *)(v16 + 664);
    v19 = v16;
  }
  else
  {
    *(_QWORD *)(a1 + 2632) = *(_QWORD *)(v16 + 472);
    *(_QWORD *)(a1 + 2592) = *(_QWORD *)(v16 + 480);
    *(_QWORD *)(a1 + 2600) = *(_QWORD *)(v16 + 488);
    v19 = *(_QWORD *)(v16 + 496);
  }
  *(_QWORD *)(a1 + 2608) = v19;
  v20 = *(_QWORD *)(v16 + 616);
  if ( v20 )
  {
    if ( !v17 )
    {
      ++*(_BYTE *)(a1 + 2007);
      v20 = *(_QWORD *)(v16 + 616);
    }
    *(_QWORD *)(a1 + 2640) = v20;
    *(_QWORD *)(a1 + 2512) = *(_QWORD *)(v16 + 24);
    result = *(__int64 (__fastcall **)(ULONG_PTR))(v16 + 664);
    *(_QWORD *)(a1 + 2520) = result;
  }
  else
  {
    *(_QWORD *)(a1 + 2640) = *(_QWORD *)(v16 + 504);
    *(_QWORD *)(a1 + 2512) = *(_QWORD *)(v16 + 512);
    result = *(__int64 (__fastcall **)(ULONG_PTR))(v16 + 520);
    *(_QWORD *)(a1 + 2520) = result;
    v16 = *(_QWORD *)(v16 + 528);
  }
  *(_QWORD *)(a1 + 2528) = v16;
  if ( v17 == 1 )
  {
    result = (__int64 (__fastcall *)(ULONG_PTR))*(unsigned int *)(a1 + 464);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result == 3 )
        goto LABEL_24;
      result = ndisMIndicatePacket;
    }
    else
    {
      result = ethFilterDprIndicateReceivePacket;
    }
    *(_QWORD *)(a1 + 3416) = result;
  }
LABEL_24:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return (__int64 (__fastcall *)(ULONG_PTR))WPP_SF_q(66LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1);
  return result;
}
