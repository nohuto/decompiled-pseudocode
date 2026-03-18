/*
 * XREFs of FreeThreadBufferWithTag @ 0x1C005F270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeThreadBufferWithTag(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  _QWORD *v3; // rcx

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
    if ( (int)IsWin32FreePoolImplSupported() >= 0 )
      Win32FreePoolImpl(v1);
  }
}
