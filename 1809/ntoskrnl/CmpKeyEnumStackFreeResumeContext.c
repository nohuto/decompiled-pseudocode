/*
 * XREFs of CmpKeyEnumStackFreeResumeContext @ 0x1408009D8
 * Callers:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1405AE310 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpDeleteKeyObject @ 0x140640520 (CmpDeleteKeyObject.c)
 *     CmpEnumerateLayeredKey @ 0x1407F0F80 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1405D5264 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406451C0 (CmpDereferenceKeyControlBlock.c)
 */

void __fastcall CmpKeyEnumStackFreeResumeContext(PPRIVILEGE_SET Privileges, char a2)
{
  ULONG *p_Attributes; // rdi
  __int64 v5; // rsi
  ULONG_PTR v6; // rcx

  if ( SLOWORD(Privileges->PrivilegeCount) >= 0 )
  {
    p_Attributes = &Privileges->Privilege[0].Attributes;
    v5 = (unsigned __int16)(LOWORD(Privileges->PrivilegeCount) + 1);
    do
    {
      v6 = *(_QWORD *)p_Attributes;
      if ( *(_QWORD *)p_Attributes )
      {
        if ( a2 )
          CmpDelayDerefKeyControlBlock(v6);
        else
          CmpDereferenceKeyControlBlock(v6);
      }
      p_Attributes += 6;
      --v5;
    }
    while ( v5 );
  }
  CmSiFreeMemory(Privileges);
}
