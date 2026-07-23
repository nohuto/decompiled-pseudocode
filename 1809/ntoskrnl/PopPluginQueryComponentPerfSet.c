/*
 * XREFs of PopPluginQueryComponentPerfSet @ 0x1402DA904
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x14086B2CC (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginQueryComponentPerfSet(
        __int64 a1,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  ULONG_PTR v9; // rbx
  __int64 result; // rax
  __int64 v11; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+2Ch] [rbp-2Ch]
  __int64 v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+3Ch] [rbp-1Ch]
  __int64 v17; // [rsp+40h] [rbp-18h]
  __int64 v18; // [rsp+48h] [rbp-10h]

  v9 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(a1 + 72);
  v12 = a2;
  v14 = 0LL;
  v13 = a3;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(v9 + 96))(29LL, &v11) )
    PopFxBugCheck(0x605uLL, 0x1DuLL, v9, 0LL);
  *a4 = v15;
  *a5 = v16;
  *a6 = v17;
  *a7 = v17;
  result = v18;
  *a8 = v18;
  return result;
}
