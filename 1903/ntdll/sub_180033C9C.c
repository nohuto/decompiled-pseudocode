/*
 * XREFs of sub_180033C9C @ 0x180033C9C
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180048BD4 @ 0x180048BD4 (sub_180048BD4.c)
 *     sub_1800EFB70 @ 0x1800EFB70 (sub_1800EFB70.c)
 *     RtlLogStackBackTrace @ 0x1800FAAF0 (RtlLogStackBackTrace.c)
 *     sub_1801045B8 @ 0x1801045B8 (sub_1801045B8.c)
 *     sub_180104AC0 @ 0x180104AC0 (sub_180104AC0.c)
 *     sub_1801055A0 @ 0x1801055A0 (sub_1801055A0.c)
 * Callees:
 *     sub_1800FADC0 @ 0x1800FADC0 (sub_1800FADC0.c)
 *     sub_1800FAE20 @ 0x1800FAE20 (sub_1800FAE20.c)
 *     sub_1800FB1F0 @ 0x1800FB1F0 (sub_1800FB1F0.c)
 */

__int64 __fastcall sub_180033C9C(unsigned int a1)
{
  PRTL_SRWLOCK v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  unsigned int v5; // edi

  v1 = qword_180163B78;
  if ( !qword_180163B78 )
    return 0LL;
  v3 = sub_1800FADC0(qword_180163B78, a1);
  v4 = v3;
  if ( v3 )
  {
    v5 = sub_1800FB1F0(v1, v3);
    if ( !v5 )
      sub_1800FAE20(v1, v4);
  }
  else
  {
    return 0;
  }
  return v5;
}
