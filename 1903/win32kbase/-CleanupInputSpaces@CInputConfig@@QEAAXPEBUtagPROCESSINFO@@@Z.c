/*
 * XREFs of ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C0187CEC
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C006432C (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0064364 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0065814 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0067758 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::CleanupInputSpaces(CInputConfig *this, const struct tagPROCESSINFO *a2)
{
  CInputConfig *v2; // rdi
  CInputConfig *v4; // rax
  _QWORD *i; // rbx
  _QWORD **v6; // rax
  struct _LIST_ENTRY *v7; // rax
  CInputConfig *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  CInputConfig *v11; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  CInputConfig *v13; // [rsp+30h] [rbp-18h]
  _QWORD *v14; // [rsp+38h] [rbp-10h]

  v2 = gpInputConfig;
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(CInputConfig::slock, 1u);
  v12[0] = &CInputConfig::slock;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
  v4 = *(CInputConfig **)v2;
  v12[1] = v2;
  v13 = v4;
  for ( i = *(_QWORD **)v4; ; i = (_QWORD *)*i )
  {
    v14 = i;
    if ( v4 == v2 )
      break;
    v6 = (_QWORD **)((char *)v4 + 16);
    if ( !v6 )
      break;
    if ( v6[2] == (_QWORD *)a2 )
    {
      v7 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v12);
      CInputConfig::_FreeInputSpace(v8, v7);
    }
    v4 = (CInputConfig *)i;
    v13 = (CInputConfig *)i;
  }
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_EnsureInputSpace(v2, v9, v10);
  ExReleaseResourceLite(CInputConfig::slock);
  KeLeaveCriticalRegion();
  CInputConfig::_NotifyExternalComponents(v11);
}
