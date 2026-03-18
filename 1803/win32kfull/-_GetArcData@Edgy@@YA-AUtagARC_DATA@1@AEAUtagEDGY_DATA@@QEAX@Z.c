/*
 * XREFs of ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01BE2DC
 * Callers:
 *     ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01BEE28 (-_OnInput@Edgy@@YA-AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 *     _GetPointerDeviceType @ 0x1C01B8190 (_GetPointerDeviceType.c)
 *     ?_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z @ 0x1C01BE7B4 (-_GetDisambiguationArcData@Edgy@@YAKAEBUtagEDGY_DATA@@AEBUtagARC_DATA@1@@Z.c)
 *     ?_HitTestEdgyRegion@Edgy@@YA?AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTER_DEVICE_TYPE@@H@Z @ 0x1C01BE9A0 (-_HitTestEdgyRegion@Edgy@@YA-AUtagHIT_TEST_RESULT@1@AEBUtagEDGY_DATA@@PEAXUtagPOINT@@W4tagPOINTE.c)
 *     ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01BEC7C (-_IsLegacyDevice@Edgy@@YAHPEAX@Z.c)
 *     QueryInertiaInfo @ 0x1C01FDBFC (QueryInertiaInfo.c)
 */

_QWORD *__fastcall Edgy::_GetArcData(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned int v8; // r12d
  int v9; // esi
  unsigned __int64 v10; // r14
  int v11; // r13d
  unsigned int v12; // ebp
  const struct tagPOINTER_INFO *PointerInfo; // rax
  int v14; // eax
  __int64 v15; // rax
  int v16; // r13d
  BOOL v17; // r12d
  void *v18; // rdx
  int PointerDeviceType; // ebp
  int IsLegacyDevice; // eax
  const struct tagPOINTER_INFO **v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  const struct Edgy::tagARC_DATA *v26; // r8
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r15d
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  __int64 InertiaInfo; // rbp
  float v36; // xmm1_4
  float v37; // xmm1_4
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v48; // [rsp+30h] [rbp-88h]
  __int128 v49; // [rsp+38h] [rbp-80h]
  char v50[104]; // [rsp+50h] [rbp-68h] BYREF
  int v51; // [rsp+C0h] [rbp+8h]
  unsigned int v52; // [rsp+C8h] [rbp+10h]
  int v53; // [rsp+D0h] [rbp+18h]
  unsigned int DisambiguationArcData; // [rsp+D8h] [rbp+20h]

  memset(a1, 0, 0x38uLL);
  v8 = *(_DWORD *)(a3 + 48);
  *a1 = a3;
  v9 = 1;
  v52 = 0;
  v10 = 0LL;
  v51 = 0;
  v11 = 0;
  v12 = 0;
  if ( v8 )
  {
    do
    {
      PointerInfo = CTouchProcessor::GetPointerInfo(gpTouchProcessor, (const struct CPointerInputFrame *)a3, v12);
      v7 = (unsigned __int64)PointerInfo;
      v6 = 1LL;
      if ( PointerInfo )
      {
        ++v52;
        v14 = *((_DWORD *)PointerInfo + 3);
        if ( (v14 & 4) != 0 )
        {
          ++v11;
          if ( (v14 & 0x2000) != 0 )
          {
            v10 = v7;
            a1[5] = *(_QWORD *)(v7 + 56);
            *((_DWORD *)a1 + 12) = *(_DWORD *)(v7 + 64);
          }
        }
        v15 = *(_QWORD *)(a2 + 176);
        if ( (unsigned int)(*(_DWORD *)v7 - 2) > 1 )
          v9 = 0;
        if ( v15 && *(_QWORD *)(v7 + 16) != v15 )
          v9 = 0;
      }
      ++v12;
    }
    while ( v12 < v8 );
    v51 = v11;
  }
  v16 = 0;
  v53 = 0;
  v17 = 0;
  if ( !*(_DWORD *)(a2 + 16) && v9 && v10 && v51 == 1 )
  {
    PointerDeviceType = GetPointerDeviceType(*(_QWORD *)(v10 + 16), v6);
    v7 = (unsigned int)(PointerDeviceType - 1);
    if ( (v7 & 0xFFFFFFFD) != 0 )
      v9 = 0;
    if ( v9 )
    {
      IsLegacyDevice = Edgy::_IsLegacyDevice(*(Edgy **)(v10 + 16), v18);
      v21 = (const struct tagPOINTER_INFO **)Edgy::_HitTestEdgyRegion(
                                               v50,
                                               a2,
                                               *(_QWORD *)(v10 + 16),
                                               *(_QWORD *)(v10 + 56),
                                               PointerDeviceType,
                                               IsLegacyDevice);
      v7 = (unsigned __int64)*v21;
      v49 = *(_OWORD *)v21;
      if ( *v21 )
      {
        v16 = 1;
        *((_DWORD *)a1 + 6) = (unsigned int)v21[2];
        a1[2] = v7;
        v22 = *(_QWORD *)(v7 + 8);
        a1[4] = *((_QWORD *)&v49 + 1);
        v53 = *(_DWORD *)(*((_QWORD *)&v49 + 1) + 4LL);
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
  if ( v9 && *(_DWORD *)(a2 + 16) == 1 )
  {
    v7 = *(_QWORD *)(a2 + 184);
    if ( v7
      && (v25 = ValidateHwnd(*(_QWORD *)(v7 + 8))) != 0
      && (v27 = *(_QWORD *)(v25 + 40), *(char *)(v27 + 19) >= 0)
      && *(char *)(v27 + 20) >= 0 )
    {
      DisambiguationArcData = Edgy::_GetDisambiguationArcData((Edgy *)a2, (const struct tagEDGY_DATA *)a1, v26);
    }
    else
    {
      v17 = 1;
    }
    a1[2] = *(_QWORD *)(a2 + 184);
    a1[4] = *(_QWORD *)(a2 + 208);
    *((_DWORD *)a1 + 6) = *(_DWORD *)(a2 + 216);
  }
  v28 = *(_DWORD *)(a2 + 16);
  v29 = 0;
  if ( !v28 )
  {
    v7 = (unsigned int)(*((_DWORD *)a1 + 12) - *(_DWORD *)(a2 + 248));
    if ( (unsigned int)v7 < *(_DWORD *)(a2 + 252) && v10 && *(_QWORD *)(a2 + 240) == *(_QWORD *)(v10 + 16) )
    {
      v30 = *((_DWORD *)a1 + 10);
      v31 = *(_DWORD *)(a2 + 256);
      v32 = v30 <= v31 ? v31 - v30 : v30 - v31;
      v33 = *((_DWORD *)a1 + 11);
      v34 = *(_DWORD *)(a2 + 260);
      v7 = v33 <= v34 ? (unsigned int)(v34 - v33) : (unsigned int)(v33 - v34);
      if ( v32 < *(_DWORD *)(a2 + 264) && (int)v7 < *(_DWORD *)(a2 + 268) )
        v29 = 1;
    }
  }
  v48 = 0;
  if ( !v28 )
  {
    if ( v16 )
    {
      if ( (unsigned int)(*(_DWORD *)v10 - 2) <= 1 )
      {
        InertiaInfo = QueryInertiaInfo(v7, *(_QWORD *)(v10 + 48), (unsigned int)(*(_DWORD *)v10 - 1));
        if ( InertiaInfo )
        {
          if ( (unsigned __int64)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(InertiaInfo + 128)) < *(_QWORD *)(a2 + 280) )
          {
            if ( (v36 = *(float *)(InertiaInfo + 16), v36 > 0.0) && !*((_DWORD *)a1 + 6)
              || v36 < 0.0 && *((_DWORD *)a1 + 6) == 2
              || (v37 = *(float *)(InertiaInfo + 20), v37 > 0.0) && *((_DWORD *)a1 + 6) == 1
              || v37 < 0.0 && *((_DWORD *)a1 + 6) == 3 )
            {
              v48 = 1;
            }
          }
        }
      }
    }
  }
  v38 = (v51 == 0) | 2;
  if ( !v10 )
    v38 = v51 == 0;
  v39 = v38 | 4;
  if ( v52 <= 1 )
    v39 = v38;
  v40 = v39 | 8;
  if ( !v9 )
    v40 = v39;
  v41 = v40 | 0x10;
  if ( !v16 )
    v41 = v40;
  v42 = v41 | 0x80;
  if ( !v53 )
    v42 = v41;
  v43 = v42 | 0x1000;
  if ( !v17 )
    v43 = v42;
  v44 = DisambiguationArcData | v43;
  v45 = v44 | 0x40;
  if ( !v29 )
    v45 = v44;
  v46 = v45 | 0x20;
  if ( !v48 )
    v46 = v45;
  *((_DWORD *)a1 + 2) = v46;
  return a1;
}
