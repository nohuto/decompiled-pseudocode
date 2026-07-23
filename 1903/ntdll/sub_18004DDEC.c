/*
 * XREFs of sub_18004DDEC @ 0x18004DDEC
 * Callers:
 *     sub_1800479C8 @ 0x1800479C8 (sub_1800479C8.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_18004CE58 @ 0x18004CE58 (sub_18004CE58.c)
 */

__int64 __fastcall sub_18004DDEC(_RTL_SRWLOCK *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _RTL_SRWLOCK *v6; // rdi
  _RTL_SRWLOCK *v8; // rbx

  if ( *a4 == -1 )
  {
    v8 = a1 + 268;
    RtlAcquireSRWLockShared(a1 + 268);
    v6 = (_RTL_SRWLOCK *)sub_18004CE58((__int64)a1, (__int64)a4, 0, 0LL);
    RtlReleaseSRWLockShared(v8);
  }
  else
  {
    v6 = &a1[6 * (unsigned int)*a4 + 270];
  }
  return sub_18004DE5C(v6);
}
