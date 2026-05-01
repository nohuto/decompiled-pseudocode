/*
 * XREFs of WPP_SF_LSdL @ 0x18016B2B8
 * Callers:
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18003C240 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x18003C6D4 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG WPP_SF_LSdL(TRACEHANDLE a1, USHORT a2, __int64 a3, int a4, const wchar_t *a5, ...)
{
  const wchar_t *v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  int v9; // [rsp+98h] [rbp+20h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  va_list va1; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v10 = va_arg(va1, _QWORD);
  v9 = a4;
  v5 = a5;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10LL;
  }
  if ( !a5 )
    v5 = L"NULL";
  return TraceMessage(
           a1,
           0x2Bu,
           &WPP_3ae9f5eed530322b8a0a3a3f404820d9_Traceguids,
           a2,
           &v9,
           4LL,
           v5,
           v7,
           va,
           4LL,
           va1,
           4LL,
           0LL);
}
