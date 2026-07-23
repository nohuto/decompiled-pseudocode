/*
 * XREFs of sub_180112D84 @ 0x180112D84
 * Callers:
 *     sub_180112808 @ 0x180112808 (sub_180112808.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall sub_180112D84(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rbx
  unsigned __int16 *v2; // rsi
  unsigned int *v3; // rbx
  __int64 v4; // rdi
  NTSTATUS result; // eax
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  if ( a1 )
  {
    BaseAddress = a1;
    v1 = a1;
    do
    {
      v2 = *(unsigned __int16 **)a1;
      v3 = (unsigned int *)(v1 + 6);
      if ( a1[5] )
      {
        v4 = a1[5];
        do
        {
          ZwClose((HANDLE)*v3++);
          --v4;
        }
        while ( v4 );
      }
      RegionSize = 1LL;
      result = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      a1 = v2;
      v1 = v2;
      BaseAddress = v2;
    }
    while ( v2 );
  }
  return result;
}
