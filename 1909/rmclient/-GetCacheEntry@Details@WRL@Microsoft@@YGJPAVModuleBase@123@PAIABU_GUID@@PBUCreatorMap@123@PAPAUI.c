/*
 * XREFs of ?GetCacheEntry@Details@WRL@Microsoft@@YGJPAVModuleBase@123@PAIABU_GUID@@PBUCreatorMap@123@PAPAUIUnknown@@@Z @ 0x1000F1FC
 * Callers:
 *     ??$GetClassObject@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGABU_GUID@@2PAPAX@Z @ 0x1000EEE1 (--$GetClassObject@$00@Details@WRL@Microsoft@@YGJPAVModuleBase@012@PBGABU_GUID@@2PAPAX@Z.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __userpurge Microsoft::WRL::Details::GetCacheEntry@<eax>(
        _BYTE *a1@<edx>,
        int a2@<ecx>,
        Microsoft::WRL::Details *this,
        PVOID **a4,
        unsigned int *a5,
        const struct _GUID *a6,
        const struct Microsoft::WRL::Details::CreatorMap *a7,
        struct IUnknown **a8)
{
  struct Microsoft::WRL::Details::ModuleBase *v8; // ebx
  PVOID v9; // edi
  PVOID *v10; // eax
  RTL_SRWLOCK *v11; // ebx
  PVOID *v12; // ecx
  int v13; // esi
  int result; // eax
  RTL_SRWLOCK *v15; // esi
  PVOID *v16; // ecx
  PVOID Ptr; // [esp+14h] [ebp-4h] BYREF

  v8 = (struct Microsoft::WRL::Details::ModuleBase *)a4;
  v9 = 0;
  *a5 = 0;
  v10 = a4[3];
  Ptr = 0;
  if ( *v10 )
  {
    v11 = (RTL_SRWLOCK *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)a2 + 28))(*(_DWORD *)(*(_DWORD *)a2 + 28), a2);
    AcquireSRWLockShared(v11);
    v12 = a4[3];
    if ( *v12 )
    {
      Ptr = DecodePointer(*v12);
      v13 = (**(int (__thiscall ***)(_DWORD, PVOID, Microsoft::WRL::Details *, unsigned int *))Ptr)(
              **(_DWORD **)Ptr,
              Ptr,
              this,
              a5);
      if ( v11 )
        ReleaseSRWLockShared(v11);
      return v13;
    }
    if ( v11 )
      ReleaseSRWLockShared(v11);
    v8 = (struct Microsoft::WRL::Details::ModuleBase *)a4;
  }
  result = (*(int (__thiscall **)(_DWORD, _BYTE *, struct Microsoft::WRL::Details::ModuleBase *, Microsoft::WRL::Details *, PVOID *))v8)(
             *(_DWORD *)v8,
             a1,
             v8,
             this,
             &Ptr);
  if ( result >= 0 )
  {
    if ( (*a1 & 4) != 0 )
      goto LABEL_19;
    v15 = (RTL_SRWLOCK *)(*(int (__thiscall **)(_DWORD, int))(*(_DWORD *)a2 + 28))(*(_DWORD *)(*(_DWORD *)a2 + 28), a2);
    AcquireSRWLockExclusive(v15);
    v16 = (PVOID *)*((_DWORD *)v8 + 3);
    if ( *v16 )
    {
      v9 = DecodePointer(*v16);
      (*(void (__thiscall **)(_DWORD, PVOID))(*(_DWORD *)v9 + 4))(*(_DWORD *)(*(_DWORD *)v9 + 4), v9);
    }
    else
    {
      **((_DWORD **)v8 + 3) = EncodePointer(Ptr);
    }
    if ( v15 )
      ReleaseSRWLockExclusive(v15);
    if ( !v9 )
    {
LABEL_19:
      v9 = Ptr;
    }
    else
    {
      (*(void (__thiscall **)(_DWORD, PVOID))(*(_DWORD *)Ptr + 8))(*(_DWORD *)(*(_DWORD *)Ptr + 8), Ptr);
      (*(void (__thiscall **)(_DWORD, PVOID))(*(_DWORD *)Ptr + 8))(*(_DWORD *)(*(_DWORD *)Ptr + 8), Ptr);
    }
    *a5 = (unsigned int)v9;
    return 0;
  }
  return result;
}
