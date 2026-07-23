/*
 * XREFs of HvlDmaMapDeviceLogicalRange @ 0x140273760
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

__int64 __fastcall HvlDmaMapDeviceLogicalRange(
        __int64 a1,
        int a2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 *a5,
        char a6)
{
  unsigned __int64 *v6; // rsi
  unsigned __int64 v7; // rax
  unsigned int v8; // r10d
  unsigned __int64 v9; // r14
  int v10; // r15d
  int v11; // r12d
  unsigned int v12; // edi
  _QWORD *v13; // rbx
  char v14; // r13
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  _QWORD *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  __int16 v23; // bx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  __int64 v30; // [rsp+28h] [rbp-B9h]
  __int64 v34; // [rsp+48h] [rbp-99h]
  PHYSICAL_ADDRESS v36[5]; // [rsp+60h] [rbp-81h] BYREF
  _BYTE v37[112]; // [rsp+88h] [rbp-59h] BYREF

  v6 = a5;
  memset(v36, 0, 0x20uLL);
  v7 = *a5;
  v8 = 0;
  v9 = 0LL;
  if ( *a5 )
  {
    v10 = 0;
    v11 = 179;
    do
    {
      if ( v7 <= 9 )
      {
        v12 = 9;
        v13 = v37;
        v14 = 1;
        if ( v7 < 9 )
          v12 = v7;
        v11 |= 0x10000u;
      }
      else
      {
        v12 = 507;
        v13 = HvlpAcquireHypercallPage(v36, 1, 0LL, 0LL);
        if ( *v6 < 0x1FB )
          v12 = *v6;
        v14 = 0;
        v11 &= ~0x10000u;
      }
      LODWORD(v30) = v11;
      memset(v13, 0, 0x28uLL);
      *v13 = -1LL;
      v15 = *((_DWORD *)v13 + 4);
      if ( *(_BYTE *)(a1 + 4) )
        v16 = v15 & 0xFFFFFFF0 | 1;
      else
        v16 = v15 & 0xFFFFFFF0;
      *((_DWORD *)v13 + 4) = v16;
      *((_DWORD *)v13 + 5) = *(_DWORD *)a1;
      v13[4] = a3;
      v17 = 1024;
      if ( a2 )
        v17 = a2;
      *((_DWORD *)v13 + 7) = v17;
      if ( v12 )
      {
        v18 = v13 + 5;
        v19 = v12;
        if ( a6 )
        {
          v20 = 0LL;
          do
          {
            v21 = v20 + *a4;
            ++v20;
            *v18++ = v9 + v21;
            --v19;
          }
          while ( v19 );
          v6 = a5;
        }
        else
        {
          do
          {
            *v18 = *(_QWORD *)((char *)v18 + (_QWORD)a4 + 8 * v9 - 40 - (_QWORD)v13);
            ++v18;
            --v19;
          }
          while ( v19 );
        }
      }
      v10 ^= ((unsigned __int16)v12 ^ (unsigned __int16)v10) & 0xFFF;
      HIDWORD(v30) = v10;
      if ( v14 )
      {
        v22 = HvcallpExtendedFastHypercall(v30, (__int64)v37, 8 * v12 + 40);
        v23 = v22;
        WORD2(v34) = WORD2(v22);
      }
      else
      {
        v34 = HvcallCodeVa();
        v23 = v34;
        HvlpReleaseHypercallPage((unsigned int *)v36);
      }
      v24 = WORD2(v34) & 0xFFF;
      *v6 -= v24;
      v9 += v24;
      a3 += (unsigned __int16)(WORD2(v34) & 0xFFF) << 12;
      if ( HvlpHvStatusIsInsufficientMemory(v23) )
        v28 = HvlpHandleInsufficientMemory(v26, v25, v27);
      else
        v28 = HvlpHvToNtStatus(v26);
      v8 = v28;
      if ( v28 < 0 )
        break;
      v7 = *v6;
    }
    while ( *v6 );
  }
  *v6 = v9;
  return v8;
}
