/*
 * XREFs of SepSetTokenUserAndGroups @ 0x1408A348C
 * Callers:
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     SepDuplicateSid @ 0x14064A160 (SepDuplicateSid.c)
 *     SepLogTokenSidManagement @ 0x14089D3B4 (SepLogTokenSidManagement.c)
 *     SepCompareSidValuesBlocks @ 0x1408A305C (SepCompareSidValuesBlocks.c)
 *     SepCreateSidValuesBlock @ 0x1408A3104 (SepCreateSidValuesBlock.c)
 *     SepDereferenceSidValuesBlock @ 0x1408A3334 (SepDereferenceSidValuesBlock.c)
 */

__int64 __fastcall SepSetTokenUserAndGroups(__int64 a1, unsigned __int8 **a2, unsigned int a3, __int64 a4, int a5)
{
  char v5; // bp
  char v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  __int64 result; // rax
  int v14; // r15d
  __int64 v15; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rsi
  PVOID v18; // rbx
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // r9
  unsigned int v23; // edx
  unsigned __int8 **v24; // r11
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28[9]; // [rsp+30h] [rbp-48h] BYREF
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int8 **v30; // [rsp+88h] [rbp+10h]

  v30 = a2;
  P = 0LL;
  v5 = 0;
  v28[0] = 0LL;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 208);
  v8 = -1;
  if ( v7 != -1 )
  {
    v8 = v7 - 1;
    result = SepDuplicateSid(*(unsigned __int8 **)(a4 + 16LL * (unsigned int)(v7 - 1)), v28);
    if ( (int)result < 0 )
      return result;
    *(_QWORD *)(a1 + 1120) = v28[0];
  }
  v14 = SepCreateSidValuesBlock(&P, a2, a3, a4, a5, v8);
  if ( v14 >= 0 )
  {
    v15 = *(_QWORD *)(a1 + 216);
    if ( *(_QWORD *)(v15 + 120) )
      goto LABEL_14;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(*(_QWORD *)(a1 + 216) + 104LL, 0LL);
    v17 = *(_QWORD *)(a1 + 216);
    if ( !*(_QWORD *)(v17 + 120) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)P + 1) <= 1 )
        __fastfail(0xEu);
      v5 = 1;
      *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) = P;
      v17 = *(_QWORD *)(a1 + 216);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 104), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v17 + 104));
    KeAbPostRelease(v17 + 104);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v15 = *(_QWORD *)(a1 + 216);
    if ( !v5 )
    {
LABEL_14:
      v18 = P;
      v6 = SepCompareSidValuesBlocks((__int64)P, *(_QWORD *)(v15 + 120));
    }
    else
    {
      v18 = P;
    }
    v19 = *(_QWORD *)(v15 + 120);
    if ( v5 )
    {
      v20 = 0;
    }
    else
    {
      if ( v6 )
      {
        SepLogTokenSidManagement(2, (__int64)v18, v19, a1);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL) + 8LL)) <= 1 )
          __fastfail(0xEu);
        *(_QWORD *)(a1 + 1128) = *(_QWORD *)(*(_QWORD *)(a1 + 216) + 120LL);
        SepDereferenceSidValuesBlock((volatile signed __int64 *)P, a1);
        goto LABEL_23;
      }
      v20 = 1;
    }
    SepLogTokenSidManagement(v20, (__int64)v18, v19, a1);
    *(_QWORD *)(a1 + 1128) = v18;
LABEL_23:
    v21 = *(_QWORD *)(a1 + 1128);
    *(_QWORD *)(a1 + 152) = a1 + 1168;
    v22 = v21 + 24;
    v23 = 0;
    *(_DWORD *)(a1 + 124) = a3 + 1;
    if ( a3 != -1 )
    {
      v24 = v30;
      do
      {
        v25 = *(_QWORD *)(a1 + 152);
        v26 = 2LL * v23;
        if ( v23 == *(_DWORD *)(a1 + 208) )
        {
          *(_QWORD *)(v25 + 16LL * v23) = *(_QWORD *)(a1 + 1120);
        }
        else
        {
          *(_QWORD *)(v25 + 16LL * v23) = v22;
          v22 += (4LL * *(unsigned __int8 *)(v22 + 1) + 11) & 0xFFFFFFFCLL;
        }
        if ( v23 )
          v27 = *(_DWORD *)(a4 + 16LL * (v23 - 1) + 8);
        else
          v27 = *((_DWORD *)v24 + 2);
        ++v23;
        *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v26 + 8) = v27;
      }
      while ( v23 < *(_DWORD *)(a1 + 124) );
    }
  }
  return (unsigned int)v14;
}
