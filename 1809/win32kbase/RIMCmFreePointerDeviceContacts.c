/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x1C012EB18
 * Callers:
 *     RIMFreePointerDevice @ 0x1C0116B48 (RIMFreePointerDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C011F8B8 (RIMIDEResetPointerDeviceMaxCount.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C012E874 (RIMCmAllocPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 928);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 928) = 0LL;
    *(_DWORD *)(a1 + 936) = 0;
  }
  v3 = *(_QWORD *)(a1 + 904);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 904) = 0LL;
  }
  result = a1 + 912;
  *(_QWORD *)(a1 + 920) = a1 + 912;
  *(_QWORD *)(a1 + 912) = a1 + 912;
  return result;
}
