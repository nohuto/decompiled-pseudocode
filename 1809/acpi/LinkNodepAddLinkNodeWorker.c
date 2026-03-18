/*
 * XREFs of LinkNodepAddLinkNodeWorker @ 0x1C008F500
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     IrqLibReleaseArbiterLock @ 0x1C000EECC (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C000EEF4 (IrqLibAcquireArbiterLock.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 */

void __fastcall LinkNodepAddLinkNodeWorker(PDEVICE_OBJECT DeviceObject, char *Context)
{
  __int64 *v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  *((_QWORD *)Context + 30) = Context + 232;
  *((_QWORD *)Context + 29) = Context + 232;
  *((_DWORD *)Context + 46) = 0;
  *((_DWORD *)Context + 47) = 0;
  *((_DWORD *)Context + 48) = 0;
  *((_DWORD *)Context + 49) = 0;
  *((_DWORD *)Context + 50) = -1;
  *((_QWORD *)Context + 26) = 0LL;
  v3 = AMLIGetNamedChild(*((__int64 **)Context + 89), 1397310559);
  v4 = (__int64)v3;
  if ( v3 )
  {
    AMLIEvalNameSpaceObject((unsigned __int64 *)v3, 0LL, 0, 0LL);
    AMLIDereferenceHandleEx(v4);
  }
  IrqLibAcquireArbiterLock(0);
  v5 = (_QWORD *)qword_1C007F5B8;
  v6 = Context + 216;
  if ( *(__int64 **)qword_1C007F5B8 != &LinkNodeListHead )
    __fastfail(3u);
  *v6 = &LinkNodeListHead;
  *((_QWORD *)Context + 28) = v5;
  *v5 = v6;
  qword_1C007F5B8 = (__int64)(Context + 216);
  IrqLibReleaseArbiterLock();
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 31));
  *((_QWORD *)Context + 31) = 0LL;
}
