/*
 * XREFs of ?OnDeviceWorkItem@CAudioSrv@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180026690
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z @ 0x18000A4E8 (-ProcessPropertyChange@CPolicyConfig@@SAXPEBGU_tagpropertykey@@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ @ 0x180049E1C (-RemoveAll@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z @ 0x1800BFD68 (-ProcessDeviceInternal@CAudioSrv@@AEAAXPEBG@Z.c)
 */

void __fastcall CAudioSrv::OnDeviceWorkItem(struct _TP_CALLBACK_INSTANCE *a1, CAudioSrv *a2, struct _TP_WORK *a3)
{
  __int64 *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  bool v7; // zf
  DWORD v8; // eax
  const unsigned __int16 *v9; // rcx
  struct _tagpropertykey lpCriticalSection[2]; // [rsp+30h] [rbp-28h] BYREF

  lpCriticalSection[0].fmtid.Data4[0] = 0;
  *(_QWORD *)&lpCriticalSection[0].fmtid.Data1 = (char *)a2 + 112;
  ATL::CCritSecLock::Lock((LPCRITICAL_SECTION *)lpCriticalSection);
  v4 = (__int64 *)*((_QWORD *)a2 + 19);
  if ( !v4 )
    ATL::AtlThrowImpl(-2147467259);
  v5 = *v4;
  v6 = v4[2];
  *((_QWORD *)a2 + 19) = *v4;
  if ( v5 )
    *(_QWORD *)(v5 + 8) = 0LL;
  else
    *((_QWORD *)a2 + 20) = 0LL;
  *v4 = *((_QWORD *)a2 + 23);
  v7 = (*((_QWORD *)a2 + 21))-- == 1LL;
  *((_QWORD *)a2 + 23) = v4;
  if ( v7 )
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::RemoveAll();
  if ( lpCriticalSection[0].fmtid.Data4[0] )
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)&lpCriticalSection[0].fmtid.Data1);
  switch ( *(_DWORD *)(v6 + 16) )
  {
    case 1:
    case 2:
    case 3:
      CAudioSrv::ProcessDeviceInternal(a2, *(const unsigned __int16 **)(v6 + 8));
      break;
    case 4:
      v8 = *(_DWORD *)(v6 + 48);
      v9 = *(const unsigned __int16 **)(v6 + 8);
      lpCriticalSection[0].fmtid = *(GUID *)(v6 + 32);
      lpCriticalSection[0].pid = v8;
      CPolicyConfig::ProcessPropertyChange(v9, lpCriticalSection);
      break;
    case 5:
      (*(void (__fastcall **)(struct IAudioPolicyManager *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_PolicyManager + 368LL))(
        g_PolicyManager,
        *(_QWORD *)(v6 + 8),
        *(unsigned int *)(v6 + 20),
        *(unsigned int *)(v6 + 24));
      break;
  }
  (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
}
