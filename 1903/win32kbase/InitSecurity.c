/*
 * XREFs of InitSecurity @ 0x1C026846C
 * Callers:
 *     Win32UserInitialize @ 0x1C02673B4 (Win32UserInitialize.c)
 * Callees:
 *     CreateSecurityDescriptor @ 0x1C0010FA0 (CreateSecurityDescriptor.c)
 *     AllocAce @ 0x1C0016020 (AllocAce.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

__int64 InitSecurity()
{
  char *v0; // rax
  unsigned int v1; // ebx
  char *v2; // rdi
  char *v3; // rax
  char *v4; // rsi
  char *v5; // rax
  char *v6; // rax
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rdi
  __int64 v12; // rcx
  ULONG AceListLength; // [rsp+40h] [rbp+8h] BYREF

  v0 = AllocAce(0LL, 0, 14, 983935, SeExports->SeWorldSid, &AceListLength);
  v1 = 0;
  v2 = v0;
  if ( !v0 )
    return 0LL;
  v3 = AllocAce(v0, 0, 14, 983935, SeExports->SeRestrictedSid, &AceListLength);
  v4 = v3;
  if ( !v3 )
    goto LABEL_10;
  v5 = AllocAce(v3, 0, 9, 0x10000000, SeExports->SeWorldSid, &AceListLength);
  v2 = v5;
  if ( v5 )
  {
    v6 = AllocAce(v5, 0, 9, 0x10000000, SeExports->SeRestrictedSid, &AceListLength);
    v4 = v6;
    if ( !v6 )
      goto LABEL_10;
    v7 = AllocAce(v6, 0, 0, 5, SeExports->SeAliasAdminsSid, &AceListLength);
    v2 = v7;
    if ( v7 )
    {
      v8 = AllocAce(v7, 0, 0, 2, SeExports->SeWorldSid, &AceListLength);
      v4 = v8;
      if ( v8 )
      {
        v9 = AllocAce(v8, 0, 0, 2, SeExports->SeRestrictedSid, &AceListLength);
        v10 = (__int64)v9;
        if ( v9 )
        {
          gpsdInitWinSta = (__int64)CreateSecurityDescriptor(v9, AceListLength, 0);
          Win32FreePool(v10);
          LOBYTE(v1) = gpsdInitWinSta != 0;
          return v1;
        }
        goto LABEL_9;
      }
LABEL_10:
      v12 = (__int64)v2;
      goto LABEL_11;
    }
  }
LABEL_9:
  v12 = (__int64)v4;
LABEL_11:
  Win32FreePool(v12);
  return 0LL;
}
