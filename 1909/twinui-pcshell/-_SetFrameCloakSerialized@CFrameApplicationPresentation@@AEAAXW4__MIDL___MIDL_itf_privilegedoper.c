/*
 * XREFs of ?_SetFrameCloakSerialized@CFrameApplicationPresentation@@AEAAXW4__MIDL___MIDL_itf_privilegedoperations_0000_0002_0001@@@Z @ 0x1801716A0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&_::Run @ 0x18007FD00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__-_--Run.c)
 *     ?Show@CFrameApplicationPresentation@@UEAAJXZ @ 0x1800802D0 (-Show@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?Hide@CFrameApplicationPresentation@@UEAAJXZ @ 0x180170210 (-Hide@CFrameApplicationPresentation@@UEAAJXZ.c)
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___ @ 0x18016F014 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::_SetFrameCloakSerialized(__int64 a1, unsigned int a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_DWORD *)(a1 + 212) )
    return (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[17].Ptr
                                                            + 24LL))(
             CApplicationManagerUtility::g_pIAMGlobals[17].Ptr,
             *(_QWORD *)(a1 + 128),
             a2);
  DWORD2(v3) = a2;
  *(_QWORD *)&v3 = a1;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_66130c34581757aa5e7e6aafaafaa423___((_DWORD *)a1, &v3);
}
