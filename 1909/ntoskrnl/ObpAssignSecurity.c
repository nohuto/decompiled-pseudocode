/*
 * XREFs of ObpAssignSecurity @ 0x1405C8F20
 * Callers:
 *     ObpInsertOrLocateNamedObject @ 0x1405C6208 (ObpInsertOrLocateNamedObject.c)
 *     ObAssignSecurity @ 0x1406F1700 (ObAssignSecurity.c)
 * Callees:
 *     SeAssignSecurityEx2 @ 0x14000ABF0 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14000AD40 (SeComputeAutoInheritByObjectTypeEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeDeassignSecurity @ 0x1406D1200 (SeDeassignSecurity.c)
 */

__int64 __fastcall ObpAssignSecurity(__int64 a1, __int64 a2, void *a3, POBJECT_TYPE a4, int a5, char a6)
{
  int v7; // r13d
  __int64 v9; // rdx
  void *v11; // rbx
  __int64 result; // rax
  int v13; // r14d
  __int64 v14; // rdx
  int v15; // esi
  int v16; // ebx
  int v17; // [rsp+40h] [rbp-30h]
  ULONG Index[2]; // [rsp+50h] [rbp-20h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-18h] BYREF
  void *v20; // [rsp+60h] [rbp-10h] BYREF
  int v21; // [rsp+B0h] [rbp+40h] BYREF
  void *v22; // [rsp+C0h] [rbp+50h]

  v22 = a3;
  Index[1] = 0;
  v7 = a2;
  SecurityDescriptor = 0LL;
  Index[0] = 8;
  v9 = *(_QWORD *)(a1 + 64);
  v11 = 0LL;
  v20 = 0LL;
  result = SeComputeAutoInheritByObjectTypeEx((__int64)a4, v9, a2, &v21, Index);
  if ( (int)result >= 0 )
  {
    v13 = a5 | v21;
    if ( a6 )
    {
      result = SeAssignSecurityEx2(
                 0,
                 *(_QWORD *)(a1 + 64),
                 (int)&v20,
                 0LL,
                 a4 == ObpDirectoryObjectType,
                 0,
                 0LL,
                 a1 + 32,
                 (__int64)&a4->TypeInfo.GenericMapping);
      if ( (int)result < 0 )
        return result;
      v11 = v20;
    }
    if ( v11 )
      LODWORD(v14) = (_DWORD)v11;
    else
      v14 = *(_QWORD *)(a1 + 64);
    v15 = SeAssignSecurityEx2(
            v7,
            v14,
            (int)&SecurityDescriptor,
            0LL,
            a4 == ObpDirectoryObjectType,
            v13,
            Index,
            a1 + 32,
            (__int64)&a4->TypeInfo.GenericMapping);
    if ( v15 < 0 )
    {
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      return (unsigned int)v15;
    }
    else
    {
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      LOBYTE(v17) = KeGetCurrentThread()->PreviousMode;
      v16 = a4->TypeInfo.SecurityProcedure(
              v22,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &a4->TypeInfo.GenericMapping,
              v17);
      if ( v16 < 0 )
        SeDeassignSecurity(&SecurityDescriptor);
      return (unsigned int)v16;
    }
  }
  return result;
}
