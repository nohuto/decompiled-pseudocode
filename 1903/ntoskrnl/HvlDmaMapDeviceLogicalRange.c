/*
 * XREFs of HvlDmaMapDeviceLogicalRange @ 0x140287510
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

__int64 __fastcall HvlDmaMapDeviceLogicalRange(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5, char a6)
{
  _DWORD *v6; // rdi
  __int64 v8; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // rdx
  int v11; // r15d
  __int64 v12; // r14
  int v13; // r12d
  int v14; // esi
  _QWORD *v15; // rcx
  unsigned int v16; // r8d
  char v17; // r11
  int v18; // eax
  int v19; // eax
  _QWORD *v20; // rdx
  __int64 v21; // r9
  char *v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int16 v26; // bx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // [rsp+28h] [rbp-A9h]
  __int64 v33; // [rsp+38h] [rbp-99h]
  PHYSICAL_ADDRESS v36[4]; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v37[112]; // [rsp+78h] [rbp-59h] BYREF

  v6 = a5;
  v8 = a1;
  memset(v36, 0, sizeof(v36));
  if ( *(_BYTE *)(v8 + 4) )
    return 3221225659LL;
  v10 = *a5;
  result = 0LL;
  v11 = 0;
  v12 = 0LL;
  if ( *a5 )
  {
    v13 = 0;
    v14 = 179;
    while ( 1 )
    {
      if ( v10 <= 9 )
      {
        v15 = v37;
        v16 = v10 >= 9 ? 9 : *v6;
        v17 = 1;
        v14 |= 0x10000u;
      }
      else
      {
        v15 = HvlpAcquireHypercallPage(v36, 1, 0LL, 0LL);
        v16 = *(_QWORD *)v6 >= 0x1FBuLL ? 507 : *v6;
        v17 = 0;
        v14 &= ~0x10000u;
      }
      LODWORD(v31) = v14;
      v15[1] = 0LL;
      v15[2] = 0LL;
      v15[3] = 0LL;
      v15[4] = 0LL;
      *v15 = -1LL;
      *((_DWORD *)v15 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v15 + 5) = *(_DWORD *)v8;
      v15[4] = a3;
      if ( a2 )
      {
        v19 = (a2 & 1) != 0;
        if ( (a2 & 2) != 0 )
          v19 |= 2u;
        v18 = v11 | v19;
      }
      else
      {
        v18 = 1024;
      }
      *((_DWORD *)v15 + 7) = v18;
      if ( v16 )
      {
        v20 = v15 + 5;
        v21 = 0LL;
        v22 = (char *)a4 + 8 * v12 - 40 - (_QWORD)v15;
        v23 = v16;
        do
        {
          if ( a2 )
          {
            if ( a6 )
              v24 = v12 + v21 + *a4;
            else
              v24 = *(_QWORD *)((char *)v20 + (_QWORD)v22);
          }
          else
          {
            v24 = 0LL;
          }
          *v20 = v24;
          ++v21;
          ++v20;
          --v23;
        }
        while ( v23 );
        v6 = a5;
      }
      v13 ^= ((unsigned __int16)v16 ^ (unsigned __int16)v13) & 0xFFF;
      HIDWORD(v31) = v13;
      if ( v17 )
      {
        v25 = HvcallpExtendedFastHypercall(v31, (__int64)v37, 8 * v16 + 40);
        v26 = v25;
        WORD2(v33) = WORD2(v25);
      }
      else
      {
        v33 = HvcallCodeVa();
        v26 = v33;
        HvlpReleaseHypercallPage((unsigned int *)v36);
      }
      v27 = WORD2(v33) & 0xFFF;
      *(_QWORD *)v6 -= v27;
      v12 += v27;
      a3 += (unsigned __int16)(WORD2(v33) & 0xFFF) << 12;
      if ( !HvlpHvStatusIsInsufficientMemory(v26) )
        break;
      result = HvlpHandleInsufficientMemory(v29, v28, v30);
      if ( (int)result < 0 )
      {
        if ( v11 != 0x8000 )
        {
          v11 = 0x8000;
          result = 0LL;
        }
LABEL_36:
        if ( (int)result < 0 )
          goto LABEL_38;
      }
      v10 = *(_QWORD *)v6;
      v8 = a1;
      if ( !*(_QWORD *)v6 )
        goto LABEL_38;
    }
    result = HvlpHvToNtStatus(v29);
    goto LABEL_36;
  }
LABEL_38:
  *(_QWORD *)v6 = v12;
  return result;
}
