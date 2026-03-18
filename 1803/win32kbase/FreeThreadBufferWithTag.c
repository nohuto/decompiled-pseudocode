/*
 * XREFs of FreeThreadBufferWithTag @ 0x1C005AB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeThreadBufferWithTag(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rcx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 - 32);
  if ( a1 != 32 )
  {
    KeEnterCriticalRegion();
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    v1[1] = v1;
    *v1 = v1;
    KeLeaveCriticalRegion();
  }
  result = IsWin32FreePoolImplSupported();
  if ( (int)result >= 0 )
    return Win32FreePoolImpl(v1);
  return result;
}
