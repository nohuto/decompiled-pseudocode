/*
 * XREFs of wistd::__function::__func__lambda_16ce421b8b9e4e11a2665e8993933f2f__long___cdecl(unsigned_short___unsigned___int64_unsigned___int64__)_::operator() @ 0x1800333C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800086B8 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall wistd::__function::__func__lambda_16ce421b8b9e4e11a2665e8993933f2f__long___cdecl_unsigned_short___unsigned___int64_unsigned___int64____::operator()(
        __int64 a1,
        _QWORD *a2,
        unsigned int *a3,
        unsigned __int64 **a4)
{
  unsigned __int64 *v4; // rbx
  unsigned int PersistedRegistryLocationW; // eax
  unsigned int v6; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *a4;
  PersistedRegistryLocationW = GetPersistedRegistryLocationW(
                                 **(_QWORD **)(a1 + 16),
                                 **(_QWORD **)(a1 + 8),
                                 *a2,
                                 *a3,
                                 &v9);
  v6 = 0;
  if ( PersistedRegistryLocationW == 234 )
    PersistedRegistryLocationW = 0;
  if ( PersistedRegistryLocationW )
    return (unsigned int)wil::details::in1diag3::Return_Win32(
                           retaddr,
                           (void *)0x1F,
                           (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
                           (const char *)PersistedRegistryLocationW);
  else
    *v4 = (unsigned __int64)v9 >> 1;
  return v6;
}
