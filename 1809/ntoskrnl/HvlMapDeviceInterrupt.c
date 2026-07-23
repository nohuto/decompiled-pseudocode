/*
 * XREFs of HvlMapDeviceInterrupt @ 0x1402749B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3D74 (HvlpHvStatusIsInsufficientMemory.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpLogIommuEvent @ 0x1402788B4 (HvlpLogIommuEvent.c)
 *     HvlpAffinityToHvProcessorSet @ 0x140279580 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapDeviceInterrupt(__int64 a1, _OWORD *a2, __int64 *a3, _OWORD *a4)
{
  unsigned __int16 v7; // cx
  __int64 v8; // rdx
  char v9; // r15
  _QWORD *v10; // r14
  _QWORD *v11; // rbx
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  __int16 v14; // bx
  int v15; // edi
  __int64 v16; // rdx
  __int16 v17; // cx
  __int64 v18; // r8
  PHYSICAL_ADDRESS v21[3]; // [rsp+30h] [rbp-D0h] BYREF
  PHYSICAL_ADDRESS v22[3]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v23[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v24; // [rsp+90h] [rbp-70h]
  _DWORD v25[44]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v26[112]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v27[288]; // [rsp+1C0h] [rbp+C0h] BYREF

  if ( a3 )
  {
    v25[0] = 1310721;
    memset(&v25[1], 0, 0xA4uLL);
    v7 = *((_WORD *)a3 + 4);
    v8 = *a3;
    if ( v7 )
      LOWORD(v25[0]) = v7 + 1;
    *(_QWORD *)&v25[2 * v7 + 2] |= v8;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = HvlpAcquireHypercallPage(v22, 2, (__int64)v26, 56LL);
    v11 = HvlpAcquireHypercallPage(v21, 1, (__int64)v27, 144LL);
    memset(v11, 0, 0x48uLL);
    *(_OWORD *)(v11 + 5) = *a2;
    *(_OWORD *)(v11 + 7) = a2[1];
    if ( a3 )
    {
      if ( (unsigned int)HvlpAffinityToHvProcessorSet(v25, v11 + 8, (v21[0].LowPart & 2) != 0 ? 64 : 4016) == -1 )
      {
        HvlpReleaseHypercallPage((unsigned int *)v21);
        v11 = HvlpAcquireHypercallPage(v21, 1, 0LL, 0LL);
        memset(v11, 0, 0x48uLL);
        *(_OWORD *)(v11 + 5) = *a2;
        *(_OWORD *)(v11 + 7) = a2[1];
        HvlpAffinityToHvProcessorSet(v25, v11 + 8, 4016LL);
      }
      *((_DWORD *)v11 + 15) |= 2u;
    }
    else
    {
      v11[7] = 0LL;
      v11[8] = 0LL;
    }
    *v11 = -1LL;
    v11[1] = a1;
    v11[2] = 1LL;
    v12 = v11[2];
    if ( v9 )
      v12 = 3LL;
    v11[2] = v12;
    v13 = HvcallCodeVa();
    v14 = v13;
    if ( v13 )
    {
      v15 = HvlpHvToNtStatus(v13);
    }
    else
    {
      *a4 = *(_OWORD *)v10;
      v23[0] = *((_OWORD *)v10 + 1);
      v23[1] = *((_OWORD *)v10 + 2);
      v15 = 0;
      v24 = v10[6];
    }
    HvlpReleaseHypercallPage((unsigned int *)v21);
    HvlpReleaseHypercallPage((unsigned int *)v22);
    if ( !HvlpHvStatusIsInsufficientMemory(v14) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v17, v16, v18) < 0 )
      v9 = 1;
  }
  if ( v15 >= 0 )
    HvlpLogIommuEvent(v23);
  return (unsigned int)v15;
}
