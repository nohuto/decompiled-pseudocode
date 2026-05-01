/*
 * XREFs of ?GetBehaviorFlags@CTaskWindow@@UEAA?AW4__MIDL___MIDL_itf_shpriv_core_0000_0319_0003@@XZ @ 0x18016D410
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x18016E190 (WPP_SF_qD.c)
 */

__int64 __fastcall CTaskWindow::GetBehaviorFlags(HWND *a1)
{
  unsigned int v2; // ebx
  unsigned int PropW; // eax
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = 0;
  if ( (*((__int64 (__fastcall **)(HWND *))*a1 + 4))(a1) )
  {
    if ( HIWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    {
      PropW = (unsigned int)GetPropW(a1[4], (LPCWSTR)HIWORD(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr));
      v2 = PropW;
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_qD(*((_QWORD *)WPP_GLOBAL_Control + 2), v4, v5, a1[4], PropW);
    }
  }
  return v2;
}
