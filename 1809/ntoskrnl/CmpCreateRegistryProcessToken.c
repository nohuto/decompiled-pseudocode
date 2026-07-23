/*
 * XREFs of CmpCreateRegistryProcessToken @ 0x140758B04
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407584BC (CmpInitializeRegistryProcess.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x1405DE640 (PsReferencePrimaryToken.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     SeFilterToken @ 0x140758C60 (SeFilterToken.c)
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
  PACCESS_TOKEN FilteredToken; // [rsp+78h] [rbp+10h] BYREF
  PVOID v12; // [rsp+80h] [rbp+18h] BYREF
  PVOID TokenInformation; // [rsp+88h] [rbp+20h] BYREF

  TokenInformation = 0LL;
  v2 = 0LL;
  v3 = 0LL;
  v12 = 0LL;
  FilteredToken = 0LL;
  TransientPoolWithTag = 0LL;
  v5 = PsReferencePrimaryToken(PsInitialSystemProcess);
  v6 = SeQueryInformationToken(v5, TokenUser, &TokenInformation);
  v7 = TokenInformation;
  v8 = v6;
  if ( v6 >= 0 )
  {
    v9 = SeQueryInformationToken(v5, TokenGroups, &v12);
    v2 = (unsigned int *)v12;
    v8 = v9;
    if ( v9 >= 0 )
    {
      TransientPoolWithTag = (char *)CmpAllocateTransientPoolWithTag(
                                       PagedPool,
                                       16LL * (unsigned int)(*(_DWORD *)v12 + 1) + 8,
                                       0x34384D43u);
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
