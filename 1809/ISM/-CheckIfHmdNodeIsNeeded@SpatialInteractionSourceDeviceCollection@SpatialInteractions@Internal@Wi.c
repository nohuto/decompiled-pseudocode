/*
 * XREFs of ?CheckIfHmdNodeIsNeeded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800B2458
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7880 (std--_Func_impl_no_alloc__lambda_e16b0c83ea86409b3b7c0d839cea1b0d__void_std--shared_ea_1800B7880.c)
 *     std::_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7920 (std--_Func_impl_no_alloc__lambda_0bc706ec02677b88b1bea7627a07e2d6__void_std--shared_ea_1800B7920.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::CheckIfHmdNodeIsNeeded(
        struct _RTL_CRITICAL_SECTION *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  _QWORD *p_Type; // rdi
  __int64 *j; // rbx
  __int64 **v5; // rax
  __int64 *v6; // rcx
  __int64 *i; // rax
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  ULONG_PTR *p_SpinCount; // rcx
  ULONG_PTR v10; // rbx
  ULONG_PTR v11; // rsi
  ULONG_PTR v12; // rax
  char v13; // [rsp+38h] [rbp+10h] BYREF

  p_Type = &this[12].DebugInfo->Type;
  j = (__int64 *)*p_Type;
  while ( j != p_Type )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)j[5] + 40LL))(j[5]) )
      return;
    if ( !*((_BYTE *)j + 25) )
    {
      v5 = (__int64 **)j[2];
      if ( *((_BYTE *)v5 + 25) )
      {
        for ( i = (__int64 *)j[1]; !*((_BYTE *)i + 25) && j == (__int64 *)i[2]; i = (__int64 *)i[1] )
          j = i;
        j = i;
      }
      else
      {
        v6 = *v5;
        for ( j = (__int64 *)j[2]; !*((_BYTE *)v6 + 25); v6 = (__int64 *)*v6 )
          j = v6;
      }
    }
  }
  v8 = this + 9;
  EnterCriticalSection(this + 9);
  p_SpinCount = &this[10].SpinCount;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( &v13 != (char *)p_SpinCount )
  {
    v10 = *p_SpinCount;
    *p_SpinCount = 0LL;
    v12 = v10;
    v11 = v10;
  }
  if ( v8 )
  {
    LeaveCriticalSection(v8);
    v12 = v11;
  }
  if ( v12 )
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v10 + 16LL))(v10);
}
