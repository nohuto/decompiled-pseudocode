/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0205EA8
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0205EA8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C0206058 (xxxDragObject.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     _ScreenToClient @ 0x1C00C1998 (_ScreenToClient.c)
 *     _ChildWindowFromPointEx @ 0x1C012D97C (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0205EA8 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1C022B2DC (_ClientToScreen.c)
 */

struct tagCURSOR *__fastcall xxxQueryDropObject(struct tagWND *a1, struct tagDROPSTRUCT *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // esi
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct tagCURSOR *result; // rax
  __int64 v16; // r10
  __int64 v17; // rax
  _QWORD v18[4]; // [rsp+50h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+90h] [rbp+20h] BYREF
  struct tagDROPSTRUCT *v20; // [rsp+98h] [rbp+28h]
  unsigned __int64 v21; // [rsp+A0h] [rbp+30h] BYREF

  v20 = a2;
  v2 = *((_QWORD *)a2 + 4);
  v4 = *((_QWORD *)a1 + 5);
  BugCheckParameter3 = 0LL;
  v21 = v2;
  if ( !PtInRect((_DWORD *)(v4 + 88), v2) )
    return 0LL;
  if ( (*(_BYTE *)(v5 + 31) & 8) != 0 )
    return 0LL;
  v6 = *(_QWORD *)(v5 + 168);
  if ( v6 )
  {
    if ( !(unsigned int)GrePtInRegion(v6, (unsigned int)v2, HIDWORD(v21)) )
      return 0LL;
  }
  v7 = *((_QWORD *)a1 + 5);
  v8 = *(_BYTE *)(v7 + 31) & 0x20;
  if ( (*(_BYTE *)(v7 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v7 + 104), v2) )
  {
    ScreenToClient((__int64)a1, &v21);
    v9 = (volatile signed __int32 *)ChildWindowFromPointEx((__int64)a1, v21, (unsigned __int8)v8 + 3);
    ClientToScreen(a1, &v21);
    BugCheckParameter3 = 0LL;
    if ( v9 )
    {
      if ( v9 != (volatile signed __int32 *)a1 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
        v18[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v18;
        v18[1] = v9;
        _InterlockedIncrement(v9 + 2);
        BugCheckParameter3 = (ULONG_PTR)xxxQueryDropObject((struct tagWND *)v9, v20);
        ThreadUnlock1(v13, v12, v14);
        result = (struct tagCURSOR *)BugCheckParameter3;
        if ( BugCheckParameter3 )
          return result;
      }
    }
    v2 = v21;
  }
  ScreenToClient((__int64)a1, (_DWORD *)v20 + 8);
  *(_QWORD *)(v16 + 8) = *(_QWORD *)a1;
  v17 = xxxSendTransformableMessageTimeout(
          (__int64 *)a1,
          0x22Bu,
          (HWND)v8,
          v16,
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
    result = (struct tagCURSOR *)HMValidateHandle((__int64)result, 3);
  if ( !result )
LABEL_15:
    *((_QWORD *)v20 + 4) = v2;
  return result;
}
