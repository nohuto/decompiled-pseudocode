/*
 * XREFs of ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800712E4
 * Callers:
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x180070764 (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x180070B10 (-OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x180070C80 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z.c)
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x180070E00 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::SetActiveViewClient(
        HANDLE *this,
        struct LampArrayDevice *a2,
        struct LampArrayEndpoint *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  char v7; // bl
  _QWORD *v8; // rax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 56);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 56));
  if ( a3 )
  {
    v8 = (_QWORD *)*((_QWORD *)a2 + 4);
    if ( v8 == (_QWORD *)((char *)a2 + 32) )
      goto LABEL_9;
    while ( v8[2] != *(_QWORD *)a3 )
    {
      v8 = (_QWORD *)*v8;
      if ( v8 == (_QWORD *)((char *)a2 + 32) )
        goto LABEL_9;
    }
    *((_QWORD *)a2 + 12) = v8;
  }
  else
  {
    *((_QWORD *)a2 + 12) = 0LL;
  }
  v7 = 1;
LABEL_9:
  if ( v3 )
    LeaveCriticalSection(v3);
  if ( !v7 || SetEvent(this[30]) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1EA,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
             v9);
}
