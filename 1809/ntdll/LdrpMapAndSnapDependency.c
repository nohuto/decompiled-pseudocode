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
 *     LdrpGetImportDescriptorForSnap @ 0x180078D00 (LdrpGetImportDescriptorForSnap.c)
 */

__int16 __fastcall LdrpMapAndSnapDependency(__int64 a1)
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
  unsigned __int64 Heap; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 *v14; // r8
  __int64 v15; // r9
  unsigned int v16; // r15d
  char *v17; // rcx
  STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF

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
  Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8u, 8LL * v7);
  *(_QWORD *)(a1 + 88) = Heap;
  if ( !Heap )
  {
    DllActivationContext = -1073741801;
    goto LABEL_31;
  }
  *(_DWORD *)(a1 + 96) = v7;
  LOWORD(Heap) = v4 + 1;
  *(_DWORD *)(a1 + 100) = v4 + 1;
  v16 = 0;
  *(_QWORD *)(a1 + 128) = v6;
  v21 = 0LL;
  if ( !*v8 )
    goto LABEL_29;
  while ( v8[1] )
  {
    v13 = *(_QWORD *)(v1 + 48);
    Heap = v8[1];
    if ( !*(_QWORD *)(Heap + v13) )
      goto LABEL_26;
    LOWORD(Heap) = 0;
    v17 = (char *)(v13 + *v8);
    *(_QWORD *)&SourceString.Length = 0LL;
    SourceString.Buffer = v17;
    if ( v17 )
    {
      Heap = -1LL;
      do
        ++Heap;
      while ( v17[Heap] );
      if ( Heap > 0xFFFE )
      {
        DllActivationContext = -1073741562;
        goto LABEL_24;
      }
      SourceString.Length = Heap;
      LOWORD(Heap) = Heap + 1;
      SourceString.MaximumLength = Heap;
    }
    DllActivationContext = 0;
LABEL_24:
    if ( DllActivationContext < 0 )
      break;
    LODWORD(Heap) = LdrpLoadDependentModule(&SourceString, *(_QWORD *)(a1 + 88) + 8LL * v16, (__int64)&v21);
    DllActivationContext = Heap;
    if ( (Heap & 0x80000000) != 0LL )
      break;
LABEL_26:
    v8 += 5;
    ++v16;
    if ( !*v8 )
      break;
  }
  v14 = (unsigned __int64 *)v21;
  if ( v21 )
    LOWORD(Heap) = RtlFreeHeap(LdrpHeap, 0, v21);
LABEL_29:
  if ( DllActivationContext >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v13, v14, v15);
    v4 = --*(_DWORD *)(a1 + 100);
    LOWORD(Heap) = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
  }
LABEL_31:
  if ( !v4 )
  {
LABEL_32:
    Heap = *(_QWORD *)(v1 + 152);
    if ( *(_QWORD *)(v2 + 104) )
    {
      *(_DWORD *)(Heap + 56) = 4;
      if ( *(_QWORD *)(v2 + 48) )
      {
        LOWORD(Heap) = LdrpQueueWork(v2);
      }
      else
      {
        LODWORD(Heap) = LdrpSnapModule(v2);
        DllActivationContext = Heap;
      }
    }
    else
    {
      *(_DWORD *)(Heap + 56) = 5;
    }
  }
  if ( DllActivationContext < 0 )
  {
LABEL_40:
    Heap = *(_QWORD *)(v2 + 40);
    *(_DWORD *)Heap = DllActivationContext;
  }
  return Heap;
}
