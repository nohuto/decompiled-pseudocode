/*
 * XREFs of ?IsPointerMessageTouchpad@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KG@Z @ 0x1C016DCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00A4FC0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00BA72C (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?IsTouchpad@CPointerInfoNode@@QEBAHXZ @ 0x1C016E100 (-IsTouchpad@CPointerInfoNode@@QEBAHXZ.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C0171574 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0175400 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     IsMouseInPointerActive @ 0x1C0176C74 (IsMouseInPointerActive.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C019C088 (ApiSetEditionFindThreadPointerData.c)
 */

__int64 __fastcall CTouchProcessor::IsPointerMessageTouchpad(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        __int64 a3,
        unsigned __int16 a4)
{
  unsigned int IsTouchpad; // ebx
  __int64 v9; // r8
  __int64 ThreadPointerData; // rax
  const struct CPointerInputFrame *v11; // rsi
  CInpLockGuard *v13; // [rsp+40h] [rbp+8h] BYREF

  IsTouchpad = 0;
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)&v13, (CTouchProcessor *)((char *)this + 48));
  if ( (*((_DWORD *)a2 + 306) & 0x2000) == 0 )
  {
    if ( a3 )
    {
      if ( a3 == -1 )
      {
LABEL_7:
        IsTouchpad = 1;
        goto LABEL_12;
      }
      if ( !(unsigned int)IsMouseInPointerActive(a2) || !a4 )
      {
        v11 = CTouchProcessor::ReferenceFrame(this, *(_DWORD *)(a3 + 28));
        if ( v11 )
        {
          IsTouchpad = CPointerInfoNode::IsTouchpad((CPointerInfoNode *)(*((_QWORD *)v11 + 16)
                                                                       + 496LL * *(unsigned int *)(a3 + 32)));
          CTouchProcessor::UnreferenceFrame(this, v11);
        }
      }
    }
    else
    {
      ThreadPointerData = ApiSetEditionFindThreadPointerData((char *)a2 + 1080, a4, v9);
      if ( ThreadPointerData && *(_DWORD *)(ThreadPointerData + 20) == 5 )
        goto LABEL_7;
    }
  }
LABEL_12:
  CInpLockGuard::UnLock(v13);
  return IsTouchpad;
}
