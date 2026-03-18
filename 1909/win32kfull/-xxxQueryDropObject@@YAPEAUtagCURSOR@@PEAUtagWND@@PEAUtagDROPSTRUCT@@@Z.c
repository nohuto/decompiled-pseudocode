/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247108
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247108 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C02472D4 (xxxDragObject.c)
 * Callees:
 *     _ScreenToClient @ 0x1C001B03C (_ScreenToClient.c)
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _ChildWindowFromPointEx @ 0x1C015BF0C (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247108 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1C0259888 (_ClientToScreen.c)
 */

struct tagCURSOR *__fastcall xxxQueryDropObject(struct tagWND *a1, struct tagDROPSTRUCT *a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r14
  unsigned __int64 v4; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // esi
  struct tagWND *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct tagCURSOR *result; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp-10h]
  unsigned __int64 v23; // [rsp+A0h] [rbp+30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp+38h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = (_DWORD *)((char *)a2 + 32);
  v4 = *((_QWORD *)a2 + 4);
  BugCheckParameter3 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = v4;
  if ( !PtInRect((_DWORD *)(v2 + 88), v4) )
    return 0LL;
  if ( (*(_BYTE *)(v7 + 31) & 8) != 0 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 168);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)v4, HIDWORD(v23)) )
      return 0LL;
  }
  v9 = *((_QWORD *)a1 + 5);
  v10 = *(_BYTE *)(v9 + 31) & 0x20;
  if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v9 + 104), v4) )
  {
    ScreenToClient((__int64)a1, &v23);
    v11 = (struct tagWND *)ChildWindowFromPointEx((__int64)a1, v23, v10 + 3);
    ClientToScreen(a1, &v23);
    if ( v11 )
    {
      if ( v11 != a1 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13);
        v20 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
        v21 = v11;
        HMLockObject(v11);
        BugCheckParameter3 = (ULONG_PTR)xxxQueryDropObject(v11, a2);
        ThreadUnlock1(v16, v15, v17);
        result = (struct tagCURSOR *)BugCheckParameter3;
        if ( BugCheckParameter3 )
          return result;
      }
    }
    v4 = v23;
  }
  ScreenToClient((__int64)a1, v3);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a1;
  v19 = xxxSendTransformableMessageTimeout(
          (__int64 *)a1,
          0x22Bu,
          v10,
          a2,
          2u,
          0xBB8u,
          (__int64 *)&BugCheckParameter3,
          1u,
          0);
  result = (struct tagCURSOR *)(BugCheckParameter3 & -(__int64)(v19 != 0));
  BugCheckParameter3 = (ULONG_PTR)result;
  if ( !result )
    goto LABEL_15;
  if ( result != (struct tagCURSOR *)1 )
    result = (struct tagCURSOR *)HMValidateHandle((unsigned __int64)result, 3);
  if ( !result )
LABEL_15:
    *(_QWORD *)v3 = v4;
  return result;
}
