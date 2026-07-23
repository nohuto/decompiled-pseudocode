/*
 * XREFs of RtlQueryResourcePolicy @ 0x180009B00
 * Callers:
 *     sub_18004B17C @ 0x18004B17C (sub_18004B17C.c)
 *     sub_18004C2EC @ 0x18004C2EC (sub_18004C2EC.c)
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 * Callees:
 *     sub_180009A9C @ 0x180009A9C (sub_180009A9C.c)
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     RtlGetNtSystemRoot @ 0x180029260 (RtlGetNtSystemRoot.c)
 *     RtlGetSuiteMask @ 0x18002DCA0 (RtlGetSuiteMask.c)
 *     sub_180084FB8 @ 0x180084FB8 (sub_180084FB8.c)
 *     sub_180114328 @ 0x180114328 (sub_180114328.c)
 *     sub_180114534 @ 0x180114534 (sub_180114534.c)
 */

__int64 __fastcall RtlQueryResourcePolicy(int a1, int a2, int *a3, __int64 a4)
{
  int v8; // ebx
  int v9; // ebx
  PWSTR NtSystemRoot; // rax
  PWSTR v11; // rax

  if ( !a3 || a2 )
    return 3221225485LL;
  RtlRunOnceExecuteOnce(&RunOnce, InitFn, 0LL, 0LL);
  if ( !a1 )
  {
    if ( a4 == 4 )
      return sub_180009A9C(a3);
    return 3221225485LL;
  }
  v8 = a1 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      if ( a4 == 4 )
        return sub_180084FB8(a3);
      return 3221225485LL;
    }
    if ( v9 != 1 )
      return 3221225475LL;
    if ( a4 == 4 )
    {
      NtSystemRoot = RtlGetNtSystemRoot();
      return sub_180114534(NtSystemRoot, a3);
    }
    return 3221225485LL;
  }
  if ( a4 != 4 )
    return 3221225485LL;
  if ( (RtlGetSuiteMask() & 0x10000) != 0 )
    v11 = L"C:\\data\\programs\\windowsapps";
  else
    v11 = RtlGetNtSystemRoot();
  return sub_180114328(v11, a3);
}
