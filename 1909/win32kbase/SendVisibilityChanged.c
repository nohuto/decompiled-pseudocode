/*
 * XREFs of SendVisibilityChanged @ 0x1C00498E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall SendVisibilityChanged(unsigned __int8 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  _DWORD v4[10]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1;
  memset(v4, 0, 0x20uLL);
  v4[2] = v1;
  return ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64))InputExtensibilityCallout::CoreMsgSendMessage)(
           v2,
           1LL,
           v4,
           32LL);
}
