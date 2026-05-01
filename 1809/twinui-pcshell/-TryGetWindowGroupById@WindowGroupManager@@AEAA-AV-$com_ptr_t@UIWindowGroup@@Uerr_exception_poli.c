/*
 * XREFs of ?TryGetWindowGroupById@WindowGroupManager@@AEAA?AV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x18020552C
 * Callers:
 *     _lambda_37719fec74321e5ebed3721a062c5e83_::operator() @ 0x1802045C0 (_lambda_37719fec74321e5ebed3721a062c5e83_--operator().c)
 *     ?MakeFallbackWindowTemplateForGroup@WindowGroupManager@@UEAAJK@Z @ 0x180204E60 (-MakeFallbackWindowTemplateForGroup@WindowGroupManager@@UEAAJK@Z.c)
 *     ?MakeWindowGroupTemplate@WindowGroupManager@@UEAAJKPEAUHWND__@@@Z @ 0x180204F50 (-MakeWindowGroupTemplate@WindowGroupManager@@UEAAJKPEAUHWND__@@@Z.c)
 *     ?RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z @ 0x180205130 (-RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall WindowGroupManager::TryGetWindowGroupById(RTL_SRWLOCK *a1, _QWORD *a2, unsigned int a3)
{
  RTL_SRWLOCK *v6; // rdi
  _QWORD *Ptr; // r9
  _QWORD *v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rcx

  v6 = a1 + 9;
  AcquireSRWLockShared(a1 + 9);
  Ptr = a1[10].Ptr;
  v8 = (_QWORD *)Ptr[1];
  v9 = Ptr;
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v8 + 8) >= a3 )
    {
      v9 = v8;
      v8 = (_QWORD *)*v8;
    }
    else
    {
      v8 = (_QWORD *)v8[2];
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v9 == (_DWORD *)Ptr || a3 < v9[8] )
LABEL_8:
    v9 = a1[10].Ptr;
  if ( v9 == (_DWORD *)Ptr )
  {
    *a2 = 0LL;
  }
  else
  {
    v10 = *((_QWORD *)v9 + 5);
    *a2 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return a2;
}
