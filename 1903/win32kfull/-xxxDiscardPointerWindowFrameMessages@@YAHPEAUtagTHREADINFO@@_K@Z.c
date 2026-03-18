/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F256C
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01F12E8 (xxxDiscardPointerFrameMessagesInternal.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01F1D04 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 */

__int64 __fastcall xxxDiscardPointerWindowFrameMessages(struct tagTHREADINFO *a1, unsigned __int64 a2)
{
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // esi
  unsigned __int64 v7; // rcx
  int v8; // r12d
  int v9; // r14d
  unsigned int v10; // esi
  __int64 v11; // r9
  __int64 v12; // r15
  _QWORD *v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // edi
  __int64 ThreadWin32Thread; // rax
  HWND HwndReference; // [rsp+30h] [rbp-40h]
  __int64 v21; // [rsp+38h] [rbp-38h]
  _QWORD v22[3]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v23[24]; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int16 v25; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+C8h] [rbp+58h] BYREF

  LODWORD(v3) = 0;
  v26 = 0;
  v25 = 0;
  HwndReference = CTouchProcessor::GetHwndReference(gpTouchProcessor, a2, &v25, &v26);
  result = ValidateHwnd(HwndReference);
  v21 = result;
  if ( result )
  {
    v5 = 0LL;
    if ( ((*((_BYTE *)a1 + 672) | *(_BYTE *)(**((_QWORD **)a1 + 57) + 16LL)) & 0x10) != 0 )
    {
      v6 = 1;
      v7 = 48LL * v26;
      if ( v7 <= 0xFFFFFFFF && (unsigned int)(v7 - 1) <= 0x270FFFE )
        v5 = Win32AllocPool((unsigned int)v7, 1735422805LL);
    }
    else
    {
      v6 = 0;
    }
    v8 = 0;
    v9 = v5 != 0 ? v6 : 0;
    v10 = 0;
    CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>((__int64)v23, *((_QWORD *)a1 + 53));
    v12 = *(_QWORD *)(*((_QWORD *)a1 + 53) + 24LL);
    if ( v12 )
    {
      do
      {
        v3 = *(_QWORD *)v12;
        if ( CTouchProcessor::IsPointerWindowFrameMessage(
               gpTouchProcessor,
               a2,
               HwndReference,
               *(_DWORD *)(v12 + 24),
               *(_QWORD *)(v12 + 40),
               1) )
        {
          v13 = 0LL;
          if ( v9 && v10 < v26 )
            v13 = (_QWORD *)(v5 + 48LL * v10);
          v14 = DiscardPointerMessage((__int64)a1, v12, v21, v13);
          if ( v9 && v14 == 1 )
            ++v10;
          ++v8;
        }
        v12 = v3;
      }
      while ( v3 );
      if ( v8 )
        CTouchProcessor::UpdateThreadPointerList(gpTouchProcessor, (struct tagTHREADINFO *)((char *)a1 + 1080), v25);
    }
    if ( v9 )
    {
      memset(v22, 0, sizeof(v22));
      PushW32ThreadLock(v5, v22, (__int64)Win32FreePool, v11);
      v18 = v3;
      if ( v10 )
      {
        do
        {
          if ( v18 >= v26 )
            break;
          xxxCallHook(0, 1uLL, v5 + 48LL * v18++, 3);
        }
        while ( v18 < v10 );
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16, v17);
      *(_QWORD *)(ThreadWin32Thread + 16) = v22[0];
    }
    if ( v5 )
      Win32FreePool(v5);
    return 1LL;
  }
  return result;
}
