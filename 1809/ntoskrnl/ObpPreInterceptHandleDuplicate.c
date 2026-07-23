/*
 * XREFs of ObpPreInterceptHandleDuplicate @ 0x1406AF8CC
 * Callers:
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x140613FA0 (ObCompleteObjectDuplication.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ObpCallPreOperationCallbacks @ 0x140638100 (ObpCallPreOperationCallbacks.c)
 */

__int64 __fastcall ObpPreInterceptHandleDuplicate(
        __int64 a1,
        unsigned __int8 a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  int v6; // ebx
  __int64 v11; // rdi
  int v12; // r12d
  __int64 result; // rax
  _DWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-30h]
  _QWORD v17[5]; // [rsp+38h] [rbp-28h] BYREF

  v6 = *a3;
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v12 = *a3 & *(_DWORD *)(v11 + 96);
  memset(v17, 0, sizeof(v17));
  v17[3] = 0LL;
  LODWORD(v17[0]) = 2;
  v17[4] = v14;
  v17[1] = a1;
  v17[2] = v11;
  HIDWORD(v17[0]) ^= (BYTE4(v17[0]) ^ a2) & 1;
  v16 = a5;
  v14[1] = v6;
  v14[0] = v6;
  v15 = a4;
  result = ObpCallPreOperationCallbacks(v11, (__int64)v17, a6);
  if ( (int)result >= 0 && !a2 )
    *a3 &= v12 | v14[0];
  return result;
}
