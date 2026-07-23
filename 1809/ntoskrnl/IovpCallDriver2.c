/*
 * XREFs of IovpCallDriver2 @ 0x1409301BC
 * Callers:
 *     VfAfterCallDriver @ 0x140930EB4 (VfAfterCallDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ViErrorReport1 @ 0x14030B12C (ViErrorReport1.c)
 *     ViErrorReport10 @ 0x14030B1B0 (ViErrorReport10.c)
 *     ViErrorReport4 @ 0x14030B244 (ViErrorReport4.c)
 *     ViErrorReport6 @ 0x14030B2E8 (ViErrorReport6.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409364F4 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409365A0 (IovUtilIsDeviceObjectMarked.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14093F3A4 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpSessionDataDereference @ 0x140940370 (IovpSessionDataDereference.c)
 */

_UNKNOWN **__fastcall IovpCallDriver2(__int64 a1, int *a2)
{
  _UNKNOWN **result; // rax
  _DWORD *v3; // rbp
  __int64 v6; // rsi
  KIRQL v7; // al
  bool v8; // zf
  int v9; // eax
  _QWORD *v10; // rdi
  __int64 LowerDeviceObjectWithTag; // rax
  void *v12; // r14
  __int64 v13; // rdx
  int v14; // ecx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  int v17; // ecx
  int v18; // r9d
  __int64 v19; // rcx
  int IsDeviceObjectMarked; // eax
  _QWORD *v21; // r8
  __int64 v22; // rcx
  int v23; // r9d
  int v24; // eax
  int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  int v28; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = *(_DWORD **)a1;
  if ( !*(_QWORD *)a1 )
    return result;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v6 + 8));
  v8 = *(_QWORD *)(v6 + 216) == 0LL;
  *(_BYTE *)(v6 + 16) = v7;
  if ( !v8 && (*(_DWORD *)(a1 + 24) & 0x2000000) != 0 )
    *a2 = 259;
  v9 = *(_DWORD *)(a1 + 24);
  v10 = *(_QWORD **)(a1 + 160);
  if ( (v9 & 0x20000000) != 0 && *a2 != 259 && (v9 & 0x1000000) == 0 )
  {
    LowerDeviceObjectWithTag = IovUtilGetLowerDeviceObjectWithTag(*(_QWORD *)(a1 + 160));
    v12 = (void *)LowerDeviceObjectWithTag;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000000) != 0 )
    {
LABEL_12:
      if ( !LowerDeviceObjectWithTag )
        goto LABEL_19;
      v15 = *(_QWORD *)(v10[1] + 80LL);
      if ( v15 && *(_QWORD *)(v15 + 104) )
        goto LABEL_17;
      v16 = 541;
      goto LABEL_16;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 312LL) + 40LL);
    if ( !v13 )
      goto LABEL_17;
    v14 = *(_DWORD *)(v13 + 396);
    if ( (v14 & 0x10) == 0 )
    {
      if ( (v14 & 0x10000) == 0 )
        goto LABEL_17;
      goto LABEL_12;
    }
    IsDeviceObjectMarked = IovUtilIsDeviceObjectMarked(v10, 0LL);
    if ( v10 == v21 )
    {
      if ( IsDeviceObjectMarked )
      {
        v16 = 545;
LABEL_16:
        ViErrorReport10(v16, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v10);
      }
    }
    else if ( !IsDeviceObjectMarked && (unsigned int)IovUtilIsDeviceObjectMarked(v10, 0LL) )
    {
      v16 = 547;
      goto LABEL_16;
    }
LABEL_17:
    if ( v12 )
      ObfDereferenceObjectWithTag(v12, 0x49667256u);
  }
LABEL_19:
  v17 = *(_DWORD *)(a1 + 24);
  if ( (v17 & 0x40000000) == 0 || (v3[8] & 2) != 0 )
    goto LABEL_35;
  v18 = *a2;
  if ( (v17 & 0x2000000) != 0 )
  {
    if ( v18 == 259 || (v17 & 0x1000000) != 0 )
      goto LABEL_35;
    v19 = 574LL;
  }
  else
  {
    if ( v18 != 259 && (v17 & 0x1000000) == 0 )
      goto LABEL_35;
    v19 = 588LL;
  }
  ViErrorReport6(v19, *(const void **)(a1 + 48), *(const void **)(a1 + 72), v18);
  v3[8] |= 2u;
LABEL_35:
  v22 = (unsigned int)*a2;
  if ( (*(_DWORD *)(a1 + 24) & 0x40000000) != 0 )
  {
    v23 = *(_DWORD *)(a1 + 56);
    if ( (_DWORD)v22 == v23 || (_DWORD)v22 == 259 )
    {
      if ( (_DWORD)v22 == -1 )
        ViErrorReport6(549LL, *(const void **)(a1 + 48), *(const void **)(a1 + 72), -1);
    }
    else
    {
      v24 = v3[8];
      if ( (v24 & 1) == 0 )
      {
        ViErrorReport4(v22, *(const void **)(a1 + 48), (const void **)(a1 + 72), v23, *a2);
        v24 = v3[8];
      }
      v3[8] = v24 | 1;
    }
  }
  else
  {
    if ( (_DWORD)v22 != 259 )
    {
      v25 = *(_DWORD *)(v6 + 56);
      if ( (v25 & 0x400000) == 0 )
      {
        ViErrorReport1(0x226u, *(const void **)(a1 + 48), *(const void **)(a1 + 72));
        v25 = *(_DWORD *)(v6 + 56);
      }
      *(_DWORD *)(v6 + 56) = v25 | 0x400000;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) |= 0x4000000u;
    v26 = *(_QWORD *)(a1 + 32);
    if ( *(_QWORD *)(v26 + 8) != a1 + 32 || (v27 = *(_QWORD **)(a1 + 40), *v27 != a1 + 32) )
      __fastfail(3u);
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
  }
  v28 = *(_DWORD *)(a1 + 24);
  if ( (v28 & 0x8000000) != 0 && *a2 != 259 && (v28 & 0x1000000) == 0 )
    *a2 = *(_DWORD *)(a1 + 60);
  IovpSessionDataDereference(v3);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 20));
  return (_UNKNOWN **)VfIrpDatabaseEntryReleaseLock(v6);
}
