/*
 * XREFs of IopAllocateFoExtensionsOnCreate @ 0x1405FA484
 * Callers:
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140013530 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopAllocateFileObjectExtension @ 0x140062920 (IopAllocateFileObjectExtension.c)
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     IoGetSilo @ 0x14008D7A0 (IoGetSilo.c)
 *     PsIsServerSilo @ 0x14008FCA0 (PsIsServerSilo.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x1400B89C0 (PsIsHostSilo.c)
 *     IopCheckStackForTransactionSupport @ 0x140169D40 (IopCheckStackForTransactionSupport.c)
 *     PsAcquireSiloHardReference @ 0x1402E9750 (PsAcquireSiloHardReference.c)
 *     PsReleaseSiloHardReference @ 0x1402E9810 (PsReleaseSiloHardReference.c)
 */

int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  int FileObjectExtension; // ebx
  int v10; // eax
  int result; // eax
  __int64 v12; // rdx
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 Silo; // rax
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
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, a4, &v22, 0LL);
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
    FileObjectExtension = IopGetSetSpecificExtension(a1, 0, 0x10u, v19, &v22, 0LL);
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
    v14 = *(_QWORD *)(a3 + 40);
    if ( !v14 )
      return FileObjectExtension;
    Silo = IoGetSilo(v14);
    if ( PsIsHostSilo(Silo) )
      return FileObjectExtension;
  }
  v12 = *(_QWORD *)(a3 + 40);
  FileObjectExtension = 0;
  v13 = *(_DWORD **)(v5 + 8);
  if ( v12 && PsIsServerSilo(*(_QWORD *)(v5 + 8)) )
    v13 = (_DWORD *)IoGetSilo(v16);
  if ( PsIsHostSilo((__int64)v13) )
    return FileObjectExtension;
  result = PsAcquireSiloHardReference(v13);
  if ( result >= 0 )
  {
    LOBYTE(v20) = 1;
    FileObjectExtension = IopGetSetSpecificExtension(a1, 7u, 0x10u, v20, &v22, 0LL);
    if ( FileObjectExtension >= 0 )
    {
      v21 = v22;
      *v22 = 16;
      *((_QWORD *)v21 + 1) = v13;
      v21[1] |= 1u;
      ObfReferenceObjectWithTag(v13, 0x70536F49u);
    }
    else
    {
      PsReleaseSiloHardReference(v13);
    }
    return FileObjectExtension;
  }
  return result;
}
