/*
 * XREFs of ?SetActiveViewClient@LampArrayRawInputProvider@@AEAAJPEAVLampArrayDevice@@PEAULampArrayEndpoint@@@Z @ 0x1800AC65C
 * Callers:
 *     ?OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000C500 (-OnTargetWithFocusChanged@LampArrayRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z @ 0x1800AC1DC (-OnLampArrayAdded@LampArrayRawInputProvider@@QEAAJPEAVPnpDevice@@@Z.c)
 *     ?OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z @ 0x1800AC410 (-OnSipcClientConnection@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCServer@@KK@Z.c)
 *     ?OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z @ 0x1800AC560 (-OnSipcEndpointStatus@LampArrayRawInputProvider@@CAXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATU.c)
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800519D4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall LampArrayRawInputProvider::SetActiveViewClient(
        HANDLE *this,
        struct LampArrayDevice *a2,
        struct LampArrayEndpoint *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  char v7; // di
  _QWORD *i; // rax
  const char *v9; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+48h] [rbp+10h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)a2 + 56);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a2 + 56));
  v12 = v3;
  if ( a3 )
  {
    for ( i = (_QWORD *)*((_QWORD *)a2 + 4); i != (_QWORD *)((char *)a2 + 32); i = (_QWORD *)*i )
    {
      if ( i[2] == *(_QWORD *)a3 )
      {
        *((_QWORD *)a2 + 12) = i;
        goto LABEL_8;
      }
    }
  }
  else
  {
    *((_QWORD *)a2 + 12) = 0LL;
LABEL_8:
    v7 = 1;
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v12);
  if ( !v7 || SetEvent(this[30]) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x1DB,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
             v9);
}
