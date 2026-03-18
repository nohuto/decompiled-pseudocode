/*
 * XREFs of ?UnloadFontFile@PDEVOBJ@@QEAAH_K@Z @ 0x1C00CE1F8
 * Callers:
 *     ?vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z @ 0x1C00C5438 (-vCleanupFontFile@@YAXPEAVPFFCLEANUP@@@Z.c)
 *     GreMakeFontDir @ 0x1C0289210 (GreMakeFontDir.c)
 * Callees:
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z @ 0x1C0081758 (-Initialize@ATTACHOBJ@@QEAAXPEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::UnloadFontFile(PDEVOBJ *this, __int64 a2)
{
  __int64 (__fastcall *v3)(__int64); // rbx
  unsigned int v4; // ebx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+58h] [rbp-30h]
  int v8; // [rsp+60h] [rbp-28h]
  char v9; // [rsp+64h] [rbp-24h]

  v3 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)this + 3048LL);
  if ( !gpepCSRSS )
    return 0xFFFFFFFFLL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  ATTACHOBJ::Initialize(&ApcState, this);
  v4 = v3(a2);
  ATTACHOBJ::~ATTACHOBJ(&ApcState);
  return v4;
}
