/*
 * XREFs of ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x1C01237D4
 * Callers:
 *     ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x1C0107574 (-ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0020F10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0031294 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingTemporarilyScribbleNetLuidIndex(union _NET_LUID_LH *a1)
{
  const GUID *v1; // r8
  const GUID *v2; // r9
  int v3; // eax
  int v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( hProvider.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&hProvider, 0x200000000000uLL) )
    {
      v3 = (*(_QWORD *)&v2->Data1 >> 24) & 0xFFFFFF;
      v7 = 4;
      v8 = 0;
      v4 = v3;
      v6 = &v4;
      TlgWrite(&hProvider, &unk_1C00D22E6, v1, v2, 3u, &pData);
    }
  }
}
