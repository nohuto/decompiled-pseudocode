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

void __fastcall sub_180101B5C(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0LL;
  RtlAcquireSRWLockShared(&stru_180166390);
  if ( (dword_180166398 & 1) != 0 && (dword_180166398 & 2) != 0 && (int)sub_18010251C(a1, 1LL, &v9) >= 0 )
  {
    v8 = xmmword_1801638B0;
    v5 = (PVOID *)sub_18004CF00(0x600uLL, 0x600uLL, 0, &v8);
    v3 = (__int64)v5;
    if ( v5 )
    {
      if ( RtlCaptureStackBackTrace(1u, 0xC0u, v5, 0LL) )
      {
        v6 = sub_180114B68(&qword_1801663A0, v3);
        v7 = v6;
        if ( v6 )
        {
          if ( (unsigned int)sub_180101C80(v9, a2, v6) )
            v7 = 0LL;
          if ( v7 )
            sub_180115154(&qword_1801663A0, v7);
        }
      }
    }
  }
  RtlReleaseSRWLockShared(&stru_180166390);
  if ( v3 )
  {
    v8 = xmmword_1801638B0;
    sub_18004F690(v3, &v8);
  }
}
