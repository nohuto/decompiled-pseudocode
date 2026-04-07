/*
 * XREFs of ?DoHitTest@UdwmTopVisual@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800043A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180004638 (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall UdwmTopVisual::DoHitTest(
        UdwmTopVisual *this,
        const struct tagPOINT *a2,
        struct CVisual **a3,
        unsigned int *a4)
{
  struct CVisual *v4; // rax
  unsigned int v5; // r10d
  CVisual *v7; // rcx
  bool result; // al
  LONG y; // ecx
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  struct CVisual *v14; // [rsp+60h] [rbp+18h] BYREF
  struct tagPOINT v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  v5 = 0;
  v14 = 0LL;
  v7 = (CVisual *)*((_QWORD *)this + 30);
  v13 = 0;
  if ( !v7 )
    goto LABEL_9;
  if ( CVisual::TransformFromParent(v7, a2, &v15) )
    (*(void (__fastcall **)(_QWORD, struct tagPOINT *, struct CVisual **, unsigned int *))(**((_QWORD **)this + 30)
                                                                                         + 136LL))(
      *((_QWORD *)this + 30),
      &v15,
      &v14,
      &v13);
  v4 = v14;
  v5 = v13;
  if ( !v14 )
  {
LABEL_9:
    if ( a2->x >= 0 && a2->x < *((_DWORD *)this + 30) )
    {
      y = a2->y;
      if ( y >= 0 && y < *((_DWORD *)this + 31) )
      {
        v5 = *((_DWORD *)this + 48);
        v4 = this;
      }
    }
  }
  *a3 = v4;
  result = v4 != 0LL;
  *a4 = v5;
  return result;
}
