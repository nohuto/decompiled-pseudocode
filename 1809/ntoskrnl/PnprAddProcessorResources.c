/*
 * XREFs of PnprAddProcessorResources @ 0x140835780
 * Callers:
 *     PnprAddDeviceResources @ 0x140835510 (PnprAddDeviceResources.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x1400897E0 (KeGetProcessorNumberFromIndex.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnprAddProcessorResources(__int64 a1, ULONG a2, int a3, _DWORD **a4)
{
  _DWORD *v4; // rbx
  int v8; // eax
  int v9; // r15d
  unsigned int v10; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rbp
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 result; // rax
  __int64 ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = a1;
  v4 = *a4;
  LODWORD(ProcNumber) = 0;
  v8 = v4[4];
  if ( v8 == v4[3] )
  {
    v9 = v8 + 4;
    v10 = 4 * v8 + 20;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(4 * (v8 + 4) + 20), 0x51706E50u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v13 = PnprContext;
      v14 = *(_DWORD *)(PnprContext + 20984);
      if ( !v14 )
        v14 = 820;
      *(_DWORD *)(PnprContext + 20984) = v14;
      v15 = *(_DWORD *)(v13 + 20988);
      if ( !v15 )
        v15 = 10;
      *(_DWORD *)(v13 + 20988) = v15;
      return 3221225626LL;
    }
    memmove(PoolWithTag, v4, v10);
    ExFreePoolWithTag(v4, 0x51706E50u);
    v4 = v12;
    v12[3] = v9;
  }
  if ( a2 != -1 )
  {
    KeGetProcessorNumberFromIndex(a2, (PPROCESSOR_NUMBER)&ProcNumber);
    *(_QWORD *)(*(_QWORD *)v4 + 8LL * (unsigned __int16)ProcNumber) |= 1LL << SBYTE2(ProcNumber);
  }
  v4[v4[4]++ + 5] = a3;
  result = 0LL;
  *a4 = v4;
  return result;
}
