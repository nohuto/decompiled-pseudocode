/*
 * XREFs of ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x1800259A4
 * Callers:
 *     PbmLaunchBackgroundTask @ 0x180021450 (PbmLaunchBackgroundTask.c)
 * Callees:
 *     WPP_SF_d @ 0x1800041E0 (WPP_SF_d.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000D630 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x18001CBBC (-FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z.c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x1800238D0 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionLaunchBackgroundTask(
        int a1,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        struct _GUID *a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  CApplicationManager *v9; // rcx
  int v10; // ebx
  struct CApplication *AppFromProcessId; // rax
  struct CApplication *v13; // rdi
  struct _GUID v14; // xmm6
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-40h] BYREF
  char v18; // [rsp+30h] [rbp-38h]

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !a4 )
  {
    v10 = -2147467261;
LABEL_3:
    *a4 = GUID_00000000_0000_0000_0000_000000000000;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, &WPP_0e5291d43ab738b4f1647aff6bbf1d9a_Traceguids, v10);
    }
    goto LABEL_7;
  }
  AppFromProcessId = CApplicationManager::FindAppFromProcessId(v9, a1);
  v13 = AppFromProcessId;
  if ( !AppFromProcessId )
  {
    v10 = -2147418113;
    goto LABEL_3;
  }
  v10 = DoLaunchBackgroundTask(AppFromProcessId, a2, a3, a4);
  if ( v10 < 0 )
    goto LABEL_3;
  v14 = *a4;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v13 + 32);
  v18 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v15 = (_QWORD *)*((_QWORD *)v13 + 9);
  while ( v15 )
  {
    v16 = v15[2];
    v15 = (_QWORD *)*v15;
    if ( *(_DWORD *)(v16 + 192) == a1 && !*(_DWORD *)(v16 + 448) )
    {
      *(struct _GUID *)(v16 + 552) = v14;
      break;
    }
  }
  if ( v18 )
    LeaveCriticalSection(lpCriticalSection);
LABEL_7:
  if ( v8 )
    LeaveCriticalSection(v8);
  return (unsigned int)v10;
}
