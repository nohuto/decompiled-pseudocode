/*
 * XREFs of CmpGetRegistryNamespaceRootForSilo @ 0x14068F710
 * Callers:
 *     CmpParseKey @ 0x140642370 (CmpParseKey.c)
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14010A120 (PsGetPermanentSiloContext.c)
 *     PsGetParentSilo @ 0x140887970 (PsGetParentSilo.c)
 */

__int64 __fastcall CmpGetRegistryNamespaceRootForSilo(__int64 ParentSilo)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  while ( 1 )
  {
    v6 = 0LL;
    PsGetPermanentSiloContext(ParentSilo, CmpSiloContextSlot, &v6);
    if ( v6 )
    {
      result = *(_QWORD *)(v6 + 32);
      if ( result )
        break;
    }
    ParentSilo = PsGetParentSilo(ParentSilo, v2, v3, v4);
  }
  return result;
}
