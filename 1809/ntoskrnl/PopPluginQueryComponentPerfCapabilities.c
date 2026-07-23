/*
 * XREFs of PopPluginQueryComponentPerfCapabilities @ 0x1402DA8B8
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x14086B2CC (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall PopPluginQueryComponentPerfCapabilities(__int64 a1, int a2, _DWORD *a3)
{
  char result; // al
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+2Ch] [rbp-Ch]

  result = 0;
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 72);
    v8 = a2;
    v7 = v6;
    result = (*(__int64 (__fastcall **)(__int64, __int64 *))(v5 + 96))(28LL, &v7);
    if ( result )
      *a3 = v9;
  }
  return result;
}
