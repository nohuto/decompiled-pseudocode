/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022EFE0
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022EFE0 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C022F198 (xxxDragObject.c)
 * Callees:
 *     _ScreenToClient @ 0x1C000CE40 (_ScreenToClient.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     _ChildWindowFromPointEx @ 0x1C014FF1C (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022EFE0 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1C0241238 (_ClientToScreen.c)
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
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct tagCURSOR *result; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD v19[4]; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 v21; // [rsp+A8h] [rbp+38h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = (_DWORD *)((char *)a2 + 32);
  v4 = *((_QWORD *)a2 + 4);
  BugCheckParameter3 = 0LL;
  v21 = v4;
  if ( !PtInRect((_DWORD *)(v2 + 88), v4) )
    return 0LL;
  if ( (*(_BYTE *)(v7 + 31) & 8) != 0 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 168);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)v4, HIDWORD(v21)) )
      return 0LL;
  }
  v9 = *((_QWORD *)a1 + 5);
  v10 = *(_BYTE *)(v9 + 31) & 0x20;
  if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v9 + 104), v4) )
  {
    ScreenToClient((__int64)a1, &v21);
    v11 = ChildWindowFromPointEx((__int64)a1, v21, (unsigned __int8)v10 + 3);
    ClientToScreen(a1, &v21);
    BugCheckParameter3 = 0LL;
    if ( v11 )
    {
      if ( (struct tagWND *)v11 != a1 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
        v19[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v19;
        v19[1] = v11;
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
        BugCheckParameter3 = (ULONG_PTR)xxxQueryDropObject((struct tagWND *)v11, a2);
        ThreadUnlock1(v15, v14);
        result = (struct tagCURSOR *)BugCheckParameter3;
        if ( BugCheckParameter3 )
          return result;
      }
    }
    v4 = v21;
  }
  ScreenToClient((__int64)a1, v3);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a1;
  v17 = xxxSendTransformableMessageTimeout(
          (__int64 *)a1,
          0x22Bu,
          v10,
          (__int64)a2,
          2,
          3000,
          (__int64 *)&BugCheckParameter3,
          1,
          0);
  result = (struct tagCURSOR *)(BugCheckParameter3 & -(__int64)(v17 != 0));
  BugCheckParameter3 = (ULONG_PTR)result;
  if ( !result )
    goto LABEL_15;
  if ( result != (struct tagCURSOR *)1 )
  {
    LOBYTE(v18) = 3;
    result = (struct tagCURSOR *)HMValidateHandle((__int64)result, v18);
  }
  if ( !result )
LABEL_15:
    *(_QWORD *)v3 = v4;
  return result;
}
