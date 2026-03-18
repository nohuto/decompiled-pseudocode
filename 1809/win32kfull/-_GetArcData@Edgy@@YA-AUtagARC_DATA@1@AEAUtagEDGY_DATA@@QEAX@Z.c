/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01E0E94
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01E19D8 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 *     _GetPointerDeviceType @ 0x1C01DAD88 (_GetPointerDeviceType.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01E13A0 (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01E159C (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01E187C (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     QueryInertiaInfo @ 0x1C0226920 (QueryInertiaInfo.c)
 */

_QWORD *__fastcall Edgy::_GetArcData(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v6; // rcx
  unsigned int v7; // r12d
  int v8; // esi
  unsigned __int64 v9; // r14
  int v10; // r13d
  unsigned int v11; // ebp
  const struct tagPOINTER_INFO *PointerInfo; // rax
  int v13; // eax
  __int64 v14; // rax
  int v15; // r13d
  BOOL v16; // r15d
  int PointerDeviceType; // ebp
  int IsLegacyDevice; // eax
  const struct tagPOINTER_INFO **v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  const struct Edgy::tagARC_DATA *v24; // r8
  __int64 v25; // rax
  int v26; // r11d
  int v27; // r12d
  int v28; // r8d
  int v29; // edx
  int v30; // r9d
  int v31; // r10d
  int v32; // eax
  __int64 InertiaInfo; // rbp
  float v34; // xmm1_4
  float v35; // xmm1_4
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v46; // [rsp+30h] [rbp-88h]
  __int128 v47; // [rsp+38h] [rbp-80h]
  char v48[104]; // [rsp+50h] [rbp-68h] BYREF
  int v49; // [rsp+C0h] [rbp+8h]
  unsigned int v50; // [rsp+C8h] [rbp+10h]
  int v51; // [rsp+D0h] [rbp+18h]
  unsigned int DisambiguationArcData; // [rsp+D8h] [rbp+20h]

  memset(a1, 0, 0x38uLL);
  v7 = *(_DWORD *)(a3 + 48);
  *a1 = a3;
  v8 = 1;
  v50 = 0;
  v9 = 0LL;
  v49 = 0;
  v10 = 0;
  v11 = 0;
  if ( v7 )
  {
    do
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (const struct CPointerInputFrame *)a3, v11);
      v6 = (unsigned __int64)PointerInfo;
      if ( PointerInfo )
      {
        ++v50;
        v13 = *((_DWORD *)PointerInfo + 3);
        if ( (v13 & 4) != 0 )
        {
          ++v10;
          if ( (v13 & 0x2000) != 0 )
          {
            v9 = v6;
            a1[5] = *(_QWORD *)(v6 + 56);
            *((_DWORD *)a1 + 12) = *(_DWORD *)(v6 + 64);
          }
        }
        v14 = *(_QWORD *)(a2 + 176);
        if ( (unsigned int)(*(_DWORD *)v6 - 2) > 1 )
          v8 = 0;
        if ( v14 && *(_QWORD *)(v6 + 16) != v14 )
          v8 = 0;
      }
      ++v11;
    }
    while ( v11 < v7 );
    v49 = v10;
  }
  v15 = 0;
  v51 = 0;
  v16 = 0;
  if ( !*(_DWORD *)(a2 + 16) && v8 && v9 && v49 == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*(_QWORD *)(v9 + 16), 0LL);
    v6 = (unsigned int)(PointerDeviceType - 1);
    if ( (v6 & 0xFFFFFFFD) != 0 )
      v8 = 0;
    if ( v8 )
    {
      IsLegacyDevice = Edgy::_IsLegacyDevice(*(Edgy **)(v9 + 16), 0LL);
      v19 = (const struct tagPOINTER_INFO **)Edgy::_HitTestEdgyRegion(
                                               v48,
                                               a2,
                                               *(_QWORD *)(v9 + 16),
                                               *(_QWORD *)(v9 + 56),
                                               PointerDeviceType,
                                               IsLegacyDevice);
      v6 = (unsigned __int64)*v19;
      v47 = *(_OWORD *)v19;
      if ( *v19 )
      {
        v15 = 1;
        *((_DWORD *)a1 + 6) = (unsigned int)v19[2];
        a1[2] = v6;
        v20 = *(_QWORD *)(v6 + 8);
        a1[4] = *((_QWORD *)&v47 + 1);
        v51 = *(_DWORD *)(*((_QWORD *)&v47 + 1) + 4LL);
        v21 = ValidateHwnd(v20);
        v16 = 1;
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 40);
          if ( *(char *)(v22 + 19) >= 0 && *(char *)(v22 + 20) >= 0 )
            v16 = 0;
        }
      }
      else
      {
        v15 = 0;
      }
    }
  }
  DisambiguationArcData = 0;
  if ( v8 && *(_DWORD *)(a2 + 16) == 1 )
  {
    v6 = *(_QWORD *)(a2 + 184);
    if ( v6
      && (v23 = ValidateHwnd(*(_QWORD *)(v6 + 8))) != 0
      && (v25 = *(_QWORD *)(v23 + 40), *(char *)(v25 + 19) >= 0)
      && *(char *)(v25 + 20) >= 0 )
    {
      DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)a1, v24);
    }
    else
    {
      v16 = 1;
    }
    a1[2] = *(_QWORD *)(a2 + 184);
    a1[4] = *(_QWORD *)(a2 + 208);
    *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 216);
  }
  v26 = *(_DWORD *)(a2 + 16);
  v27 = 0;
  if ( !v26 )
  {
    v6 = (unsigned int)(*((_DWORD *)a1 + 12) - *(_DWORD *)(a2 + 248));
    if ( (unsigned int)v6 < *(_DWORD *)(a2 + 252) && v9 && *(_QWORD *)(a2 + 240) == *(_QWORD *)(v9 + 16) )
    {
      v28 = *((_DWORD *)a1 + 10);
      v29 = *(_DWORD *)(a2 + 256);
      v30 = *((_DWORD *)a1 + 11);
      v6 = (unsigned int)(v29 - v28);
      v31 = *(_DWORD *)(a2 + 260);
      v32 = v28 - v29;
      if ( v28 <= v29 )
        v32 = v29 - v28;
      if ( v32 < *(_DWORD *)(a2 + 264) )
      {
        v6 = (unsigned int)(v30 - v31);
        if ( v30 <= v31 )
          v6 = (unsigned int)(v31 - v30);
        if ( (int)v6 < *(_DWORD *)(a2 + 268) )
          v27 = 1;
      }
    }
  }
  v46 = 0;
  if ( !v26 )
  {
    if ( v15 )
    {
      if ( (unsigned int)(*(_DWORD *)v9 - 2) <= 1 )
      {
        InertiaInfo = QueryInertiaInfo(v6, *(_QWORD *)(v9 + 48), (unsigned int)(*(_DWORD *)v9 - 1));
        if ( InertiaInfo )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(InertiaInfo + 128)) < *(_QWORD *)(a2 + 280) )
          {
            if ( (v34 = *(float *)(InertiaInfo + 16), v34 > 0.0) && !*((_DWORD *)a1 + 6)
              || v34 < 0.0 && *((_DWORD *)a1 + 6) == 2
              || (v35 = *(float *)(InertiaInfo + 20), v35 > 0.0) && *((_DWORD *)a1 + 6) == 1
              || v35 < 0.0 && *((_DWORD *)a1 + 6) == 3 )
            {
              v46 = 1;
            }
          }
        }
      }
    }
  }
  v36 = (v49 == 0) | 2;
  if ( !v9 )
    v36 = v49 == 0;
  v37 = v36 | 4;
  if ( v50 <= 1 )
    v37 = v36;
  v38 = v37 | 8;
  if ( !v8 )
    v38 = v37;
  v39 = v38 | 0x10;
  if ( !v15 )
    v39 = v38;
  v40 = v39 | 0x80;
  if ( !v51 )
    v40 = v39;
  v41 = v40 | 0x1000;
  if ( !v16 )
    v41 = v40;
  v42 = DisambiguationArcData | v41;
  v43 = v42 | 0x40;
  if ( !v27 )
    v43 = v42;
  v44 = v43 | 0x20;
  if ( !v46 )
    v44 = v43;
  *((_DWORD *)a1 + 2) = v44;
  return a1;
}
