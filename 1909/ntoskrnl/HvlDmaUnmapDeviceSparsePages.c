/*
 * XREFs of HvlDmaUnmapDeviceSparsePages @ 0x140287840
 * Callers:
 *     <none>
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     HvcallpExtendedFastHypercall @ 0x1401CE3E0 (HvcallpExtendedFastHypercall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14028D628 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaUnmapDeviceSparsePages(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r14
  int v9; // r15d
  int v10; // esi
  _QWORD *v11; // rcx
  unsigned int v12; // r8d
  char v13; // r9
  _QWORD *v14; // rdx
  __int64 v15; // r10
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // [rsp+28h] [rbp-79h]
  __int64 v20; // [rsp+30h] [rbp-71h]
  PHYSICAL_ADDRESS v21[4]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v22[112]; // [rsp+58h] [rbp-49h] BYREF

  memset(v21, 0, sizeof(v21));
  if ( *(_BYTE *)(a1 + 4) )
    return 3221225659LL;
  v7 = *a3;
  result = 0LL;
  v8 = 0LL;
  if ( *a3 )
  {
    v9 = 0;
    v10 = 200;
    do
    {
      if ( v7 <= 0xB )
      {
        v11 = v22;
        if ( v7 >= 0xB )
          v12 = 11;
        else
          v12 = *(_DWORD *)a3;
        v13 = 1;
        v10 |= 0x10000u;
      }
      else
      {
        v11 = HvlpAcquireHypercallPage(v21, 1, 0LL, 0LL);
        if ( *a3 >= 0x1FD )
          v12 = 509;
        else
          v12 = *(_DWORD *)a3;
        v13 = 0;
        v10 &= ~0x10000u;
      }
      LODWORD(v19) = v10;
      v11[1] = 0LL;
      v11[2] = 0LL;
      *v11 = -1LL;
      *((_DWORD *)v11 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v11 + 5) = *(_DWORD *)a1;
      if ( v12 )
      {
        v14 = v11 + 3;
        v15 = a2 + 8 * v8 - 24 - (_QWORD)v11;
        v16 = v12;
        do
        {
          *v14 = *(_QWORD *)((char *)v14 + v15) << 12;
          ++v14;
          --v16;
        }
        while ( v16 );
      }
      v9 ^= ((unsigned __int16)v12 ^ (unsigned __int16)v9) & 0xFFF;
      HIDWORD(v19) = v9;
      if ( v13 )
      {
        v17 = HvcallpExtendedFastHypercall(v19, (__int64)v22, 8 * v12 + 24);
        WORD2(v20) = WORD2(v17);
      }
      else
      {
        v20 = HvcallCodeVa();
        LOWORD(v17) = v20;
        HvlpReleaseHypercallPage((unsigned int *)v21);
      }
      v18 = WORD2(v20) & 0xFFF;
      v8 += v18;
      *a3 -= v18;
      result = HvlpHvToNtStatus((unsigned __int16)v17);
    }
    while ( (int)result >= 0 && v7 );
  }
  *a3 = v8;
  return result;
}
