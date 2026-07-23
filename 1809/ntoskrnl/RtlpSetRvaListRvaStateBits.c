/*
 * XREFs of RtlpSetRvaListRvaStateBits @ 0x1406BD27C
 * Callers:
 *     RtlpCompressRvaList @ 0x1405F3F20 (RtlpCompressRvaList.c)
 * Callees:
 *     <none>
 */

signed __int64 *__fastcall RtlpSetRvaListRvaStateBits(__int64 a1, int a2, signed __int32 a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // r8d
  __int64 v5; // rdx
  signed __int64 *result; // rax
  signed __int32 v7; // [rsp+18h] [rbp+18h] BYREF

  v3 = 0;
  v7 = a3;
  if ( a3 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    if ( v4 > 1 )
    {
      v5 = v4 * a2;
      do
      {
        result = (signed __int64 *)&v7;
        if ( _bittest(&v7, v3) )
        {
          result = *(signed __int64 **)(a1 + 40);
          _bittestandset64(result, v5 + v3);
        }
        ++v3;
      }
      while ( v3 < *(_DWORD *)(a1 + 8) );
    }
  }
  return result;
}
