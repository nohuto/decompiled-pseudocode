/*
 * XREFs of ?_FreeConfigList@CInputConfig@@AEAAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0053604
 * Callers:
 *     ?_CommitConfiguration@CInputConfig@@AEAAJXZ @ 0x1C0053754 (-_CommitConfiguration@CInputConfig@@AEAAJXZ.c)
 *     UnInitializeInputComponents @ 0x1C012EBF8 (UnInitializeInputComponents.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

void __fastcall CInputConfig::_FreeConfigList(CInputConfig *this, struct _SINGLE_LIST_ENTRY *a2)
{
  struct _SINGLE_LIST_ENTRY *i; // rbx

  for ( i = a2->Next; i; i = a2->Next )
  {
    a2->Next = i->Next;
    Win32FreePool((__int64)i[3].Next);
    Win32FreePool((__int64)i);
  }
}
