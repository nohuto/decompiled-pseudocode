/*
 * XREFs of PopPluginPrepareDevice @ 0x1402F5BC0
 * Callers:
 *     PoFxPrepareDevice @ 0x140159050 (PoFxPrepareDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 */

char __fastcall PopPluginPrepareDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  unsigned __int8 (__fastcall *v4)(_QWORD, _QWORD *); // r8
  char v5; // bl
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // rax
  _QWORD *v9; // rdi
  _QWORD v11[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v11[0] = 0LL;
  v11[1] = 0LL;
  memset(v12, 0, 0x20uLL);
  v4 = *(unsigned __int8 (__fastcall **)(_QWORD, _QWORD *))(BugCheckParameter3 + 96);
  v5 = 0;
  if ( v4 )
  {
    v6 = a2 + 280;
    if ( (*(_DWORD *)(BugCheckParameter3 + 24) & 0x8000000) != 0 )
    {
      v7 = 144;
      v12[2] = *(_QWORD *)(a2 + 32);
      v8 = *(_QWORD *)(a2 + 16);
      v9 = v12;
      v12[0] = v6;
      v12[3] = *(_QWORD *)(v8 + 32);
    }
    else
    {
      v11[0] = a2 + 280;
      v9 = v11;
      v7 = 1;
    }
    if ( !v4(v7, v9) )
      PopFxBugCheck(0x605uLL, v7, BugCheckParameter3, 0LL);
    return *((_BYTE *)v9 + 8);
  }
  return v5;
}
