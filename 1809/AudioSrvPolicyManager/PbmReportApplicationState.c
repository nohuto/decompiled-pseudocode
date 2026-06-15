/*
 * XREFs of PbmReportApplicationState @ 0x180024CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUApplicationStateChangedContext@@@Z0@Z @ 0x1800250B0 (--$QueueApplicationManagerWorkItem@UApplicationStateChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x180026B20 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 *     ?CreateInstance@ApplicationStateChangedContext@@SAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc_0000_0000_0002@@PEAPEAU1@@Z @ 0x18002CA38 (-CreateInstance@ApplicationStateChangedContext@@SAJPEBG_KKW4__MIDL___MIDL_itf_playbackmanagerrpc.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800370D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall PbmReportApplicationState(void *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  signed int v7; // edi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  LPVOID *v11; // rbx
  unsigned int v13; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-14h] BYREF
  void *v15; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0LL;
  v7 = 0;
  if ( g_ApplicationManager )
  {
    v8 = RpcClientProcessSessionId(a1, &v14, &v13);
    if ( v8 )
    {
      v7 = (unsigned __int16)v8 | 0x80070000;
      if ( v8 <= 0 )
        return (unsigned int)v8;
    }
    else
    {
      v9 = ApplicationStateChangedContext::CreateInstance(a2, a3, v13, a4, &v15);
      v11 = (LPVOID *)v15;
      v7 = v9;
      if ( v9 >= 0 )
      {
        v7 = QueueApplicationManagerWorkItem<ApplicationStateChangedContext>(v10, v15);
        if ( v7 >= 0 )
          v11 = 0LL;
      }
      if ( v11 )
      {
        if ( *v11 )
        {
          CoTaskMemFree(*v11);
          *v11 = 0LL;
        }
        operator delete(v11, (const struct std::nothrow_t *)0x18);
      }
    }
  }
  return (unsigned int)v7;
}
