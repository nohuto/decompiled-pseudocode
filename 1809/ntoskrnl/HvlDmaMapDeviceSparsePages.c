/*
 * XREFs of HvlDmaMapDeviceSparsePages @ 0x1402739C0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401B395C (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401B3D74 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401C73F0 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x140279770 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaMapDeviceSparsePages(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned __int64 v9; // r14
  int v10; // r15d
  int v11; // r12d
  unsigned int v12; // ebx
  _QWORD *v13; // rsi
  char v14; // r13
  int v15; // eax
  _QWORD *v16; // rsi
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int16 v21; // bx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // eax
  __int64 v27; // [rsp+28h] [rbp-99h]
  __int64 v29; // [rsp+38h] [rbp-89h]
  PHYSICAL_ADDRESS v32[5]; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v33[112]; // [rsp+78h] [rbp-49h] BYREF

  memset(v32, 0, 0x20uLL);
  if ( *(_BYTE *)(a1 + 4) )
    return 3221225659LL;
  v7 = *a4;
  v8 = 0;
  v9 = 0LL;
  if ( *a4 )
  {
    v10 = 0;
    v11 = 199;
    do
    {
      if ( v7 <= 5 )
      {
        v12 = 5;
        v13 = v33;
        v14 = 1;
        if ( v7 < 5 )
          v12 = v7;
        v11 |= 0x10000u;
      }
      else
      {
        v12 = 254;
        v13 = HvlpAcquireHypercallPage(v32, 1, 0LL, 0LL);
        if ( *a4 < 0xFE )
          v12 = *a4;
        v14 = 0;
        v11 &= ~0x10000u;
      }
      LODWORD(v27) = v11;
      memset(v13, 0, 0x20uLL);
      *v13 = -1LL;
      *((_DWORD *)v13 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v13 + 5) = *(_DWORD *)a1;
      v15 = 1024;
      if ( a2 )
        v15 = a2;
      *((_BYTE *)v13 + 24) = 0;
      *((_DWORD *)v13 + 7) = v15;
      if ( v12 )
      {
        v16 = v13 + 5;
        v17 = v12;
        v18 = (__int64 *)(a3 + 8 * v9);
        do
        {
          *(v16 - 1) = *v18 << 12;
          v19 = *v18++;
          *v16 = v19;
          v16 += 2;
          --v17;
        }
        while ( v17 );
      }
      v10 ^= ((unsigned __int16)v12 ^ (unsigned __int16)v10) & 0xFFF;
      HIDWORD(v27) = v10;
      if ( v14 )
      {
        v20 = HvcallpExtendedFastHypercall(v27, (__int64)v33, 16 * (v12 + 2));
        v21 = v20;
        WORD2(v29) = WORD2(v20);
      }
      else
      {
        v29 = HvcallCodeVa();
        v21 = v29;
        HvlpReleaseHypercallPage((unsigned int *)v32);
      }
      v22 = WORD2(v29) & 0xFFF;
      *a4 -= v22;
      v9 += v22;
      if ( HvlpHvStatusIsInsufficientMemory(v21) )
        v26 = HvlpHandleInsufficientMemory(v24, v23, v25);
      else
        v26 = HvlpHvToNtStatus(v24);
      v8 = v26;
      if ( v26 < 0 )
        break;
      v7 = *a4;
    }
    while ( *a4 );
  }
  *a4 = v9;
  return v8;
}
