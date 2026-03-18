/*
 * XREFs of ExpWnfGetPermanentDataStoreHandle @ 0x14071FB5C
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x140653EBC (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeletePermanentStateData @ 0x140918D3C (ExpWnfDeletePermanentStateData.c)
 * Callees:
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExpWnfGetPermanentDataStoreHandleByScopeId @ 0x140784980 (ExpWnfGetPermanentDataStoreHandleByScopeId.c)
 */

__int64 __fastcall ExpWnfGetPermanentDataStoreHandle(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _BOOL8 v6; // rdi
  __int64 v7; // rax
  __int64 result; // rax
  HANDLE Handle; // [rsp+40h] [rbp-18h]

  v6 = (unsigned int)(a2 - 2) <= 1;
  v7 = *(_QWORD *)(a1 + 8 * v6 + 64);
  if ( v7 )
  {
    *a4 = v7;
    return 0LL;
  }
  result = ExpWnfGetPermanentDataStoreHandleByScopeId(*(unsigned int *)(a1 + 16), a2, *(_QWORD *)(a1 + 24));
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v6 + 64), (signed __int64)Handle, 0LL) )
      ZwClose(Handle);
    *a4 = *(_QWORD *)(a1 + 8 * v6 + 64);
    return 0LL;
  }
  return result;
}
