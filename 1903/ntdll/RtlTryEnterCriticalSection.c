/*
 * XREFs of RtlTryEnterCriticalSection @ 0x180046C20
 * Callers:
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_180041AB0 @ 0x180041AB0 (sub_180041AB0.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     RtlTryAcquirePebLock @ 0x180047150 (RtlTryAcquirePebLock.c)
 *     sub_18004F06C @ 0x18004F06C (sub_18004F06C.c)
 *     sub_1800CE410 @ 0x1800CE410 (sub_1800CE410.c)
 *     sub_1800EF084 @ 0x1800EF084 (sub_1800EF084.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlTryEnterCriticalSection(__int64 a1)
{
  struct _TEB *v1; // rax
  signed __int8 v2; // cf
  HANDLE UniqueThread; // rax
  __int64 result; // rax

  v1 = NtCurrentTeb();
  v2 = _interlockedbittestandreset((volatile signed __int32 *)(a1 + 8), 0);
  UniqueThread = v1->ClientId.UniqueThread;
  if ( v2 )
  {
    *(_QWORD *)(a1 + 16) = UniqueThread;
    result = 1LL;
    *(_DWORD *)(a1 + 12) = 1;
  }
  else if ( *(HANDLE *)(a1 + 16) == UniqueThread )
  {
    ++*(_DWORD *)(a1 + 12);
    return 1LL;
  }
  else
  {
    return 0LL;
  }
  return result;
}
