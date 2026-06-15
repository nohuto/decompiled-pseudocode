/*
 * XREFs of ?TsSessionIdTerminate@@YAJK@Z @ 0x180025F3C
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180026F20 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CE68 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250C8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x180025268 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdTerminate(DWORD a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v3; // eax
  unsigned int v4; // edi
  struct TSSession *v5; // rbx
  struct TSSession *v7; // [rsp+58h] [rbp+10h] BYREF
  void *v8; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+68h] [rbp+20h]

  v8 = 0LL;
  v7 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v9 = v2;
  v3 = TsSessionFromSessionId(a1, 0, &v8, &v7);
  v4 = v3;
  if ( v3 == 1168 )
  {
    v4 = 0;
  }
  else if ( !v3 )
  {
    v5 = v7;
    *((_DWORD *)v7 + 12) = 1;
    ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)v5 + 176);
    *((_DWORD *)v5 + 56) = 1065353216;
    *((_DWORD *)v5 + 76) = 0;
    *((_BYTE *)v5 + 324) = 0;
    TsSessionUpdateAudioProtocol(v5, v8, 0xFFFF);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
