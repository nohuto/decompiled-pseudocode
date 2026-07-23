/*
 * XREFs of RtlQueryHeapInformation @ 0x180067610
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800D7490 (RtlQueryProcessHeapInformation.c)
 *     sub_1800F03F0 @ 0x1800F03F0 (sub_1800F03F0.c)
 *     sub_1800F4860 @ 0x1800F4860 (sub_1800F4860.c)
 *     sub_180102300 @ 0x180102300 (sub_180102300.c)
 * Callees:
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     sub_180067A40 @ 0x180067A40 (sub_180067A40.c)
 *     sub_180102800 @ 0x180102800 (sub_180102800.c)
 */

NTSTATUS __cdecl RtlQueryHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS v6; // r10d

  if ( HeapInformationClass == -2147483647 )
  {
    if ( HeapInformationLength >= 8 )
    {
      *(_QWORD *)HeapInformation = &unk_1801627F0;
      v6 = 0;
      if ( ReturnLength )
        *ReturnLength = 8LL;
    }
    else
    {
      if ( ReturnLength )
        *ReturnLength = 8LL;
      return -1073741789;
    }
    return v6;
  }
  else if ( HeapInformationClass )
  {
    switch ( HeapInformationClass )
    {
      case 2:
        if ( HeapInformationLength < 0x58 )
          return -1073741811;
        else
          return sub_18006773C(HeapInformation, HeapInformationLength, ReturnLength);
      case 4:
        return sub_180067A40(HeapInformation, HeapInformationLength, ReturnLength);
      case 5:
        return sub_180102800(HeapInformation, HeapInformationLength, ReturnLength);
      default:
        return -1073741811;
    }
  }
  else if ( *((_DWORD *)HeapHandle + 4) == -571548178 || (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    if ( HeapInformationLength >= 4 )
    {
      if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
        *(_DWORD *)HeapInformation = 2;
      else
        *(_DWORD *)HeapInformation = *((unsigned __int8 *)HeapHandle + 419);
      if ( ReturnLength )
        *ReturnLength = 4LL;
      return 0;
    }
    else
    {
      if ( ReturnLength )
        *ReturnLength = 4LL;
      return -1073741789;
    }
  }
  else
  {
    return -1073741822;
  }
}
