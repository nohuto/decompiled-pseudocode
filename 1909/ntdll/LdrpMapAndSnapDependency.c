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

unsigned __int64 __fastcall LdrpMapAndSnapDependency(__int64 a1)
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
  unsigned __int64 result; // rax
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  char *v17; // rcx
  char v18; // al
  STRING SourceString; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF

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
      v18 = 0;
LABEL_43:
      if ( !v18 )
        goto LABEL_7;
    }
  }
  else if ( LdrpRedirectionCalloutFunc )
  {
    v18 = LdrpRedirectionCalloutFunc(*(_QWORD *)(v1 + 80));
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
  result = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8u, 8LL * v7);
  *(_QWORD *)(a1 + 88) = result;
  if ( result )
  {
    *(_DWORD *)(a1 + 96) = v7;
    result = (unsigned int)(v4 + 1);
    *(_DWORD *)(a1 + 100) = result;
    v13 = 0;
    *(_QWORD *)(a1 + 128) = v6;
    v21 = 0LL;
    if ( *v8 )
    {
      while ( v8[1] )
      {
        v14 = *(_QWORD *)(v1 + 48);
        result = v8[1];
        if ( *(_QWORD *)(result + v14) )
        {
          v15 = *v8;
          v16 = v14 + v15 == 0;
          v17 = (char *)(v14 + v15);
          *(_QWORD *)&SourceString.Length = 0LL;
          SourceString.Buffer = v17;
          if ( !v16 )
          {
            result = -1LL;
            do
              ++result;
            while ( v17[result] );
            if ( result > 0xFFFE )
            {
              DllActivationContext = -1073741562;
              break;
            }
            SourceString.Length = result;
            SourceString.MaximumLength = result + 1;
          }
          result = LdrpLoadDependentModule(&SourceString, *(_QWORD *)(a1 + 88) + 8LL * v13, (__int64)&v21);
          DllActivationContext = result;
          if ( (result & 0x80000000) != 0LL )
            break;
        }
        v8 += 5;
        ++v13;
        if ( !*v8 )
          break;
      }
      if ( v21 )
        result = RtlFreeHeap(LdrpHeap, 0LL, v21);
    }
    if ( DllActivationContext >= 0 )
    {
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      v4 = --*(_DWORD *)(a1 + 100);
      result = RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    }
  }
  else
  {
    DllActivationContext = -1073741801;
  }
  if ( !v4 )
  {
LABEL_30:
    result = *(_QWORD *)(v1 + 152);
    if ( *(_QWORD *)(v2 + 104) )
    {
      *(_DWORD *)(result + 56) = 4;
      if ( *(_QWORD *)(v2 + 48) )
      {
        result = LdrpQueueWork(v2);
      }
      else
      {
        result = LdrpSnapModule(v2);
        DllActivationContext = result;
      }
    }
    else
    {
      *(_DWORD *)(result + 56) = 5;
    }
  }
  if ( DllActivationContext < 0 )
  {
LABEL_37:
    result = *(_QWORD *)(v2 + 40);
    *(_DWORD *)result = DllActivationContext;
  }
  return result;
}
