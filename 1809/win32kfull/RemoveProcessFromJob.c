/*
 * XREFs of RemoveProcessFromJob @ 0x1C011C2A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall RemoveProcessFromJob(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // eax
  __int64 v4; // rdx

  v1 = *(_QWORD *)(a1 + 768);
  if ( !v1 )
    return 0LL;
  v3 = *(_DWORD *)(v1 + 28);
  v4 = 0LL;
  if ( !v3 )
    return 0LL;
  while ( a1 != *(_QWORD *)(*(_QWORD *)(v1 + 40) + 8 * v4) )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v3 )
      return 0LL;
  }
  *(_QWORD *)(a1 + 768) = 0LL;
  memmove(
    (void *)(*(_QWORD *)(v1 + 40) + 8 * v4),
    (const void *)(*(_QWORD *)(v1 + 40) + 8 * v4 + 8),
    8LL * (unsigned int)(*(_DWORD *)(v1 + 28) - v4 - 1));
  if ( (*(_DWORD *)(v1 + 28))-- == 1 )
  {
    Win32FreePool(*(_QWORD *)(v1 + 40));
    *(_QWORD *)(v1 + 40) = 0LL;
    *(_DWORD *)(v1 + 32) = 0;
  }
  return 1LL;
}
