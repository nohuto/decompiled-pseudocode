/*
 * XREFs of RaidUnitSubmitRequest @ 0x1C0007C18
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0007D80 (RaUnitScsiIrp.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000211C (DbgLogRequest.c)
 *     RaidStartIoPacket @ 0x1C0008210 (RaidStartIoPacket.c)
 *     IsUntaggedRequest @ 0x1C00093EC (IsUntaggedRequest.c)
 */

__int64 __fastcall RaidUnitSubmitRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  unsigned __int8 v6; // al
  unsigned int v7; // esi
  unsigned int v8; // ebp
  int v9; // eax
  unsigned int v10; // r9d
  __int64 v11; // r8

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v2 + 8);
  *(_BYTE *)(v2 + 3) |= 1u;
  *(_BYTE *)(v5 + 3) = 0;
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  v6 = *(_BYTE *)(v5 + 2);
  if ( v6 == 40 )
  {
    v8 = *(_DWORD *)(v5 + 20);
    v7 = *(_DWORD *)(v5 + 24);
  }
  else
  {
    v7 = *(_DWORD *)(v5 + 12);
    v8 = v6;
  }
  if ( (qword_1C00622B0 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
      0LL,
      0LL,
      0LL);
  v9 = IsUntaggedRequest(v7, v8);
  v11 = v10 | 1;
  if ( !v9 )
    v11 = v10;
  RaidStartIoPacket(a1, a2, v11);
  return 259LL;
}
