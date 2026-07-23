/*
 * XREFs of MiSecureVad @ 0x1405F45BC
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MmSecureVirtualMemoryEx @ 0x1405F6CB0 (MmSecureVirtualMemoryEx.c)
 * Callees:
 *     MiComparePteProtections @ 0x140088398 (MiComparePteProtections.c)
 *     MiAddSecureEntry @ 0x1405F4490 (MiAddSecureEntry.c)
 */

__int64 __fastcall MiSecureVad(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, char a5, _QWORD *a6)
{
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  int v9; // r9d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  __int64 result; // rax
  _DWORD *v14; // rax

  v7 = (a2 + a3 - 1) | 0xFFF;
  v8 = a2 & 0xFFFFFFFFFFFFF000uLL;
  v9 = 1;
  if ( (a4 & 1) != 0 )
    goto LABEL_5;
  v11 = (a2 + a3 - 1) | 0xFFF;
  v12 = a2 & 0xFFFFFFFFFFFFF000uLL;
  if ( a4 != 2 )
    v9 = 4;
  result = MiComparePteProtections(a1, v12, v11, v9, 0);
  if ( (int)result >= 0 )
  {
LABEL_5:
    v14 = MiAddSecureEntry(a1, v8, v7, a4, a5);
    *a6 = v14;
    return v14 == 0LL ? 0xC000009A : 0;
  }
  return result;
}
