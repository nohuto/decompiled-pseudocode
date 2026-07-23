/*
 * XREFs of MmRemovePhysicalMemory @ 0x14084EB60
 * Callers:
 *     WheapClearPoison @ 0x1408DD244 (WheapClearPoison.c)
 * Callees:
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x1401231C4 (MiFreeContiguousPages.c)
 *     MiRemoveBadPages @ 0x1402A6F5C (MiRemoveBadPages.c)
 *     MiReturnBadPagesToBadList @ 0x1402A719C (MiReturnBadPagesToBadList.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 QuadPart; // rbx
  unsigned __int64 v4; // rdi
  bool v5; // zf
  bool v6; // si
  unsigned __int64 v7; // rbx
  NTSTATUS result; // eax
  ULONG_PTR *v9; // r14
  NTSTATUS v10; // ebp
  LONGLONG v11; // [rsp+80h] [rbp+8h] BYREF

  QuadPart = StartAddress->QuadPart;
  v4 = (unsigned __int64)NumberOfBytes->QuadPart >> 12;
  v5 = (StartAddress->QuadPart & 0xFFF) == 0;
  v11 = StartAddress->QuadPart;
  v6 = (v11 & 1) != 0 && !v5;
  if ( v6 )
  {
    LODWORD(v11) = QuadPart & 0xFFFFFFFE;
    QuadPart = v11;
  }
  v7 = QuadPart >> 12;
  v11 = v7;
  if ( v7 >= v7 + v4 )
    return -1073741585;
  if ( v6 )
  {
    v9 = 0LL;
    result = MiRemoveBadPages(v7, v4);
  }
  else
  {
    v9 = &MiSystemPartition;
    result = MiFindContiguousPages(
               (__int64)&MiSystemPartition,
               v7,
               v7 + v4 - 1,
               0LL,
               v4,
               1u,
               0x80000000,
               0x80000000,
               202375168,
               0LL,
               &v11);
    v7 = v11;
  }
  if ( result >= 0 )
  {
    v10 = MiRemovePhysicalMemory(v7, v4, 16);
    if ( v10 < 0 )
    {
      if ( v6 )
        MiReturnBadPagesToBadList(v7, v4);
      else
        MiFreeContiguousPages((__int64)v9, v7, v4);
    }
    else
    {
      NumberOfBytes->QuadPart = v4 << 12;
    }
    return v10;
  }
  return result;
}
