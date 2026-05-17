/*
 * XREFs of LdrpResGetMappingSize @ 0x180039780
 * Callers:
 *     LdrResSearchResource @ 0x180037450 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrResGetRCConfig @ 0x18003A160 (LdrResGetRCConfig.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x18000A3AC (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     ZwQueryVirtualMemory @ 0x1800A0740 (ZwQueryVirtualMemory.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E2D68 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 FileSizeFromLoadAsDataTable; // rdi
  int VirtualMemory; // ebx
  unsigned __int64 v13; // rsi
  bool v14; // r12
  int v16; // [rsp+30h] [rbp-88h]
  unsigned __int64 v17; // [rsp+40h] [rbp-78h]
  _QWORD v18[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+58h] [rbp-60h] BYREF
  int v20; // [rsp+60h] [rbp-58h] BYREF
  const wchar_t *v21; // [rsp+68h] [rbp-50h]
  _BYTE v22[16]; // [rsp+70h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp-38h]

  LODWORD(v18[0]) = 3670070;
  v18[1] = L"LdrpResGetMappingSize Enter";
  v20 = 3538996;
  v21 = L"LdrpResGetMappingSize Exit";
  v6 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v9 = 2147353476LL;
    LdrpTraceLoadMUIDll(v18, *(unsigned __int8 *)v9);
  }
  else
  {
    v8 = 2147353476LL;
  }
  if ( a1 && a2 )
  {
    v10 = 0LL;
    v17 = 0LL;
    if ( (a3 & 0x80000) != 0 )
    {
      FileSizeFromLoadAsDataTable = *a2;
      VirtualMemory = 0;
      v16 = 0;
      goto LABEL_39;
    }
    if ( (a3 & 0x20000) != 0 )
      v17 = *a2;
    *a2 = 0LL;
    FileSizeFromLoadAsDataTable = 0LL;
    v13 = 0LL;
    v14 = 0;
    if ( (a3 & 0x100) != 0 )
      v14 = (a1 & 1) == 0;
    v18[0] = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    VirtualMemory = RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v19);
    v16 = VirtualMemory;
    if ( VirtualMemory >= 0 )
    {
      if ( *(_WORD *)(v19 + 24) == 267 || *(_WORD *)(v19 + 24) == 523 )
      {
        v13 = *(unsigned int *)(v19 + 80);
      }
      else
      {
        v13 = 0LL;
        VirtualMemory = -1073741701;
        v16 = -1073741701;
      }
    }
    if ( VirtualMemory < 0 )
      return (unsigned int)VirtualMemory;
    if ( !v14 || !v13 )
    {
      if ( !a4 )
        FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
      if ( FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = 0;
        v16 = 0;
      }
      else
      {
        VirtualMemory = ZwQueryVirtualMemory(-1LL, v18[0], 3LL, v22, 32LL, 0LL);
        v16 = VirtualMemory;
        if ( VirtualMemory >= 0 )
          FileSizeFromLoadAsDataTable = v23;
      }
      if ( FileSizeFromLoadAsDataTable || !v13 )
        goto LABEL_37;
      VirtualMemory = 0;
      v16 = 0;
    }
    FileSizeFromLoadAsDataTable = v13;
LABEL_37:
    if ( VirtualMemory < 0 )
    {
LABEL_43:
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v6 = (__int64)NtCurrentPeb()->SharedData + 555;
        VirtualMemory = v16;
      }
      if ( (*(_BYTE *)v6 & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        {
          v8 = (__int64)NtCurrentPeb()->SharedData + 554;
          VirtualMemory = v16;
        }
        LdrpTraceLoadMUIDll(&v20, *(unsigned __int8 *)v8);
      }
      return (unsigned int)VirtualMemory;
    }
    v10 = v17;
LABEL_39:
    if ( v10 && v10 < FileSizeFromLoadAsDataTable )
    {
      VirtualMemory = -1073741793;
      v16 = -1073741793;
    }
    else
    {
      *a2 = FileSizeFromLoadAsDataTable;
    }
    goto LABEL_43;
  }
  return 3221225485LL;
}
