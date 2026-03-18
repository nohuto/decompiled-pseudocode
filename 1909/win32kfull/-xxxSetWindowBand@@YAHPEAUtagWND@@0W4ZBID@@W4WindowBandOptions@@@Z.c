/*
 * XREFs of ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00177A8
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0006A60 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserSetWindowBand @ 0x1C00174B0 (NtUserSetWindowBand.c)
 * Callees:
 *     _BeginDeferWindowPos @ 0x1C0017660 (_BeginDeferWindowPos.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C0017748 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00178F0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxSetWindowBand(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // eax
  __int64 v7; // rcx
  struct tagSMWP *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // ebx
  int v12; // [rsp+20h] [rbp-60h] BYREF
  struct tagSMWP *v13; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v15; // [rsp+40h] [rbp-40h] BYREF
  struct tagSMWP *v16; // [rsp+48h] [rbp-38h]
  __int64 v17; // [rsp+50h] [rbp-30h]
  __int64 *v18[5]; // [rsp+58h] [rbp-28h] BYREF
  int v19; // [rsp+A0h] [rbp+20h] BYREF
  int v20; // [rsp+A8h] [rbp+28h] BYREF

  v20 = a4;
  v19 = a3;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v6 = 19;
  if ( (a4 & 4) != 0 )
    v6 = 394263;
  v12 = v6;
  v18[0] = (__int64 *)&v13;
  v18[1] = (__int64 *)&v12;
  v18[2] = (__int64 *)&v19;
  v18[3] = (__int64 *)&v20;
  v14[0] = v18;
  v14[1] = &v19;
  v13 = (struct tagSMWP *)BeginDeferWindowPos(0, a2, a3);
  if ( !v13 )
    return 0LL;
  lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(v18, a1, a2);
  if ( !v13 )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1400LL);
  if ( !v7 )
    v7 = a1;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v7, v14);
  v8 = v13;
  if ( !v13 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v15 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
  v16 = v8;
  HMLockObject(v8);
  v10 = xxxEndDeferWindowPosEx(v13);
  ThreadUnlock1();
  return v10;
}
