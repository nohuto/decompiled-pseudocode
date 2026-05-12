/*
 * XREFs of RaidPauseUnitQueue @ 0x1C0002030
 * Callers:
 *     StorPortPauseDevice @ 0x1C0001D50 (StorPortPauseDevice.c)
 *     StorPortCompleteRequest @ 0x1C003AFE0 (StorPortCompleteRequest.c)
 *     RaUnitRequestPowerUp @ 0x1C003F320 (RaUnitRequestPowerUp.c)
 *     RaUnitStartResetIo @ 0x1C0045A1C (RaUnitStartResetIo.c)
 * Callees:
 *     DbgLogRequest @ 0x1C000216C (DbgLogRequest.c)
 */

__int64 __fastcall RaidPauseUnitQueue(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 v2; // dl
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  _InterlockedIncrement((volatile signed __int32 *)(a1 + 428));
  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 )
    v2 = *(_BYTE *)(v1 + 56);
  else
    v2 = -1;
  result = *(unsigned int *)(a1 + 96);
  if ( (qword_1C00612B0 & 0x200) != 0 )
    return DbgLogRequest(
             *(_QWORD *)(a1 + 24),
             4,
             (_DWORD)retaddr,
             BYTE2(result) | ((BYTE1(result) | (((unsigned __int8)result | (v2 << 8)) << 8)) << 8),
             *(int *)(a1 + 428),
             0LL,
             0LL);
  return result;
}
