/*
 * XREFs of ?CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z @ 0x1C023E4E4
 * Callers:
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x1C023E5C8 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 */

char __fastcall CMoveSizeRequest::CreateAndPostRequest(__int64 a1, int a2, __int64 *a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned int CurrentThreadId; // eax
  unsigned int v10; // ecx
  char result; // al

  v6 = (_DWORD *)Win32AllocPool(20LL, 1920167253LL);
  v7 = (__int64)v6;
  if ( v6 )
  {
    v8 = *a3;
    *v6 = a2;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v10 = CMoveSizeRequest::cNextMoveSizeOpRequestId;
    *(_DWORD *)(v7 + 4) = CurrentThreadId;
    *(_QWORD *)(v7 + 8) = v8;
    *(_DWORD *)(v7 + 16) = v10;
    CMoveSizeRequest::cNextMoveSizeOpRequestId = v10 + 1;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7 )
    return 0;
  if ( !(unsigned int)PostEventMessageEx(
                        *(struct tagTHREADINFO **)(a1 + 16),
                        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL),
                        0x1Au,
                        a1,
                        0,
                        0LL,
                        v7,
                        0LL) )
  {
    Win32FreePool(v7);
    return 0;
  }
  result = 1;
  *(_DWORD *)(gptiCurrent + 1224LL) |= 0x20000000u;
  return result;
}
