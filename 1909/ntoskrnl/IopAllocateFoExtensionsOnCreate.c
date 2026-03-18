/*
 * XREFs of IopAllocateFoExtensionsOnCreate @ 0x14064C13C
 * Callers:
 *     IopAllocRealFileObject @ 0x1405D8820 (IopAllocRealFileObject.c)
 * Callees:
 *     IoGetSilo @ 0x140009AE0 (IoGetSilo.c)
 *     PsIsHostSilo @ 0x14000A9B0 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x1400870C0 (ObReferenceObjectByPointer.c)
 *     IopGetSetSpecificExtension @ 0x14009A238 (IopGetSetSpecificExtension.c)
 *     IopAllocateFileObjectExtension @ 0x14009D080 (IopAllocateFileObjectExtension.c)
 *     PsIsServerSilo @ 0x1400EAF10 (PsIsServerSilo.c)
 *     IopCheckStackForTransactionSupport @ 0x14013CF28 (IopCheckStackForTransactionSupport.c)
 *     PsAcquireSiloHardReference @ 0x1403065F0 (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x1403066B0 (PsReleaseSiloHardReference.c)
 */

int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  int FileObjectExtension; // ebx
  int v10; // eax
  int result; // eax
  __int64 v12; // rcx
  __int64 Silo; // rax
  __int64 v14; // rdx
  _DWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // rsi
  __int64 v19; // r9
  __int64 v20; // r9
  _DWORD *v21; // rax
  _DWORD *v22; // [rsp+60h] [rbp+18h] BYREF

  v5 = a4;
  FileObjectExtension = -1073741811;
  if ( (*(_DWORD *)(a3 + 152) & 2) != 0 )
  {
    FileObjectExtension = IopAllocateFileObjectExtension(a1, (__int64 *)&v22);
    if ( FileObjectExtension >= 0 )
    {
      *v22 |= 1u;
      FileObjectExtension = 0;
    }
    if ( FileObjectExtension < 0 )
      return FileObjectExtension;
  }
  v10 = *(_DWORD *)(a3 + 152);
  if ( (v10 & 1) != 0 )
  {
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1u, 32LL, a4, &v22, 0LL);
    FileObjectExtension = result;
    if ( result < 0 )
      return result;
    *(_QWORD *)v22 = *(_QWORD *)(a3 + 176);
    v10 = *(_DWORD *)(a3 + 152);
  }
  if ( (v10 & 4) != 0 )
  {
    if ( !IopCheckStackForTransactionSupport(a2)
      && (*(_DWORD *)(a3 + 88) != 1 || (*(_BYTE *)(a3 + 70) & 6) != 0 || (a5 & 0xFEEDFF56) != 0)
      && !*(_BYTE *)(a3 + 137) )
    {
      return -1072103361;
    }
    v17 = *(_QWORD *)(a3 + 184);
    if ( !v17 )
      return -1073741811;
    if ( *(_WORD *)v17 != 16 )
      return -1073741811;
    v18 = *(void **)(v17 + 8);
    if ( !v18 )
      return -1073741811;
    result = ObReferenceObjectByPointer(*(PVOID *)(v17 + 8), 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
    if ( result < 0 )
      return result;
    LOBYTE(v19) = 1;
    FileObjectExtension = IopGetSetSpecificExtension(a1, 0, 16LL, v19, &v22, 0LL);
    if ( FileObjectExtension < 0 )
    {
      ObfDereferenceObject(v18);
      return FileObjectExtension;
    }
    *(_OWORD *)v22 = *(_OWORD *)*(_QWORD *)(a3 + 184);
    v10 = *(_DWORD *)(a3 + 152);
  }
  if ( (v10 & 0x40) == 0 && PsIsHostSilo(*(_QWORD *)(v5 + 8)) )
  {
    v12 = *(_QWORD *)(a3 + 40);
    if ( !v12 )
      return FileObjectExtension;
    Silo = IoGetSilo(v12);
    if ( PsIsHostSilo(Silo) )
      return FileObjectExtension;
  }
  v14 = *(_QWORD *)(a3 + 40);
  FileObjectExtension = 0;
  v15 = *(_DWORD **)(v5 + 8);
  if ( v14 && PsIsServerSilo(*(_QWORD *)(v5 + 8)) )
    v15 = (_DWORD *)IoGetSilo(v16);
  if ( PsIsHostSilo((__int64)v15) )
    return FileObjectExtension;
  result = PsAcquireSiloHardReference(v15);
  if ( result >= 0 )
  {
    LOBYTE(v20) = 1;
    FileObjectExtension = IopGetSetSpecificExtension(a1, 7u, 16LL, v20, &v22, 0LL);
    if ( FileObjectExtension >= 0 )
    {
      v21 = v22;
      *v22 = 16;
      *((_QWORD *)v21 + 1) = v15;
      v21[1] |= 1u;
      ObfReferenceObjectWithTag(v15, 0x70536F49u);
    }
    else
    {
      PsReleaseSiloHardReference(v15);
    }
    return FileObjectExtension;
  }
  return result;
}
