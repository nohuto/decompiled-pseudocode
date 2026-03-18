/*
 * XREFs of ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18018C2E4
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800B4D2C (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 * Callees:
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x1800B4944 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x1800B4B44 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18018C044 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     McTemplateU0zqqqq @ 0x18018CB50 (McTemplateU0zqqqq.c)
 *     McTemplateU0zqqqqq @ 0x18018CC28 (McTemplateU0zqqqqq.c)
 */

void __fastcall CAnimationTracking::SendLongtermStatistics(CAnimationTracking *this)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rcx
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 *i; // rcx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  int v9; // r9d
  __int64 v10; // r8
  unsigned __int64 *v11; // r9
  unsigned __int64 *j; // rcx
  unsigned __int16 *v13; // rbp
  unsigned __int64 v14; // r9
  int v15; // r8d
  unsigned int v16; // r12d
  int v17; // ecx
  unsigned int v18; // r10d
  unsigned int v19; // r11d
  int v20; // edx
  unsigned int v21; // r13d
  int v22; // eax
  int v23; // edx
  char v24; // al
  __int64 v25; // r15
  int v26; // r8d
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  char v30; // al
  int v31; // r9d
  _QWORD *k; // rdx
  unsigned __int16 *v33; // [rsp+40h] [rbp-148h] BYREF
  unsigned __int16 v34[128]; // [rsp+50h] [rbp-138h] BYREF

  v1 = (_QWORD *)((char *)this + 552);
  v3 = (_QWORD *)*((_QWORD *)this + 69);
  v4 = v3;
  if ( v3 )
  {
    v5 = *v3;
    if ( (*v3 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v3;
    if ( (v5 & 1) == 0 )
      goto LABEL_11;
    v4 = (_QWORD *)*v1;
  }
  for ( i = v3 + 1; i < &v4[(unsigned __int64)*((unsigned int *)this + 137) >> 5]; ++i )
  {
    v5 = *i;
    if ( (*i & 1) == 0 )
      goto LABEL_11;
  }
  v5 = 0LL;
LABEL_11:
  while ( v5 )
  {
    v7 = v5;
    v8 = v5;
    v9 = *((_DWORD *)this + 137) >> 5;
    v33 = (unsigned __int16 *)(*(_QWORD *)(v5 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F)));
    v10 = *v1
        + 8LL
        * ((37
          * (BYTE6(v33)
           + 37
           * (BYTE5(v33)
            + 37
            * (BYTE4(v33)
             + 37 * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
          + HIBYTE(v33)) & (unsigned int)(v9 - 1));
    v11 = (unsigned __int64 *)v5;
    v5 = *(_QWORD *)v5;
    if ( (v5 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v5 = *v11;
    if ( (v5 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(v10 + 8);
            (unsigned __int64)j < *v1 + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5);
            ++j )
      {
        v5 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_20;
      }
      v5 = 0LL;
    }
LABEL_20:
    v13 = *(unsigned __int16 **)(v8 + 16);
    v33 = 0LL;
    if ( !v13 )
    {
      if ( (int)CAnimationTracking::ScenarioNameFromGuid(
                  (const struct _GUID *)(v8 + 32),
                  (const unsigned __int16 **)&v33) >= 0 )
      {
        LODWORD(v13) = (_DWORD)v33;
      }
      else
      {
        CAnimationTracking::GuidToString((const struct _GUID *)(v8 + 32), v34);
        v13 = v34;
      }
    }
    v14 = *(unsigned int *)(v8 + 56);
    v15 = 255;
    v16 = *(_DWORD *)(v8 + 124);
    v17 = 127;
    v18 = (100 * *(_DWORD *)(v8 + 96) / (unsigned int)v14) | (((100 * *(_DWORD *)(v8 + 100) / (unsigned int)v14) | (((100 * *(_DWORD *)(v8 + 104) / (unsigned int)v14) | ((100 * *(_DWORD *)(v8 + 108) / (unsigned int)v14) << 8)) << 8)) << 8);
    v19 = (100 * *(_DWORD *)(v8 + 112) / (unsigned int)v14) | (((100 * *(_DWORD *)(v8 + 116) / (unsigned int)v14) | (((100 * *(_DWORD *)(v8 + 64) / (unsigned int)v14) | ((100 * *(_DWORD *)(v8 + 60) / (unsigned int)v14) << 8)) << 8)) << 8);
    if ( v16 < 0xFF )
      v15 = *(_DWORD *)(v8 + 124);
    v33 = (unsigned __int16 *)(*(_QWORD *)(v8 + 128) / v14);
    if ( (unsigned int)v33 < 0x7F )
      v17 = (int)v33;
    v20 = 255;
    v21 = *(_DWORD *)(v8 + 120);
    if ( (unsigned int)(8LL * *(_QWORD *)(v8 + 136) / v14) < 0xFF )
      v20 = 8LL * *(_QWORD *)(v8 + 136) / v14;
    v22 = 255;
    if ( v21 < 0xFF )
      v22 = *(_DWORD *)(v8 + 120);
    v23 = v22 | ((v15 | ((v17 | (v20 << 8)) << 8)) << 8);
    v24 = v23;
    if ( !*(_QWORD *)(v8 + 16) )
      v24 = v23;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      McTemplateU0zqqqqq((_DWORD)v33, v23, (_DWORD)v13, v14, v18, v19, v24, (char)v33);
      LODWORD(v14) = *(_DWORD *)(v7 + 56);
      v21 = *(_DWORD *)(v7 + 120);
      v25 = *(_QWORD *)(v7 + 16);
      v16 = *(_DWORD *)(v8 + 124);
    }
    else
    {
      v25 = *(_QWORD *)(v8 + 16);
    }
    v26 = 255;
    if ( v16 < 0xFF )
      v26 = v16;
    v27 = 255;
    if ( (unsigned int)(*(_QWORD *)(v8 + 144) / (unsigned __int64)(unsigned int)v14) < 0xFF )
      v27 = *(_QWORD *)(v8 + 144) / (unsigned __int64)(unsigned int)v14;
    v28 = 255;
    if ( v21 < 0xFF )
      v28 = v21;
    v29 = v28 | ((v26 | (v27 << 8)) << 8);
    v30 = v29;
    if ( !v25 )
      v30 = v29;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
      McTemplateU0zqqqq(
        v29,
        255,
        (_DWORD)v13,
        v14,
        100 * *(_DWORD *)(v8 + 68) / (unsigned int)v14,
        100 * *(_DWORD *)(v8 + 84) / (unsigned int)v14,
        v30);
    v31 = *((_DWORD *)this + 137) >> 5;
    v33 = (unsigned __int16 *)(*(_QWORD *)(v8 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F)));
    for ( k = (_QWORD *)(*((_QWORD *)this + 69)
                       + 8LL
                       * ((37
                         * (BYTE6(v33)
                          + 37
                          * (BYTE5(v33)
                           + 37
                           * (BYTE4(v33)
                            + 37
                            * (BYTE3(v33)
                             + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
                         + HIBYTE(v33)) & (unsigned int)(v31 - 1))); (*k & 1) == 0; k = (_QWORD *)*k )
    {
      if ( *k == v8 )
      {
        *k = *(_QWORD *)v8;
        --*((_DWORD *)this + 136);
        *(_QWORD *)v8 |= 0x8000000000000002uLL;
        break;
      }
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v8);
  }
  *((_QWORD *)this + 70) = GetTickCount64() + 3600000;
}
