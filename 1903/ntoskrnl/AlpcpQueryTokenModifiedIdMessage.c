/*
 * XREFs of AlpcpQueryTokenModifiedIdMessage @ 0x140885344
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x14063FC20 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14064015C (AlpcpGetEffectiveTokenMessage.c)
 *     SeGetTokenControlInformation @ 0x1408E0614 (SeGetTokenControlInformation.c)
 */

__int64 __fastcall AlpcpQueryTokenModifiedIdMessage(__int64 a1, __int64 a2, _QWORD *a3, unsigned int a4, _DWORD *a5)
{
  int v9; // ebx
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v12[5]; // [rsp+38h] [rbp-80h] BYREF
  PVOID v13[10]; // [rsp+60h] [rbp-58h] BYREF
  char v14; // [rsp+D8h] [rbp+20h] BYREF

  memset(v13, 0, 0x48uLL);
  memset(v12, 0, sizeof(v12));
  if ( a4 >= 8 )
  {
    result = AlpcpGetEffectiveTokenMessage(a1, a2, &v11, (__int64)v13, &v14);
    v9 = result;
    if ( (int)result < 0 )
      return result;
    SeGetTokenControlInformation(v11, v12);
    if ( v14 )
      ObfDereferenceObject(v13[2]);
  }
  else
  {
    v9 = -1073741789;
  }
  if ( a5 )
    *a5 = 8;
  if ( v9 >= 0 )
    *a3 = v12[2];
  return (unsigned int)v9;
}
