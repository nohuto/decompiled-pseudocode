/*
 * XREFs of WPP_RECORDER_SF_sqq @ 0x1C0020D64
 * Callers:
 *     ?xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z @ 0x1C0020B80 (-xxxUserNotifyConsoleApplication@@YAJPEAU_CONSOLE_PROCESS_INFO@@@Z.c)
 *     ?xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A5B0 (-xxxCopyDdeIn@@YAKPEAXPEAKPEAPEAXPEAPEAUtagINTDDEINFO@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sqq(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        ...)
{
  __int64 v6; // rbx
  struct RECORDER_LOG__ *v7; // r15
  const char *v9; // rdi
  unsigned __int64 v11; // r11
  int v12; // eax
  __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // rcx
  int v18; // [rsp+20h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp+38h] BYREF
  va_list va; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v19 = va_arg(va1, _QWORD);
  v6 = -1LL;
  v7 = gFullLog;
  v9 = a6;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v11 + 1) >= 4u )
  {
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = "NULL";
    pfnWppTraceMessage(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v11),
      43LL,
      a5,
      a4,
      v17,
      v16,
      (__int64 *)va,
      8LL,
      va1);
  }
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v13 = v6 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !a6 )
    v9 = "NULL";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(v7, 4LL, a3, a5, v18, v9, v13, (__int64 *)va, 8LL, va1);
}
