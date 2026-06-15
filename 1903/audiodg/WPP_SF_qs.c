/*
 * XREFs of WPP_SF_qs @ 0x140035D1C
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140004980 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140004F50 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qs(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v3; // rax
  __int64 v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  __int64 v7; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v5 = va_arg(va1, _QWORD);
  v7 = va_arg(va1, _QWORD);
  if ( v7 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( *(_BYTE *)(v7 + v3) );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_d4b18a9a07fa3bd0098f681e5ce2fb5d_Traceguids, a2, (__int64 *)va);
}
