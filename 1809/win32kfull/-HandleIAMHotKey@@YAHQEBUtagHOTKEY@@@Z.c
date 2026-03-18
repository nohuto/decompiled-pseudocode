/*
 * XREFs of ?HandleIAMHotKey@@YAHQEBUtagHOTKEY@@@Z @ 0x1C01D63A4
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 * Callees:
 *     IsIAMThread @ 0x1C00D7DA0 (IsIAMThread.c)
 *     ?RequestModernAppClose@@YAHXZ @ 0x1C01D641C (-RequestModernAppClose@@YAHXZ.c)
 */

__int64 __fastcall HandleIAMHotKey(const struct tagHOTKEY *const a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)(v1 + 456) != grpdeskRitInput )
    return 0LL;
  LOBYTE(v2) = IsIAMThread(v1);
  v4 = 0;
  if ( !v2
    || !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 328LL)
    || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 24LL) + 328LL) != *(_QWORD *)(v3 + 16) )
  {
    return 0LL;
  }
  if ( *(_DWORD *)(v3 + 32) == 61536 )
    return (unsigned int)RequestModernAppClose();
  return v4;
}
