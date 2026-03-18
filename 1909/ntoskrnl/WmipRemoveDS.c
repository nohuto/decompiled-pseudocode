/*
 * XREFs of WmipRemoveDS @ 0x14073474C
 * Callers:
 *     WmipDeregisterRegEntry @ 0x140174728 (WmipDeregisterRegEntry.c)
 * Callees:
 *     WmipUnreferenceEntry @ 0x140696B78 (WmipUnreferenceEntry.c)
 *     WmipGenerateRegistrationNotification @ 0x140734FA8 (WmipGenerateRegistrationNotification.c)
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
