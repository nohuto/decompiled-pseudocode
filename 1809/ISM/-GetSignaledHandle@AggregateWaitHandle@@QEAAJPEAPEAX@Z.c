/*
 * XREFs of ?GetSignaledHandle@AggregateWaitHandle@@QEAAJPEAPEAX@Z @ 0x18009FB58
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x1800A1F30 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall AggregateWaitHandle::GetSignaledHandle(void **this, void **a2)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 result; // rax
  signed int LastError; // ecx
  DWORD v9; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  LPOVERLAPPED v11; // [rsp+60h] [rbp+18h] BYREF

  *a2 = 0LL;
  if ( GetQueuedCompletionStatus(*this, &v9, &v10, &v11, 0) )
  {
    v4 = v10;
    *a2 = *(void **)(v10 + 16);
    CloseHandle(*(HANDLE *)(v4 + 24));
    operator delete(this[2], (const struct std::nothrow_t *)0x20);
    v5 = *(_QWORD *)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v6 = *(_QWORD **)(v4 + 8), *v6 != v4) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    this[5] = (char *)this[5] - 1;
    result = 0LL;
    this[2] = (void *)v4;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError == 258 )
    {
      return 1LL;
    }
    else
    {
      result = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        return (unsigned int)LastError;
    }
  }
  return result;
}
