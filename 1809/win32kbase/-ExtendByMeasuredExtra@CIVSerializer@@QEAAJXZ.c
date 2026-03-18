/*
 * XREFs of ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01541CC
 * Callers:
 *     ?ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014D9C0 (-ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014DC80 (-ivRootDeliverTouchInput@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z @ 0x1C01564F0 (-ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01567CC (-ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     UserReAllocPoolZInit @ 0x1C007FC10 (UserReAllocPoolZInit.c)
 */

__int64 __fastcall CIVSerializer::ExtendByMeasuredExtra(CIVSerializer *this)
{
  __int64 v1; // rax
  size_t v3; // rdx
  unsigned __int64 v4; // rax
  __int64 v5; // rax

  v1 = *((_QWORD *)this + 2);
  if ( !v1 )
    return 0LL;
  v3 = *((_QWORD *)this + 1);
  v4 = v3 + v1;
  if ( v4 >= v3 )
  {
    v5 = UserReAllocPoolZInit(*(void **)this, v3, v4);
    *(_QWORD *)this = v5;
    if ( v5 )
    {
      *((_QWORD *)this + 1) += *((_QWORD *)this + 2);
      return 0LL;
    }
  }
  return 3221225495LL;
}
