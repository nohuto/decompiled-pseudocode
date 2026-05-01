/*
 * XREFs of ?TerminateMap@Details@WRL@Microsoft@@YG_NPAVModuleBase@123@PBG_N@Z @ 0x10006D60
 * Callers:
 *     ??1?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAE@XZ @ 0x1000C444 (--1-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAE@XZ.c)
 *     ??_G?$DefaultModule@$00@Details@WRL@Microsoft@@UAEPAXI@Z @ 0x1000F030 (--_G-$DefaultModule@$00@Details@WRL@Microsoft@@UAEPAXI@Z.c)
 * Callees:
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

bool __userpurge Microsoft::WRL::Details::TerminateMap@<al>(
        int *a1@<ecx>,
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a3,
        const unsigned __int16 *a4,
        bool a5)
{
  int *v5; // edi
  int v6; // eax
  const struct Microsoft::WRL::Details::CreatorMap **(__stdcall *v7)(Microsoft::WRL::Details::ModuleBase *__hidden); // esi
  int *v8; // esi
  const struct Microsoft::WRL::Details::CreatorMap **(__stdcall *v9)(Microsoft::WRL::Details::ModuleBase *__hidden); // ebx
  int *v10; // esi
  int *v11; // ebx
  unsigned int (__stdcall *v12)(Microsoft::WRL::Details::ModuleBase *__hidden); // eax
  unsigned int (__stdcall *v13)(Microsoft::WRL::Details::ModuleBase *__hidden); // esi
  int v14; // eax
  RTL_SRWLOCK *v16; // edi
  void **v17; // eax
  void *v18; // ecx
  PVOID v19; // eax
  void *v20; // [esp+8h] [ebp-8h]

  v5 = a1;
  v6 = *a1;
  v7 = *(const struct Microsoft::WRL::Details::CreatorMap **(__stdcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*a1 + 16);
  if ( v7 == Microsoft::WRL::Details::ModuleBase::GetFirstEntryPointer )
  {
    v8 = &__pobjectentryfirst;
  }
  else
  {
    v8 = (int *)((int (__thiscall *)(const struct Microsoft::WRL::Details::CreatorMap **(__stdcall *)(Microsoft::WRL::Details::ModuleBase *__hidden), int *))v7)(
                  v7,
                  a1);
    v6 = *v5;
  }
  v9 = *(const struct Microsoft::WRL::Details::CreatorMap **(__stdcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(v6 + 24);
  v10 = v8 + 1;
  if ( v9 == Microsoft::WRL::Details::ModuleBase::GetLastEntryPointer )
    v11 = &__pobjectentrylast;
  else
    v11 = (int *)((int (__thiscall *)(const struct Microsoft::WRL::Details::CreatorMap **(__stdcall *)(Microsoft::WRL::Details::ModuleBase *__hidden), int *))v9)(
                   v9,
                   v5);
  for ( ; v10 < v11; ++v10 )
  {
    if ( *v10 )
    {
      v12 = *(unsigned int (__stdcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*v5 + 12);
      if ( v12 != Microsoft::WRL::Details::ModuleBase::GetObjectCount )
        ((void (__thiscall *)(unsigned int (__stdcall *)(Microsoft::WRL::Details::ModuleBase *__hidden), int *))v12)(
          v12,
          v5);
      if ( **(_DWORD **)(*v10 + 12) )
      {
        v16 = (RTL_SRWLOCK *)(*(int (__thiscall **)(_DWORD, int *))(*v5 + 28))(*(_DWORD *)(*v5 + 28), v5);
        AcquireSRWLockExclusive(v16);
        v17 = *(void ***)(*v10 + 12);
        v18 = *v17;
        v20 = *v17;
        if ( *v17 )
        {
          *v17 = 0;
          if ( v16 )
          {
            ReleaseSRWLockExclusive(v16);
            v18 = v20;
          }
          v19 = DecodePointer(v18);
          (*(void (__thiscall **)(_DWORD, PVOID))(*(_DWORD *)v19 + 8))(*(_DWORD *)(*(_DWORD *)v19 + 8), v19);
        }
        else if ( v16 )
        {
          ReleaseSRWLockExclusive(v16);
        }
        v5 = a1;
      }
    }
  }
  v13 = *(unsigned int (__stdcall **)(Microsoft::WRL::Details::ModuleBase *__hidden))(*v5 + 12);
  if ( v13 == Microsoft::WRL::Details::ModuleBase::GetObjectCount )
    v14 = Microsoft::WRL::Details::ModuleBase::objectCount_;
  else
    v14 = ((int (__thiscall *)(unsigned int (__stdcall *)(Microsoft::WRL::Details::ModuleBase *__hidden), int *))v13)(
            v13,
            v5);
  return v14 == 0;
}
