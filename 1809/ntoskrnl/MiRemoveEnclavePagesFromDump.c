/*
 * XREFs of MiRemoveEnclavePagesFromDump @ 0x1402BE938
 * Callers:
 *     MmGetDumpRange @ 0x1402AE4F8 (MmGetDumpRange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

_QWORD *__fastcall MiRemoveEnclavePagesFromDump(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  result = (_QWORD *)qword_14043B248;
  v3 = 0LL;
  while ( result )
  {
    v3 = result;
    result = (_QWORD *)*result;
  }
  while ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(a1 + 8))(a1, v3[3], v3[4], 2LL);
    v4 = (_QWORD *)v3[1];
    result = v3;
    if ( v4 )
    {
      v3 = (_QWORD *)v3[1];
      v5 = (_QWORD *)*v4;
      if ( v5 )
      {
        do
        {
          result = (_QWORD *)*v5;
          v3 = v5;
          v5 = result;
        }
        while ( result );
      }
    }
    else
    {
      while ( 1 )
      {
        v3 = (_QWORD *)(v3[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v3 || (_QWORD *)*v3 == result )
          break;
        result = v3;
      }
    }
  }
  return result;
}
