/*
 * XREFs of ?SendConsolidated@CImmersiveApp@@UEAAXPEAUHWND__@@W4WINDOW_CONSOLIDATED_FLAGS@@@Z @ 0x180148C90
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x1800331A0 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SendConsolidated(__int64 a1, HWND a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 184;
  result = CImmersiveApp::CImmersiveWindowCollection::_FindWindow(
             (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 184),
             a2,
             &v9);
  if ( (int)result >= 0 )
  {
    v6 = v9;
    v7 = *(_QWORD *)(*(_QWORD *)(v3 + 168) + 8 * v9);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
    if ( (_BYTE)result )
    {
      v8 = *(_QWORD *)(*(_QWORD *)(v3 + 168) + 8 * v6);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 160LL))(v8, a3);
    }
  }
  return result;
}
