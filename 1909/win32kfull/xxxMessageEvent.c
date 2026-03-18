/*
 * XREFs of xxxMessageEvent @ 0x1C02433DC
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C020B98C (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C020BCB8 (xxxDDETrackSendHook.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0037780 (PopAndFreeAlwaysW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     xxxCsEvent @ 0x1C0243140 (xxxCsEvent.c)
 */

_DWORD *__fastcall xxxMessageEvent(__int64 *a1, int a2, unsigned __int64 a3, __int64 a4, int a5, __int64 a6)
{
  _DWORD *result; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 ThreadId; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v19, 0, 24);
  result = (_DWORD *)Win32AllocPoolWithQuota(120LL, 946107221LL);
  v12 = (__int64)result;
  if ( result )
  {
    *result = a5;
    result[1] = 7340033;
    result[2] = 112;
    if ( a1 )
      v13 = *a1;
    else
      v13 = 0LL;
    *(_QWORD *)(v12 + 16) = v13;
    *(_DWORD *)(v12 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    ThreadId = HMValidateHandleNoSecure(a3, 1LL, v11);
    if ( ThreadId )
      ThreadId = (__int64)PsGetThreadId(**(PETHREAD **)(ThreadId + 16));
    *(_QWORD *)(v12 + 32) = ThreadId;
    *(_DWORD *)(v12 + 40) = a2;
    *(_QWORD *)(v12 + 48) = a3;
    *(_QWORD *)(v12 + 56) = a4;
    if ( a6 )
    {
      v15 = *(_OWORD *)(a6 + 16);
      *(_OWORD *)(v12 + 64) = *(_OWORD *)a6;
      v16 = *(_OWORD *)(a6 + 32);
      *(_OWORD *)(v12 + 80) = v15;
      *(_QWORD *)&v15 = *(_QWORD *)(a6 + 48);
      *(_OWORD *)(v12 + 96) = v16;
      *(_QWORD *)(v12 + 112) = v15;
    }
    PushW32ThreadLock(v12, v19, (__int64)Win32FreePool);
    xxxCsEvent((void *)v12, 0x70u);
    return (_DWORD *)PopAndFreeAlwaysW32ThreadLock((__int64)v19, v17, v18);
  }
  return result;
}
