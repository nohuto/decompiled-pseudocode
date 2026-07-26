/*
 * XREFs of WPP_RECORDER_SF_qsD @ 0x1C00A69F0
 * Callers:
 *     ndisPowerIrpWorker @ 0x1C00A6E60 (ndisPowerIrpWorker.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qsD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const char *v5; // rdi
  __int64 v6; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx
  const char *v10; // rax
  __int64 v11; // rbx
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+98h] [rbp+30h] BYREF
  va_list va; // [rsp+98h] [rbp+30h]
  const char *v16; // [rsp+A0h] [rbp+38h]
  va_list va1; // [rsp+A8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v14 = va_arg(va1, _QWORD);
  v16 = va_arg(va1, const char *);
  v5 = v16;
  v6 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( v16 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v16[v8] );
      v9 = v8 + 1;
    }
    else
    {
      v9 = 5LL;
    }
    v10 = v16;
    if ( !v16 )
      v10 = "NULL";
    ndisWppFastTraceMessage(&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids, 0x98u, va, 8LL, v10, v9, va1, 4LL, 0LL);
  }
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v11 = v6 + 1;
  }
  else
  {
    v11 = 5LL;
  }
  if ( !v5 )
    v5 = "NULL";
  LOWORD(v13) = 152;
  return WppAutoLogTrace(
           a1,
           2LL,
           14LL,
           &WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
           v13,
           (__int64 *)va,
           8LL,
           v5,
           v11,
           va1,
           4LL,
           0LL);
}
