/*
 * XREFs of ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x18014CA0C
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800821B4 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x180083D68 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 *     ?ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z @ 0x1800C3104 (-ScenarioNameFromGuid@CAnimationTracking@@CAJAEBU_GUID@@PEAPEBG@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18014C734 (--_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     McTemplateU0zqqqq @ 0x18014D2AC (McTemplateU0zqqqq.c)
 *     McTemplateU0zqqqqq @ 0x18014D384 (McTemplateU0zqqqqq.c)
 */

void __fastcall CAnimationTracking::SendLongtermStatistics(CAnimationTracking *this)
{
  _QWORD *v1; // r15
  unsigned __int64 *v2; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int64 *i; // rdx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int64 *v10; // rcx
  unsigned __int64 *j; // rdx
  unsigned __int16 *v12; // rbp
  unsigned __int64 v13; // r11
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  unsigned int v16; // r10d
  int v17; // r9d
  int v18; // r8d
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  int v24; // ecx
  int v25; // edx
  int v26; // edx
  char v27; // al
  unsigned __int64 v28; // r9
  _QWORD *k; // rdx
  unsigned __int16 *v30; // [rsp+40h] [rbp-158h] BYREF
  __int64 v31; // [rsp+48h] [rbp-150h]
  unsigned __int64 v32; // [rsp+50h] [rbp-148h]
  unsigned __int16 v33[128]; // [rsp+60h] [rbp-138h] BYREF

  v1 = (_QWORD *)((char *)this + 552);
  v2 = (unsigned __int64 *)*((_QWORD *)this + 69);
  if ( !v2 )
    goto LABEL_5;
  v4 = *v2;
  if ( (*v2 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v4 = *v2;
  if ( (v4 & 1) != 0 )
  {
LABEL_5:
    for ( i = v2 + 1; (unsigned __int64)i < *v1 + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5); ++i )
    {
      v4 = *i;
      if ( (*i & 1) == 0 )
        goto LABEL_51;
    }
    v4 = 0LL;
  }
LABEL_51:
  while ( v4 )
  {
    v6 = v4;
    v7 = v4;
    v8 = *(_QWORD *)(v4 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    v9 = *v1
       + 8
       * ((HIBYTE(v8)
         + 37
         * (BYTE6(v8)
          + 37
          * (BYTE5(v8)
           + 37
           * (BYTE4(v8)
            + 37
            * (((*(_DWORD *)(v4 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 24)
             + 37
             * ((unsigned __int8)((*(_DWORD *)(v4 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v4 + 8) & (-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 8)
               + 37 * ((unsigned __int8)v8 + 11623883)))))))) & ((*((_DWORD *)this + 137) >> 5) - 1));
    v10 = (unsigned __int64 *)v4;
    v4 = *(_QWORD *)v4;
    if ( (v4 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
      v4 = *v10;
    if ( (v4 & 1) != 0 )
    {
      for ( j = (unsigned __int64 *)(v9 + 8);
            (unsigned __int64)j < *v1 + 8 * ((unsigned __int64)*((unsigned int *)this + 137) >> 5);
            ++j )
      {
        v4 = *j;
        if ( (*j & 1) == 0 )
          goto LABEL_19;
      }
      v4 = 0LL;
    }
LABEL_19:
    v12 = *(unsigned __int16 **)(v7 + 16);
    v30 = 0LL;
    if ( !v12 )
    {
      if ( (int)CAnimationTracking::ScenarioNameFromGuid(
                  (const struct _GUID *)(v7 + 32),
                  (const unsigned __int16 **)&v30) >= 0 )
      {
        LODWORD(v12) = (_DWORD)v30;
      }
      else
      {
        CAnimationTracking::GuidToString((const struct _GUID *)(v7 + 32), v33);
        v12 = v33;
      }
    }
    v13 = *(unsigned int *)(v7 + 56);
    v14 = *(_DWORD *)(v7 + 120);
    v15 = *(_DWORD *)(v7 + 124);
    v16 = (100 * *(_DWORD *)(v7 + 96) / (unsigned int)v13) | (((100 * *(_DWORD *)(v7 + 100) / (unsigned int)v13) | (((100 * *(_DWORD *)(v7 + 104) / (unsigned int)v13) | ((100 * *(_DWORD *)(v7 + 108) / (unsigned int)v13) << 8)) << 8)) << 8);
    LODWORD(v30) = (100 * *(_DWORD *)(v7 + 112) / (unsigned int)v13) | (((100 * *(_DWORD *)(v7 + 116) / (unsigned int)v13) | (((100 * *(_DWORD *)(v7 + 64) / (unsigned int)v13) | ((100 * *(_DWORD *)(v7 + 60) / (unsigned int)v13) << 8)) << 8)) << 8);
    v17 = 255;
    v18 = 255;
    if ( v14 < 0xFF )
      v17 = v14;
    v19 = 127;
    if ( v15 < 0xFF )
      v18 = v15;
    v32 = *(_QWORD *)(v7 + 128) / v13;
    if ( (unsigned int)v32 < 0x7F )
      v19 = v32;
    v20 = 255;
    if ( (unsigned int)(8LL * *(_QWORD *)(v7 + 136) / v13) < 0xFF )
      v20 = 8LL * *(_QWORD *)(v7 + 136) / v13;
    v31 = *(_QWORD *)(v7 + 16);
    v21 = v17 | ((v18 | ((v19 | (v20 << 8)) << 8)) << 8);
    v22 = v21 | 0x800000;
    if ( !v31 )
      v22 = v21;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      McTemplateU0zqqqqq(v22, v21, (_DWORD)v12, v13, v16, (char)v30, v22, v32);
      LODWORD(v13) = *(_DWORD *)(v6 + 56);
      v14 = *(_DWORD *)(v7 + 120);
      v15 = *(_DWORD *)(v7 + 124);
      v31 = *(_QWORD *)(v6 + 16);
    }
    v23 = 255;
    v24 = 255;
    if ( v14 < 0xFF )
      v23 = v14;
    if ( v15 < 0xFF )
      v24 = v15;
    v25 = 255;
    if ( (unsigned int)(*(_QWORD *)(v7 + 144) / (unsigned __int64)(unsigned int)v13) < 0xFF )
      v25 = *(_QWORD *)(v7 + 144) / (unsigned __int64)(unsigned int)v13;
    v26 = v23 | ((v24 | (v25 << 8)) << 8);
    v27 = v26;
    if ( !v31 )
      v27 = v26;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
      McTemplateU0zqqqq(
        v24,
        v26,
        (_DWORD)v12,
        v13,
        100 * *(_DWORD *)(v7 + 68) / (unsigned int)v13,
        100 * *(_DWORD *)(v7 + 84) / (unsigned int)v13,
        v27);
    v28 = *(_QWORD *)(v7 + 8) & (-1LL << (*((_DWORD *)this + 137) & 0x1F));
    for ( k = (_QWORD *)(*((_QWORD *)this + 69)
                       + 8
                       * ((HIBYTE(v28)
                         + 37
                         * (BYTE6(v28)
                          + 37
                          * (BYTE5(v28)
                           + 37
                           * (BYTE4(v28)
                            + 37
                            * (((*(_DWORD *)(v7 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 24)
                             + 37
                             * ((unsigned __int8)((*(_DWORD *)(v7 + 8) & (unsigned int)(-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 16)
                              + 37
                              * ((unsigned __int8)((unsigned __int16)(*(_WORD *)(v7 + 8) & (-1 << (*((_DWORD *)this + 137) & 0x1F))) >> 8)
                               + 37 * ((unsigned __int8)v28 + 11623883)))))))) & ((*((_DWORD *)this + 137) >> 5) - 1)));
          (*k & 1) == 0;
          k = (_QWORD *)*k )
    {
      if ( *k == v7 )
      {
        *k = *(_QWORD *)v7;
        --*((_DWORD *)this + 136);
        *(_QWORD *)v7 |= 0x8000000000000002uLL;
        break;
      }
    }
    CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'((void **)v7);
  }
  *((_QWORD *)this + 70) = GetTickCount64() + 3600000;
}
