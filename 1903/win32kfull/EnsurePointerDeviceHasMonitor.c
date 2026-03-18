/*
 * XREFs of EnsurePointerDeviceHasMonitor @ 0x1C01EF520
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C012CF3C (_GetPointerDeviceRects.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EnsurePointerDeviceHasMonitor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  int v3; // eax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  v3 = *(_DWORD *)(v1 + 1320);
  if ( !v3 )
    return 1;
  if ( !*(_QWORD *)(v1 + 1328) )
  {
    RIMFindMonitorForDigitizer(*(_QWORD *)(a1 + 16), a1, 1LL, 0LL);
    v3 = *(_DWORD *)(v1 + 1320);
  }
  if ( !v3 || *(_QWORD *)(v1 + 1328) )
    return 1;
  return v2;
}
