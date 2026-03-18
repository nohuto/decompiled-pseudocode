/*
 * XREFs of ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C001EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall WnfScreenOnCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        int a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 (__fastcall *v7)(struct DXGADAPTER *, void *, __int64); // rdx
  int v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+40h] [rbp-10h]

  v10 = a4;
  v11[0] = 0LL;
  v11[1] = 0LL;
  v12 = 0;
  v9 = 20;
  if ( (int)ExQueryWnfStateData(a1, &v10, v11, &v9) >= 0 && v9 == 20 )
  {
    if ( LOBYTE(v11[0]) )
    {
      Global = DXGGLOBAL::GetGlobal(v5, v4);
      v7 = ScreenOnStudyStartCallback;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v5, v4);
      v7 = ScreenOnStudyStopCallback;
    }
    DXGGLOBAL::IterateAdaptersWithCallback(Global, v7, (char *)v11 + 4, 4LL);
  }
  return 0LL;
}
