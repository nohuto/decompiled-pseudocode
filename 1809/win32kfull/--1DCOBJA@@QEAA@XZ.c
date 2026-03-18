/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0137874
 * Callers:
 *     NtGdiCancelDC @ 0x1C0291820 (NtGdiCancelDC.c)
 * Callees:
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(__int64 **this)
{
  __int64 *v2; // rcx
  __int64 v3; // rdi
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *this;
  if ( v2 )
  {
    v4 = 0;
    v3 = *v2;
    HmgDecrementShareReferenceCountEx(v2, &v4);
    if ( v4 )
      bDeleteDCInternalEx(v3, 0LL);
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(this + 2);
}
