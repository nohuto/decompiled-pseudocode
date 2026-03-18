/*
 * XREFs of RtlpCopyExtendedContext @ 0x140016918
 * Callers:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 *     RtlpReadExtendedContext @ 0x1405E76E4 (RtlpReadExtendedContext.c)
 *     RtlpWriteExtendedContext @ 0x1406C9E54 (RtlpWriteExtendedContext.c)
 * Callees:
 *     RtlpCopyLegacyContext @ 0x1400169E0 (RtlpCopyLegacyContext.c)
 *     RtlpValidateContextFlags @ 0x140016F90 (RtlpValidateContextFlags.c)
 *     RtlpCopyXStateChunk @ 0x14012F1EC (RtlpCopyXStateChunk.c)
 */

__int64 __fastcall RtlpCopyExtendedContext(char a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  int v9; // ecx
  __int64 v10; // r10
  unsigned int v11; // r11d
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rdx
  _BYTE v18[24]; // [rsp+30h] [rbp-18h] BYREF

  result = RtlpValidateContextFlags(a4, v18);
  if ( (int)result >= 0 )
  {
    v12 = a5;
    v13 = a2;
    if ( v10 )
      v13 = v10;
    if ( a6 )
      v12 = a6;
    if ( (v18[0] & 1) != 0 )
    {
      v14 = *(int *)(v13 + 8);
      v15 = *(int *)(v12 + 8);
      if ( (_DWORD)v14 != (_DWORD)v15 || *(_DWORD *)(v13 + 12) < *(_DWORD *)(v12 + 12) )
        return 3221225485LL;
      v16 = a5 + v15;
      v17 = a2 + v14;
      LOBYTE(v14) = a1;
      RtlpCopyLegacyContext(v14, v17, v11, v16);
    }
    if ( (v18[0] & 2) == 0 )
      return 0LL;
    LOBYTE(v9) = a1;
    result = RtlpCopyXStateChunk(v9, a2, v13, a5, v12);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
