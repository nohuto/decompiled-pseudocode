/*
 * XREFs of sub_1800D559C @ 0x1800D559C
 * Callers:
 *     sub_1800723A8 @ 0x1800723A8 (sub_1800723A8.c)
 * Callees:
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 */

__int64 __fastcall sub_1800D559C(__int64 a1)
{
  NTSTATUS v2; // ebx
  HANDLE ProcessInformation; // [rsp+60h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+18h] BYREF

  ProcessInformation = 0LL;
  BaseAddress = 0LL;
  ViewSize = 0LL;
  if ( *(_QWORD *)(a1 + 56) == qword_180164FC8 )
  {
    v2 = ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessImageSection, &ProcessInformation, 8u, 0LL);
    if ( v2 >= 0 )
    {
      v2 = ZwMapViewOfSection(
             ProcessInformation,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &BaseAddress,
             0LL,
             0LL,
             0LL,
             &ViewSize,
             ViewShare,
             0x40000u,
             2u);
      if ( v2 >= 0 )
        *(_QWORD *)(a1 + 184) = BaseAddress;
      ZwClose(ProcessInformation);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
