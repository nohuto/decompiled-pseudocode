/*
 * XREFs of ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180013AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x180013B64 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18001FC48 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800B14F8 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 */

void __fastcall CAudioSrv::OnDeviceWorkItem(struct _TP_CALLBACK_INSTANCE *a1, CAudioSrv *a2, struct _TP_WORK *a3)
{
  __int64 v4; // rbx
  DWORD v5; // eax
  const unsigned __int16 *v6; // rcx
  struct _tagpropertykey lpCriticalSection[2]; // [rsp+30h] [rbp-28h] BYREF

  lpCriticalSection[0].fmtid.Data4[0] = 0;
  *(_QWORD *)&lpCriticalSection[0].fmtid.Data1 = (char *)a2 + 112;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)lpCriticalSection);
  v4 = ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((char *)a2 + 152);
  if ( lpCriticalSection[0].fmtid.Data4[0] )
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection[0].fmtid.Data1);
  switch ( *(_DWORD *)(v4 + 16) )
  {
    case 1:
    case 2:
    case 3:
      CAudioSrv::ProcessDeviceInternal(a2, *(const unsigned __int16 **)(v4 + 8));
      break;
    case 4:
      v5 = *(_DWORD *)(v4 + 48);
      v6 = *(const unsigned __int16 **)(v4 + 8);
      lpCriticalSection[0].fmtid = *(GUID *)(v4 + 32);
      lpCriticalSection[0].pid = v5;
      CPolicyConfig::ProcessPropertyChange(v6, lpCriticalSection);
      break;
    case 5:
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 368LL))(
        g_PolicyManager,
        *(_QWORD *)(v4 + 8),
        *(unsigned int *)(v4 + 20),
        *(unsigned int *)(v4 + 24));
      break;
  }
  (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
}
