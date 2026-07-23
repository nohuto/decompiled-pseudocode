/*
 * XREFs of CmpCheckKeyNodeStackAccess @ 0x1407F5CA0
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1407F6014 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406CB250 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpGetSecurityCellForKeyNodeStack @ 0x1407F6638 (CmpGetSecurityCellForKeyNodeStack.c)
 */

__int64 __fastcall CmpCheckKeyNodeStackAccess(__int64 a1, KPROCESSOR_MODE a2, ACCESS_MASK a3, char a4)
{
  __int64 v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // edi
  unsigned int v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h] BYREF
  __int16 v13; // [rsp+2Ch] [rbp-1Ch]
  __int16 v14; // [rsp+2Eh] [rbp-1Ah]
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 0LL;
  v14 = 0;
  v12 = -1;
  v13 = 0;
  CmpGetSecurityCellForKeyNodeStack(a1, v15, &v11);
  v7 = v15[0];
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(v15[0] + 8LL))(v15[0], v11, &v12);
  v9 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(v8 + 20), a2, a3, a4);
  if ( v8 )
    (*(void (__fastcall **)(__int64, int *))(v7 + 16))(v7, &v12);
  return v9;
}
