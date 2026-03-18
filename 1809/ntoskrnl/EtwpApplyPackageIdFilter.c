/*
 * XREFs of EtwpApplyPackageIdFilter @ 0x1408C1CDC
 * Callers:
 *     EtwpApplyScopeFilters @ 0x1405C42D0 (EtwpApplyScopeFilters.c)
 *     EtwpApplyTransientFilters @ 0x1406DBB58 (EtwpApplyTransientFilters.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14004D9D0 (ObFastDereferenceObject.c)
 *     RtlQueryPackageIdentity @ 0x1400A5010 (RtlQueryPackageIdentity.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140195A50 (_wcsnicmp.c)
 *     PsReferencePrimaryToken @ 0x1405DD640 (PsReferencePrimaryToken.c)
 *     PsQueryProcessAttributesByToken @ 0x140625960 (PsQueryProcessAttributesByToken.c)
 */

char __fastcall EtwpApplyPackageIdFilter(__int64 a1, _WORD *a2, _WORD *a3)
{
  char v3; // bl
  bool v6; // r12
  PACCESS_TOKEN v7; // r13
  bool v8; // r14
  unsigned __int16 v9; // r14
  unsigned int v10; // esi
  unsigned __int16 v11; // si
  unsigned int v12; // edi
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v15[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t Str2[128]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t v20[72]; // [rsp+150h] [rbp+50h] BYREF

  v16 = a1;
  v3 = 0;
  v6 = a3 == 0LL;
  v7 = PsReferencePrimaryToken(*(PEPROCESS *)(a1 + 80));
  PsQueryProcessAttributesByToken((__int64)v7, &v14, v15);
  if ( v14 )
  {
    v17 = 256LL;
    v18 = 130LL;
    if ( (int)RtlQueryPackageIdentity((__int64)v7, (__int64)Str2, (__int64)&v17, (__int64)v20, (__int64)&v18, 0LL) >= 0 )
    {
      v8 = a2 == 0LL;
      if ( a2 )
      {
        v9 = 0;
        v10 = (v17 >> 1) - 1;
        if ( *a2 )
        {
          while ( (unsigned __int16)a2[8 * v9 + 4] != v10 || wcsnicmp(*(const wchar_t **)&a2[8 * v9 + 8], Str2, v10) )
          {
            if ( ++v9 >= *a2 )
              goto LABEL_8;
          }
          v8 = 1;
        }
        else
        {
LABEL_8:
          v8 = 0;
        }
      }
      if ( a3 )
      {
        v11 = 0;
        v12 = (v18 >> 1) - 1;
        if ( *a3 )
        {
          while ( (unsigned __int16)a3[8 * v11 + 4] != v12 || wcsnicmp(*(const wchar_t **)&a3[8 * v11 + 8], v20, v12) )
          {
            if ( ++v11 >= *a3 )
              goto LABEL_14;
          }
          v6 = 1;
        }
        else
        {
LABEL_14:
          v6 = 0;
        }
      }
      if ( v8 && v6 )
        v3 = 1;
    }
  }
  ObFastDereferenceObject((signed __int64 *)(*(_QWORD *)(v16 + 80) + 856LL), (unsigned __int64)v7);
  return v3;
}
