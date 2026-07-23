/*
 * XREFs of CmGetKCBCacheSecurity @ 0x1405D9A10
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1405D9920 (CmpGetSecurityCacheEntryForKcbStack.c)
 * Callees:
 *     CmEqualTrans @ 0x1405AA4E8 (CmEqualTrans.c)
 *     CmListGetPrevElement @ 0x1406C188C (CmListGetPrevElement.c)
 */

__int64 __fastcall CmGetKCBCacheSecurity(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rbp
  __int64 PrevElement; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 80);
  if ( !a2 )
    return *(_QWORD *)(a1 + 80);
  v7 = a1 + 200;
  v11 = 0LL;
  PrevElement = CmListGetPrevElement(a1 + 200, &v11, a3, a4);
  if ( !PrevElement )
    return v4;
  while ( !CmEqualTrans(*(_QWORD *)(PrevElement + 56), a2) || *(_DWORD *)(PrevElement + 68) != 9 )
  {
    PrevElement = CmListGetPrevElement(v7, &v11, v9, v10);
    if ( !PrevElement )
      return v4;
  }
  return *(_QWORD *)(PrevElement + 88);
}
