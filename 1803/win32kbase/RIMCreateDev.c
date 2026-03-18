/*
 * XREFs of rimCreateDev @ 0x1C00F86B0
 * Callers:
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C00F1C60 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerDeviceObjectCreateKernelHandle @ 0x1C00F1D78 (RawInputManagerDeviceObjectCreateKernelHandle.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C00F1E10 (RawInputManagerDeviceObjectResolveHandle.c)
 */

_QWORD *__fastcall rimCreateDev(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  char *v8; // rdi
  _QWORD *v9; // rax
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF
  char *v12; // [rsp+48h] [rbp+10h] BYREF
  void *v13; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  v12 = 0LL;
  if ( (int)RawInputManagerDeviceObjectCreate(a1, a2, a3, a4, &Handle) >= 0 )
  {
    if ( (int)RawInputManagerDeviceObjectResolveHandle((char *)Handle, 3u, 1, (PVOID *)&v12) < 0 )
    {
      ObCloseHandle(Handle, 1);
    }
    else
    {
      v8 = v12;
      if ( (int)RawInputManagerDeviceObjectCreateKernelHandle(v12, v5, v6, v7, &v13) >= 0 )
      {
        v9 = v8 + 64;
        if ( !v8 )
          v9 = 0LL;
        *v9 = 0LL;
        v9[1] = 0LL;
        if ( v8 )
          v4 = v8 + 80;
        memset(v4, 0, 0x688uLL);
        v4[4] = v8;
        v4[2] = Handle;
        v4[3] = v13;
        v4[14] = v4 + 13;
        v4[13] = v4 + 13;
        v4[16] = v4 + 15;
        v4[15] = v4 + 15;
        v4[18] = v4 + 17;
        v4[17] = v4 + 17;
      }
    }
  }
  return v4;
}
