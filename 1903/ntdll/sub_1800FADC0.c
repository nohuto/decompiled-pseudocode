/*
 * XREFs of sub_1800FADC0 @ 0x1800FADC0
 * Callers:
 *     sub_180033C9C @ 0x180033C9C (sub_180033C9C.c)
 *     sub_1800FAB00 @ 0x1800FAB00 (sub_1800FAB00.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180074820 (RtlCaptureStackBackTrace.c)
 *     sub_1800FB3AC @ 0x1800FB3AC (sub_1800FB3AC.c)
 */

__int64 __fastcall sub_1800FADC0(__int64 a1, int a2)
{
  _BYTE v4[14]; // [rsp+20h] [rbp-118h] BYREF
  PVOID BackTrace; // [rsp+30h] [rbp-108h] BYREF
  ULONG v7; // [rsp+148h] [rbp+10h] BYREF

  if ( RtlCaptureStackBackTrace(a2 + 1, 0x20u, &BackTrace, &v7) )
    return sub_1800FB3AC(a1, v4, v7);
  else
    return 0LL;
}
