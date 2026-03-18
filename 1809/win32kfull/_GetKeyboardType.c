/*
 * XREFs of _GetKeyboardType @ 0x1C01B9230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKeyboardType(int a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 result; // rax
  unsigned __int16 *v6; // r8
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int16 v9; // cx

  v1 = 0;
  if ( a1 )
  {
    v2 = a1 - 1;
    if ( !v2 )
    {
      v6 = (unsigned __int16 *)gpKbdNlsTbl;
      if ( gpKL )
      {
        v7 = *(_QWORD *)(gpKL + 56LL);
        if ( *(_QWORD *)(v7 + 48) )
          v6 = *(unsigned __int16 **)(v7 + 48);
        v8 = *(_DWORD *)(*(_QWORD *)(v7 + 32) + 100LL);
      }
      else
      {
        LOBYTE(v8) = HIBYTE(gKeyboardInfo[0]);
      }
      if ( v6 )
      {
        v9 = v6[1];
        if ( (v9 & 0x10) != 0 )
          return 0LL;
        if ( (v9 & 0x20) != 0 )
          return 2LL;
        v1 = *v6 << 8;
      }
      return v1 | v8 & 0xFu;
    }
    v3 = v2 - 1;
    if ( !v3 )
      return gKeyboardInfo[2];
    v4 = v3 - 2147483644;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( gpKL )
        {
          result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(gpKL + 48LL) + 32LL) + 100LL);
          if ( (_DWORD)result )
            return result;
        }
      }
      return 0LL;
    }
    if ( !gpKL )
      return 0LL;
    result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(gpKL + 48LL) + 32LL) + 96LL);
    if ( !(_DWORD)result || (_DWORD)result == 81 )
      return 0LL;
  }
  else
  {
    if ( !gpKL )
      return LOBYTE(gKeyboardInfo[0]);
    result = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(gpKL + 56LL) + 32LL) + 96LL);
    if ( !(_DWORD)result || (_DWORD)result == 81 )
      return LOBYTE(gKeyboardInfo[0]);
  }
  return result;
}
