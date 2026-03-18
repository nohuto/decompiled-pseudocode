/*
 * XREFs of ?CleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1C015341C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003C3C4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1C0041154 (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0041284 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0094B34 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD190 (--0CEResourceLockShared@@QEAA@AEAUCEResource@@@Z.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     ??0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD7F8 (--0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z.c)
 */

void __fastcall CInputConfig::CleanupInputSpaces(PERESOURCE *this, const struct tagPROCESSINFO *a2)
{
  PERESOURCE *v2; // rdi
  struct CEResource *v4; // rdx
  PERESOURCE v5; // rax
  struct _ERESOURCE *i; // rbx
  POWNER_ENTRY *p_OwnerTable; // rax
  struct _LIST_ENTRY *v8; // rax
  CInputConfig *v9; // rcx
  CInputConfig *v10; // rcx
  PERESOURCE *v11[2]; // [rsp+20h] [rbp-28h] BYREF
  PERESOURCE v12; // [rsp+30h] [rbp-18h]
  struct _ERESOURCE *v13; // [rsp+38h] [rbp-10h]
  PERESOURCE *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = this;
  v2 = (PERESOURCE *)gpInputConfig;
  CEResourceLockExclusive::CEResourceLockExclusive((CEResourceLockExclusive *)&v14, a2);
  CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)v11, v4);
  v5 = *v2;
  v11[1] = v2;
  v12 = v5;
  for ( i = (struct _ERESOURCE *)v5->SystemResourcesList.Flink; ; i = (struct _ERESOURCE *)i->SystemResourcesList.Flink )
  {
    v13 = i;
    if ( v5 == (PERESOURCE)v2 )
      break;
    p_OwnerTable = &v5->OwnerTable;
    if ( !p_OwnerTable )
      break;
    if ( p_OwnerTable[2] == (POWNER_ENTRY)a2 )
    {
      v8 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v11);
      CInputConfig::_FreeInputSpace(v9, v8);
    }
    v5 = i;
    v12 = i;
  }
  CEResourceLockExclusive::~CEResourceLockExclusive(v11);
  CInputConfig::_EnsureInputSpace((CInputConfig *)v2);
  CEResourceLockExclusive::~CEResourceLockExclusive(&v14);
  CInputConfig::_NotifyExternalComponents(v10);
}
