/*
 * XREFs of ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01B9C38
 * Callers:
 *     xxxDiscardPointerFrameMessagesInternal @ 0x1C01B8984 (xxxDiscardPointerFrameMessagesInternal.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEAUtagMSG@@@Z @ 0x1C01B9398 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 */

__int64 __fastcall xxxDiscardPointerWindowFrameMessages(struct tagTHREADINFO *a1, unsigned __int64 a2)
{
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // rbx
  int v6; // edx
  BOOL v7; // esi
  unsigned __int64 v8; // rcx
  int v9; // r12d
  BOOL v10; // edi
  unsigned int v11; // esi
  __int64 v12; // r14
  _QWORD *v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // edi
  __int64 ThreadWin32Thread; // rax
  HWND HwndReference; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  _QWORD v20[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v22; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+58h] BYREF

  LODWORD(v3) = 0;
  v23 = 0;
  v22 = 0;
  HwndReference = CTouchProcessor::GetHwndReference(gpTouchProcessor, a2, &v22, &v23);
  result = ValidateHwnd(HwndReference);
  v19 = result;
  if ( result )
  {
    v5 = 0LL;
    v6 = (*((_DWORD *)a1 + 168) | *(_DWORD *)(**((_QWORD **)a1 + 57) + 16LL)) & 0x10;
    v7 = v6 != 0;
    if ( v6 )
    {
      v8 = 48LL * v23;
      if ( v8 <= 0xFFFFFFFF && (unsigned int)(v8 - 1) <= 0x270FFFE )
        v5 = Win32AllocPool((unsigned int)v8, 1735422805LL);
    }
    v9 = 0;
    v10 = v5 != 0 && v7;
    v11 = 0;
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
          if ( v10 && v11 < v23 )
            v13 = (_QWORD *)(v5 + 48LL * v11);
          v14 = DiscardPointerMessage((__int64)a1, v12, v19, v13);
          if ( v10 && v14 == 1 )
            ++v11;
          ++v9;
        }
        v12 = v3;
      }
      while ( v3 );
      if ( v9 )
        CTouchProcessor::UpdateThreadPointerList(gpTouchProcessor, (struct tagTHREADINFO *)((char *)a1 + 1072), v22);
    }
    if ( v10 )
    {
      memset(v20, 0, 24);
      PushW32ThreadLock(v5, v20, (__int64)Win32FreePool);
      v16 = v3;
      if ( v11 )
      {
        do
        {
          if ( v16 >= v23 )
            break;
          xxxCallHook(0, 1uLL, (unsigned int *)(v5 + 48LL * v16++), 3);
        }
        while ( v16 < v11 );
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15);
      *(_QWORD *)(ThreadWin32Thread + 16) = v20[0];
    }
    if ( v5 )
      Win32FreePool(v5);
    return 1LL;
  }
  return result;
}
