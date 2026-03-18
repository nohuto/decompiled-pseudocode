/*
 * XREFs of ObAssignObjectSecurityDescriptor @ 0x1406AAC68
 * Callers:
 *     WmipSecurityMethod @ 0x1406AAAA0 (WmipSecurityMethod.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x1405C9E70 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall ObAssignObjectSecurityDescriptor(__int64 a1, char *a2)
{
  int v4; // esi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v4 = ObLogSecurityDescriptor(a2, &v6, 0x10u);
    if ( v4 >= 0 )
    {
      ExFreePoolWithTag(a2, 0);
      if ( v6 )
        *(_QWORD *)(a1 - 8) = v6 + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
    return (unsigned int)v4;
  }
  else
  {
    *(_QWORD *)(a1 - 8) = 0LL;
    return 0LL;
  }
}
