/*
 * XREFs of PspQueryJobIoAttribution @ 0x1406978B0
 * Callers:
 *     NtQueryInformationJobObject @ 0x140612130 (NtQueryInformationJobObject.c)
 * Callees:
 *     IoDiskIoAttributionQuery @ 0x1400E6F30 (IoDiskIoAttributionQuery.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall PspQueryJobIoAttribution(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  _OWORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-20h] BYREF

  memset(v9, 0, sizeof(v9));
  memset(v10, 0, sizeof(v10));
  v4 = 0;
  if ( *(_DWORD *)(a1 + 1328) )
  {
    IoDiskIoAttributionQuery(*(_QWORD *)(a1 + 1336), v9, v10);
    v5 = *((_QWORD *)&v9[1] + 1);
    *(_QWORD *)(a2 + 24) = *((_QWORD *)&v9[0] + 1);
    *(_QWORD *)(a2 + 32) = *(_QWORD *)&v9[1];
    *(_QWORD *)(a2 + 40) = *((_QWORD *)&v10[1] + 1);
    *(_OWORD *)(a2 + 48) = v10[0];
    v6 = *(_QWORD *)&v10[1];
    *(_QWORD *)(a2 + 8) = v5;
    v7 = *(_QWORD *)&v9[0];
    *(_QWORD *)(a2 + 64) = v6;
    *(_QWORD *)(a2 + 16) = v7;
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v4;
}
