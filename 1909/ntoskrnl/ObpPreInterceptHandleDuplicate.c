/*
 * XREFs of ObpPreInterceptHandleDuplicate @ 0x1406D129C
 * Callers:
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     ObCompleteObjectDuplication @ 0x140653AD0 (ObCompleteObjectDuplication.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObpCallPreOperationCallbacks @ 0x1405E4500 (ObpCallPreOperationCallbacks.c)
 */

__int64 __fastcall ObpPreInterceptHandleDuplicate(__int64 a1, char a2, int *a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int v10; // r8d
  __int64 v11; // rcx
  int v12; // r14d
  int v13; // r14d
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]
  _QWORD v18[5]; // [rsp+38h] [rbp-28h] BYREF

  memset(v18, 0, sizeof(v18));
  v10 = *a3;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v11 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v12 = *(_DWORD *)(v11 + 96);
  v18[3] = 0LL;
  v13 = v10 & v12;
  v18[4] = &v15;
  HIDWORD(v15) = v10;
  LODWORD(v15) = v10;
  HIDWORD(v18[0]) = a2 & 1;
  LODWORD(v18[0]) = 2;
  v18[1] = a1;
  v18[2] = v11;
  v16 = a4;
  v17 = a5;
  result = ObpCallPreOperationCallbacks((struct _EX_RUNDOWN_REF *)v11, (__int64)v18, a6);
  if ( (int)result >= 0 && !a2 )
    *a3 &= v13 | v15;
  return result;
}
