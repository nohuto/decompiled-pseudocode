/*
 * XREFs of ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0110508
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0006A60 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserSetWindowBand @ 0x1C0110360 (NtUserSetWindowBand.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00CEBD0 (xxxEndDeferWindowPosEx.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C0110650 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C0110690 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     _BeginDeferWindowPos @ 0x1C01106F0 (_BeginDeferWindowPos.c)
 */

__int64 __fastcall xxxSetWindowBand(__int64 a1, __int64 a2, int a3, int a4)
{
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagSMWP *v11; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  int v18; // [rsp+20h] [rbp-60h] BYREF
  struct tagSMWP *v19; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v20[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  struct tagSMWP *v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  _QWORD v24[5]; // [rsp+58h] [rbp-28h] BYREF
  int v25; // [rsp+A0h] [rbp+20h] BYREF
  int v26; // [rsp+A8h] [rbp+28h] BYREF

  v26 = a4;
  v25 = a3;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v6 = 19;
  if ( (a4 & 4) != 0 )
    v6 = 394263;
  v18 = v6;
  v24[0] = &v19;
  v24[1] = &v18;
  v24[2] = &v25;
  v24[3] = &v26;
  v20[0] = v24;
  v20[1] = &v25;
  v19 = (struct tagSMWP *)BeginDeferWindowPos(0LL);
  if ( !v19 )
    return 0LL;
  lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(v24, a1, a2);
  if ( !v19 )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1400LL);
  if ( !v7 )
    v7 = a1;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v7, v20);
  v11 = v19;
  if ( !v19 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9, v10);
  v21 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
  v22 = v11;
  HMLockObject(v11);
  v13 = xxxEndDeferWindowPosEx(v19, 1LL);
  ThreadUnlock1(v15, v14, v16);
  return v13;
}
