/*
 * XREFs of ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C00EEE58
 * Callers:
 *     ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0007DE4 (-AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 *     NtUserSetWindowBand @ 0x1C00EECE0 (NtUserSetWindowBand.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1C00EEF80 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C00EEFC0 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 *     _BeginDeferWindowPos @ 0x1C00EF020 (_BeginDeferWindowPos.c)
 */

__int64 __fastcall xxxSetWindowBand(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct tagSMWP *v9; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-60h] BYREF
  struct tagSMWP *v17; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v19[3]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v20[5]; // [rsp+58h] [rbp-28h] BYREF
  int v21; // [rsp+A0h] [rbp+20h] BYREF
  int v22; // [rsp+A8h] [rbp+28h] BYREF

  v22 = a4;
  v21 = a3;
  v5 = 19;
  if ( (a4 & 4) != 0 )
    v5 = 394263;
  v16 = v5;
  v20[0] = &v17;
  v20[1] = &v16;
  v20[2] = &v21;
  v20[3] = &v22;
  v18[0] = v20;
  v18[1] = &v21;
  v17 = (struct tagSMWP *)BeginDeferWindowPos(0LL);
  if ( !v17 )
    return 0LL;
  lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(v20, a1, a2);
  if ( !v17 )
    return 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1384LL);
  if ( !v7 )
    v7 = a1;
  CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___(v7, v18);
  v9 = v17;
  if ( !v17 )
    return 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
  v19[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v19;
  v19[1] = v9;
  _InterlockedAdd((volatile signed __int32 *)v9 + 2, 1u);
  v11 = xxxEndDeferWindowPosEx(v17, 1);
  ThreadUnlock1(v13, v12, v14);
  return v11;
}
