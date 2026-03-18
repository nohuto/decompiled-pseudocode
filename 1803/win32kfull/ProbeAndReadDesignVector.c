/*
 * XREFs of ProbeAndReadDesignVector @ 0x1C028059C
 * Callers:
 *     NtGdiAddFontResourceW @ 0x1C00F0900 (NtGdiAddFontResourceW.c)
 *     NtGdiRemoveFontResourceW @ 0x1C0280090 (NtGdiRemoveFontResourceW.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

__int64 __fastcall ProbeAndReadDesignVector(__int64 a1, ULONG64 a2)
{
  _QWORD *v2; // rax
  unsigned int v3; // eax
  unsigned int v5; // ebx
  const void *v6; // rdx
  void *v7; // rcx

  v2 = (_QWORD *)a2;
  if ( a2 >= MmUserProbeAddress )
    v2 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)a1 = *v2;
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 > 0x10 )
    return 0LL;
  v5 = 4 * v3 + 8;
  if ( v3 )
  {
    v6 = (const void *)(a2 + 8);
    v7 = (void *)(a1 + 8);
    if ( (unsigned __int64)v6 >= MmUserProbeAddress )
      v6 = (const void *)MmUserProbeAddress;
    memmove(v7, v6, 4 * v3);
  }
  return v5;
}
