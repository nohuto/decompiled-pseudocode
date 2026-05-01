/*
 * XREFs of ?RegisterHotKeys@TabShellHotKeyHandler@@AEAAJXZ @ 0x180203154
 * Callers:
 *     ?RuntimeClassInitialize@TabShellHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@6789@PEAUITitleBarController@@@Z @ 0x180203388 (-RuntimeClassInitialize@TabShellHotKeyHandler@@QEAAJPEAUIImmersiveWindowMessageService@@PEAUIApp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabShellHotKeyHandler::RegisterHotKeys(TabShellHotKeyHandler *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v4; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v5; // [rsp+4Ch] [rbp-BCh]
  __int64 v6; // [rsp+54h] [rbp-B4h]
  __int64 v7; // [rsp+5Ch] [rbp-ACh]
  __int64 v8; // [rsp+64h] [rbp-A4h]
  __int64 v9; // [rsp+6Ch] [rbp-9Ch]
  __int64 v10; // [rsp+74h] [rbp-94h]
  __int64 v11; // [rsp+7Ch] [rbp-8Ch]
  __int64 v12; // [rsp+84h] [rbp-84h]
  int v13; // [rsp+8Ch] [rbp-7Ch]
  int v14; // [rsp+90h] [rbp-78h]
  __int64 v15; // [rsp+94h] [rbp-74h]
  int v16; // [rsp+9Ch] [rbp-6Ch]
  int v17; // [rsp+A0h] [rbp-68h]
  __int64 v18; // [rsp+A4h] [rbp-64h]
  int v19; // [rsp+ACh] [rbp-5Ch]
  int v20; // [rsp+B0h] [rbp-58h]
  __int64 v21; // [rsp+B4h] [rbp-54h]
  int v22; // [rsp+BCh] [rbp-4Ch]
  int v23; // [rsp+C0h] [rbp-48h]
  __int64 v24; // [rsp+C4h] [rbp-44h]
  int v25; // [rsp+CCh] [rbp-3Ch]
  int v26; // [rsp+D0h] [rbp-38h]
  __int64 v27; // [rsp+D4h] [rbp-34h]
  int v28; // [rsp+DCh] [rbp-2Ch]
  int v29; // [rsp+E0h] [rbp-28h]
  __int64 v30; // [rsp+E4h] [rbp-24h]
  int v31; // [rsp+ECh] [rbp-1Ch]
  int v32; // [rsp+F0h] [rbp-18h]
  __int64 v33; // [rsp+F4h] [rbp-14h]
  int v34; // [rsp+FCh] [rbp-Ch]
  int v35; // [rsp+100h] [rbp-8h]
  __int64 v36; // [rsp+104h] [rbp-4h]
  int v37; // [rsp+10Ch] [rbp+4h]
  int v38; // [rsp+110h] [rbp+8h]
  __int64 v39; // [rsp+114h] [rbp+Ch]
  int v40; // [rsp+11Ch] [rbp+14h]
  int v41; // [rsp+120h] [rbp+18h]
  __int64 v42; // [rsp+124h] [rbp+1Ch]
  int v43; // [rsp+12Ch] [rbp+24h]
  int v44; // [rsp+130h] [rbp+28h]
  int v45; // [rsp+134h] [rbp+2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v4 = 0;
  v5 = 0xA00000055LL;
  v6 = 9LL;
  v7 = 0xE00000056LL;
  v8 = 9LL;
  v9 = 0x400A00000058LL;
  v10 = 87LL;
  v11 = 0x400A00000057LL;
  v12 = 84LL;
  v13 = 89;
  v14 = 16394;
  v15 = 49LL;
  v16 = 90;
  v17 = 16394;
  v18 = 50LL;
  v19 = 91;
  v20 = 16394;
  v21 = 51LL;
  v22 = 92;
  v23 = 16394;
  v24 = 52LL;
  v25 = 93;
  v26 = 16394;
  v27 = 53LL;
  v28 = 94;
  v29 = 16394;
  v30 = 54LL;
  v31 = 95;
  v32 = 16394;
  v33 = 55LL;
  v34 = 96;
  v35 = 16394;
  v36 = 56LL;
  v37 = 97;
  v38 = 16394;
  v39 = 57LL;
  v40 = 100;
  v41 = 16392;
  v42 = 117LL;
  v43 = 103;
  v44 = 16394;
  v45 = 65;
  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, unsigned __int64, char *))(**((_QWORD **)this + 3) + 56LL))(
         *((_QWORD *)this + 3),
         15LL,
         &v4,
         ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
         (char *)this + 72);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAB,
    (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
