/*
 * XREFs of LdrpResGetMappingSize @ 0x180058740
 * Callers:
 *     sub_180018D8C @ 0x180018D8C (sub_180018D8C.c)
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     sub_180056AC0 @ 0x180056AC0 (sub_180056AC0.c)
 *     LdrResGetRCConfig @ 0x180058E50 (LdrResGetRCConfig.c)
 * Callees:
 *     sub_18001A7F0 @ 0x18001A7F0 (sub_18001A7F0.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r14
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  int VirtualMemory; // ebx
  __int64 v14; // rcx
  int v15; // [rsp+30h] [rbp-88h]
  bool v16; // [rsp+34h] [rbp-84h]
  _QWORD v17[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v18; // [rsp+50h] [rbp-68h] BYREF
  int v19; // [rsp+58h] [rbp-60h] BYREF
  const wchar_t *v20; // [rsp+60h] [rbp-58h]
  _BYTE v21[16]; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+78h] [rbp-40h]

  LODWORD(v17[0]) = 3670070;
  v17[1] = L"LdrpResGetMappingSize Enter";
  v19 = 3538996;
  v20 = L"LdrpResGetMappingSize Exit";
  v6 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v7 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
  else
    v7 = 2147353477LL;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v8 = 2147353476LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v14 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
    else
      v14 = 2147353476LL;
    sub_1800E0820(v17, *(unsigned __int8 *)v14);
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
    v10 = 0LL;
    v11 = 0LL;
    v16 = (a3 & 0x100) != 0 && (a1 & 1) == 0;
    v17[0] = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    VirtualMemory = RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, &v18);
    v15 = VirtualMemory;
    if ( VirtualMemory >= 0 )
    {
      if ( *(_WORD *)(v18 + 24) == 267 || *(_WORD *)(v18 + 24) == 523 )
      {
        v11 = *(unsigned int *)(v18 + 80);
      }
      else
      {
        v11 = 0LL;
        VirtualMemory = -1073741701;
        v15 = -1073741701;
      }
    }
    if ( VirtualMemory < 0 )
      return (unsigned int)VirtualMemory;
    if ( !v16 || !v11 )
    {
      if ( !a4 )
        v10 = sub_18001A7F0(a1);
      if ( v10 )
      {
        VirtualMemory = 0;
        v15 = 0;
      }
      else
      {
        VirtualMemory = ZwQueryVirtualMemory(-1LL, v17[0], 3LL, v21, 40LL, 0LL);
        v15 = VirtualMemory;
        if ( VirtualMemory >= 0 )
          v10 = v22;
      }
      if ( v10 || !v11 )
        goto LABEL_18;
      VirtualMemory = 0;
      v15 = 0;
    }
    v10 = v11;
LABEL_18:
    if ( VirtualMemory >= 0 )
    {
      if ( v9 && v9 < v10 )
      {
        VirtualMemory = -1073741793;
        v15 = -1073741793;
      }
      else
      {
        *a2 = v10;
      }
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    {
      v6 = (__int64)NtCurrentPeb()->HotpatchInformation + 555;
      VirtualMemory = v15;
    }
    if ( (*(_BYTE *)v6 & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      {
        v8 = (__int64)NtCurrentPeb()->HotpatchInformation + 554;
        VirtualMemory = v15;
      }
      sub_1800E0820(&v19, *(unsigned __int8 *)v8);
    }
    return (unsigned int)VirtualMemory;
  }
  return 3221225485LL;
}
