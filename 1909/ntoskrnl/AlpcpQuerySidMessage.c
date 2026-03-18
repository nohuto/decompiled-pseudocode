/*
 * XREFs of AlpcpQuerySidMessage @ 0x140653D64
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140653770 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x140653CAC (AlpcpGetEffectiveTokenMessage.c)
 *     AlpcpQuerySidToken @ 0x140653E08 (AlpcpQuerySidToken.c)
 */

__int64 __fastcall AlpcpQuerySidMessage(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int SidToken; // ebx
  _BYTE v11[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  PVOID v13[10]; // [rsp+40h] [rbp-58h] BYREF

  memset(v13, 0, 0x48uLL);
  result = AlpcpGetEffectiveTokenMessage(a1, a2, &v12, (__int64)v13, v11);
  if ( (int)result >= 0 )
  {
    SidToken = AlpcpQuerySidToken(v12, a3, a4, a5);
    if ( v11[0] )
      ObfDereferenceObject(v13[2]);
    return SidToken;
  }
  return result;
}
