/*
 * XREFs of ?CreateAndPostRequest@CMoveSizeRequest@@CA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@AEBUtagPOINT@@@Z @ 0x1C0226E54
 * Callers:
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z @ 0x1C0226F38 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@K@Z.c)
 * Callees:
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 */

char __fastcall CMoveSizeRequest::CreateAndPostRequest(struct tagTHREADINFO **a1, int a2, __int64 *a3)
{
  _DWORD *v6; // rax
  LARGE_INTEGER v7; // rdi
  __int64 v8; // rbx
  unsigned int CurrentThreadId; // eax
  unsigned int v10; // ecx
  char result; // al

  v6 = (_DWORD *)Win32AllocPool(20LL, 1920167253LL);
  v7.QuadPart = (LONGLONG)v6;
  if ( v6 )
  {
    v8 = *a3;
    *v6 = a2;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    v10 = CMoveSizeRequest::cNextMoveSizeOpRequestId;
    *(_DWORD *)(v7.QuadPart + 4) = CurrentThreadId;
    *(_QWORD *)(v7.QuadPart + 8) = v8;
    *(_DWORD *)(v7.QuadPart + 16) = v10;
    CMoveSizeRequest::cNextMoveSizeOpRequestId = v10 + 1;
  }
  else
  {
    v7.QuadPart = 0LL;
  }
  if ( !v7.QuadPart )
    return 0;
  if ( !(unsigned int)PostEventMessageEx(a1[2], *((_QWORD *)a1[2] + 54), 0x1Au, (InputTransform *)a1, 0, 0LL, v7, 0LL) )
  {
    ((void (__fastcall *)(_QWORD))Win32FreePool)((LARGE_INTEGER)v7.QuadPart);
    return 0;
  }
  result = 1;
  *(_DWORD *)(gptiCurrent + 1212LL) |= 1u;
  return result;
}
