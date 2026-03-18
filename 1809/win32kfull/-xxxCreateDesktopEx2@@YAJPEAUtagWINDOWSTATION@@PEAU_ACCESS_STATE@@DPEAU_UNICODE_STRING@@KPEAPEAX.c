/*
 * XREFs of ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C012761C
 * Callers:
 *     ParseDesktop @ 0x1C00B22C0 (ParseDesktop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     DesktopAlloc @ 0x1C006B5F0 (DesktopAlloc.c)
 *     CreateDesktopHeap @ 0x1C0127AD8 (CreateDesktopHeap.c)
 *     GetDesktopHeapSize @ 0x1C0127C00 (GetDesktopHeapSize.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxCreateDesktopEx2(
        _QWORD *Object,
        struct _ACCESS_STATE *a2,
        __int64 a3,
        struct _UNICODE_STRING *a4,
        unsigned int a5,
        void **a6)
{
  unsigned __int16 v9; // si
  char v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KPROCESS *CurrentProcess; // rax
  __int64 v16; // r9
  __int64 result; // rax
  __int64 v18; // rdx
  PVOID v19; // rax
  unsigned int DesktopHeapSize; // edi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 DesktopHeap; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  PVOID v26; // rsi
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r8
  __int64 v30; // r8
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rcx
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  PVOID v36; // rdx
  unsigned __int8 MemoryAllocated[4]; // [rsp+58h] [rbp-19h] BYREF
  NTSTATUS ObjectSecurity; // [rsp+5Ch] [rbp-15h]
  PVOID Objecta; // [rsp+60h] [rbp-11h] BYREF
  __int64 v40; // [rsp+68h] [rbp-9h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-1h] BYREF
  int v42; // [rsp+78h] [rbp+7h] BYREF
  __int64 v43; // [rsp+80h] [rbp+Fh]
  struct _UNICODE_STRING *v44; // [rsp+88h] [rbp+17h]
  int v45; // [rsp+90h] [rbp+1Fh]
  __int128 v46; // [rsp+98h] [rbp+27h]

  v9 = 0;
  v10 = 0;
  if ( !(unsigned __int8)ObCheckCreateObjectAccess(Object, 8LL, a2) )
    return (unsigned int)ObjectSecurity;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v12, v11, v13, v14);
  if ( (Object[4] & 2) != 0 && PsGetProcessId(CurrentProcess) != (HANDLE)gpidLogon )
  {
    v40 = 0LL;
    GetProcessLuid(0LL, &v40);
    if ( v40 == Object[18] )
      return 3221226091LL;
  }
  v44 = a4;
  LOBYTE(v16) = 1;
  v42 = 48;
  v43 = 0LL;
  v45 = 0;
  v46 = 0LL;
  result = ObCreateObject(0LL, ExDesktopObjectType, &v42, v16, 0LL, 344, 0, 0, &Objecta);
  ObjectSecurity = result;
  if ( (int)result >= 0 )
  {
    memset(Objecta, 0, 0x158uLL);
    *(_DWORD *)Objecta = gSessionId;
    ObjectSecurity = ObGetObjectSecurity(Object, &SecurityDescriptor, MemoryAllocated);
    if ( ObjectSecurity < 0 )
      goto LABEL_26;
    ObjectSecurity = ObAssignSecurity(a2, SecurityDescriptor, Objecta, ExDesktopObjectType);
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
    if ( ObjectSecurity < 0 )
      goto LABEL_26;
    if ( (Object[4] & 4) != 0 )
    {
      v9 = 3;
    }
    else
    {
      v19 = (PVOID)Object[2];
      if ( v19 )
      {
        if ( gspdeskDisconnect )
        {
          if ( v19 == gspdeskDisconnect )
            v10 = 1;
        }
        else
        {
          v9 = 2;
        }
      }
      else
      {
        v9 = 1;
      }
    }
    if ( a5 )
      DesktopHeapSize = a5 << 10;
    else
      DesktopHeapSize = GetDesktopHeapSize(v9);
    CurrentThread = KeGetCurrentThread();
    if ( DesktopHeapSize < 0x2000 )
      DesktopHeapSize = 0x2000;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread, v18);
    *(_DWORD *)(ThreadWin32Thread + 1212) |= 2u;
    DesktopHeap = CreateDesktopHeap((char *)Objecta + 128, DesktopHeapSize);
    *((_QWORD *)Objecta + 15) = DesktopHeap;
    if ( !*((_QWORD *)Objecta + 15) )
    {
      if ( (*gpsi & 0x100) != 0 )
      {
        *gpsi &= ~0x100u;
        UserLogError(2147483892LL);
      }
      goto LABEL_25;
    }
    *((_DWORD *)Objecta + 34) = DesktopHeapSize;
    v26 = DesktopAlloc((__int64)Objecta, 0x48u);
    if ( !v26 )
    {
LABEL_25:
      v25 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
      *(_DWORD *)(v25 + 1212) &= ~2u;
      ObjectSecurity = -1073741801;
LABEL_26:
      ObfDereferenceObject(Objecta);
      return (unsigned int)ObjectSecurity;
    }
    v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
    *(_DWORD *)(v27 + 1212) &= ~2u;
    v28 = (_QWORD *)Win32AllocPoolZInit(256LL, 1684763477LL);
    if ( !v28 )
    {
      RtlFreeHeap(*((PVOID *)Objecta + 16), 0, v26);
      goto LABEL_25;
    }
    v29 = gdwDesktopId;
    *v28 = v26;
    v30 = v29 + 1;
    gdwDesktopId = v30;
    *((_QWORD *)Objecta + 1) = v28;
    v31 = (char *)Objecta + 168;
    *((_QWORD *)Objecta + 22) = (char *)Objecta + 168;
    *v31 = v31;
    v32 = (char *)Objecta + 312;
    *((_QWORD *)Objecta + 40) = (char *)Objecta + 312;
    *v32 = v32;
    if ( v30 == 0xFFFFFFFFLL )
    {
      gdwDesktopId = 1LL;
      LODWORD(v30) = 1;
    }
    ***((_QWORD ***)Objecta + 1) = (unsigned int)v30 | (((unsigned __int64)Objecta ^ gCookie) << 32);
    v33 = *((_QWORD *)Objecta + 16);
    *((_QWORD *)Objecta + 2) = v33;
    *((_QWORD *)Objecta + 3) = v33 + DesktopHeapSize;
    LockObjectAssignment((char *)Objecta + 40, Object);
    if ( !Object[2] )
    {
      if ( (Object[4] & 4) == 0 )
        LockObjectAssignment(&grpdeskLogon, Objecta);
      LockObjectAssignment(*(_QWORD *)(Object[3] + 8LL) + 24LL, Objecta);
    }
    LockObjectAssignment((char *)Objecta + 32, Object[2]);
    LockObjectAssignment(Object + 2, Objecta);
    p_RemainingDesiredAccess = &a2->RemainingDesiredAccess;
    RemainingDesiredAccess = a2->RemainingDesiredAccess;
    if ( (RemainingDesiredAccess & 0x2000000) != 0 )
      *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
    RtlMapGenericMask(&a2->RemainingDesiredAccess, DesktopMapping);
    v36 = Objecta;
    *p_RemainingDesiredAccess &= DesktopMapping->GenericAll | 0x1000000;
    *a6 = v36;
    if ( v10 )
      LockObjectAssignment(grpdeskIODefault, v36);
    return 0LL;
  }
  return result;
}
