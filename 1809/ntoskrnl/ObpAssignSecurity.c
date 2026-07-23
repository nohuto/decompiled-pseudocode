/*
 * XREFs of ObpAssignSecurity @ 0x1405CBFE8
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405C95A8 (ObpInsertOrLocateNamedObject.c)
 *     ObAssignSecurity @ 0x140710050 (ObAssignSecurity.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x1400A8E70 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1400A8FB0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeDeassignSecurity @ 0x1406AEE30 (SeDeassignSecurity.c)
 */

__int64 __fastcall ObpAssignSecurity(__int64 a1, __int64 a2, void *a3, POBJECT_TYPE a4, int a5, char a6)
{
  int v8; // r12d
  __int64 v10; // rdx
  void *v12; // rbx
  __int64 result; // rax
  int v14; // edi
  __int64 v15; // rdx
  int v16; // edi
  int v17; // ebx
  int v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  void *v21; // [rsp+60h] [rbp-10h] BYREF
  int v22; // [rsp+A0h] [rbp+30h] BYREF

  v19 = 8LL;
  v8 = a2;
  SecurityDescriptor = 0LL;
  v10 = *(_QWORD *)(a1 + 64);
  v12 = 0LL;
  v21 = 0LL;
  result = SeComputeAutoInheritByObjectTypeEx((__int64)a4, v10, a2, &v22, &v19);
  if ( (int)result >= 0 )
  {
    v14 = a5 | v22;
    if ( a6 )
    {
      result = SeAssignSecurityEx2(
                 0,
                 *(_QWORD *)(a1 + 64),
                 (int)&v21,
                 0LL,
                 a4 == ObpDirectoryObjectType,
                 0,
                 0LL,
                 a1 + 32,
                 (__int64)&a4->TypeInfo.GenericMapping);
      if ( (int)result < 0 )
        return result;
      v12 = v21;
    }
    if ( v12 )
      LODWORD(v15) = (_DWORD)v12;
    else
      v15 = *(_QWORD *)(a1 + 64);
    v16 = SeAssignSecurityEx2(
            v8,
            v15,
            (int)&SecurityDescriptor,
            0LL,
            a4 == ObpDirectoryObjectType,
            v14,
            &v19,
            a1 + 32,
            (__int64)&a4->TypeInfo.GenericMapping);
    if ( v16 < 0 )
    {
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      return (unsigned int)v16;
    }
    else
    {
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      LOBYTE(v18) = KeGetCurrentThread()->PreviousMode;
      v17 = a4->TypeInfo.SecurityProcedure(
              a3,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &a4->TypeInfo.GenericMapping,
              v18);
      if ( v17 < 0 )
        SeDeassignSecurity(&SecurityDescriptor);
      return (unsigned int)v17;
    }
  }
  return result;
}
