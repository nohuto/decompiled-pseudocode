/*
 * XREFs of ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180025764
 * Callers:
 *     ?UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z @ 0x18001CCBC (-UpdateActiveMediaAppForSession@CApplicationManager@@QEAAXPEAVCApplication@@H@Z.c)
 * Callees:
 *     ?NewNode@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCApplication@@PEAV312@1@Z @ 0x18000CF08 (-NewNode@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@AEAAPEAVCN.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250A4 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z @ 0x18002569C (-TsSessionSendAppManagerNotification@@YAJPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdAddActiveMediaApp(DWORD a1, struct CApplication *a2)
{
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v6; // eax
  struct TSSession *v7; // rbp
  __int64 **v8; // rbx
  __int64 **i; // rax
  __int64 *v10; // rax
  __int64 **v11; // rcx
  struct CApplication *v13; // [rsp+68h] [rbp+10h] BYREF
  struct TSSession *v14; // [rsp+70h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+78h] [rbp+20h]

  v13 = a2;
  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15 = v5;
  v6 = TsSessionFromSessionId(a1, 0, 0LL, &v14);
  if ( v6 )
  {
    v4 = (unsigned __int16)v6 | 0x80070000;
    if ( v6 <= 0 )
      v4 = v6;
  }
  else
  {
    v7 = v14;
    v8 = (__int64 **)((char *)v14 + 104);
    for ( i = (__int64 **)*((_QWORD *)v14 + 13); i && i[2] != (__int64 *)a2; i = (__int64 **)*i )
      ;
    if ( !i )
    {
      v10 = ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::NewNode(
              (__int64)v14 + 104,
              (__int64 *)&v13,
              *((_QWORD *)v14 + 14),
              0LL);
      v11 = (__int64 **)v8[1];
      if ( v11 )
        *v11 = v10;
      else
        *v8 = v10;
      v8[1] = v10;
    }
    TsSessionSendAppManagerNotification(v7);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v4;
}
