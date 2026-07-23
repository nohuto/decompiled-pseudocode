/*
 * XREFs of LdrpMapAndSnapDependency @ 0x18002385C
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180021D1C (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpFindDllActivationContext @ 0x1800222F0 (LdrpFindDllActivationContext.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002769C (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpQueueWork @ 0x1800718CC (LdrpQueueWork.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180078D10 (LdrpGetImportDescriptorForSnap.c)
 */

void __fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  int DllActivationContext; // edi
  int v4; // ebp
  __int64 ImportDescriptorForSnap; // rax
  __int64 v6; // r13
  unsigned int v7; // r15d
  unsigned int *v8; // rsi
  _DWORD *v9; // r8
  __int64 v10; // rcx
  int v11; // edx
  PVOID Heap; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdx
  char *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  ANSI_STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = a1;
  DllActivationContext = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) == 0 )
    DllActivationContext = LdrpFindDllActivationContext(*(_QWORD **)(a1 + 56));
  if ( DllActivationContext < 0 )
    goto LABEL_40;
  DllActivationContext = LdrpPrepareImportAddressTableForSnap(v2);
  if ( DllActivationContext < 0 )
    goto LABEL_40;
  v4 = 0;
  if ( !*(_QWORD *)(v2 + 104) )
    goto LABEL_32;
  if ( LdrpImportRedirectionPresent && ((NtCurrentPeb()->BitField & 0x10) == 0 || (*(_BYTE *)(v1 + 104) & 1) != 0) )
    *(_DWORD *)(v2 + 32) |= 0x2000000u;
  ImportDescriptorForSnap = LdrpGetImportDescriptorForSnap(v2);
  v6 = ImportDescriptorForSnap;
  v7 = 0;
  v8 = (unsigned int *)(ImportDescriptorForSnap + 12);
  if ( !*(_DWORD *)(ImportDescriptorForSnap + 12) )
    goto LABEL_32;
  v9 = (_DWORD *)(ImportDescriptorForSnap + 12);
  do
  {
    v10 = (unsigned int)v9[1];
    if ( !(_DWORD)v10 )
      break;
    v11 = v4 + 1;
    ++v7;
    v9 += 5;
    if ( !*(_QWORD *)(v10 + *(_QWORD *)(v1 + 48)) )
      v11 = v4;
    v4 = v11;
  }
  while ( *v9 );
  v2 = a1;
  if ( !v4 )
    goto LABEL_32;
  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 8LL * v7);
  *(_QWORD *)(a1 + 88) = Heap;
  if ( !Heap )
  {
    DllActivationContext = -1073741801;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 96) = v7;
  *(_DWORD *)(a1 + 100) = v4 + 1;
  v13 = 0;
  *(_QWORD *)(a1 + 128) = v6;
  BaseAddress = 0LL;
  if ( !*v8 )
    goto LABEL_29;
  while ( v8[1] )
  {
    v14 = *(_QWORD *)(v1 + 48);
    if ( !*(_QWORD *)(v8[1] + v14) )
      goto LABEL_26;
    v15 = (char *)(v14 + *v8);
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = v15;
    if ( v15 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v15[v16] );
      if ( v16 > 0xFFFE )
      {
        DllActivationContext = -1073741562;
        goto LABEL_24;
      }
      SourceString.Length = v16;
      SourceString.MaximumLength = v16 + 1;
    }
    DllActivationContext = 0;
LABEL_24:
    if ( DllActivationContext < 0 )
      break;
    DllActivationContext = LdrpLoadDependentModule(
                             &SourceString,
                             *(_QWORD *)(a1 + 88) + 8LL * v13,
                             (__int64)&BaseAddress);
    if ( DllActivationContext < 0 )
      break;
LABEL_26:
    v8 += 5;
    ++v13;
    if ( !*v8 )
      break;
  }
  if ( BaseAddress )
    RtlFreeHeap(LdrpHeap, 0, BaseAddress);
LABEL_29:
  if ( DllActivationContext >= 0 )
  {
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v4 = --*(_DWORD *)(a1 + 100);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
LABEL_31:
  if ( !v4 )
  {
LABEL_32:
    v17 = *(_QWORD *)(v1 + 152);
    if ( *(_QWORD *)(v2 + 104) )
    {
      *(_DWORD *)(v17 + 56) = 4;
      if ( *(_QWORD *)(v2 + 48) )
        LdrpQueueWork(v2);
      else
        DllActivationContext = LdrpSnapModule(v2);
    }
    else
    {
      *(_DWORD *)(v17 + 56) = 5;
    }
  }
  if ( DllActivationContext < 0 )
LABEL_40:
    **(_DWORD **)(v2 + 40) = DllActivationContext;
}
