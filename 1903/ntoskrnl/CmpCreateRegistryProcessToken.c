/*
 * XREFs of CmpCreateRegistryProcessToken @ 0x1407691C4
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x140769834 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405D59B0 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x1405FEE00 (SeQueryInformationToken.c)
 *     SeFilterToken @ 0x140769320 (SeFilterToken.c)
 */

__int64 __fastcall CmpCreateRegistryProcessToken(PACCESS_TOKEN *a1)
{
  unsigned int *v2; // rdi
  PACCESS_TOKEN v3; // rsi
  char *TransientPoolWithTag; // r14
  PACCESS_TOKEN v5; // rbp
  NTSTATUS v6; // eax
  _OWORD *v7; // r15
  NTSTATUS v8; // ebx
  NTSTATUS v9; // eax
  struct _LOOKASIDE_LIST_EX *v10; // r9
  PACCESS_TOKEN FilteredToken; // [rsp+78h] [rbp+10h] BYREF
  PVOID v13; // [rsp+80h] [rbp+18h] BYREF
  PVOID TokenInformation; // [rsp+88h] [rbp+20h] BYREF

  TokenInformation = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v13 = 0LL;
  FilteredToken = 0LL;
  TransientPoolWithTag = 0LL;
  v5 = PsReferencePrimaryToken(PsInitialSystemProcess);
  v6 = SeQueryInformationToken(v5, TokenUser, &TokenInformation);
  v7 = TokenInformation;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = SeQueryInformationToken(v5, TokenGroups, &v13);
    v2 = (unsigned int *)v13;
    v8 = v9;
    if ( v9 >= 0 )
    {
      TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(
                                       PagedPool,
                                       16LL * (unsigned int)(*(_DWORD *)v13 + 1) + 8,
                                       0x34384D43u,
                                       v10);
      if ( TransientPoolWithTag )
      {
        *(_DWORD *)TransientPoolWithTag = *v2 + 1;
        *(_OWORD *)(TransientPoolWithTag + 8) = *v7;
        memmove(TransientPoolWithTag + 24, v2 + 2, 16LL * *v2);
        v8 = SeFilterToken(v5, 1u, (PTOKEN_GROUPS)TransientPoolWithTag, 0LL, 0LL, &FilteredToken);
        if ( v8 < 0 )
        {
          v3 = FilteredToken;
        }
        else
        {
          v8 = 0;
          *a1 = FilteredToken;
        }
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  if ( TransientPoolWithTag )
    CmSiFreeMemory((PPRIVILEGE_SET)TransientPoolWithTag);
  return (unsigned int)v8;
}
