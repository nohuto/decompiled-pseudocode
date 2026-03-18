/*
 * XREFs of CoreUICallSend @ 0x1C0090184
 * Callers:
 *     ?PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU_GUID@@@Z @ 0x1C00493DC (-PrepareConnection@RegistrarClient@CoreMessagingK@@SAJPEBUtagMsgRoutingInfo@@PEAW4MsgError@@PEAU.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z @ 0x1C009B4EC (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBGPEBU_GUID@@@Z.c)
 *     ?RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C009BD7C (-RegisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C00B6CAC (-UnregisterAlpcPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 *     ?UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z @ 0x1C00B6D7C (-UnregisterObject@RegistrarClient@CoreMessagingK@@SAJPEBG@Z.c)
 * Callees:
 *     CoreUICallSendVaList @ 0x1C00901B8 (CoreUICallSendVaList.c)
 */

__int64 CoreUICallSend(int a1, int a2, int a3, int a4, __int16 a5, __int64 a6, ...)
{
  va_list va; // [rsp+80h] [rbp+38h] BYREF

  va_start(va, a6);
  return CoreUICallSendVaList(a1, a2, a3, a4, a5, a6, va);
}
