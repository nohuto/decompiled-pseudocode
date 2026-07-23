/*
 * XREFs of MiComputeSystemTrimCriteria @ 0x1400EF058
 * Callers:
 *     MiProcessWorkingSets @ 0x14006CEC0 (MiProcessWorkingSets.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140030FC4 (MiGetAvailablePagesBelowPriority.c)
 *     MiGetStandbyRepurposed @ 0x1400EF3CC (MiGetStandbyRepurposed.c)
 *     MiComputeAgeDistribution @ 0x1401144A8 (MiComputeAgeDistribution.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiPulseLowAvailableEvent @ 0x1402CB4F0 (MiPulseLowAvailableEvent.c)
 */

__int64 __fastcall MiComputeSystemTrimCriteria(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v5; // ebp
  unsigned __int64 AvailablePagesBelowPriority; // r14
  __int64 v7; // rcx
  unsigned int StandbyRepurposed; // eax
  int v9; // r11d
  unsigned int v10; // ecx
  unsigned int v11; // r10d
  int v12; // edx
  unsigned int v13; // eax
  bool v14; // cf
  unsigned __int64 v15; // rcx
  unsigned __int8 v16; // r12
  unsigned int v17; // r9d
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // edx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  unsigned __int64 v26; // r10
  int v27; // r11d
  int v28; // r13d
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int8 v32; // di
  unsigned __int64 v33; // r12
  char v34; // al
  unsigned __int16 v35; // ax
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  __int16 v39; // ax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rcx
  __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  int v50; // [rsp+60h] [rbp+8h]
  unsigned int v51; // [rsp+70h] [rbp+18h]
  unsigned __int64 v52; // [rsp+78h] [rbp+20h]

  v2 = a1[878];
  v50 = 0;
  v5 = *(_DWORD *)(v2 + 40);
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, 6u);
  StandbyRepurposed = MiGetStandbyRepurposed(v7);
  v10 = *(_DWORD *)(v2 + 44);
  v11 = StandbyRepurposed;
  v12 = *(_DWORD *)(v2 + 128);
  v13 = StandbyRepurposed - v10;
  v14 = v10 < v11;
  *(_DWORD *)(v2 + 44) = v11;
  v15 = *(_QWORD *)(v2 + 2408);
  v16 = 0;
  v17 = v14 ? v13 : 0;
  v18 = v15 - AvailablePagesBelowPriority;
  v51 = v17;
  v19 = 0LL;
  if ( AvailablePagesBelowPriority > v15 )
    v18 = AvailablePagesBelowPriority - v15;
  v20 = v12 & 7;
  *(_QWORD *)(v2 + 2208) += (v18 >> 3) - (*(_QWORD *)(v2 + 8 * v20 + 2216) >> 3);
  *(_QWORD *)(v2 + 8 * v20 + 2216) = v18;
  if ( *(_DWORD *)(v2 + 88) == 4 && *(_WORD *)(v2 + 2356) && *(_BYTE *)(v2 + 2358) && *(_BYTE *)(v2 + 2359) )
  {
    v21 = v9;
  }
  else
  {
    v21 = 1;
    v9 = AvailablePagesBelowPriority <= 0x120;
  }
  v22 = *(_QWORD *)(v2 + 2408);
  v23 = v22;
  if ( v9 == v21 )
  {
    v24 = 0LL;
  }
  else
  {
    v9 = 0;
    v24 = AvailablePagesBelowPriority - *(_QWORD *)(v2 + 2376);
    v23 = v22 >> 2;
  }
  if ( AvailablePagesBelowPriority < v23 )
  {
    v40 = v22 - v24;
  }
  else
  {
    if ( AvailablePagesBelowPriority >= 4 * v22 )
      goto LABEL_9;
    if ( v24 >= 0 )
      goto LABEL_9;
    v40 = v22 - v24;
    if ( AvailablePagesBelowPriority >= v22 - v24 )
      goto LABEL_9;
  }
  v19 = *(_QWORD *)(v2 + 2392);
  v41 = v40 - AvailablePagesBelowPriority;
  v16 = v21;
  if ( v41 <= v19 )
    v19 = v41;
LABEL_9:
  v52 = v17;
  if ( v17 >= AvailablePagesBelowPriority >> 2 )
  {
    v42 = v17 - (AvailablePagesBelowPriority >> 2);
    if ( v42 > v19 && v19 < 0x2000 && !v9 )
    {
      v19 = v17 - (AvailablePagesBelowPriority >> 2);
      v16 = 3;
      if ( v42 > 0x2000 )
        v19 = 0x2000LL;
    }
  }
  v25 = MiGetStandbyRepurposed(a1);
  v28 = v25;
  if ( v19 )
  {
    if ( v19 < 0x1000 && !v27 )
      v19 = 4096LL;
  }
  else if ( !v27 )
  {
    v29 = v25 - *(_DWORD *)(v2 + 48);
    if ( v29 > 0x20000 )
    {
      v43 = a1[912];
      if ( v43 >= 0x100000 || v43 >= a1[890] >> 2 )
      {
        *(_DWORD *)(v2 + 48) = v25;
      }
      else
      {
        v19 = 0x8000LL;
        v16 = 2;
      }
    }
    else if ( v51 && v29 > 0x18000 && *(_QWORD *)(v2 + 2416) < 0x20000uLL )
    {
      v50 = 1;
    }
  }
  if ( AvailablePagesBelowPriority < 4 * v26 )
  {
    v44 = *(_QWORD *)(v2 + 2208);
    v45 = 4 * v44;
    if ( 4 * v44 >= v26 )
    {
      v47 = 2 * v44;
      if ( 2 * v44 <= v26 )
        goto LABEL_17;
      v46 = *(_QWORD *)(v2 + 2392);
      *(_QWORD *)(v2 + 2408) = v47;
      if ( v47 <= v46 )
        goto LABEL_17;
    }
    else
    {
      v46 = *(_QWORD *)(v2 + 2384);
      *(_QWORD *)(v2 + 2408) = v45;
      if ( v45 >= v46 )
        goto LABEL_17;
    }
    *(_QWORD *)(v2 + 2408) = v46;
    goto LABEL_17;
  }
  if ( AvailablePagesBelowPriority > 16 * v26 )
    *(_QWORD *)(v2 + 2408) = *(_QWORD *)(v2 + 2400);
LABEL_17:
  v30 = *(_QWORD *)(v2 + 56);
  *(_QWORD *)(v2 + 2376) = AvailablePagesBelowPriority;
  if ( v30 && v19 < v30 )
  {
    v19 = v30;
    v16 = 5;
  }
  if ( !v19 )
  {
    v31 = *(_QWORD *)(v2 + 2368);
    v32 = 0;
    if ( v31 )
    {
      if ( v31 > *(_QWORD *)(v2 + 2416) )
      {
        v33 = v52;
        v32 = 11;
        if ( *(_WORD *)(v2 + 2354) < 0xFAu )
          *(_WORD *)(v2 + 2354) = 250;
        goto LABEL_26;
      }
      *(_QWORD *)(v2 + 2368) = 0LL;
    }
    if ( *(_QWORD *)(v2 + 2416) >= (unsigned __int64)(4LL * *(_QWORD *)(v2 + 2392)) )
      goto LABEL_48;
    if ( !*(_WORD *)(v2 + 2354) )
      goto LABEL_22;
    v39 = MiComputeAgeDistribution(a1, 1LL);
    v32 = 0;
    *(_WORD *)(v2 + 2354) = v39;
    if ( v39 )
      v32 = 12;
    if ( v32 )
    {
LABEL_48:
      v33 = v52;
    }
    else
    {
LABEL_22:
      v33 = v52;
      if ( v52 >= AvailablePagesBelowPriority >> 4 )
      {
        v32 = 10;
      }
      else
      {
        v34 = v32;
        if ( v50 == 1 )
          v34 = 9;
        v32 = v34;
      }
    }
LABEL_26:
    v35 = *(_WORD *)(v2 + 2356);
    if ( v35 )
    {
      if ( *(_WORD *)(v2 + 2354) < v35 )
        *(_WORD *)(v2 + 2354) = v35;
      if ( !v32 )
      {
        v32 = 13;
        *(_WORD *)(v2 + 2354) = v35;
      }
    }
    *(_BYTE *)a2 = 0;
    *(_QWORD *)(a2 + 96) = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    v36 = a1[912];
    *(_QWORD *)(a2 + 104) = 0LL;
    *(_QWORD *)(a2 + 72) = v36;
    *(_BYTE *)(a2 + 2) = v32;
    memset((void *)(a2 + 8), 0, 0x40uLL);
    if ( v32 )
    {
      ++*(_DWORD *)(v2 + 4LL * v32 + 2496);
      v5 |= 2u;
    }
    else if ( *(_BYTE *)(v2 + 55) == 1 )
    {
      v5 |= 0x80u;
      *(_WORD *)(v2 + 2354) = 10;
    }
    else if ( !v5 )
    {
      v5 = 64;
    }
    goto LABEL_31;
  }
  MiPulseLowAvailableEvent(a1, 0LL);
  if ( (unsigned __int8)(v16 - 2) <= 1u )
    *(_QWORD *)(v2 + 2368) = v19;
  *(_QWORD *)(a2 + 80) = v19;
  v5 |= 1u;
  *(_BYTE *)a2 = 0;
  *(_QWORD *)(a2 + 96) = 0LL;
  v48 = a1[912];
  *(_QWORD *)(a2 + 104) = 0LL;
  *(_QWORD *)(a2 + 72) = v19 + v48;
  *(_BYTE *)(a2 + 2) = v16;
  memset((void *)(a2 + 8), 0, 0x40uLL);
  v49 = v16;
  v33 = v52;
  *(_DWORD *)(v2 + 48) = v28;
  ++*(_DWORD *)(v2 + 4 * v49 + 2496);
LABEL_31:
  if ( AvailablePagesBelowPriority && v33 < AvailablePagesBelowPriority )
    v37 = 100 * v51 / AvailablePagesBelowPriority;
  else
    LOBYTE(v37) = 100;
  *(_BYTE *)(a2 + 3) = v37;
  if ( (v5 & 1) == 0 )
    *(_BYTE *)(a2 + 4) = 1;
  return v5;
}
