/*
 * XREFs of ?ConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1C01534CC
 * Callers:
 *     NtConfigureInputSpace @ 0x1C00ECB10 (NtConfigureInputSpace.c)
 * Callees:
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003C3C4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z @ 0x1C003DCF0 (-_ConfigureInputSpace@CInputConfig@@AEAAJPEAUCInputSpace@@@Z.c)
 *     ?_NotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1C0041284 (-_NotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     ??0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD7F8 (--0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z.c)
 */

__int64 __fastcall CInputConfig::ConfigureInputSpace(PERESOURCE *this, struct CInputSpace *a2)
{
  CInputConfig *v2; // rbx
  CInputConfig *v4; // rcx
  int v5; // ebx
  CInputConfig *v6; // rcx
  PERESOURCE *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  v2 = gpInputConfig;
  CEResourceLockExclusive::CEResourceLockExclusive((CEResourceLockExclusive *)&v8, a2);
  if ( *((_BYTE *)v2 + 1248) )
  {
    *((_BYTE *)v2 + 1248) = 0;
    while ( *(CInputConfig **)v2 != v2 )
      CInputConfig::_FreeInputSpace(v4, *(struct _LIST_ENTRY **)v2);
  }
  v5 = CInputConfig::_ConfigureInputSpace((CInputConfig ***)v2, a2);
  CEResourceLockExclusive::~CEResourceLockExclusive(&v8);
  if ( v5 < 0 )
    return (unsigned int)v5;
  CInputConfig::_NotifyExternalComponents(v6);
  return 0LL;
}
