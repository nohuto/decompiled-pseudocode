/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01F6E8C
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01F7A18 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 *     _GetPointerDeviceType @ 0x1C01F0298 (_GetPointerDeviceType.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01F73D8 (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01F75D4 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01F78BC (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 */

_QWORD *__fastcall Edgy::_GetArcData(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  unsigned int v7; // r12d
  int v8; // ebp
  const struct tagPOINTER_INFO *v9; // r14
  int v10; // r13d
  unsigned int v11; // ebx
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v13; // rcx
  int v14; // eax
  __int64 v15; // rax
  int v16; // r13d
  BOOL v17; // r15d
  int PointerDeviceType; // ebx
  int IsLegacyDevice; // eax
  __int64 *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  const struct Edgy::tagARC_DATA *v27; // r8
  __int64 v28; // rax
  int v29; // r11d
  int v30; // r12d
  int v31; // r8d
  int v32; // edx
  int v33; // r9d
  int v34; // r10d
  int v35; // eax
  int v36; // ecx
  __int64 Instance; // rbx
  unsigned int v38; // eax
  __int64 Inertia; // rbx
  float v40; // xmm1_4
  float v41; // xmm1_4
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v52; // [rsp+30h] [rbp-88h]
  __int128 v53; // [rsp+38h] [rbp-80h]
  char v54[104]; // [rsp+50h] [rbp-68h] BYREF
  int v55; // [rsp+C0h] [rbp+8h]
  unsigned int v56; // [rsp+C8h] [rbp+10h]
  int v57; // [rsp+D0h] [rbp+18h]
  unsigned int DisambiguationArcData; // [rsp+D8h] [rbp+20h]

  memset(a1, 0, 0x38uLL);
  v7 = *(_DWORD *)(a3 + 48);
  *a1 = a3;
  v8 = 1;
  v56 = 0;
  v9 = 0LL;
  v55 = 0;
  v10 = 0;
  v11 = 0;
  if ( v7 )
  {
    do
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (const struct CPointerInputFrame *)a3, v11);
      v13 = PointerInfo;
      v6 = 1LL;
      if ( PointerInfo )
      {
        ++v56;
        v14 = *((_DWORD *)PointerInfo + 3);
        if ( (v14 & 4) != 0 )
        {
          ++v10;
          if ( (v14 & 0x2000) != 0 )
          {
            v9 = v13;
            a1[5] = *((_QWORD *)v13 + 7);
            *((_DWORD *)a1 + 12) = *((_DWORD *)v13 + 16);
          }
        }
        v15 = *(_QWORD *)(a2 + 176);
        if ( (unsigned int)(*(_DWORD *)v13 - 2) > 1 )
          v8 = 0;
        if ( v15 && *((_QWORD *)v13 + 2) != v15 )
          v8 = 0;
      }
      ++v11;
    }
    while ( v11 < v7 );
    v55 = v10;
  }
  v16 = 0;
  v57 = 0;
  v17 = 0;
  if ( !*(_DWORD *)(a2 + 16) && v8 && v9 && v55 == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v9 + 2), 0LL, v6);
    if ( ((PointerDeviceType - 1) & 0xFFFFFFFD) != 0 )
      v8 = 0;
    if ( v8 )
    {
      IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)v9 + 2), 0LL);
      v20 = (__int64 *)Edgy::_HitTestEdgyRegion(
                         v54,
                         a2,
                         *((_QWORD *)v9 + 2),
                         *((_QWORD *)v9 + 7),
                         PointerDeviceType,
                         IsLegacyDevice);
      v21 = *v20;
      v53 = *(_OWORD *)v20;
      if ( *v20 )
      {
        v16 = 1;
        *((_DWORD *)a1 + 6) = v20[2];
        a1[2] = v21;
        v22 = *(_QWORD *)(v21 + 8);
        a1[4] = *((_QWORD *)&v53 + 1);
        v57 = *(_DWORD *)(*((_QWORD *)&v53 + 1) + 4LL);
        v23 = ValidateHwnd(v22);
        v17 = 1;
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 40);
          if ( *(char *)(v24 + 19) >= 0 && *(char *)(v24 + 20) >= 0 )
            v17 = 0;
        }
      }
      else
      {
        v16 = 0;
      }
    }
  }
  DisambiguationArcData = 0;
  if ( v8 && *(_DWORD *)(a2 + 16) == 1 )
  {
    v25 = *(_QWORD *)(a2 + 184);
    if ( v25
      && (v26 = ValidateHwnd(*(_QWORD *)(v25 + 8))) != 0
      && (v28 = *(_QWORD *)(v26 + 40), *(char *)(v28 + 19) >= 0)
      && *(char *)(v28 + 20) >= 0 )
    {
      DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)a1, v27);
    }
    else
    {
      v17 = 1;
    }
    a1[2] = *(_QWORD *)(a2 + 184);
    a1[4] = *(_QWORD *)(a2 + 208);
    *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 216);
  }
  v29 = *(_DWORD *)(a2 + 16);
  v30 = 0;
  if ( !v29
    && (unsigned int)(*((_DWORD *)a1 + 12) - *(_DWORD *)(a2 + 248)) < *(_DWORD *)(a2 + 252)
    && v9
    && *(_QWORD *)(a2 + 240) == *((_QWORD *)v9 + 2) )
  {
    v31 = *((_DWORD *)a1 + 10);
    v32 = *(_DWORD *)(a2 + 256);
    v33 = *((_DWORD *)a1 + 11);
    v34 = *(_DWORD *)(a2 + 260);
    v35 = v31 - v32;
    if ( v31 <= v32 )
      v35 = *(_DWORD *)(a2 + 256) - v31;
    if ( v35 < *(_DWORD *)(a2 + 264) )
    {
      v36 = v33 - v34;
      if ( v33 <= v34 )
        v36 = v34 - v33;
      if ( v36 < *(_DWORD *)(a2 + 268) )
        v30 = 1;
    }
  }
  v52 = 0;
  if ( !v29 )
  {
    if ( v16 )
    {
      if ( (unsigned int)(*(_DWORD *)v9 - 2) <= 1 )
      {
        Instance = CInertiaManager::GetInstance();
        v38 = CInertiaManager::InertiaSourceFromPointerType(*(unsigned int *)v9);
        Inertia = CInertiaManager::QueryInertia(Instance, *((_QWORD *)v9 + 6), v38);
        if ( Inertia )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(Inertia + 176)) < *(_QWORD *)(a2 + 280) )
          {
            if ( (v40 = *(float *)(Inertia + 16), v40 > 0.0) && !*((_DWORD *)a1 + 6)
              || v40 < 0.0 && *((_DWORD *)a1 + 6) == 2
              || (v41 = *(float *)(Inertia + 20), v41 > 0.0) && *((_DWORD *)a1 + 6) == 1
              || v41 < 0.0 && *((_DWORD *)a1 + 6) == 3 )
            {
              v52 = 1;
            }
          }
        }
      }
    }
  }
  v42 = (v55 == 0) | 2;
  if ( !v9 )
    v42 = v55 == 0;
  v43 = v42 | 4;
  if ( v56 <= 1 )
    v43 = v42;
  v44 = v43 | 8;
  if ( !v8 )
    v44 = v43;
  v45 = v44 | 0x10;
  if ( !v16 )
    v45 = v44;
  v46 = v45 | 0x80;
  if ( !v57 )
    v46 = v45;
  v47 = v46 | 0x1000;
  if ( !v17 )
    v47 = v46;
  v48 = DisambiguationArcData | v47;
  v49 = v48 | 0x40;
  if ( !v30 )
    v49 = v48;
  v50 = v49 | 0x20;
  if ( !v52 )
    v50 = v49;
  *((_DWORD *)a1 + 2) = v50;
  return a1;
}
