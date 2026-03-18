/*
 * XREFs of xxxMessageEvent @ 0x1C0243B1C
 * Callers:
 *     xxxDDETrackPostHook @ 0x1C020BC3C (xxxDDETrackPostHook.c)
 *     xxxDDETrackSendHook @ 0x1C020BF68 (xxxDDETrackSendHook.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0096A50 (PopAndFreeAlwaysW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     xxxCsEvent @ 0x1C0243880 (xxxCsEvent.c)
 */

_DWORD *__fastcall xxxMessageEvent(__int64 *a1, int a2, unsigned __int64 a3, __int64 a4, int a5, __int64 a6)
{
  _DWORD *result; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 ThreadId; // rax
  __int64 v16; // r9
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD v22[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v22, 0, 24);
  result = (_DWORD *)Win32AllocPoolWithQuota(120LL, 946107221LL);
  v13 = (__int64)result;
  if ( result )
  {
    *result = a5;
    result[1] = 7340033;
    result[2] = 112;
    if ( a1 )
      v14 = *a1;
    else
      v14 = 0LL;
    *(_QWORD *)(v13 + 16) = v14;
    *(_DWORD *)(v13 + 24) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    ThreadId = HMValidateHandleNoSecure(a3, 1LL, v11, v12);
    if ( ThreadId )
      ThreadId = (__int64)PsGetThreadId(**(PETHREAD **)(ThreadId + 16));
    *(_QWORD *)(v13 + 32) = ThreadId;
    *(_DWORD *)(v13 + 40) = a2;
    *(_QWORD *)(v13 + 48) = a3;
    *(_QWORD *)(v13 + 56) = a4;
    if ( a6 )
    {
      v17 = *(_OWORD *)(a6 + 16);
      *(_OWORD *)(v13 + 64) = *(_OWORD *)a6;
      v18 = *(_OWORD *)(a6 + 32);
      *(_OWORD *)(v13 + 80) = v17;
      *(_QWORD *)&v17 = *(_QWORD *)(a6 + 48);
      *(_OWORD *)(v13 + 96) = v18;
      *(_QWORD *)(v13 + 112) = v17;
    }
    PushW32ThreadLock(v13, v22, (__int64)Win32FreePool, v16);
    xxxCsEvent((void *)v13, 0x70u);
    return (_DWORD *)PopAndFreeAlwaysW32ThreadLock((__int64)v22, v19, v20, v21);
  }
  return result;
}
