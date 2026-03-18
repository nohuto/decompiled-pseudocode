/*
 * XREFs of HvlDmaMapDeviceSparsePages @ 0x1402877B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1401BDFF0 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1401BE0F0 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CD860 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaMapDeviceSparsePages(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v4; // rbx
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned __int64 v11; // r14
  int v12; // r15d
  int v13; // esi
  _QWORD *v14; // rcx
  unsigned int v15; // r8d
  char v16; // r9
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // r10
  __int64 *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int16 v23; // bx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // [rsp+28h] [rbp-89h]
  __int64 v30; // [rsp+30h] [rbp-81h]
  PHYSICAL_ADDRESS v32[5]; // [rsp+40h] [rbp-71h] BYREF
  _BYTE v33[112]; // [rsp+68h] [rbp-49h] BYREF

  v4 = a3;
  memset(v32, 0, 0x20uLL);
  if ( *(_BYTE *)(a1 + 4) )
    return 3221225659LL;
  v9 = *a4;
  v10 = 0;
  v11 = 0LL;
  if ( *a4 )
  {
    v12 = 0;
    v13 = 199;
    do
    {
      if ( v9 <= 5 )
      {
        v14 = v33;
        if ( v9 >= 5 )
          v15 = 5;
        else
          v15 = *(_DWORD *)a4;
        v16 = 1;
        v13 |= 0x10000u;
      }
      else
      {
        v14 = HvlpAcquireHypercallPage(v32, 1, 0LL, 0LL);
        if ( *a4 >= 0xFE )
          v15 = 254;
        else
          v15 = *(_DWORD *)a4;
        v16 = 0;
        v13 &= ~0x10000u;
      }
      LODWORD(v29) = v13;
      v14[1] = 0LL;
      v14[2] = 0LL;
      v14[3] = 0LL;
      *v14 = -1LL;
      *((_DWORD *)v14 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v14 + 5) = *(_DWORD *)a1;
      v17 = 1024;
      if ( a2 )
        v17 = a2;
      *((_BYTE *)v14 + 24) = 0;
      *((_DWORD *)v14 + 7) = v17;
      if ( v15 )
      {
        v18 = v14 + 5;
        v19 = v15;
        v20 = (__int64 *)(v4 + 8 * v11);
        do
        {
          *(v18 - 1) = *v20 << 12;
          v21 = *v20++;
          *v18 = v21;
          v18 += 2;
          --v19;
        }
        while ( v19 );
      }
      v12 ^= ((unsigned __int16)v15 ^ (unsigned __int16)v12) & 0xFFF;
      HIDWORD(v29) = v12;
      if ( v16 )
      {
        v22 = HvcallpExtendedFastHypercall(v29, (__int64)v33, 16 * (v15 + 2));
        v23 = v22;
        WORD2(v30) = WORD2(v22);
      }
      else
      {
        v30 = HvcallCodeVa();
        v23 = v30;
        HvlpReleaseHypercallPage((unsigned int *)v32);
      }
      v24 = WORD2(v30) & 0xFFF;
      *a4 -= v24;
      v11 += v24;
      if ( HvlpHvStatusIsInsufficientMemory(v23) )
        v28 = HvlpHandleInsufficientMemory(v26, v25, v27);
      else
        v28 = HvlpHvToNtStatus(v26);
      v10 = v28;
      if ( v28 < 0 )
        break;
      v9 = *a4;
      v4 = a3;
    }
    while ( *a4 );
  }
  *a4 = v11;
  return v10;
}
