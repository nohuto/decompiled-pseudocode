/*
 * XREFs of ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247848
 * Callers:
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247848 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C0247A14 (xxxDragObject.c)
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _ScreenToClient @ 0x1C008F834 (_ScreenToClient.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     _ChildWindowFromPointEx @ 0x1C015AF5C (_ChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247848 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     _ClientToScreen @ 0x1C0259FC8 (_ClientToScreen.c)
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
  __int64 v11; // r9
  struct tagWND *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct tagCURSOR *result; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // [rsp+50h] [rbp-20h] BYREF
  struct tagWND *v26; // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h]
  unsigned __int64 v28; // [rsp+A0h] [rbp+30h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A8h] [rbp+38h] BYREF

  v2 = *((_QWORD *)a1 + 5);
  v3 = (_DWORD *)((char *)a2 + 32);
  v4 = *((_QWORD *)a2 + 4);
  BugCheckParameter3 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = v4;
  if ( !PtInRect((_DWORD *)(v2 + 88), v4) )
    return 0LL;
  if ( (*(_BYTE *)(v7 + 31) & 8) != 0 )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 168);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)v4, HIDWORD(v28)) )
      return 0LL;
  }
  v9 = *((_QWORD *)a1 + 5);
  v10 = *(_BYTE *)(v9 + 31) & 0x20;
  if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v9 + 104), v4) )
  {
    ScreenToClient((__int64)a1, &v28);
    v12 = (struct tagWND *)ChildWindowFromPointEx((__int64)a1, v28, v10 + 3, v11);
    ClientToScreen(a1, &v28);
    if ( v12 )
    {
      if ( v12 != a1 )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
        v25 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v25;
        v26 = v12;
        HMLockObject(v12);
        BugCheckParameter3 = (ULONG_PTR)xxxQueryDropObject(v12, a2);
        ThreadUnlock1(v18, v17, v19);
        result = (struct tagCURSOR *)BugCheckParameter3;
        if ( BugCheckParameter3 )
          return result;
      }
    }
    v4 = v28;
  }
  ScreenToClient((__int64)a1, v3);
  *((_QWORD *)a2 + 1) = *(_QWORD *)a1;
  v21 = xxxSendTransformableMessageTimeout(
          (__int64 *)a1,
          0x22Bu,
          (HWND)v10,
          a2,
          2u,
          0xBB8u,
          (__int64 *)&BugCheckParameter3,
          1u,
          0);
  result = (struct tagCURSOR *)(BugCheckParameter3 & -(__int64)(v21 != 0));
  BugCheckParameter3 = (ULONG_PTR)result;
  if ( !result )
    goto LABEL_15;
  if ( result != (struct tagCURSOR *)1 )
  {
    LOBYTE(v22) = 3;
    result = (struct tagCURSOR *)HMValidateHandle((unsigned __int64)result, v22, v23, v24);
  }
  if ( !result )
LABEL_15:
    *(_QWORD *)v3 = v4;
  return result;
}
