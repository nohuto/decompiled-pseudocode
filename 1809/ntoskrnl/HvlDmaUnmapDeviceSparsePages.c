/*
 * XREFs of HvlDmaUnmapDeviceSparsePages @ 0x140273CF0
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

__int64 __fastcall HvlDmaUnmapDeviceSparsePages(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned __int64 v9; // rsi
  int v10; // r14d
  int v11; // r15d
  _QWORD *v12; // rax
  unsigned int v13; // r8d
  _BYTE *v14; // rcx
  char v15; // r10
  _QWORD *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // [rsp+28h] [rbp-79h]
  __int64 v26; // [rsp+30h] [rbp-71h]
  PHYSICAL_ADDRESS v27[4]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v28[112]; // [rsp+58h] [rbp-49h] BYREF

  memset(v27, 0, sizeof(v27));
  if ( *(_BYTE *)(a1 + 4) )
    return 3221225659LL;
  v7 = *a3;
  v8 = 0;
  v9 = 0LL;
  if ( *a3 )
  {
    v10 = 0;
    v11 = 200;
    do
    {
      if ( v7 <= 0xB )
      {
        v13 = 11;
        v14 = v28;
        v15 = 1;
        if ( v7 < 0xB )
          v13 = v7;
        v11 |= 0x10000u;
      }
      else
      {
        v12 = HvlpAcquireHypercallPage(v27, 1, 0LL, 0LL);
        v13 = 509;
        v14 = v12;
        if ( *a3 < 0x1FD )
          v13 = *a3;
        v15 = 0;
        v11 &= ~0x10000u;
      }
      LODWORD(v25) = v11;
      *(_QWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 1) = 0LL;
      *((_QWORD *)v14 + 2) = 0LL;
      *(_QWORD *)v14 = -1LL;
      *((_DWORD *)v14 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v14 + 5) = *(_DWORD *)a1;
      if ( v13 )
      {
        v16 = v14 + 24;
        v17 = a2 + 8 * v9 - 24 - (_QWORD)v14;
        v18 = v13;
        do
        {
          *v16 = *(_QWORD *)((char *)v16 + v17) << 12;
          ++v16;
          --v18;
        }
        while ( v18 );
      }
      v10 ^= ((unsigned __int16)v13 ^ (unsigned __int16)v10) & 0xFFF;
      HIDWORD(v25) = v10;
      if ( v15 )
      {
        v19 = HvcallpExtendedFastHypercall(v25, (__int64)v28, 8 * v13 + 24);
        WORD2(v26) = WORD2(v19);
      }
      else
      {
        v26 = HvcallCodeVa();
        LOWORD(v19) = v26;
        HvlpReleaseHypercallPage((unsigned int *)v27);
      }
      v20 = WORD2(v26) & 0xFFF;
      *a3 -= v20;
      v9 += v20;
      if ( HvlpHvStatusIsInsufficientMemory(v19) )
        v24 = HvlpHandleInsufficientMemory(v22, v21, v23);
      else
        v24 = HvlpHvToNtStatus(v22);
      v8 = v24;
      if ( v24 < 0 )
        break;
      v7 = *a3;
    }
    while ( *a3 );
  }
  *a3 = v9;
  return v8;
}
