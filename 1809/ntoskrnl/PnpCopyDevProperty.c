/*
 * XREFs of PnpCopyDevProperty @ 0x14075151C
 * Callers:
 *     PnpCopyDevPropertyArray @ 0x1406D84D0 (PnpCopyDevPropertyArray.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PnpFreeDevProperty @ 0x1405964EC (PnpFreeDevProperty.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 */

__int64 __fastcall PnpCopyDevProperty(__int64 a1, __int64 a2, __int64 a3)
{
  int PWSTR; // edi
  const wchar_t *v6; // rcx
  unsigned int v7; // eax
  PVOID PoolWithTag; // rax

  PWSTR = 0;
  *(_OWORD *)a3 = *(_OWORD *)a1;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 40) = 0LL;
  v6 = *(const wchar_t **)(a1 + 24);
  if ( v6 )
  {
    PWSTR = PnpAllocatePWSTR(v6, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)(a3 + 24));
    if ( PWSTR < 0 )
      goto LABEL_9;
  }
  v7 = *(_DWORD *)(a3 + 36);
  if ( v7 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v7, 0x57706E50u);
    *(_QWORD *)(a3 + 40) = PoolWithTag;
    if ( !PoolWithTag )
    {
      PWSTR = -1073741670;
LABEL_9:
      PnpFreeDevProperty(a3, 0x57706E50u);
      memset((void *)a3, 0, 0x30uLL);
      return (unsigned int)PWSTR;
    }
  }
  memmove(*(void **)(a3 + 40), *(const void **)(a1 + 40), *(unsigned int *)(a3 + 36));
  return (unsigned int)PWSTR;
}
