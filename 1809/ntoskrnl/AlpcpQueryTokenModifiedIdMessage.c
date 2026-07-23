/*
 * XREFs of AlpcpQueryTokenModifiedIdMessage @ 0x14084B0C4
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140615880 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x1406B6AB8 (AlpcpGetEffectiveTokenMessage.c)
 *     SeGetTokenControlInformation @ 0x1408A2F5C (SeGetTokenControlInformation.c)
 */

__int64 __fastcall AlpcpQueryTokenModifiedIdMessage(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // ebx
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v9[5]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v10[16]; // [rsp+60h] [rbp-58h] BYREF
  PVOID Object; // [rsp+70h] [rbp-48h]
  char v12; // [rsp+D8h] [rbp+20h] BYREF

  if ( a4 >= 8 )
  {
    result = AlpcpGetEffectiveTokenMessage(a1, a2, &v8, (__int64)v10, &v12);
    v6 = result;
    if ( (int)result < 0 )
      return result;
    SeGetTokenControlInformation(v8, v9);
    if ( v12 )
      ObfDereferenceObject(Object);
  }
  else
  {
    memset(v9, 0, sizeof(v9));
    v6 = -1073741789;
  }
  if ( a5 )
    *a5 = 8;
  if ( v6 >= 0 )
    *a3 = v9[2];
  return (unsigned int)v6;
}
