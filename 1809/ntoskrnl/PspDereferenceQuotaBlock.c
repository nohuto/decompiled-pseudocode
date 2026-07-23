/*
 * XREFs of PspDereferenceQuotaBlock @ 0x1405CBCF4
 * Callers:
 *     PsReturnSharedPoolQuota @ 0x1405CBCA8 (PsReturnSharedPoolQuota.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     ObpFreeObject @ 0x140646F60 (ObpFreeObject.c)
 *     PspAssignProcessQuotaBlock @ 0x14065B2F4 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     PspReturnResourceQuota @ 0x14012A95C (PspReturnResourceQuota.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspRemoveQuotaBlock @ 0x1408894F4 (PspRemoveQuotaBlock.c)
 */

void __fastcall PspDereferenceQuotaBlock(volatile signed __int32 *P)
{
  signed int v2; // esi
  char *v3; // r14
  char *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r8

  if ( _InterlockedExchangeAdd(P + 128, 0xFFFFFFFF) == 1 )
  {
    v2 = 0;
    v3 = PspResourceFlags;
    v4 = (char *)(P + 18);
    do
    {
      if ( (*v3 & 3) == 1 )
      {
        v5 = *((_QWORD *)v4 + 1);
        v6 = *((_QWORD *)v4 - 1);
        if ( v6 + *(_QWORD *)v4 )
        {
          if ( v5 )
          {
            v7 = _InterlockedExchange64((volatile __int64 *)v4, 0LL);
            v6 = _InterlockedExchange64((volatile __int64 *)v4 - 1, 0LL) + v7;
          }
        }
        else
        {
          v6 = 0LL;
        }
        if ( v6 || v5 )
          PspReturnResourceQuota(v2, (__int64)(v4 - 72), v6, v5 != 0);
      }
      ++v2;
      v4 += 128;
      v3 += 8;
    }
    while ( v2 < 4 );
    PspRemoveQuotaBlock(P);
    ExFreePoolWithTag((PVOID)P, 0);
  }
}
