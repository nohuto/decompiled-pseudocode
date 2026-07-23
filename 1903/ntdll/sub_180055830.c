/*
 * XREFs of sub_180055830 @ 0x180055830
 * Callers:
 *     sub_18001C610 @ 0x18001C610 (sub_18001C610.c)
 * Callees:
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     sub_1800555A8 @ 0x1800555A8 (sub_1800555A8.c)
 *     sub_1800558E4 @ 0x1800558E4 (sub_1800558E4.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

NTSTATUS __fastcall sub_180055830(__int64 a1)
{
  int v2; // ebx
  NTSTATUS result; // eax
  _QWORD *v4; // rax
  char v5; // al
  ULONG v6; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*(_QWORD *)(a1 + 104)
    || (result = ZwProtectVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID *)(a1 + 104),
                   (PSIZE_T)(a1 + 112),
                   *(_DWORD *)(a1 + 136),
                   &v6),
        v2 = result,
        result >= 0) )
  {
    v4 = *(_QWORD **)(a1 + 152);
    if ( v4 && *v4 != *(_QWORD *)(a1 + 144) )
      __fastfail(0x13u);
    if ( *(_WORD *)(*(_QWORD *)(a1 + 56) + 110LL) || (result = sub_1800558E4(), v2 = result, result >= 0) )
    {
      if ( sub_18001AE58() )
      {
        v2 = sub_1800555A8(*(char **)(*(_QWORD *)(a1 + 56) + 48LL), 0, 0);
        if ( v2 < 0 )
        {
          v5 = dword_18015FAB0;
          if ( (dword_18015FAB0 & 3) != 0 )
          {
            sub_1800CE318(
              (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
              565,
              (unsigned int)"LdrpDoPostSnapWork",
              0,
              (__int64)"LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the "
                       "DLL based at 0x%p.Status = 0x%x\n",
              *(const void **)(*(_QWORD *)(a1 + 56) + 48LL),
              v2);
            v5 = dword_18015FAB0;
          }
          if ( (v5 & 0x10) != 0 )
            __debugbreak();
        }
      }
      return v2;
    }
  }
  return result;
}
