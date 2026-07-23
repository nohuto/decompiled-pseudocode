/*
 * XREFs of PspQueryJobIoAttribution @ 0x14068E044
 * Callers:
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 * Callees:
 *     IoDiskIoAttributionQuery @ 0x140105464 (IoDiskIoAttributionQuery.c)
 */

__int64 __fastcall PspQueryJobIoAttribution(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+30h] [rbp-38h]
  __int64 v10; // [rsp+38h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]
  __int64 v13; // [rsp+58h] [rbp-10h]

  v2 = 0;
  if ( *(_DWORD *)(a1 + 1328) )
  {
    IoDiskIoAttributionQuery(*(_QWORD *)(a1 + 1336), &v8, &v11);
    v4 = v10;
    *(_QWORD *)(a2 + 24) = *((_QWORD *)&v8 + 1);
    *(_QWORD *)(a2 + 32) = v9;
    *(_QWORD *)(a2 + 40) = v13;
    *(_OWORD *)(a2 + 48) = v11;
    v5 = v12;
    *(_QWORD *)(a2 + 8) = v4;
    v6 = v8;
    *(_QWORD *)(a2 + 64) = v5;
    *(_QWORD *)(a2 + 16) = v6;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v2;
}
