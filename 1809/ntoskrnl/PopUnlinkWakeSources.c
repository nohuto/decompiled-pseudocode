/*
 * XREFs of PopUnlinkWakeSources @ 0x14086CC18
 * Callers:
 *     PopHandleWakeSources @ 0x140567540 (PopHandleWakeSources.c)
 *     PopFreeWakeInfo @ 0x14086C9B0 (PopFreeWakeInfo.c)
 * Callees:
 *     PopFreeWakeSource @ 0x14086C9D8 (PopFreeWakeSource.c)
 */

void __fastcall PopUnlinkWakeSources(__int64 a1)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // rax

  v2 = (_QWORD **)(a1 + 24);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (_QWORD **)v3[1] != v2 || (v4 = (_QWORD *)*v3, *(_QWORD **)(*v3 + 8LL) != v3) )
      __fastfail(3u);
    *v2 = v4;
    v4[1] = v2;
    PopFreeWakeSource(v3);
    --*(_DWORD *)(a1 + 40);
  }
}
