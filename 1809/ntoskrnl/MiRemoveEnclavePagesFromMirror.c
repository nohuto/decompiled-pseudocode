/*
 * XREFs of MiRemoveEnclavePagesFromMirror @ 0x14057D7F8
 * Callers:
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 * Callees:
 *     MiMirrorOmitPagesFromCopy @ 0x1401530FC (MiMirrorOmitPagesFromCopy.c)
 */

_QWORD *__fastcall MiRemoveEnclavePagesFromMirror(__int64 a1)
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
    MiMirrorOmitPagesFromCopy(a1, v3[3], v3[4]);
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
