/*
 * XREFs of ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C0051768
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C0051408 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C0185C0C (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C0051C20 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0051E7C (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C0051F7C (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C005205C (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0052EE8 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C0052F08 (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00A0D14 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C00A7BBC (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::_ConfigureInputSpace(CInputConfig *this, struct CInputSpace *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  CInputConfig *v8; // rax
  _QWORD *i; // rcx
  struct _LIST_ENTRY *v10; // rax
  CInputConfig *v11; // rcx
  char *v12; // rax
  char *v13; // rdi
  CInputConfig *v14; // rcx
  __int64 v15; // rcx
  CInputConfig **v16; // rax
  CInputConfig *v17; // rcx
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v20[2]; // [rsp+20h] [rbp-28h] BYREF
  CInputConfig *v21; // [rsp+30h] [rbp-18h]
  _QWORD *v22; // [rsp+38h] [rbp-10h]

  v7 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v20[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v8 = *(CInputConfig **)this;
  v20[1] = this;
  v21 = v8;
  for ( i = *(_QWORD **)v8; ; i = (_QWORD *)*i )
  {
    v22 = i;
    if ( v8 == this || v8 == (CInputConfig *)-16LL )
      break;
    if ( *((_DWORD *)v8 + 4) == *(_DWORD *)a2 && *((_DWORD *)v8 + 5) == *((_DWORD *)a2 + 1) )
    {
      v10 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v20);
      CInputConfig::_FreeInputSpace(v11, v10);
      break;
    }
    v8 = (CInputConfig *)i;
    v21 = (CInputConfig *)i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)a2 + 299) || *((_BYTE *)a2 + 1192) )
  {
    v12 = (char *)Win32AllocPoolZInit(0x4D0uLL, 1866690121LL);
    v13 = v12;
    if ( !v12 )
      return (unsigned int)-1073741801;
    CInputSpace::Reset((CInputSpace *)(v12 + 16), a2);
    CInputConfig::_ProcessInputSpace(v14, (struct CInputSpace *)(v13 + 16));
    v16 = (CInputConfig **)*((_QWORD *)this + 1);
    if ( *v16 != this )
      __fastfail(3u);
    *(_QWORD *)v13 = this;
    *((_QWORD *)v13 + 1) = v16;
    *v16 = (CInputConfig *)v13;
    *((_QWORD *)this + 1) = v13;
    if ( !v13[1208] )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
      *((_QWORD *)v13 + 4) = CurrentProcessWin32Process;
      *(_DWORD *)(CurrentProcessWin32Process + 812) |= 0x4000000u;
    }
  }
  CInputConfig::_EnsureInputSpace(this);
  CInputConfig::_FindDefaultInputSpace(v17);
  InputConfig::TraceCurrentConfig();
  CInputConfig::CMouseConfig::FindInputSpace((CInputConfig *)((char *)this + 16));
  return v7;
}
