/*
 * XREFs of ?ReceiveMouseInput@ISM@InputTraceLogging@@SAXAEBU_InputMessageNotification@@@Z @ 0x180081658
 * Callers:
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x180082DC4 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800527F0 (-Provider@InputTraceLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall InputTraceLogging::ISM::ReceiveMouseInput(const struct _InputMessageNotification *a1)
{
  const struct _TlgProvider_t *v2; // rax
  const struct _TlgProvider_t *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  __int64 v6; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  __int64 *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  v2 = InputTraceLogging::Provider();
  v3 = v2;
  if ( *(_DWORD *)v2 > 4u
    && (*((_DWORD *)v2 + 4) & 0x200LL) != 0
    && (*((_QWORD *)v2 + 3) & 0x200LL) == *((_QWORD *)v2 + 3) )
  {
    v4 = *((_QWORD *)a1 + 26);
    v10 = 0;
    v13 = 0;
    v5 = v4;
    v8 = &v5;
    v6 = *((unsigned int *)a1 + 44);
    v11 = &v6;
    v9 = 8;
    v12 = 8;
    TlgWrite(v3, &unk_180168C24, 0LL, 0LL, 4u, &pData);
  }
}
