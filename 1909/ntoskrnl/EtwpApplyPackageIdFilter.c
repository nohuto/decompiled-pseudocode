/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x1408FE7F0
 * Callers:
 *     EtwpApplyScopeFilters @ 0x1405D47C0 (EtwpApplyScopeFilters.c)
 *     EtwpApplyTransientFilters @ 0x1407204BC (EtwpApplyTransientFilters.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x140084710 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PsReferencePrimaryToken @ 0x1405D6170 (PsReferencePrimaryToken.c)
 *     PsQueryProcessAttributesByToken @ 0x140684660 (PsQueryProcessAttributesByToken.c)
 */

char __fastcall EtwpApplyPackageIdFilter(__int64 a1, _WORD *a2, _WORD *a3)
{
  char v6; // bl
  bool v7; // r12
  PACCESS_TOKEN v8; // r13
  bool v9; // r14
  unsigned __int16 v10; // r14
  unsigned int v11; // esi
  unsigned __int16 v12; // si
  unsigned int v13; // edi
  char v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h]
  _QWORD v18[52]; // [rsp+40h] [rbp-C0h] BYREF

  v17 = a1;
  memset(v18, 0, 0x198uLL);
  v6 = 0;
  v7 = a3 == 0LL;
  v8 = PsReferencePrimaryToken(*(PEPROCESS *)(a1 + 80));
  PsQueryProcessAttributesByToken((__int64)v8, &v15, (struct _KTHREAD *)&v16);
  if ( v15 )
  {
    v18[0] = 256LL;
    v18[1] = 130LL;
    if ( (int)RtlQueryPackageIdentity(
                (__int64)v8,
                (__int64)&v18[2],
                (__int64)v18,
                (__int64)&v18[34],
                (__int64)&v18[1],
                0LL) >= 0 )
    {
      v9 = a2 == 0LL;
      if ( a2 )
      {
        v10 = 0;
        v11 = (v18[0] >> 1) - 1;
        if ( *a2 )
        {
          while ( (unsigned __int16)a2[8 * v10 + 4] != v11
               || wcsnicmp(*(const wchar_t **)&a2[8 * v10 + 8], (const wchar_t *)&v18[2], v11) )
          {
            if ( ++v10 >= *a2 )
              goto LABEL_8;
          }
          v9 = 1;
        }
        else
        {
LABEL_8:
          v9 = 0;
        }
      }
      if ( a3 )
      {
        v12 = 0;
        v13 = (v18[1] >> 1) - 1;
        if ( *a3 )
        {
          while ( (unsigned __int16)a3[8 * v12 + 4] != v13
               || wcsnicmp(*(const wchar_t **)&a3[8 * v12 + 8], (const wchar_t *)&v18[34], v13) )
          {
            if ( ++v12 >= *a3 )
              goto LABEL_14;
          }
          v7 = 1;
        }
        else
        {
LABEL_14:
          v7 = 0;
        }
      }
      if ( v9 && v7 )
        v6 = 1;
    }
  }
  ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(v17 + 80) + 864LL), (unsigned __int64)v8);
  return v6;
}
