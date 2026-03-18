/*
 * XREFs of FsRtlpDoBoost @ 0x140104140
 * Callers:
 *     FsRtlpModifyThreadPriorities @ 0x140104020 (FsRtlpModifyThreadPriorities.c)
 * Callees:
 *     KeSetPriorityBoost @ 0x140013F90 (KeSetPriorityBoost.c)
 *     PsBoostThreadIoEx @ 0x14003DD10 (PsBoostThreadIoEx.c)
 *     IoBoostThreadIoPriority @ 0x1400EB18C (IoBoostThreadIoPriority.c)
 */

void __fastcall FsRtlpDoBoost(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, void *a5)
{
  bool v5; // bl
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned __int8 v12; // al

  v5 = 0;
  if ( (*(_DWORD *)(a1 + 1760) & 0xE00u) < 0x400 )
    v5 = (*a4 & 0x20) == 0;
  v9 = *(unsigned __int8 *)(a2 + 195);
  v10 = (unsigned __int8)*a3;
  v11 = 15;
  if ( (unsigned __int8)v9 < 0xFu )
    v11 = v9;
  if ( v10 <= v11 )
  {
    LOBYTE(v10) = 15;
    if ( (unsigned __int8)v9 < 0xFu )
      LOBYTE(v10) = v9;
  }
  *a3 = v10;
  v12 = *(_BYTE *)(a1 + 195);
  if ( v5 || (unsigned __int8)v10 > v12 )
  {
    if ( (unsigned __int8)v10 > v12 )
      KeSetPriorityBoost(a1, (unsigned __int8)v10);
    if ( v5 )
    {
      PsBoostThreadIoEx(a1, 0, 1, a5);
      *(_DWORD *)a4 |= 0x20u;
      IoBoostThreadIoPriority((KSPIN_LOCK *)a1, (*(_DWORD *)(a2 + 1760) >> 9) & 7, 0);
    }
  }
}
