/*
 * XREFs of ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180011900
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z @ 0x18001EE3C (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@IH@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180008164 (WPP_SF_.c)
 *     WPP_SF_SS @ 0x180010AF0 (WPP_SF_SS.c)
 *     ?RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z @ 0x18001168C (-RecalculateVolume@CApplication@@IEAAJW4AudioVolumeChangeType@@@Z.c)
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180011BC4 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x180011D7C (-ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ.c)
 *     ?SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z @ 0x180016E60 (-SimulateStreamStateChange@CProcess@@QEAAXHPEAH@Z.c)
 *     ?SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x18001B78C (-SoundLevelToString@@YAPEAGW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001EBF8 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CApplication::ExecutePBMActions(__int64 a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned int v6; // ebp
  BOOL v11; // edi
  unsigned int v12; // r13d
  int v13; // esi
  int v14; // edi
  const wchar_t *v15; // rax
  __int64 v16; // r10
  int v17; // esi
  _QWORD *v18; // rdi
  CProcess *v19; // rcx
  __int64 v20; // rdx
  _DWORD v21[4]; // [rsp+30h] [rbp-38h] BYREF

  v6 = a5;
  if ( a5 )
  {
    do
    {
      v11 = 0;
      v12 = v6;
      switch ( v6 & 7 )
      {
        case 1u:
          v13 = *(_DWORD *)(a1 + 216);
          *(_DWORD *)(a1 + 216) = a3;
          LOBYTE(v11) = v13 == 0;
          v14 = (a3 == 0) ^ v11;
          if ( v13 == a3 )
            goto LABEL_33;
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v15 = (const wchar_t *)SoundLevelToString(a3);
            WPP_SF_SS(
              *(_QWORD *)(v16 + 16),
              0xDu,
              &WPP_27554cd5659639419dce4f92de6452d1_Traceguids,
              *(const wchar_t **)(a1 + 24),
              v15);
          }
          if ( v13 == a3 )
          {
LABEL_33:
            if ( a6 )
              CApplication::RecalculateVolume(a1, 3u);
          }
          else
          {
            if ( v14 )
            {
              a5 = 0;
              v17 = 0;
              v18 = *(_QWORD **)(a1 + 72);
              if ( v18 )
              {
                do
                {
                  v19 = (CProcess *)v18[2];
                  v18 = (_QWORD *)*v18;
                  if ( !*((_DWORD *)v19 + 112) )
                  {
                    CProcess::SimulateStreamStateChange(v19, a3 != 0, &a5);
                    v17 |= a5;
                  }
                }
                while ( v18 );
                if ( v17 )
                  CApplicationManager::UpdateVolumeForAllAppsInSession(
                    g_ApplicationManager,
                    *(unsigned int *)(a1 + 212),
                    3LL);
              }
            }
            CApplication::RecalculateVolume(a1, 3u);
            EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
            *(_DWORD *)(a1 + 272) = 1;
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, &WPP_27554cd5659639419dce4f92de6452d1_Traceguids);
            }
            v21[1] = -1;
            v20 = *(_QWORD *)(a1 + 264);
            v21[0] = -4400000;
            (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _DWORD *, _QWORD, _DWORD))(*(_QWORD *)ThreadPool
                                                                                                 + 24LL))(
              ThreadPool,
              v20,
              v21,
              0LL,
              0);
            LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
          }
          break;
        case 2u:
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
          *(_DWORD *)(a1 + 324) = a2;
          if ( a2 < *(_DWORD *)(a1 + 328) )
            v11 = *(_DWORD *)(a1 + 272) != 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 280));
          if ( !v11 )
            CApplication::ProcessPendingSoundLevelNotification((CApplication *)a1);
          break;
        case 3u:
          EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
          *(_DWORD *)(a1 + 380) = a4;
          if ( a4 == 1 )
            v11 = *(_DWORD *)(a1 + 272) != 0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 336));
          if ( !v11 )
            CApplication::ProcessPendingPLMExemptionChange((CApplication *)a1);
          break;
        case 4u:
          Sleep(0xAu);
          break;
      }
      v6 >>= 3;
    }
    while ( v12 >= 8 );
  }
}
