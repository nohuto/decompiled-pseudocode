/*
 * XREFs of ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18001ED08
 * Callers:
 *     DllGetClassObject @ 0x18001FFB0 (DllGetClassObject.c)
 *     DllGetActivationFactory @ 0x180020080 (DllGetActivationFactory.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetCacheEntry(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        unsigned int *a3,
        const struct _GUID *a4,
        const struct Microsoft::WRL::Details::CreatorMap *a5)
{
  const struct Microsoft::WRL::Details::CreatorMap *v5; // rsi
  void *v9; // rcx
  unsigned int v10; // ebx
  __int64 result; // rax
  PVOID v12; // rbx
  void *v13; // rcx
  PVOID Ptr; // [rsp+50h] [rbp+8h] BYREF

  Ptr = 0LL;
  v5 = a5;
  *(_QWORD *)a5 = 0LL;
  if ( **(_QWORD **)a4[1].Data4 )
  {
    AcquireSRWLockShared(&Microsoft::WRL::Details::ModuleBase::moduleLock_);
    v9 = **(void ***)a4[1].Data4;
    if ( v9 )
    {
      Ptr = DecodePointer(v9);
      v10 = (**(__int64 (__fastcall ***)(PVOID, unsigned int *, const struct Microsoft::WRL::Details::CreatorMap *))Ptr)(
              Ptr,
              a3,
              v5);
      ReleaseSRWLockShared(&Microsoft::WRL::Details::ModuleBase::moduleLock_);
      return v10;
    }
    ReleaseSRWLockShared(&Microsoft::WRL::Details::ModuleBase::moduleLock_);
  }
  result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, const struct _GUID *, unsigned int *, PVOID *))&a4->Data1)(
             a2,
             a4,
             a3,
             &Ptr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)a2 & 4) != 0 )
      goto LABEL_12;
    v12 = 0LL;
    AcquireSRWLockExclusive(&Microsoft::WRL::Details::ModuleBase::moduleLock_);
    v13 = **(void ***)a4[1].Data4;
    if ( v13 )
    {
      v12 = DecodePointer(v13);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 8LL))(v12);
    }
    else
    {
      **(_QWORD **)a4[1].Data4 = EncodePointer(Ptr);
    }
    ReleaseSRWLockExclusive(&Microsoft::WRL::Details::ModuleBase::moduleLock_);
    if ( !v12 )
    {
LABEL_12:
      v12 = Ptr;
    }
    else
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
    *(_QWORD *)v5 = v12;
    return 0LL;
  }
  return result;
}
