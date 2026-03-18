/*
 * XREFs of CreateServiceSid @ 0x1C02C62D8
 * Callers:
 *     DxgkPrepareCcdDatabaseForAccess @ 0x1C02C63CC (DxgkPrepareCcdDatabaseForAccess.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

_QWORD *__fastcall CreateServiceSid(_QWORD *a1, ULONG *a2)
{
  ULONG v4; // eax
  PVOID PoolWithTag; // rax
  ULONG v6; // edi
  void *v7; // rbx
  PULONG v8; // rax
  ULONG v9; // ecx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-18h] BYREF

  v4 = RtlLengthRequiredSid(6u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4, 0x4B677844u);
  v6 = 0;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 6u) >= 0 )
    {
      do
      {
        v8 = RtlSubAuthoritySid(v7, v6);
        v9 = *a2;
        ++v6;
        ++a2;
        *v8 = v9;
      }
      while ( v6 < 6 );
      *a1 = v7;
    }
    else
    {
      *a1 = 0LL;
      ExFreePoolWithTag(v7, 0x4B677844u);
    }
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
