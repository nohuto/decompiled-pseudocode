/*
 * XREFs of ?Initialize@SystemCursorShape@@QEAAJXZ @ 0x1800CD620
 * Callers:
 *     ?CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z @ 0x1800CC630 (-CreateCursorShapeAnimation@SystemCursorService@@QEAAJIK_K0@Z.c)
 *     ?CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z @ 0x1800CC8EC (-CreateCustomCursorShapeAnimation@SystemCursorService@@QEAAJIK_K@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FeedAnimationData@SystemCursorShape@@AEAAJXZ @ 0x1800CD2B8 (-FeedAnimationData@SystemCursorShape@@AEAAJXZ.c)
 */

__int64 __fastcall SystemCursorShape::Initialize(SystemCursorShape *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = SystemCursorShape::FeedAnimationData(this);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x208,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
