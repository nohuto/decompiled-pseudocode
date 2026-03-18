/*
 * XREFs of HvlMapDeviceInterrupt @ 0x140288570
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401BE9A0 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401BEAA0 (HvlpHvStatusIsInsufficientMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 *     HvlpLogIommuEvent @ 0x14028C6D8 (HvlpLogIommuEvent.c)
 *     HvlpAffinityToHvProcessorSet @ 0x14028D430 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x14028D628 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapDeviceInterrupt(__int64 a1, _OWORD *a2, __int64 *a3, _OWORD *a4)
{
  unsigned __int16 v7; // cx
  __int64 v8; // rdx
  char v9; // r15
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  __int16 v14; // bx
  int v15; // edi
  __int64 v16; // rdx
  __int16 v17; // cx
  __int64 v18; // r8
  PHYSICAL_ADDRESS v21[4]; // [rsp+30h] [rbp-D0h] BYREF
  PHYSICAL_ADDRESS v22[4]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v23[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v24[22]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v25[112]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v26[288]; // [rsp+1C0h] [rbp+C0h] BYREF

  memset(v23, 0, 0x28uLL);
  memset(v21, 0, sizeof(v21));
  memset(v22, 0, sizeof(v22));
  memset(v24, 0, 0xA8uLL);
  if ( a3 )
  {
    LODWORD(v24[0]) = 1310721;
    memset((char *)v24 + 4, 0, 0xA4uLL);
    v7 = *((_WORD *)a3 + 4);
    v8 = *a3;
    if ( v7 )
      LOWORD(v24[0]) = v7 + 1;
    v24[v7 + 1] |= v8;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = HvlpAcquireHypercallPage(v22, 2, (__int64)v25, 56LL);
    v11 = HvlpAcquireHypercallPage(v21, 1, (__int64)v26, 144LL);
    memset(v11, 0, 0x48uLL);
    *(_OWORD *)(v11 + 5) = *a2;
    *(_OWORD *)(v11 + 7) = a2[1];
    if ( a3 )
    {
      if ( (unsigned int)HvlpAffinityToHvProcessorSet(v24, v11 + 8, (v21[0].LowPart & 2) != 0 ? 64 : 4016) == -1 )
      {
        HvlpReleaseHypercallPage((unsigned int *)v21);
        v11 = HvlpAcquireHypercallPage(v21, 1, 0LL, 0LL);
        memset(v11, 0, 0x48uLL);
        *(_OWORD *)(v11 + 5) = *a2;
        *(_OWORD *)(v11 + 7) = a2[1];
        HvlpAffinityToHvProcessorSet(v24, v11 + 8, 4016LL);
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
      *(_QWORD *)&v23[2] = v10[6];
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
