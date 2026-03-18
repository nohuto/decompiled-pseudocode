/*
 * XREFs of MmRemovePhysicalMemory @ 0x1408892E0
 * Callers:
 *     WheapClearPoison @ 0x14091A1B0 (WheapClearPoison.c)
 * Callees:
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiFreeContiguousPages @ 0x140116EB4 (MiFreeContiguousPages.c)
 *     MiRemoveBadPages @ 0x1402BE470 (MiRemoveBadPages.c)
 *     MiReturnBadPagesToBadList @ 0x1402BE778 (MiReturnBadPagesToBadList.c)
 *     MiRemovePhysicalMemory @ 0x140888F00 (MiRemovePhysicalMemory.c)
 */

NTSTATUS __stdcall MmRemovePhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  unsigned __int64 QuadPart; // rbx
  unsigned __int64 v4; // rdi
  bool v5; // si
  unsigned __int64 v6; // rbx
  NTSTATUS result; // eax
  NTSTATUS v8; // ebp
  LONGLONG v9; // [rsp+80h] [rbp+8h] BYREF

  QuadPart = StartAddress->QuadPart;
  v4 = (unsigned __int64)NumberOfBytes->QuadPart >> 12;
  v9 = StartAddress->QuadPart;
  v5 = (v9 & 1) != 0 && (v9 & 0xFFF) != 0;
  if ( v5 )
  {
    LODWORD(v9) = v9 & 0xFFFFFFFE;
    QuadPart = v9;
  }
  v6 = QuadPart >> 12;
  v9 = v6;
  if ( v6 >= v6 + v4 )
    return -1073741585;
  if ( v5 )
  {
    result = MiRemoveBadPages(v6, v4);
  }
  else
  {
    result = MiFindContiguousPages(
               (__int64)&MiSystemPartition,
               v6,
               v6 + v4 - 1,
               0LL,
               v4,
               1u,
               0x80000000,
               0x80000000,
               202375168,
               0LL,
               &v9);
    v6 = v9;
  }
  if ( result >= 0 )
  {
    v8 = MiRemovePhysicalMemory(v6, v4, 0x10u);
    if ( v8 < 0 )
    {
      if ( v5 )
        MiReturnBadPagesToBadList(v6, v4);
      else
        MiFreeContiguousPages(v6, v4);
    }
    else
    {
      NumberOfBytes->QuadPart = v4 << 12;
    }
    return v8;
  }
  return result;
}
