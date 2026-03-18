/*
 * XREFs of WmipRemoveDS @ 0x1407324EC
 * Callers:
 *     WmipDeregisterRegEntry @ 0x140173FF8 (WmipDeregisterRegEntry.c)
 * Callees:
 *     WmipUnreferenceEntry @ 0x140669758 (WmipUnreferenceEntry.c)
 *     WmipGenerateRegistrationNotification @ 0x140732D48 (WmipGenerateRegistrationNotification.c)
 */

__int64 __fastcall WmipRemoveDS(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    WmipGenerateRegistrationNotification(*(_QWORD *)(a1 + 32), 2LL);
    *(_DWORD *)(v1 + 16) |= 1u;
    return WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v1);
  }
  return result;
}
