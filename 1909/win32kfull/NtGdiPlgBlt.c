/*
 * XREFs of NtGdiPlgBlt @ 0x1C0008620
 * Callers:
 *     <none>
 * Callees:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtGdiPlgBlt(
        HDC a1,
        const void *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10,
        int a11)
{
  _BYTE v13[24]; // [rsp+90h] [rbp-48h] BYREF

  if ( ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  memmove(v13, a2, 0x18uLL);
  return GrePlgBlt(a1, a5, a6, a7, a8, a9, a10, a11);
}
