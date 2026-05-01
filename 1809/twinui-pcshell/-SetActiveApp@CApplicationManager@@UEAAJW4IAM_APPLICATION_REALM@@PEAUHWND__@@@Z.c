/*
 * XREFs of ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x1800735D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CanChangeForeground@@YAJXZ @ 0x180066590 (-CanChangeForeground@@YAJXZ.c)
 *     ?GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z @ 0x1800736D0 (-GetLastActiveVisiblePopupOrSelf@CApplicationManagerUtility@@YAPEAUHWND__@@PEAU2@@Z.c)
 *     ?_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z @ 0x18007370C (-_GetLastActiveModernTimestamp@CApplicationManager@@AEAAJPEAU_FILETIME@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z @ 0x1800F7514 (-_GetLastActiveModernWindowForActivation@CApplicationManager@@AEAAJPEAPEAUHWND__@@@Z.c)
 *     ?SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z @ 0x1800FBA8C (-SetForegroundWindow@CApplicationManagerUtility@@YAJPEAUHWND__@@@Z.c)
 */

__int64 __fastcall CApplicationManager::SetActiveApp(__int64 a1, int a2, HWND a3)
{
  int v6; // r9d
  signed int LastActiveModernWindowForActivation; // ebx
  __int64 v8; // rcx
  HWND v9; // rdx
  int v10; // edi
  int v11; // edi
  HWND LastActiveVisiblePopupOrSelf; // rax
  FILETIME FileTime1; // [rsp+20h] [rbp-28h] BYREF
  HWND v16; // [rsp+50h] [rbp+8h] BYREF
  FILETIME FileTime2; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = *(_DWORD *)(a1 + 712);
  LastActiveModernWindowForActivation = v6 != 2 ? 0x80070005 : 0;
  if ( v6 == 2 )
  {
    v8 = *(_QWORD *)(a1 + 296);
    if ( v8 )
    {
      if ( a2 == 2 )
      {
        LastActiveModernWindowForActivation = (*(__int64 (__fastcall **)(__int64, FILETIME *))(*(_QWORD *)v8 + 96LL))(
                                                v8,
                                                &FileTime1);
        if ( LastActiveModernWindowForActivation < 0
          || (int)CApplicationManager::_GetLastActiveModernTimestamp((CApplicationManager *)(a1 - 240), &FileTime2) < 0
          || CompareFileTime(&FileTime1, &FileTime2) >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, HWND *))(**(_QWORD **)(a1 + 296) + 104LL))(
            *(_QWORD *)(a1 + 296),
            0LL,
            &v16);
        }
        else
        {
          CApplicationManager::_GetLastActiveModernWindowForActivation((CApplicationManager *)(a1 - 240), &v16);
        }
      }
      else if ( a2 == 8 )
      {
        v16 = a3;
      }
      else
      {
        LastActiveModernWindowForActivation = CApplicationManager::_GetLastActiveModernWindowForActivation(
                                                (CApplicationManager *)(a1 - 240),
                                                &v16);
      }
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( LastActiveModernWindowForActivation >= 0 && *(_QWORD *)(a1 + 296) )
  {
    v10 = a2 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( !v11 )
      {
        LastActiveVisiblePopupOrSelf = CApplicationManagerUtility::GetLastActiveVisiblePopupOrSelf(
                                         (CApplicationManagerUtility *)v16,
                                         v9);
        SwitchToThisWindow(LastActiveVisiblePopupOrSelf, 1);
        return (unsigned int)LastActiveModernWindowForActivation;
      }
      if ( v11 != 6 )
        return (unsigned int)LastActiveModernWindowForActivation;
    }
    if ( v16 )
    {
      return (unsigned int)CApplicationManagerUtility::SetForegroundWindow((CApplicationManagerUtility *)v16, v9);
    }
    else
    {
      LastActiveModernWindowForActivation = CanChangeForeground();
      if ( LastActiveModernWindowForActivation < 0 )
        return (unsigned int)LastActiveModernWindowForActivation;
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 40LL))(*(_QWORD *)(a1 + 328));
    }
  }
  return (unsigned int)LastActiveModernWindowForActivation;
}
