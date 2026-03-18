/*
 * XREFs of ?xxxCreateDesktopEx2@@YAJPEAUtagWINDOWSTATION@@PEAU_ACCESS_STATE@@DPEAU_UNICODE_STRING@@KPEAPEAX@Z @ 0x1C010B71C
 * Callers:
 *     ParseDesktop @ 0x1C0021900 (ParseDesktop.c)
 * Callees:
 *     DesktopAlloc @ 0x1C0029280 (DesktopAlloc.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     CreateDesktopHeap @ 0x1C010BB30 (CreateDesktopHeap.c)
 *     GetDesktopHeapSize @ 0x1C010BC50 (GetDesktopHeapSize.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  __int64 v19; // r8
  PVOID v20; // rax
  unsigned int DesktopHeapSize; // edi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 DesktopHeap; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  PVOID v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rcx
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  PVOID v36; // rdx
  __int64 v37; // rax
  unsigned __int8 MemoryAllocated[4]; // [rsp+58h] [rbp-19h] BYREF
  NTSTATUS ObjectSecurity; // [rsp+5Ch] [rbp-15h]
  PVOID Objecta; // [rsp+60h] [rbp-11h] BYREF
  __int64 v41; // [rsp+68h] [rbp-9h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-1h] BYREF
  _DWORD v43[2]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v44; // [rsp+80h] [rbp+Fh]
  struct _UNICODE_STRING *v45; // [rsp+88h] [rbp+17h]
  int v46; // [rsp+90h] [rbp+1Fh]
  int v47; // [rsp+94h] [rbp+23h]
  __int128 v48; // [rsp+98h] [rbp+27h]

  v43[1] = 0;
  v47 = 0;
  v9 = 0;
  v10 = 0;
  if ( !(unsigned __int8)ObCheckCreateObjectAccess(Object, 8LL, a2) )
    return (unsigned int)ObjectSecurity;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v12, v11, v13, v14);
  if ( (Object[4] & 2) != 0 && PsGetProcessId(CurrentProcess) != (HANDLE)gpidLogon )
  {
    v41 = 0LL;
    GetProcessLuid(0LL, &v41);
    if ( v41 == Object[18] )
      return 3221226091LL;
  }
  v45 = a4;
  LOBYTE(v16) = 1;
  v43[0] = 48;
  v44 = 0LL;
  v46 = 0;
  v48 = 0LL;
  result = ObCreateObject(0LL, ExDesktopObjectType, v43, v16, 0LL, 344, 0, 0, &Objecta);
  ObjectSecurity = result;
  if ( (int)result >= 0 )
  {
    memset(Objecta, 0, 0x158uLL);
    *(_DWORD *)Objecta = gSessionId;
    ObjectSecurity = ObGetObjectSecurity(Object, &SecurityDescriptor, MemoryAllocated);
    if ( ObjectSecurity >= 0 )
    {
      ObjectSecurity = ObAssignSecurity(a2, SecurityDescriptor, Objecta, ExDesktopObjectType);
      ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
      if ( ObjectSecurity >= 0 )
      {
        if ( (Object[4] & 4) != 0 )
        {
          v9 = 3;
        }
        else
        {
          v20 = (PVOID)Object[2];
          if ( v20 )
          {
            if ( gspdeskDisconnect )
            {
              if ( v20 == gspdeskDisconnect )
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
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread, v18, v19);
        *(_DWORD *)(ThreadWin32Thread + 1224) |= 0x40u;
        DesktopHeap = CreateDesktopHeap((char *)Objecta + 128, DesktopHeapSize);
        *((_QWORD *)Objecta + 15) = DesktopHeap;
        if ( *((_QWORD *)Objecta + 15) )
        {
          *((_DWORD *)Objecta + 34) = DesktopHeapSize;
          v27 = DesktopAlloc((__int64)Objecta, 0x48u);
          if ( v27 )
          {
            v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26);
            *(_DWORD *)(v28 + 1224) &= ~0x40u;
            v29 = (_QWORD *)Win32AllocPoolZInit(256LL, 1684763477LL);
            if ( v29 )
            {
              *v29 = v27;
              *((_QWORD *)Objecta + 1) = v29;
              v30 = (char *)Objecta + 168;
              v31 = ++gdwDesktopId;
              *((_QWORD *)Objecta + 22) = (char *)Objecta + 168;
              *v30 = v30;
              v32 = (char *)Objecta + 312;
              *((_QWORD *)Objecta + 40) = (char *)Objecta + 312;
              *v32 = v32;
              if ( v31 == 0xFFFFFFFFLL )
              {
                gdwDesktopId = 1LL;
                LODWORD(v31) = 1;
              }
              ***((_QWORD ***)Objecta + 1) = (unsigned int)v31 | (((unsigned __int64)Objecta ^ gCookie) << 32);
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
            RtlFreeHeap(*((PVOID *)Objecta + 16), 0, v27);
          }
        }
        else if ( (*gpsi & 0x100) != 0 )
        {
          _InterlockedAnd(gpsi, 0xFFFFFEFF);
          UserLogError(2147483892LL);
        }
        v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26);
        *(_DWORD *)(v37 + 1224) &= ~0x40u;
        ObjectSecurity = -1073741801;
      }
    }
    ObfDereferenceObject(Objecta);
    return (unsigned int)ObjectSecurity;
  }
  return result;
}
