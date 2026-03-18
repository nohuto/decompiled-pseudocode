/*
 * XREFs of PopPluginWork @ 0x1400E3D78
 * Callers:
 *     PopFxDispatchPluginWorkOnce @ 0x1405B1C74 (PopFxDispatchPluginWorkOnce.c)
 * Callees:
 *     PopPepWork @ 0x1400E19A0 (PopPepWork.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 */

char __fastcall PopPluginWork(ULONG_PTR BugCheckParameter3, _DWORD *a2)
{
  char v4; // cl
  unsigned __int8 (__fastcall *v6)(__int64, _DWORD **); // rax
  unsigned __int8 (__fastcall *v7)(__int64, _DWORD **); // rax
  _DWORD *v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  v8 = 0LL;
  v9 = 0LL;
  if ( a2 )
    memset(a2, 0, 0x40uLL);
  v8 = a2;
  LOBYTE(v9) = 0;
  if ( !BugCheckParameter3 )
  {
    v4 = PopPepWork((__int64)a2);
    if ( v4 && !a2 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
    return v4;
  }
  v6 = *(unsigned __int8 (__fastcall **)(__int64, _DWORD **))(BugCheckParameter3 + 96);
  if ( v6 && v6(13LL, &v8) )
  {
    v4 = v9;
    if ( !(_BYTE)v9 || a2 )
      return v4;
LABEL_18:
    PopFxBugCheck(0x612uLL, BugCheckParameter3, 0LL, 0LL);
  }
  v7 = *(unsigned __int8 (__fastcall **)(__int64, _DWORD **))(BugCheckParameter3 + 112);
  if ( !v7 || !v7(10LL, &v8) )
    PopFxBugCheck(0x605uLL, 0xDuLL, BugCheckParameter3, 0LL);
  v4 = v9;
  if ( (_BYTE)v9 && (!a2 || (unsigned int)(*a2 - 7) > 1) )
    goto LABEL_18;
  return v4;
}
