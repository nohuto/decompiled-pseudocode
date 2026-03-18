/*
 * XREFs of CmpKeyEnumStackFreeResumeContext @ 0x1408381C8
 * Callers:
 *     CmpDeleteKeyObject @ 0x140603C70 (CmpDeleteKeyObject.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14063DC74 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14066552C (CmpDelayDerefKeyControlBlock.c)
 */

void __fastcall CmpKeyEnumStackFreeResumeContext(PPRIVILEGE_SET Privileges, __int64 a2, char a3)
{
  ULONG *p_Attributes; // rdi
  __int64 v7; // rsi
  ULONG_PTR v8; // rcx

  if ( SLOWORD(Privileges->PrivilegeCount) >= 0 )
  {
    p_Attributes = &Privileges->Privilege[0].Attributes;
    v7 = (unsigned __int16)(LOWORD(Privileges->PrivilegeCount) + 1);
    do
    {
      v8 = *(_QWORD *)p_Attributes;
      if ( *(_QWORD *)p_Attributes )
      {
        if ( a3 )
          CmpDelayDerefKeyControlBlock(v8, a2);
        else
          CmpDereferenceKeyControlBlock(v8);
      }
      p_Attributes += 6;
      --v7;
    }
    while ( v7 );
  }
  CmSiFreeMemory(Privileges);
}
