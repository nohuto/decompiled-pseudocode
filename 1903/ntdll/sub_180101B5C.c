/*
 * XREFs of sub_180101B5C @ 0x180101B5C
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 *     RtlCaptureStackBackTrace @ 0x180074820 (RtlCaptureStackBackTrace.c)
 *     sub_180101C80 @ 0x180101C80 (sub_180101C80.c)
 *     sub_18010251C @ 0x18010251C (sub_18010251C.c)
 *     sub_180114B68 @ 0x180114B68 (sub_180114B68.c)
 *     sub_180115154 @ 0x180115154 (sub_180115154.c)
 */

signed __int64 __fastcall sub_180101B5C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v5; // rbx
  PVOID *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  signed __int64 result; // rax
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  RtlAcquireSRWLockShared(&qword_180166390, a2, a3, a4);
  if ( (dword_180166398 & 1) != 0 && (dword_180166398 & 2) != 0 && (int)sub_18010251C(a1, 1LL, &v12) >= 0 )
  {
    v11 = xmmword_1801638B0;
    v7 = (PVOID *)sub_18004CF00(0x600uLL, 0x600uLL, 0, &v11);
    v5 = (__int64)v7;
    if ( v7 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v7, 0LL) )
      {
        v8 = sub_180114B68(&qword_1801663A0, v5);
        v9 = v8;
        if ( v8 )
        {
          if ( (unsigned int)sub_180101C80(v12, a2, v8) )
            v9 = 0LL;
          if ( v9 )
            sub_180115154(&qword_1801663A0, v9);
        }
      }
    }
  }
  result = RtlReleaseSRWLockShared(&qword_180166390);
  if ( v5 )
  {
    v11 = xmmword_1801638B0;
    return sub_18004F690(v5, &v11);
  }
  return result;
}
