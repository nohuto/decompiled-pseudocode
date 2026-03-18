/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01F713C
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01F7CC8 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     _GetPointerDeviceType @ 0x1C01F0418 (_GetPointerDeviceType.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01F7688 (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01F7884 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01F7B6C (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 */

_QWORD *__fastcall Edgy::_GetArcData(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r12d
  int v9; // ebp
  const struct tagPOINTER_INFO *v10; // r14
  int v11; // r13d
  unsigned int v12; // ebx
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  int v17; // r13d
  BOOL v18; // r15d
  int PointerDeviceType; // ebx
  int IsLegacyDevice; // eax
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  const struct Edgy::tagARC_DATA *v28; // r8
  __int64 v29; // rax
  int v30; // r11d
  int v31; // r12d
  int v32; // r8d
  int v33; // edx
  int v34; // r9d
  int v35; // r10d
  int v36; // eax
  int v37; // ecx
  __int64 Instance; // rbx
  unsigned int v39; // eax
  __int64 Inertia; // rbx
  float v41; // xmm1_4
  float v42; // xmm1_4
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // eax
  int v50; // ecx
  int v51; // eax
  int v53; // [rsp+30h] [rbp-88h]
  __int128 v54; // [rsp+38h] [rbp-80h]
  char v55[104]; // [rsp+50h] [rbp-68h] BYREF
  int v56; // [rsp+C0h] [rbp+8h]
  unsigned int v57; // [rsp+C8h] [rbp+10h]
  int v58; // [rsp+D0h] [rbp+18h]
  unsigned int DisambiguationArcData; // [rsp+D8h] [rbp+20h]

  memset(a1, 0, 0x38uLL);
  v8 = *(_DWORD *)(a3 + 48);
  *a1 = a3;
  v9 = 1;
  v57 = 0;
  v10 = 0LL;
  v56 = 0;
  v11 = 0;
  v12 = 0;
  if ( v8 )
  {
    do
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (const struct CPointerInputFrame *)a3, v12);
      v14 = PointerInfo;
      v6 = 1LL;
      if ( PointerInfo )
      {
        ++v57;
        v15 = *((_DWORD *)PointerInfo + 3);
        if ( (v15 & 4) != 0 )
        {
          ++v11;
          if ( (v15 & 0x2000) != 0 )
          {
            v10 = v14;
            a1[5] = *((_QWORD *)v14 + 7);
            *((_DWORD *)a1 + 12) = *((_DWORD *)v14 + 16);
          }
        }
        v16 = *(_QWORD *)(a2 + 176);
        if ( (unsigned int)(*(_DWORD *)v14 - 2) > 1 )
          v9 = 0;
        if ( v16 && *((_QWORD *)v14 + 2) != v16 )
          v9 = 0;
      }
      ++v12;
    }
    while ( v12 < v8 );
    v56 = v11;
  }
  v17 = 0;
  v58 = 0;
  v18 = 0;
  if ( !*(_DWORD *)(a2 + 16) && v9 && v10 && v56 == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*((_QWORD *)v10 + 2), 0LL, v6, v7);
    if ( ((PointerDeviceType - 1) & 0xFFFFFFFD) != 0 )
      v9 = 0;
    if ( v9 )
    {
      IsLegacyDevice = Edgy::_IsLegacyDevice(*((Edgy **)v10 + 2), 0LL);
      v21 = (__int64 *)Edgy::_HitTestEdgyRegion(
                         v55,
                         a2,
                         *((_QWORD *)v10 + 2),
                         *((_QWORD *)v10 + 7),
                         PointerDeviceType,
                         IsLegacyDevice);
      v22 = *v21;
      v54 = *(_OWORD *)v21;
      if ( *v21 )
      {
        v17 = 1;
        *((_DWORD *)a1 + 6) = v21[2];
        a1[2] = v22;
        v23 = *(_QWORD *)(v22 + 8);
        a1[4] = *((_QWORD *)&v54 + 1);
        v58 = *(_DWORD *)(*((_QWORD *)&v54 + 1) + 4LL);
        v24 = ValidateHwnd(v23);
        v18 = 1;
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 40);
          if ( *(char *)(v25 + 19) >= 0 && *(char *)(v25 + 20) >= 0 )
            v18 = 0;
        }
      }
      else
      {
        v17 = 0;
      }
    }
  }
  DisambiguationArcData = 0;
  if ( v9 && *(_DWORD *)(a2 + 16) == 1 )
  {
    v26 = *(_QWORD *)(a2 + 184);
    if ( v26
      && (v27 = ValidateHwnd(*(_QWORD *)(v26 + 8))) != 0
      && (v29 = *(_QWORD *)(v27 + 40), *(char *)(v29 + 19) >= 0)
      && *(char *)(v29 + 20) >= 0 )
    {
      DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)a1, v28);
    }
    else
    {
      v18 = 1;
    }
    a1[2] = *(_QWORD *)(a2 + 184);
    a1[4] = *(_QWORD *)(a2 + 208);
    *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 216);
  }
  v30 = *(_DWORD *)(a2 + 16);
  v31 = 0;
  if ( !v30
    && (unsigned int)(*((_DWORD *)a1 + 12) - *(_DWORD *)(a2 + 248)) < *(_DWORD *)(a2 + 252)
    && v10
    && *(_QWORD *)(a2 + 240) == *((_QWORD *)v10 + 2) )
  {
    v32 = *((_DWORD *)a1 + 10);
    v33 = *(_DWORD *)(a2 + 256);
    v34 = *((_DWORD *)a1 + 11);
    v35 = *(_DWORD *)(a2 + 260);
    v36 = v32 - v33;
    if ( v32 <= v33 )
      v36 = *(_DWORD *)(a2 + 256) - v32;
    if ( v36 < *(_DWORD *)(a2 + 264) )
    {
      v37 = v34 - v35;
      if ( v34 <= v35 )
        v37 = v35 - v34;
      if ( v37 < *(_DWORD *)(a2 + 268) )
        v31 = 1;
    }
  }
  v53 = 0;
  if ( !v30 )
  {
    if ( v17 )
    {
      if ( (unsigned int)(*(_DWORD *)v10 - 2) <= 1 )
      {
        Instance = CInertiaManager::GetInstance();
        v39 = CInertiaManager::InertiaSourceFromPointerType(*(unsigned int *)v10);
        Inertia = CInertiaManager::QueryInertia(Instance, *((_QWORD *)v10 + 6), v39);
        if ( Inertia )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(Inertia + 176)) < *(_QWORD *)(a2 + 280) )
          {
            if ( (v41 = *(float *)(Inertia + 16), v41 > 0.0) && !*((_DWORD *)a1 + 6)
              || v41 < 0.0 && *((_DWORD *)a1 + 6) == 2
              || (v42 = *(float *)(Inertia + 20), v42 > 0.0) && *((_DWORD *)a1 + 6) == 1
              || v42 < 0.0 && *((_DWORD *)a1 + 6) == 3 )
            {
              v53 = 1;
            }
          }
        }
      }
    }
  }
  v43 = (v56 == 0) | 2;
  if ( !v10 )
    v43 = v56 == 0;
  v44 = v43 | 4;
  if ( v57 <= 1 )
    v44 = v43;
  v45 = v44 | 8;
  if ( !v9 )
    v45 = v44;
  v46 = v45 | 0x10;
  if ( !v17 )
    v46 = v45;
  v47 = v46 | 0x80;
  if ( !v58 )
    v47 = v46;
  v48 = v47 | 0x1000;
  if ( !v18 )
    v48 = v47;
  v49 = DisambiguationArcData | v48;
  v50 = v49 | 0x40;
  if ( !v31 )
    v50 = v49;
  v51 = v50 | 0x20;
  if ( !v53 )
    v51 = v50;
  *((_DWORD *)a1 + 2) = v51;
  return a1;
}
