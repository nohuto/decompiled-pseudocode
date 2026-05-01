/*
 * XREFs of ?GetItemOfType@CAppLayout@@UEAAJIW4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BAD30
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 */

__int64 __fastcall CAppLayout::GetItemOfType(RTL_SRWLOCK *a1, int a2, int a3, __int64 a4, RTL_SRWLOCK *a5)
{
  RTL_SRWLOCK *v5; // r15
  PVOID Ptr; // r14
  unsigned __int64 v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, __int64, RTL_SRWLOCK *); // rcx

  v5 = a5;
  a5->Ptr = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 2, &a5);
  Ptr = a1[9].Ptr;
  v11 = 0LL;
  v12 = -2147024809;
  if ( Ptr )
  {
    do
    {
      v13 = *((_QWORD *)a1[8].Ptr + v11);
      if ( ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13) & a3) != 0 )
      {
        if ( !a2 )
        {
          v14 = (__int64 (__fastcall ***)(_QWORD, __int64, RTL_SRWLOCK *))*((_QWORD *)a1[8].Ptr + v11);
          v12 = (**v14)(v14, a4, v5);
          break;
        }
        --a2;
      }
      ++v11;
    }
    while ( v11 < (unsigned __int64)Ptr );
  }
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&a5);
  return v12;
}
