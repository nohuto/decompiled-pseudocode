/*
 * XREFs of sub_18006F754 @ 0x18006F754
 * Callers:
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006F560 (LdrUnloadAlternateResourceModuleEx.c)
 * Callees:
 *     <none>
 */

void *__fastcall sub_18006F754(unsigned int a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v1 = (unsigned int)dword_180164340;
  v2 = qword_180164338;
  if ( a1 < dword_180164340 - 1 )
  {
    v3 = (unsigned __int64)(unsigned int)(dword_180164340 - 1) << 6;
    v4 = (unsigned __int64)a1 << 6;
    *(_OWORD *)(v4 + qword_180164338) = *(_OWORD *)(v3 + qword_180164338);
    *(_OWORD *)(v4 + v2 + 16) = *(_OWORD *)(v3 + v2 + 16);
    *(_OWORD *)(v4 + v2 + 32) = *(_OWORD *)(v3 + v2 + 32);
    *(_OWORD *)(v4 + v2 + 48) = *(_OWORD *)(v3 + v2 + 48);
  }
  return memset((void *)((v1 << 6) + v2 - 64), 0, 0x40uLL);
}
