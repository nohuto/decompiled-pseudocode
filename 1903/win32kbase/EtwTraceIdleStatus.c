/*
 * XREFs of EtwTraceIdleStatus @ 0x1C008FBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetLastInputTime@CInputGlobals@@QEBA_KXZ @ 0x1C005B240 (-GetLastInputTime@CInputGlobals@@QEBA_KXZ.c)
 *     McTemplateK0qqqqqqq @ 0x1C0111384 (McTemplateK0qqqqqqq.c)
 */

void EtwTraceIdleStatus()
{
  __int64 v0; // rbx
  int v1; // edx
  int v2; // ecx
  char v3; // bl
  int v4; // r8d
  int v5; // r9d

  if ( (W32kEtwEnabledKeyword & 0x2000000000008000LL) != 0
    && (unsigned __int8)(byte_1C020F438 - 1) > 2u
    && (qword_1C020F420 & 0x2000000000008000LL) != 0
    && (qword_1C020F428 & 0x2000000000008000LL) == qword_1C020F428 )
  {
    v0 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    v3 = v0 - CInputGlobals::GetLastInputTime(gpInputGlobals);
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 8) != 0 )
      McTemplateK0qqqqqqq(v2, v1, v4, v5, v3);
  }
}
