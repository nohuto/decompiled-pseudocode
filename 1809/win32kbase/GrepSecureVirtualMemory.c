/*
 * XREFs of GrepSecureVirtualMemory @ 0x1C00ABE90
 * Callers:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C006B224 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     EngAllocUserMemEx @ 0x1C008DD74 (EngAllocUserMemEx.c)
 *     EngSecureMem @ 0x1C0106BE0 (EngSecureMem.c)
 *     GdiProcessCallout @ 0x1C0108800 (GdiProcessCallout.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GrepSecureVirtualMemory(void *a1, SIZE_T a2, ULONG a3)
{
  if ( a2 )
    return MmSecureVirtualMemory(a1, a2, a3);
  else
    return 0LL;
}
