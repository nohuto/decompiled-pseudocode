/*
 * XREFs of CmpLoadManufacturingModeNode @ 0x1409F4DD4
 * Callers:
 *     CmpLoadManufacturingProfileNode @ 0x1409F4EC4 (CmpLoadManufacturingProfileNode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByName @ 0x14073E2CC (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadManufacturingModeNode(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned int SubKeyByName; // edi
  __int64 v9; // rax
  unsigned int v10; // edi
  __int64 v11; // rax
  bool result; // al
  _DWORD v13[6]; // [rsp+20h] [rbp-18h] BYREF
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+44h] [rbp+Ch]

  v13[0] = -1;
  v14 = -1;
  v13[1] = 0;
  v15 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v14);
  result = 0;
  if ( v7 )
  {
    SubKeyByName = CmpFindSubKeyByName(a1, v7, (__int64)&CmpControlString);
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v14);
    if ( SubKeyByName != -1 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, SubKeyByName, v13);
      if ( v9 )
      {
        v10 = CmpFindSubKeyByName(a1, v9, (__int64)L"\"$");
        (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v13);
        if ( v10 != -1 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, v10, a4);
          *a3 = v11;
          if ( v11 )
            return 1;
        }
      }
    }
  }
  return result;
}
