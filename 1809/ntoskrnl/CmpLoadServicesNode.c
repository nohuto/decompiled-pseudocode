/*
 * XREFs of CmpLoadServicesNode @ 0x1409CDF10
 * Callers:
 *     CmpFindDrivers @ 0x1409CF508 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByName @ 0x14073E2CC (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadServicesNode(__int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v7; // rax
  unsigned int SubKeyByName; // edi
  __int64 v9; // rax
  bool result; // al
  int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v11 = -1;
  v12 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v11);
  result = 0;
  if ( v7 )
  {
    SubKeyByName = CmpFindSubKeyByName(a1, v7, (__int64)&CmpServicesString);
    (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
    if ( SubKeyByName != -1 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 8))(a1, SubKeyByName, a4);
      *a3 = v9;
      if ( v9 )
        return 1;
    }
  }
  return result;
}
