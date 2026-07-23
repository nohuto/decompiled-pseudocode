/*
 * XREFs of PopWriteHiberImage @ 0x14056B4C8
 * Callers:
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 * Callees:
 *     PopGetNextTable @ 0x1401442D0 (PopGetNextTable.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
 *     PopAddPagesToCompressedPageSet @ 0x14056BC20 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x14056BD44 (PopCountDataAsProduced.c)
 *     PopHiberCheckForDebugBreak @ 0x14056BFF8 (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall PopWriteHiberImage(ULONG_PTR BugCheckParameter3, char a2)
{
  __int64 v2; // r14
  int v3; // ebp
  __int64 v4; // rdi
  char v7; // r12
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-198h]
  _BYTE v10[16]; // [rsp+40h] [rbp-178h] BYREF
  _BYTE v11[24]; // [rsp+50h] [rbp-168h] BYREF
  __int64 v12; // [rsp+68h] [rbp-150h]
  _BYTE v13[128]; // [rsp+100h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter3 + 264);
  v3 = 0;
  v4 = 0LL;
  do
  {
    PopHiberCheckForDebugBreak();
    v7 = PopRequestWrite(BugCheckParameter3);
    if ( !v4 )
    {
      LOBYTE(v9) = a2;
      result = PopGetNextTable(BugCheckParameter3, (__int64)v10, (__int64)v13, (__int64)v11, v9, *(_QWORD *)(v2 + 8));
      v3 = result;
      if ( !result )
        continue;
      *(_QWORD *)(v2 + 56) += result;
      LOBYTE(v9) = a2;
      v4 = PopAddPagesToCompressedPageSet(BugCheckParameter3, v2, v10, v12, v9, result, PopCompressCallback);
    }
    result = PopCountDataAsProduced(v2, v4, v10, v13, v3, 1);
    if ( (_BYTE)result )
      v4 = 0LL;
  }
  while ( !v7 );
  return result;
}
