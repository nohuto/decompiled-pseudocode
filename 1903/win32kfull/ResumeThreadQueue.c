/*
 * XREFs of ResumeThreadQueue @ 0x1C0124680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ResumeThreadQueue(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 480);
  if ( (result & 0x1000000) != 0 && (result & 1) == 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 424LL) = a2;
    if ( *(_DWORD *)(a1 + 1168) )
      *(_DWORD *)(a1 + 1168) = a2;
    result = *(_QWORD *)(a1 + 440);
    _InterlockedExchange(
      (volatile __int32 *)(result + 12),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    *(_DWORD *)(a1 + 1224) &= ~0x20u;
  }
  return result;
}
