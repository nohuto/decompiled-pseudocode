/*
 * XREFs of PpmParkSteerInterrupts @ 0x140063560
 * Callers:
 *     <none>
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeIntSteerPeriodic @ 0x1400626A0 (KeIntSteerPeriodic.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeIntSteerSnapPerf @ 0x14008B710 (KeIntSteerSnapPerf.c)
 *     KeAndAffinityEx @ 0x1400DC780 (KeAndAffinityEx.c)
 *     KeComplementAffinityEx @ 0x1400DC880 (KeComplementAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1400ED8C0 (KeSubtractAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1401199F8 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14028E570 (KeFindFirstSetRightAffinityEx.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

char PpmParkSteerInterrupts()
{
  unsigned int v0; // r14d
  unsigned int v1; // edi
  unsigned int v2; // ebx
  unsigned __int64 v3; // r8
  __int64 v4; // r11
  unsigned __int64 v5; // rdx
  unsigned int v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  bool v15; // cf
  unsigned __int64 v16; // rax
  SIZE_T v18; // rbx
  PVOID PoolWithTag; // rax
  unsigned int FirstSetRightAffinity; // eax
  unsigned __int64 v21; // rax
  unsigned int v22; // [rsp+50h] [rbp-B0h] BYREF
  int *v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-A0h]
  unsigned __int16 v25; // [rsp+68h] [rbp-98h]
  int v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 v27; // [rsp+78h] [rbp-88h] BYREF
  int v28; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v29[43]; // [rsp+84h] [rbp-7Ch] BYREF
  _QWORD v30[22]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v31[176]; // [rsp+1E0h] [rbp+E0h] BYREF
  _DWORD v32[44]; // [rsp+290h] [rbp+190h] BYREF
  char v33[8]; // [rsp+340h] [rbp+240h] BYREF
  unsigned __int64 v34; // [rsp+348h] [rbp+248h]

  if ( PpmIntSteerDisabled || !KiIntTrackRootEnabled )
    return 1;
  if ( !PpmIntSteerTrigger )
  {
    v18 = 8 * (unsigned int)HalQueryMaximumProcessorCount();
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x6B725449u);
    PpmIntSteerTrigger = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return 1;
    memset(PoolWithTag, 0, (unsigned int)v18);
  }
  KeIntSteerSnapPerf(&v26, &v27);
  KeComplementAffinityEx(v31, &PpmPerfCoreParkingMask);
  KeQuerySystemAllowedCpuSetAffinity(&KiCachedSystemAllowedCpuSet, &KiCachedSystemAllowedCpuSetVersion);
  KeAndAffinityEx(v31, &KiCachedSystemAllowedCpuSet, v31);
  LODWORD(v30[0]) = 1310721;
  v0 = 0;
  v1 = 0;
  v2 = 0;
  memset((char *)v30 + 4, 0, 0xA4uLL);
  v3 = qword_1405426A8;
  v4 = v27;
  v23 = KeActiveProcessors;
  v25 = 0;
  while ( v3 )
  {
LABEL_6:
    ++v0;
    _BitScanForward64(&v5, v3);
    v3 &= ~(1LL << v5);
    v22 = KiProcessorNumberToIndexMappingTable[64 * v25 + (unsigned __int8)v5];
    v6 = KiProcessorIndexToNumberMappingTable[v22];
    v7 = v6 & 0x3F;
    if ( ((*(_QWORD *)&v31[8 * ((unsigned __int64)v6 >> 6) + 8] >> (KiProcessorIndexToNumberMappingTable[v22] & 0x3F)) & 1) != 0 )
    {
      ++v2;
      v8 = *(_QWORD *)(PpmIntSteerTrigger + 8LL * v22);
      if ( !v8 )
      {
        v8 = v4;
        *(_QWORD *)(PpmIntSteerTrigger + 8LL * v22) = v4;
      }
      if ( v4 - v8 >= (unsigned __int64)(10000 * PpmIntSteerTriggerMax) )
      {
        v9 = v6 >> 6;
        if ( LOWORD(v30[0]) <= (unsigned int)v9 )
          LOWORD(v30[0]) = v9 + 1;
        v10 = v30[v9 + 1];
        _bittestandset64(&v10, v7);
        v30[v9 + 1] = v10;
        ++v1;
      }
    }
    else
    {
      *(_QWORD *)(8LL * v22 + PpmIntSteerTrigger) = 0LL;
    }
  }
  while ( ++v25 < (unsigned int)LOWORD(KeActiveProcessors[0]) )
  {
    v24 = *(_QWORD *)&KeActiveProcessors[2 * v25 + 2];
    v3 = v24;
    if ( v24 )
    {
      v4 = v27;
      goto LABEL_6;
    }
  }
  if ( !v1 )
  {
    if ( v2 )
    {
      KeCopyAffinityEx(v30, v31);
      v1 = v2;
    }
    else
    {
      FirstSetRightAffinity = KeFindFirstSetRightAffinityEx(&KiCachedSystemAllowedCpuSet);
      if ( FirstSetRightAffinity == -1 )
        FirstSetRightAffinity = 0;
      v22 = FirstSetRightAffinity;
      KeAddProcessorAffinityEx(v30, FirstSetRightAffinity);
      v1 = 1;
    }
  }
  if ( PpmIntSteerMode < 1 )
    goto LABEL_16;
  switch ( PpmIntSteerMode )
  {
    case 1:
      KeCopyAffinityEx(&v28, KeActiveProcessors);
      v2 = v0;
      break;
    case 2:
      KeCopyAffinityEx(&v28, v30);
      v2 = v1;
      break;
    case 3:
      KeCopyAffinityEx(&v28, v31);
      break;
    default:
      if ( (unsigned int)(PpmIntSteerMode - 5) > 1 )
      {
LABEL_16:
        v2 = (PpmIntSteerLoadMax + v26) / (unsigned int)PpmIntSteerLoadMax;
        if ( v2 >= v1 )
        {
          v2 = v1;
          KeCopyAffinityEx(&v28, v30);
        }
        else
        {
          v28 = 1310721;
          memset(v29, 0, 0xA4uLL);
          v32[0] = 1310721;
          memset(&v32[1], 0, 0xA4uLL);
          if ( PpmParkPreferenceHandler )
            PpmParkPreferenceHandler(1LL, PpmCheckTime, v2, v30, 0LL, 0LL, v32, &v28);
          v11 = 0;
          if ( (_WORD)v28 )
          {
            v12 = (unsigned __int64 *)&v29[1];
            v13 = (unsigned __int16)v28;
            do
            {
              v14 = *v12++;
              v11 += (unsigned int)((0x101010101010101LL
                                   * ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                     + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                                     + ((((v14 - ((v14 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                                       + (((v14 - ((v14 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
              --v13;
            }
            while ( v13 );
          }
          v15 = v11 < v2;
          if ( v11 > v2 )
          {
            v28 = 1310721;
            memset(v29, 0, 0xA4uLL);
            v15 = v2 != 0;
            v11 = 0;
          }
          if ( v15 )
          {
            KeSubtractAffinityEx(v30, v32, v33);
            v24 = v34;
            v23 = (int *)v33;
            v25 = 0;
            while ( !(unsigned int)KeEnumerateNextProcessor(&v22, &v23) )
            {
              v16 = (unsigned int)KiProcessorIndexToNumberMappingTable[v22];
              if ( ((*(_QWORD *)&v29[2 * (v16 >> 6) + 1] >> (v16 & 0x3F)) & 1) == 0 )
              {
                KeAddProcessorAffinityEx(&v28, v22);
                if ( ++v11 >= v2 )
                  goto LABEL_29;
              }
            }
            if ( v11 < v2 )
            {
              v24 = v30[1];
              v23 = (int *)v30;
              v25 = 0;
              while ( !(unsigned int)KeEnumerateNextProcessor(&v22, &v23) )
              {
                v21 = (unsigned int)KiProcessorIndexToNumberMappingTable[v22];
                if ( ((*(_QWORD *)&v29[2 * (v21 >> 6) + 1] >> (v21 & 0x3F)) & 1) == 0 )
                {
                  KeAddProcessorAffinityEx(&v28, v22);
                  if ( ++v11 >= v2 )
                    break;
                }
              }
            }
          }
        }
        break;
      }
      v28 = 1310721;
      memset(v29, 0, 0xA4uLL);
      KeAddProcessorAffinityEx(&v28, (unsigned int)(PpmIntSteerMode - 5));
      v2 = 1;
      break;
  }
LABEL_29:
  if ( (unsigned int)KeIsEmptyAffinityEx(&v28) )
    KeAddProcessorAffinityEx(&v28, 0LL);
  KeIntSteerPeriodic(&v28, v2);
  return 1;
}
