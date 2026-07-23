/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x1406CB1CC
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1405AC0AC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x1407F5A24 (CmpCheckKeyAccess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406CB250 (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  __int16 v7; // [rsp+34h] [rbp+Ch]
  __int16 v8; // [rsp+36h] [rbp+Eh]

  v8 = 0;
  v6 = -1;
  v7 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v6);
  if ( v3 )
  {
    v4 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(v3 + 20));
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v6);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
