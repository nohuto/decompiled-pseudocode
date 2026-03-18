/*
 * XREFs of ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800B9C80
 * Callers:
 *     ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800B9728 (-InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z.c)
 * Callees:
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180037458 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::NotifyVisualTreeListeners(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi

  v2 = *(_QWORD *)(a1 + 24);
  if ( (v2 & 2) != 0 )
    result = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    result = *(_QWORD *)(a1 + 24) & 1LL;
  v6 = 0LL;
  if ( (_DWORD)result )
  {
    v7 = (unsigned int)result;
    do
    {
      result = CPtrArrayBase::operator[]((__int64 *)(a1 + 24), v6);
      if ( result != *(_QWORD *)(a1 + 80) )
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)result + 64LL))(result, a2, a1);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
