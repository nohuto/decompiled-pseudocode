/*
 * XREFs of PopCompressHiberBlocks @ 0x14056BB70
 * Callers:
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 * Callees:
 *     PopGetNextTable @ 0x1401442D0 (PopGetNextTable.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopAddPagesToCompressedPageSet @ 0x14056BC20 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x14056BD44 (PopCountDataAsProduced.c)
 */

__int64 __fastcall PopCompressHiberBlocks(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-188h]
  int v11; // [rsp+20h] [rbp-188h]
  _BYTE v12[16]; // [rsp+40h] [rbp-168h] BYREF
  _BYTE v13[24]; // [rsp+50h] [rbp-158h] BYREF
  __int64 v14; // [rsp+68h] [rbp-140h]
  _BYTE v15[128]; // [rsp+100h] [rbp-A8h] BYREF

  while ( 1 )
  {
    LOBYTE(v10) = a3;
    result = PopGetNextTable(a1, (__int64)v12, (__int64)v15, (__int64)v13, v10, *(_QWORD *)(a2 + 8));
    v7 = result;
    if ( !result )
      break;
    v8 = v14;
    *(_QWORD *)(a2 + 56) += result;
    LOBYTE(v11) = a3;
    v9 = PopAddPagesToCompressedPageSet(a1, a2, v12, v8, v11, result, 0LL);
    PopCountDataAsProduced(a2, v9, v12, v15, v7, 0);
  }
  return result;
}
