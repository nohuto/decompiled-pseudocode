/*
 * XREFs of RIMCmFreePointerDeviceContacts @ 0x1C0106C44
 * Callers:
 *     RIMFreePointerDevice @ 0x1C00EBFB4 (RIMFreePointerDevice.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C00F3160 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEResetPointerDeviceMaxCount @ 0x1C00F4D80 (RIMIDEResetPointerDeviceMaxCount.c)
 *     RIMCmAllocPointerDeviceContacts @ 0x1C010699C (RIMCmAllocPointerDeviceContacts.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall RIMCmFreePointerDeviceContacts(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 896);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 896) = 0LL;
    *(_DWORD *)(a1 + 904) = 0;
  }
  v3 = *(_QWORD *)(a1 + 872);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 872) = 0LL;
  }
  result = a1 + 880;
  *(_QWORD *)(a1 + 888) = a1 + 880;
  *(_QWORD *)(a1 + 880) = a1 + 880;
  return result;
}
