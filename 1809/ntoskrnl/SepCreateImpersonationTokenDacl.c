/*
 * XREFs of SepCreateImpersonationTokenDacl @ 0x140631A64
 * Callers:
 *     NtOpenThreadTokenEx @ 0x140649A40 (NtOpenThreadTokenEx.c)
 * Callees:
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405CBF70 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x1406325C0 (RtlpAddKnownAce.c)
 */

__int64 __fastcall SepCreateImpersonationTokenDacl(__int64 a1, __int64 a2, ACL **a3)
{
  unsigned __int8 *v5; // rsi
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v8; // r13
  ULONG v9; // ebp
  ACL *PoolWithTag; // rax
  ACL *v11; // rdi
  void *Src; // [rsp+60h] [rbp+8h]

  v5 = 0LL;
  v6 = 0LL;
  Src = **(void ***)(a2 + 152);
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    v6 = *(unsigned __int8 **)(a2 + 784);
  v8 = **(unsigned __int8 ***)(a1 + 152);
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    v5 = *(unsigned __int8 **)(a1 + 784);
  v9 = 4
     * (*(unsigned __int8 *)(**(_QWORD **)(a2 + 152) + 1LL)
      + v8[1]
      + *((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *(unsigned __int8 *)(*(_QWORD *)&SeRestrictedSid + 1LL))
     + 88;
  if ( v5 )
    v9 += 4 * v5[1] + 16;
  if ( v6 )
  {
    if ( v5 && RtlEqualSid(v6, v5) )
      v6 = 0LL;
    else
      v9 += 4 * v6[1] + 16;
  }
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x20206553u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v9, 2u);
    RtlpAddKnownAce(v11, Src, 0);
    RtlpAddKnownAce(v11, v8, 0);
    RtlpAddKnownAce(v11, SeAliasAdminsSid, 0);
    RtlpAddKnownAce(v11, SeLocalSystemSid, 0);
    if ( v5 )
      RtlpAddKnownAce(v11, v5, 0);
    if ( v6 )
      RtlpAddKnownAce(v11, v6, 0);
    if ( *(_QWORD *)(a2 + 160) || *(_QWORD *)(a1 + 160) )
      RtlpAddKnownAce(v11, *(void **)&SeRestrictedSid, 0);
    *a3 = v11;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    return 3221225626LL;
  }
}
