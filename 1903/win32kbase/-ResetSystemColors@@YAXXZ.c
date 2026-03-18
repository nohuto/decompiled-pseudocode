/*
 * XREFs of ?ResetSystemColors@@YAXXZ @ 0x1C0064094
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C00639B0 (xxxResetDisplayDevice.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002EACC (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002EB20 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetSysColors @ 0x1C0051FD4 (xxxSetSysColors.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

void ResetSystemColors(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rax
  __int64 v2; // rcx
  _BYTE v3[16]; // [rsp+30h] [rbp-128h] BYREF
  char v4[128]; // [rsp+40h] [rbp-118h] BYREF
  char v5[128]; // [rsp+C0h] [rbp-98h] BYREF

  v0 = 0;
  memmove(v4, (char *)gpsi + 4444, 0x7CuLL);
  v1 = 0LL;
  do
  {
    *(_DWORD *)&v5[v1] = v0;
    v1 += 4LL;
    ++v0;
  }
  while ( v0 < 0x1F );
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v3);
  xxxSetSysColors(v2, v0, v5, v4, 6u);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v3);
}
