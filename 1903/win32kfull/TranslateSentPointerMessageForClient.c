/*
 * XREFs of TranslateSentPointerMessageForClient @ 0x1C01F0AF4
 * Callers:
 *     _QuerySendMessage @ 0x1C020CFC8 (_QuerySendMessage.c)
 * Callees:
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1FB0 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

_BOOL8 __fastcall TranslateSentPointerMessageForClient(unsigned int a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  HWND v4; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int16 v5; // [rsp+78h] [rbp+10h] BYREF
  int v6; // [rsp+80h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+88h] [rbp+20h] BYREF

  return MakePointerMessage(*a3, a1, (void *)*a2, a2, (__int64 *)a3, &v5, &v7, &v6, &v4) != 0;
}
