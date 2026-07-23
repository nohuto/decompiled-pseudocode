/*
 * XREFs of IopSymlinkApplyToOpenedName @ 0x14081EFF0
 * Callers:
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopSymlinkUpdateECP @ 0x1406ACF50 (IopSymlinkUpdateECP.c)
 *     IopReplaceSymlinkPath @ 0x14081ECDC (IopReplaceSymlinkPath.c)
 */

__int64 __fastcall IopSymlinkApplyToOpenedName(
        __int64 a1,
        UNICODE_STRING *EcpContext,
        _WORD *a3,
        PIRP Irp,
        PVOID P,
        __int16 a6)
{
  void *v6; // r13
  PVOID PoolWithTag; // r14
  UNICODE_STRING *v13; // rsi
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // dx
  NTSTATUS v16; // edi

  v6 = *(void **)(a1 + 96);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, EcpContext[1].Length, 0x63466F49u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v13 = (UNICODE_STRING *)(a1 + 88);
  v14 = *(_WORD *)(a1 + 88);
  if ( v14 > 2u && *(_WORD *)(*(_QWORD *)(a1 + 96) + 2 * ((unsigned __int64)v14 >> 1) - 2) == 92 )
  {
    if ( a3[3] < 2u )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      return 3221225485LL;
    }
    v13->Length = v14 - 2;
    a3[3] -= 2;
  }
  memmove(P, EcpContext[1].Buffer, *(&EcpContext->MaximumLength + 1));
  memmove(
    PoolWithTag,
    (char *)EcpContext[1].Buffer + *(&EcpContext->MaximumLength + 1),
    EcpContext[1].Length - (unsigned __int64)*(&EcpContext->MaximumLength + 1));
  *(_QWORD *)(a1 + 96) = PoolWithTag;
  v15 = EcpContext[1].Length - *(&EcpContext->MaximumLength + 1);
  *(_WORD *)(a1 + 90) = v15;
  v13->Length = v15;
  ExFreePoolWithTag(v6, 0);
  v16 = IopReplaceSymlinkPath(
          (const wchar_t *)P,
          *(&EcpContext->MaximumLength + 1) >> 1,
          a1,
          a3,
          *(&EcpContext->MaximumLength + 1) >> 1,
          *(&EcpContext->MaximumLength + 1),
          a6);
  if ( v16 < 0 )
    ExFreePoolWithTag(P, 0);
  else
    return (unsigned int)IopSymlinkUpdateECP(
                           Irp,
                           EcpContext,
                           0,
                           v13,
                           *(&EcpContext->MaximumLength + 1),
                           EcpContext->MaximumLength & 0xFFFE);
  return (unsigned int)v16;
}
