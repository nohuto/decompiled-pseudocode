/*
 * XREFs of StartAddress @ 0x180005B70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall StartAddress(PVOID Parameter)
{
  unsigned int v1; // ebx
  _UNKNOWN **v2; // rcx
  unsigned __int64 v4; // rbx
  DWORD NumberOfBytesTransferred; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 CompletionKey; // [rsp+50h] [rbp+18h] BYREF
  LPOVERLAPPED Overlapped; // [rsp+58h] [rbp+20h] BYREF

  v1 = CoInitializeEx(0LL, 0);
  if ( v1 )
  {
    v2 = (_UNKNOWN **)off_18004F000;
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000 )
    {
      if ( (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0 && *((_BYTE *)off_18004F000 + 25) >= 4u )
      {
        sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_1800428C0);
        v2 = (_UNKNOWN **)off_18004F000;
      }
      if ( v2 != &off_18004F000 && (*((_DWORD *)v2 + 7) & 0x40000000) != 0 && *((_BYTE *)v2 + 25) >= 2u )
        sub_1800050FC((TRACEHANDLE)v2[2], 0xBu, &stru_1800428C0, v1);
    }
    sub_180005724("EventWorkerThread", 130, v1);
    return v1;
  }
  else
  {
    while ( 1 )
    {
      while ( !GetQueuedCompletionStatus(
                 CompletionPort,
                 &NumberOfBytesTransferred,
                 &CompletionKey,
                 &Overlapped,
                 0xFFFFFFFF) )
        ;
      if ( NumberOfBytesTransferred == -1 )
        break;
      v4 = CompletionKey;
      (**(void (__fastcall ***)(unsigned __int64))CompletionKey)(CompletionKey);
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v4 + 8LL))(v4, 1LL);
    }
    CoUninitialize();
    return 0LL;
  }
}
