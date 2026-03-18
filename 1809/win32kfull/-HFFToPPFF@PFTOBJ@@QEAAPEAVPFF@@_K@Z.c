/*
 * XREFs of ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x1C025682C
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02A3E40 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall PFTOBJ::HFFToPPFF(PFTOBJ *this)
{
  __int64 v1; // r10
  __int64 v2; // r8
  struct PFF *i; // rcx
  struct PFF *result; // rax
  __int64 v5; // rdx
  int v6; // r8d
  unsigned int v7; // r9d

  v1 = *(_QWORD *)this;
  v2 = 0LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 24LL) )
  {
    do
    {
      for ( i = *(struct PFF **)(v1 + 8 * v2 + 40); ; i = (struct PFF *)*((_QWORD *)result + 1) )
      {
        result = SkipInvalidPff(i);
        if ( !result )
          break;
        if ( v5 == *((_QWORD *)result + 10) )
          return result;
      }
      v2 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v2 < v7 );
  }
  return 0LL;
}
