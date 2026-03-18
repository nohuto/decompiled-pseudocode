/*
 * XREFs of InitSecurity @ 0x1C01F1218
 * Callers:
 *     Win32UserInitialize @ 0x1C01F2A58 (Win32UserInitialize.c)
 * Callees:
 *     AllocAce @ 0x1C001C210 (AllocAce.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     CreateSecurityDescriptor @ 0x1C0060E70 (CreateSecurityDescriptor.c)
 */

__int64 InitSecurity()
{
  void *v0; // rax
  unsigned int v1; // ebx
  __int64 v2; // rdi
  void *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  void *v7; // rax
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  __int64 v12; // rdi
  ULONG AceListLength; // [rsp+40h] [rbp+8h] BYREF

  v0 = (void *)AllocAce(0LL, 0, 14, 983935, SeExports->SeWorldSid, &AceListLength);
  v1 = 0;
  v2 = (__int64)v0;
  if ( !v0 )
    return 0LL;
  v4 = (void *)AllocAce(v0, 0, 14, 983935, SeExports->SeRestrictedSid, &AceListLength);
  v5 = (__int64)v4;
  if ( !v4 )
    goto LABEL_4;
  v7 = (void *)AllocAce(v4, 0, 9, 0x10000000, SeExports->SeWorldSid, &AceListLength);
  v2 = (__int64)v7;
  if ( !v7 )
  {
LABEL_7:
    v6 = v5;
    goto LABEL_5;
  }
  v8 = (void *)AllocAce(v7, 0, 9, 0x10000000, SeExports->SeRestrictedSid, &AceListLength);
  v5 = (__int64)v8;
  if ( !v8 )
    goto LABEL_4;
  v9 = (void *)AllocAce(v8, 0, 0, 5, SeExports->SeAliasAdminsSid, &AceListLength);
  v2 = (__int64)v9;
  if ( !v9 )
    goto LABEL_7;
  v10 = (void *)AllocAce(v9, 0, 0, 2, SeExports->SeWorldSid, &AceListLength);
  v5 = (__int64)v10;
  if ( !v10 )
  {
LABEL_4:
    v6 = v2;
LABEL_5:
    Win32FreePool(v6);
    return 0LL;
  }
  v11 = (void *)AllocAce(v10, 0, 0, 2, SeExports->SeRestrictedSid, &AceListLength);
  v12 = (__int64)v11;
  if ( !v11 )
    goto LABEL_7;
  gpsdInitWinSta = (__int64)CreateSecurityDescriptor(v11, AceListLength, 0);
  Win32FreePool(v12);
  LOBYTE(v1) = gpsdInitWinSta != 0;
  return v1;
}
