/*
 * XREFs of ?OnTitleUpdated@CImmersiveApp@@UEAAXPEAUHWND__@@@Z @ 0x180042DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x180042FA4 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::OnTitleUpdated(CImmersiveApp *this, HWND a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  if ( (int)CImmersiveApp::CImmersiveWindowCollection::_FindWindow((CImmersiveApp *)((char *)this + 152), a2, &v5) >= 0 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 40) + 8 * v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 152LL))(v3);
  }
  v5 = 0LL;
  if ( (**((int (__fastcall ***)(char *, GUID *, unsigned __int64 *))this - 14))(
         (char *)this - 112,
         &GUID_8b14e88b_5663_4caf_b196_c31479262831,
         &v5) >= 0 )
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 38) + 160LL))(*((_QWORD *)this + 38), v5);
  v4 = v5;
  if ( v5 )
  {
    v5 = 0LL;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
