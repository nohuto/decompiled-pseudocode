/*
 * XREFs of ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@KUtagPOINT@@@Z @ 0x1C01FE388
 * Callers:
 *     NtUserRequestMoveSizeOperation @ 0x1C01F4300 (NtUserRequestMoveSizeOperation.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     xxxPromotePointerToMouse @ 0x1C01B8BB0 (xxxPromotePointerToMouse.c)
 */

unsigned __int8 __fastcall CMoveSizeRequest::xxxRequestMoveSizeOperation(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned __int16 v5; // bp
  __int64 v6; // rdi
  unsigned __int8 v7; // si
  __int64 v10; // r9
  bool v11; // zf
  _DWORD *v12; // rax
  unsigned int CurrentThreadId; // eax
  unsigned int v14; // ecx
  int v15; // eax
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF

  v5 = a3;
  v6 = 0LL;
  v7 = 0;
  v10 = gptiCurrent;
  v17 = gptiCurrent;
  if ( gpqForeground != *(_QWORD *)(gptiCurrent + 424LL) && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == gpqForeground )
  {
    if ( a3 == 1 )
    {
      v11 = (unsigned __int8)IsCapturedByThread(&v17) == 0;
    }
    else
    {
      if ( !CTouchProcessor::ThreadHasPrimaryCapture(gpTouchProcessor, gptiCurrent, a3) )
        goto LABEL_15;
      v11 = xxxPromotePointerToMouse(v5) == 0;
    }
    if ( !v11 )
    {
      v12 = (_DWORD *)Win32AllocPool(20LL, 1920167253LL);
      v6 = (__int64)v12;
      if ( v12 )
      {
        *v12 = a2;
        CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
        v14 = CMoveSizeRequest::cNextMoveSizeOpRequestId;
        *(_DWORD *)(v6 + 4) = CurrentThreadId;
        *(_QWORD *)(v6 + 8) = a4;
        *(_DWORD *)(v6 + 16) = v14;
        CMoveSizeRequest::cNextMoveSizeOpRequestId = v14 + 1;
      }
      else
      {
        v6 = 0LL;
      }
      if ( v6 )
      {
        v15 = PostEventMessageEx(
                *(struct tagTHREADINFO **)(a1 + 16),
                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL),
                0x1Au,
                a1,
                0,
                0LL,
                v6,
                0LL);
        v10 = v17;
        if ( v15 )
        {
          v7 = 1;
          v6 = 0LL;
        }
        else
        {
          v7 = 0;
        }
        goto LABEL_16;
      }
    }
LABEL_15:
    v10 = v17;
  }
LABEL_16:
  *(_DWORD *)(v10 + 1204) = v7 | *(_DWORD *)(v10 + 1204) & 0xFFFFFFFE;
  if ( v6 )
    Win32FreePool(v6);
  return v7;
}
