/*
 * XREFs of ?TsSessionIdLogoff@@YAJK@Z @ 0x180025FFC
 * Callers:
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180026F20 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x1800250C8 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TsSessionIdLogoff(DWORD a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v3; // eax
  unsigned int v4; // esi
  struct TSSession *v5; // rbx
  void *v6; // rcx
  void *v7; // rcx
  struct TSSession *v9; // [rsp+58h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+60h] [rbp+18h]
  void *v11; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v10 = v2;
  v3 = TsSessionFromSessionId(a1, 0, &v11, &v9);
  v4 = v3;
  if ( v3 == 1168 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  if ( v3 )
  {
LABEL_3:
    if ( v2 )
      LeaveCriticalSection(v2);
    return v4;
  }
  v5 = v9;
  *((_DWORD *)v9 + 76) = 0;
  *((_BYTE *)v5 + 324) = 0;
  if ( v2 )
    LeaveCriticalSection(v2);
  v6 = (void *)*((_QWORD *)v5 + 30);
  if ( v6 )
  {
    PowerSettingUnregisterNotification(v6);
    *((_QWORD *)v5 + 30) = 0LL;
  }
  v7 = (void *)*((_QWORD *)v5 + 31);
  if ( v7 )
  {
    PowerSettingUnregisterNotification(v7);
    *((_QWORD *)v5 + 31) = 0LL;
  }
  *((_DWORD *)v5 + 57) = 1;
  return v4;
}
