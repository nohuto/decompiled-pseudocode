/*
 * XREFs of LdrpResGetMappingSize @ 0x1800587E0
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180018D8C (LdrpSearchResourceSection_U.c)
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180056B60 (LdrpResSearchResourceMappedFile.c)
 *     LdrResGetRCConfig @ 0x180058EF0 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18001A7F0 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwQueryVirtualMemory @ 0x18009D2F0 (ZwQueryVirtualMemory.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0910 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 FileSizeFromLoadAsDataTable; // rsi
  unsigned __int64 SizeOfImage; // rdi
  NTSTATUS VirtualMemory; // ebx
  __int64 v14; // rcx
  int v15; // [rsp+30h] [rbp-88h]
  bool v16; // [rsp+34h] [rbp-84h]
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-78h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+50h] [rbp-68h] BYREF
  int v19; // [rsp+58h] [rbp-60h] BYREF
  const wchar_t *v20; // [rsp+60h] [rbp-58h]
  _BYTE MemoryInformation[16]; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-40h]

  LODWORD(BaseAddress[0]) = 3670070;
  BaseAddress[1] = L"LdrpResGetMappingSize Enter";
  v19 = 3538996;
  v20 = L"LdrpResGetMappingSize Exit";
  v6 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v14 = 2147353476LL;
    LdrpTraceLoadMUIDll(BaseAddress, *(unsigned __int8 *)v14);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( a1 && a2 )
  {
    v9 = 0LL;
    if ( (a3 & 0x20000) != 0 )
      v9 = *a2;
    *a2 = 0LL;
    FileSizeFromLoadAsDataTable = 0LL;
    SizeOfImage = 0LL;
    v16 = (a3 & 0x100) != 0 && (a1 & 1) == 0;
    BaseAddress[0] = (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
    VirtualMemory = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
    v15 = VirtualMemory;
    if ( VirtualMemory >= 0 )
    {
      if ( OutHeaders->OptionalHeader.Magic == 267 || OutHeaders->OptionalHeader.Magic == 523 )
      {
        SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
      }
      else
      {
        SizeOfImage = 0LL;
        VirtualMemory = -1073741701;
        v15 = -1073741701;
      }
    }
    if ( VirtualMemory < 0 )
      return (unsigned int)VirtualMemory;
    if ( !v16 || !SizeOfImage )
    {
      if ( !a4 )
        FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
      if ( FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = 0;
        v15 = 0;
      }
      else
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          BaseAddress[0],
                          MemoryRegionInformation,
                          MemoryInformation,
                          0x28uLL,
                          0LL);
        v15 = VirtualMemory;
        if ( VirtualMemory >= 0 )
          FileSizeFromLoadAsDataTable = v22;
      }
      if ( FileSizeFromLoadAsDataTable || !SizeOfImage )
        goto LABEL_18;
      VirtualMemory = 0;
      v15 = 0;
    }
    FileSizeFromLoadAsDataTable = SizeOfImage;
LABEL_18:
    if ( VirtualMemory >= 0 )
    {
      if ( v9 && v9 < FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = -1073741793;
        v15 = -1073741793;
      }
      else
      {
        *a2 = FileSizeFromLoadAsDataTable;
      }
    }
    if ( RtlGetCurrentServiceSessionId() )
    {
      v6 = (__int64)NtCurrentPeb()->SharedData + 555;
      VirtualMemory = v15;
    }
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
      {
        v8 = (__int64)NtCurrentPeb()->SharedData + 554;
        VirtualMemory = v15;
      }
      LdrpTraceLoadMUIDll(&v19, *(unsigned __int8 *)v8);
    }
    return (unsigned int)VirtualMemory;
  }
  return 3221225485LL;
}
