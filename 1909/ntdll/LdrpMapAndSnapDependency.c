/*
 * XREFs of LdrpMapAndSnapDependency @ 0x180022F1C
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180029EFC (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpSnapModule @ 0x18001C610 (LdrpSnapModule.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180020F00 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     LdrpFindDllActivationContext @ 0x18006F4D4 (LdrpFindDllActivationContext.c)
 *     LdrpQueueWork @ 0x180070BF4 (LdrpQueueWork.c)
 *     LdrpGetImportDescriptorForSnap @ 0x180072948 (LdrpGetImportDescriptorForSnap.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  int DllActivationContext; // edi
  int v4; // r14d
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
  __int64 v15; // rcx
  bool v16; // zf
  char *v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  char v20; // al
  ANSI_STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = a1;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0
    || (DllActivationContext = LdrpFindDllActivationContext(*(_QWORD *)(a1 + 56)), DllActivationContext >= 0) )
  {
    DllActivationContext = LdrpPrepareImportAddressTableForSnap(v2);
  }
  if ( DllActivationContext < 0 )
    goto LABEL_37;
  v4 = 0;
  if ( !*(_QWORD *)(v2 + 104) )
    goto LABEL_30;
  if ( !LdrpImportRedirectionPresent )
    goto LABEL_7;
  if ( (NtCurrentPeb()->BitField & 0x10) != 0 )
  {
    if ( (*(_BYTE *)(v1 + 104) & 1) == 0 )
    {
      v20 = 0;
LABEL_43:
      if ( !v20 )
        goto LABEL_7;
    }
  }
  else if ( LdrpRedirectionCalloutFunc )
  {
    v20 = LdrpRedirectionCalloutFunc(*(_QWORD *)(v1 + 80));
    goto LABEL_43;
  }
  *(_DWORD *)(v2 + 32) |= 0x2000000u;
LABEL_7:
  ImportDescriptorForSnap = LdrpGetImportDescriptorForSnap(v2);
  v6 = ImportDescriptorForSnap;
  v7 = 0;
  v8 = (unsigned int *)(ImportDescriptorForSnap + 12);
  if ( !*(_DWORD *)(ImportDescriptorForSnap + 12) )
    goto LABEL_30;
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
    goto LABEL_30;
  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 8LL * v7);
  *(_QWORD *)(a1 + 88) = Heap;
  if ( Heap )
  {
    *(_DWORD *)(a1 + 96) = v7;
    *(_DWORD *)(a1 + 100) = v4 + 1;
    v13 = 0;
    *(_QWORD *)(a1 + 128) = v6;
    BaseAddress = 0LL;
    if ( *v8 )
    {
      while ( v8[1] )
      {
        v14 = *(_QWORD *)(v1 + 48);
        if ( *(_QWORD *)(v8[1] + v14) )
        {
          v15 = *v8;
          v16 = v14 + v15 == 0;
          v17 = (char *)(v14 + v15);
          *(_QWORD *)&SourceString.Length = 0LL;
          SourceString.Buffer = v17;
          if ( !v16 )
          {
            v18 = -1LL;
            do
              ++v18;
            while ( v17[v18] );
            if ( v18 > 0xFFFE )
            {
              DllActivationContext = -1073741562;
              break;
            }
            SourceString.Length = v18;
            SourceString.MaximumLength = v18 + 1;
          }
          DllActivationContext = LdrpLoadDependentModule(
                                   &SourceString,
                                   *(_QWORD *)(a1 + 88) + 8LL * v13,
                                   (__int64)&BaseAddress);
          if ( DllActivationContext < 0 )
            break;
        }
        v8 += 5;
        ++v13;
        if ( !*v8 )
          break;
      }
      if ( BaseAddress )
        RtlFreeHeap(LdrpHeap, 0, BaseAddress);
    }
    if ( DllActivationContext >= 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v4 = --*(_DWORD *)(a1 + 100);
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  else
  {
    DllActivationContext = -1073741801;
  }
  if ( !v4 )
  {
LABEL_30:
    v19 = *(_QWORD *)(v1 + 152);
    if ( *(_QWORD *)(v2 + 104) )
    {
      *(_DWORD *)(v19 + 56) = 4;
      if ( *(_QWORD *)(v2 + 48) )
        LdrpQueueWork(v2);
      else
        DllActivationContext = LdrpSnapModule(v2);
    }
    else
    {
      *(_DWORD *)(v19 + 56) = 5;
    }
  }
  if ( DllActivationContext < 0 )
LABEL_37:
    **(_DWORD **)(v2 + 40) = DllActivationContext;
}
