/*
 * XREFs of ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C003DCF0
 * Callers:
 *     ?_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ @ 0x1C003D900 (-_CreateLegacyInputSpace@CInputConfig@@AEAAJXZ.c)
 *     ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01534CC (-ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     ?_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z @ 0x1C003C024 (-_ProcessInputSpace@CInputConfig@@AEAAXPEAUCInputSpace@@@Z.c)
 *     ?_FindDefaultInputSpace@CInputConfig@@AEAAXXZ @ 0x1C003C2C8 (-_FindDefaultInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003C3C4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x1C003C484 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C003C578 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?TraceCurrentConfig@InputConfig@@SAXXZ @ 0x1C003C778 (-TraceCurrentConfig@InputConfig@@SAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0041154 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?Reset@CInputSpace@@QEAAXPEAU1@@Z @ 0x1C0041174 (-Reset@CInputSpace@@QEAAXPEAU1@@Z.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0094B34 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?InputSpaceIterator@CInputConfig@@QEAA?AVIter@1@XZ @ 0x1C00AD83C (-InputSpaceIterator@CInputConfig@@QEAA-AVIter@1@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CInputConfig::_ConfigureInputSpace(CInputConfig ***this, struct CInputSpace *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  struct _LIST_ENTRY *v10; // rax
  CInputConfig *v11; // rcx
  char *v12; // rax
  char *v13; // rdi
  CInputConfig *v14; // rcx
  __int64 v15; // rcx
  CInputConfig **v16; // rax
  __int64 CurrentProcessWin32Process; // rax
  struct CEResource *v18; // rdx
  CInputConfig *v19; // rcx
  struct CEResource *v20; // rdx
  __int64 v21; // rcx
  struct CEResource *v22; // rdx
  _QWORD v24[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v25; // [rsp+30h] [rbp-18h]
  _QWORD *v26; // [rsp+38h] [rbp-10h]

  v7 = 0;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  CInputConfig::InputSpaceIterator(this, v24);
  v8 = v26;
  v9 = v25;
  while ( v9 != (_QWORD *)v24[1] && v9 != (_QWORD *)-16LL )
  {
    if ( *((_DWORD *)v9 + 4) == *(_DWORD *)a2 && *((_DWORD *)v9 + 5) == *((_DWORD *)a2 + 1) )
    {
      v10 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v24);
      CInputConfig::_FreeInputSpace(v11, v10);
      break;
    }
    v9 = v8;
    v25 = v8;
    v8 = (_QWORD *)*v8;
    v26 = v8;
  }
  ExReleaseResourceLite(*(PERESOURCE *)v24[0]);
  KeLeaveCriticalRegion();
  if ( !*((_DWORD *)a2 + 299) && !*((_BYTE *)a2 + 1192) )
    goto LABEL_18;
  v12 = (char *)Win32AllocPoolZInit(0x4D0uLL, 0x6F436E49u);
  v13 = v12;
  if ( v12 )
  {
    CInputSpace::Reset((CInputSpace *)(v12 + 16), a2);
    CInputConfig::_ProcessInputSpace(v14, (struct CInputSpace *)(v13 + 16));
    v16 = this[1];
    if ( *v16 != (CInputConfig *)this )
      __fastfail(3u);
    *(_QWORD *)v13 = this;
    *((_QWORD *)v13 + 1) = v16;
    *v16 = (CInputConfig *)v13;
    this[1] = (CInputConfig **)v13;
    if ( !v13[1208] )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15);
      *((_QWORD *)v13 + 4) = CurrentProcessWin32Process;
      *(_DWORD *)(CurrentProcessWin32Process + 820) |= 0x2000000u;
    }
LABEL_18:
    CInputConfig::_EnsureInputSpace((CInputConfig *)this);
    CInputConfig::_FindDefaultInputSpace(v19, v18);
    InputConfig::TraceCurrentConfig(v21, v20);
    CInputConfig::CMouseConfig::FindInputSpace((CInputConfig::CMouseConfig *)(this + 2), v22);
    InputConfig::Broadcast();
    return v7;
  }
  return (unsigned int)-1073741801;
}
