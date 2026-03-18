/*
 * XREFs of ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C0091C4C
 * Callers:
 *     ?Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4CompositionInputFlags@@PEAPEAV1@@Z @ 0x1C00C0288 (-Create@CInputQueue@@SAJW4CompositionInputQueueType@@PEAUHWND__@@UtagMsgRoutingInfo@@W4Compositi.c)
 * Callees:
 *     UserFindBaseWindowHandle @ 0x1C011FE34 (UserFindBaseWindowHandle.c)
 */

__int64 __fastcall CInputQueue::Initialize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v5; // ecx
  char v8; // si
  __int64 v9; // rcx
  __int64 result; // rax
  __int128 v11; // xmm1
  __int64 v12; // rcx
  __int64 v13; // xmm0_8
  __int64 BaseWindowHandle; // rax
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v5 = *(_DWORD *)(a1 + 12);
  v15 = 0LL;
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
      v3 = UserValidateAndAttachQueueToInputWindowApiExt(v9, a1, &v15);
    }
  }
  result = v3;
  v11 = *(_OWORD *)(a3 + 16);
  v12 = v15;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)a3;
  *(_QWORD *)(a1 + 16) = a2;
  v13 = *(_QWORD *)(a3 + 32);
  *(_OWORD *)(a1 + 56) = v11;
  *(_QWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 72) = v13;
  return result;
}
