/*
 * XREFs of IovpCompleteRequest2 @ 0x140930620
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x1409256E0 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MdlInvariantPostProcessing1 @ 0x14030A83C (MdlInvariantPostProcessing1.c)
 *     ViErrorReport1 @ 0x14030B12C (ViErrorReport1.c)
 *     ViErrorReport6 @ 0x14030B2E8 (ViErrorReport6.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14030B7D8 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ViIrpDatabaseReleaseLockExclusive @ 0x14030B820 (ViIrpDatabaseReleaseLockExclusive.c)
 *     VfUtilAddressRangeRemoveCheckEmpty @ 0x14092706C (VfUtilAddressRangeRemoveCheckEmpty.c)
 *     VfMajorAdvanceIrpStatus @ 0x1409368D4 (VfMajorAdvanceIrpStatus.c)
 *     VfMajorVerifyFinalIrpStack @ 0x140936C34 (VfMajorVerifyFinalIrpStack.c)
 *     VfMajorVerifyIrpStackUpward @ 0x140936D7C (VfMajorVerifyIrpStackUpward.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093F3A4 (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14093F924 (ViWdIrpBeforeCompletionRoutine.c)
 *     IovpSessionDataDereference @ 0x140940370 (IovpSessionDataDereference.c)
 *     IovpSessionDataReference @ 0x1409403D8 (IovpSessionDataReference.c)
 */

void __fastcall IovpCompleteRequest2(ULONG_PTR a1, __int64 a2)
{
  _DWORD *v2; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // eax
  int v11; // esi
  BOOL v12; // ebp
  _BYTE *v13; // r13
  int v14; // ecx
  _QWORD *v15; // rbp
  _QWORD *v16; // rsi
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // r8
  int v20; // eax
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  unsigned int i; // ebx
  _QWORD *v30; // rcx
  unsigned int v31; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v32; // [rsp+80h] [rbp+18h] BYREF

  v2 = *(_DWORD **)a2;
  if ( !*(_QWORD *)a2 )
    return;
  v5 = *(_QWORD *)(a2 + 8);
  *(_BYTE *)(v5 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 8));
  if ( *(_QWORD *)(v5 + 248) )
    ViWdIrpBeforeCompletionRoutine();
  v6 = *(char *)(a1 + 67);
  v7 = 30 * v6;
  v32 = *(_DWORD *)(a1 + 48);
  v8 = (__int64)&v2[30 * v6 - 10];
  v9 = *(_QWORD *)(v8 + 8);
  v10 = *(_DWORD *)(v9 + 4);
  if ( (v10 & 0x40000000) != 0 )
  {
    v11 = 0;
  }
  else
  {
    v11 = 1;
    *(_DWORD *)(v9 + 4) = v10 | 0x40000000;
    LOBYTE(v6) = *(_BYTE *)(a1 + 67);
  }
  v12 = v8 == v9;
  v13 = (_BYTE *)(*(_QWORD *)(a1 + 184) - 72LL);
  if ( (char)v6 <= *(char *)(a1 + 66)
    && (unsigned __int8)(*v13 - 3) <= 1u
    && *(_QWORD *)(a1 + 8)
    && (MmVerifierData & 0x6000) != 0 )
  {
    MdlInvariantPostProcessing1(v5, a1, *(_QWORD *)(a1 + 184) - 72LL);
    LODWORD(v8) = v7 * 4 + (_DWORD)v2 - 40;
  }
  VfMajorVerifyIrpStackUpward(v5, (_DWORD)v13, v8, v11, v12);
  v14 = v2[8];
  v31 = v32;
  if ( (v14 & 2) == 0 && (v2[v7 - 9] & 0x4000000) != 0 && !*(_BYTE *)(a1 + 65) )
  {
    if ( (*(_DWORD *)(a1 + 16) & 0x800) != 0 )
    {
      ViErrorReport6(574LL, *(const void **)&v2[v7], (const void *)a1, v32);
      v14 = v2[8];
    }
    v2[8] = v14 | 2;
  }
  v15 = &v2[v7 - 6];
  while ( 1 )
  {
    v16 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 == v15 )
      break;
    if ( (_QWORD *)v16[1] != v15 || (v17 = *v16, *(_QWORD **)(*v16 + 8LL) != v16) )
      __fastfail(3u);
    *v15 = v17;
    *(_QWORD *)(v17 + 8) = v15;
    v18 = *((_DWORD *)v16 - 2) | 0x40000000;
    *((_DWORD *)v16 - 2) = v18;
    *((_DWORD *)v16 + 6) = v32;
    if ( *(_BYTE *)(a1 + 65) )
      *((_DWORD *)v16 - 2) = v18 | 0x2000000;
    v19 = v16[5];
    if ( (*(_BYTE *)(v19 + 16) & 0x70) == 0x70 )
    {
      v20 = *(_DWORD *)(v19 + 48);
      if ( v20 != -2147483626 && (v20 & 0xC0000000) != 0xC0000000 )
      {
        v21 = *((_BYTE *)v16 + 48);
        if ( v21 == 3 || v21 == 5 || v21 == 7 || v21 == 10 )
          goto LABEL_35;
        if ( v21 <= 0xBu )
          goto LABEL_38;
        if ( v21 <= 0xDu )
        {
LABEL_35:
          v22 = *((unsigned int *)v16 + 14);
        }
        else
        {
          if ( v21 > 0xFu )
          {
            if ( v21 != 25 )
              goto LABEL_38;
            goto LABEL_35;
          }
          v23 = *(_QWORD *)(v5 + 200);
          if ( !v23 || v23 != *(_QWORD *)(v19 + 24) )
            goto LABEL_38;
          v22 = *(unsigned int *)(v5 + 208);
        }
        if ( *(_QWORD *)(v19 + 56) > v22 )
          ViErrorReport1(0x312u, *(const void **)(a2 + 32), (const void *)v19);
      }
    }
LABEL_38:
    if ( (*(_DWORD *)(v5 + 56) & 0x20) == 0 )
    {
      if ( (unsigned int)VfMajorAdvanceIrpStatus(v13, v31, &v32) )
      {
        *((_DWORD *)v16 - 2) |= 0x8000000u;
        *((_DWORD *)v16 + 7) = v32;
      }
    }
  }
  *(_DWORD *)(a1 + 48) = v32;
  memset(&v2[v7 - 10], 0, 0x78uLL);
  v15[1] = v15;
  *v15 = v15;
  v24 = *(unsigned __int8 *)(v5 + 184);
  *(_BYTE *)(v5 + 186) = *(_BYTE *)(a1 + 67) + 1;
  if ( v24 == *(char *)(a1 + 67) )
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 8) = 0LL;
    VfMajorVerifyFinalIrpStack(v5, *(_QWORD *)(a1 + 184) - 72LL);
    v25 = *(_QWORD *)v2;
    *(_DWORD *)(v25 + 56) &= ~1u;
    *(_QWORD *)(v25 + 240) = 0LL;
    IovpSessionDataDereference(v2);
    if ( (*(_DWORD *)(v5 + 24))-- == 1 )
    {
      ViIrpDatabaseAcquireLockExclusive((KIRQL *)&v31);
      v27 = *(_QWORD *)v5;
      (*(void (__fastcall **)(__int64, _QWORD, __int64))(v5 + 48))(v5, *(_QWORD *)v5, 1LL);
      *(_QWORD *)v5 = 0LL;
      VfUtilAddressRangeRemoveCheckEmpty(
        (_QWORD *)(ViIrpDatabaseAddressRanges + 16LL * (unsigned __int8)(-125 * (v27 >> 12))),
        v27);
      ViIrpDatabaseReleaseLockExclusive(v31);
    }
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 20));
    v28 = *(_QWORD *)(v5 + 224);
    if ( v28 )
    {
      for ( i = 0; i < *(_DWORD *)v28; ++i )
      {
        v30 = (_QWORD *)(*(_QWORD *)(v28 + 8) + 32LL * i);
        if ( *v30 )
          memset(v30, 0, 0x20uLL);
        v28 = *(_QWORD *)(v5 + 224);
      }
      *(_QWORD *)(v28 + 16) = 0LL;
    }
  }
  else
  {
    IovpSessionDataReference(v2);
    _InterlockedAdd((volatile signed __int32 *)(v5 + 20), 1u);
  }
  VfIrpDatabaseEntryReleaseLock(v5);
  --*(_DWORD *)(a2 + 20);
}
