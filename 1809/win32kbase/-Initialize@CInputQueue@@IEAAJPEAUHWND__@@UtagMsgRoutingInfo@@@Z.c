/*
 * XREFs of ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C0072F88
 * Callers:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@PEAPEAV1@@Z @ 0x1C0072E88 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@PEAPEAV1@@Z.c)
 * Callees:
 *     UserFindBaseWindowHandle @ 0x1C00F3FDC (UserFindBaseWindowHandle.c)
 */

__int64 __fastcall CInputQueue::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  char v8; // si
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 BaseWindowHandle; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 12);
  v12 = 0LL;
  v8 = 1;
  if ( (unsigned int)(v5 - 2) <= 1 )
  {
    if ( v5 == 3 )
    {
      BaseWindowHandle = UserFindBaseWindowHandle(a2, a3);
      if ( BaseWindowHandle )
        *(_QWORD *)(a1 + 32) = BaseWindowHandle;
      else
        v8 = 0;
    }
    if ( (int)IsUserValidateAndAttachQueueToInputWindowApiExtSupported() >= 0 && v8 )
    {
      v9 = a2;
      if ( *(_QWORD *)(a1 + 32) )
        v9 = *(_QWORD *)(a1 + 32);
      v3 = UserValidateAndAttachQueueToInputWindowApiExt(v9, a1, &v12);
    }
  }
  result = v3;
  *(_QWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 16) = a2;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)(a3 + 16);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a3 + 32);
  return result;
}
