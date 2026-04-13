/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VSubscriptionMapValue@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@@std@@EEAAXXZ @ 0x180043720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

int __fastcall std::_Ref_count_obj<ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::SubscriptionMapValue>::_Destroy(
        _QWORD *a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx
  char *v5; // rcx
  int result; // eax

  v1 = (__int64 *)a1[3];
  if ( v1 )
  {
    v3 = (__int64 *)a1[4];
    if ( v1 != v3 )
    {
      do
      {
        v4 = *v1;
        if ( *v1 )
        {
          *v1 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v1;
      }
      while ( v1 != v3 );
      v1 = (__int64 *)a1[3];
    }
    operator delete(v1);
    a1[3] = 0LL;
    a1[4] = 0LL;
    a1[5] = 0LL;
  }
  v5 = (char *)a1[2];
  result = (_DWORD)v5 - 1;
  if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v5);
  return result;
}
