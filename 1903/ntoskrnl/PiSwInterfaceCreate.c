/*
 * XREFs of PiSwInterfaceCreate @ 0x140777230
 * Callers:
 *     PiSwCompleteCreate @ 0x140720418 (PiSwCompleteCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x140776E44 (PiSwIrpInterfaceRegister.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x1405BC774 (PnpAllocatePWSTR.c)
 *     PnpCopyDevPropertyArray @ 0x14071F6A0 (PnpCopyDevPropertyArray.c)
 *     PiSwInterfaceFree @ 0x14087073C (PiSwInterfaceFree.c)
 */

__int64 __fastcall PiSwInterfaceCreate(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, unsigned int a3, PVOID *a4)
{
  PVOID PoolWithTag; // rax
  int PWSTR; // ebx
  __int64 v10; // r8

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x57706E50u);
  *a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    PWSTR = PnpAllocatePWSTR(pszSrc, 0x7FFFFFFFuLL, 0x57706E50u, (PVOID *)*a4 + 2);
    if ( PWSTR >= 0 )
    {
      PWSTR = PnpCopyDevPropertyArray(a3, a2, v10, (_DWORD *)*a4 + 8, (void **)*a4 + 3);
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
  else
  {
    PWSTR = -1073741670;
  }
  if ( *a4 )
  {
    PiSwInterfaceFree(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)PWSTR;
}
