/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C013F180
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0063118 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00AD204 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00AD5D8 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C013F5EC (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01427CC (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     IsMouseInPointerActive @ 0x1C0147C74 (IsMouseInPointerActive.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C0161B34 (ApiSetEditionFindThreadPointerData.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned __int16 a4)
{
  unsigned int IsTouchpad; // ebx
  __int64 ThreadPointerData; // rax
  void *v11; // r8
  const struct CPointerInputFrame *v12; // rbp
  __int64 v13; // r8
  CInpLockGuard *v14[7]; // [rsp+20h] [rbp-38h] BYREF

  IsTouchpad = 0;
  if ( (*((_DWORD *)a2 + 302) & 0x2000) != 0 )
    return 0LL;
  if ( !a3 )
  {
    CInpLockGuardExclusive::CInpLockGuardExclusive(
      (CInpLockGuardExclusive *)v14,
      (CTouchProcessor *)((char *)this + 56),
      0LL);
    ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 1080, a4);
    if ( ThreadPointerData )
      IsTouchpad = *(_DWORD *)(ThreadPointerData + 20) == 5;
LABEL_13:
    CInpLockGuardExclusive::~CInpLockGuardExclusive(v14);
    return IsTouchpad;
  }
  if ( a3 != -1 )
  {
    if ( (unsigned int)IsMouseInPointerActive(a2) && a4 )
      return IsTouchpad;
    CInpLockGuardExclusive::CInpLockGuardExclusive(
      (CInpLockGuardExclusive *)v14,
      (CTouchProcessor *)((char *)this + 56),
      v11);
    v12 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a3 + 28));
    if ( !v12 )
    {
      CInpLockGuardExclusive::~CInpLockGuardExclusive(v14);
      return 0LL;
    }
    IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)(*((_QWORD *)v12 + 13)
                                                                 + 576LL * *(unsigned int *)(a3 + 32)));
    CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v12, v13);
    goto LABEL_13;
  }
  return 1;
}
