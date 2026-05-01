/*
 * XREFs of ?TryGetWindowGroupById@WindowGroupManager@@AEAA?AV?$com_ptr_t@UIWindowGroup@@Uerr_exception_policy@wil@@@wil@@K@Z @ 0x18027D1FC
 * Callers:
 *     _lambda_77c8267e29f72fe3161976dfeecbc743_::operator() @ 0x18027C35C (_lambda_77c8267e29f72fe3161976dfeecbc743_--operator().c)
 *     ?MakeFallbackWindowTemplateForGroup@WindowGroupManager@@UEAAJK@Z @ 0x18027CB30 (-MakeFallbackWindowTemplateForGroup@WindowGroupManager@@UEAAJK@Z.c)
 *     ?MakeWindowGroupTemplate@WindowGroupManager@@UEAAJKPEAUHWND__@@@Z @ 0x18027CC20 (-MakeWindowGroupTemplate@WindowGroupManager@@UEAAJKPEAUHWND__@@@Z.c)
 *     ?RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z @ 0x18027CE00 (-RemoveWindowFromWindowGroup@WindowGroupManager@@UEAAJPEAUHWND__@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall WindowGroupManager::TryGetWindowGroupById(RTL_SRWLOCK *a1, _QWORD *a2, unsigned int a3)
{
  RTL_SRWLOCK *v6; // rdi
  _DWORD *Ptr; // rdx
  _DWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v6 = a1 + 9;
  AcquireSRWLockShared(a1 + 9);
  Ptr = a1[10].Ptr;
  v8 = Ptr;
  v9 = (_QWORD *)*((_QWORD *)Ptr + 1);
  if ( *((_BYTE *)v9 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v9 + 8) >= a3 )
    {
      v8 = v9;
      v9 = (_QWORD *)*v9;
    }
    else
    {
      v9 = (_QWORD *)v9[2];
    }
  }
  while ( !*((_BYTE *)v9 + 25) );
  if ( v8 == Ptr || a3 < v8[8] )
LABEL_8:
    v8 = a1[10].Ptr;
  if ( v8 == Ptr )
  {
    *a2 = 0LL;
  }
  else
  {
    v10 = *((_QWORD *)v8 + 5);
    *a2 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return a2;
}
