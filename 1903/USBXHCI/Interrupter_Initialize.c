/*
 * XREFs of Interrupter_Initialize @ 0x1C001EF0C
 * Callers:
 *     Interrupter_ControllerResetPostReset @ 0x1C001DFB8 (Interrupter_ControllerResetPostReset.c)
 *     Interrupter_D0Entry @ 0x1C001E020 (Interrupter_D0Entry.c)
 * Callees:
 *     memset @ 0x1C0008D80 (memset.c)
 */

_UNKNOWN **__fastcall Interrupter_Initialize(__int64 a1)
{
  _UNKNOWN **result; // rax
  __int64 i; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    result = *(_UNKNOWN ***)(a1 + 32);
    v4 = result[i];
    if ( v4 )
    {
      v5 = (_QWORD *)v4[20];
      if ( v5 != v4 + 20 )
      {
        do
        {
          memset((void *)v5[2], 0, *((unsigned int *)v5 + 10));
          v5 = (_QWORD *)*v5;
        }
        while ( v5 != v4 + 20 );
        v5 = (_QWORD *)v4[20];
      }
      v4[18] = v5;
      result = (_UNKNOWN **)v5[2];
      *((_DWORD *)v4 + 31) = 0;
      *((_DWORD *)v4 + 32) = 0;
      v4[17] = result;
      *((_DWORD *)v4 + 30) = 1;
    }
  }
  return result;
}
