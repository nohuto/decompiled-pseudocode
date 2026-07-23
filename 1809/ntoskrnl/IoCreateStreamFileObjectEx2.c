/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x1405A45A0
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x1405A4560 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObjectEx @ 0x140703700 (IoCreateStreamFileObjectEx.c)
 *     IoCreateStreamFileObject @ 0x140706A80 (IoCreateStreamFileObject.c)
 * Callees:
 *     IopIncrementVpbRefCount @ 0x14000ED50 (IopIncrementVpbRefCount.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8780 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8B60 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

__int64 __fastcall IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, HANDLE *a5)
{
  HANDLE *v5; // r15
  __int16 v6; // bx
  ULONG_PTR v8; // rsi
  NTSTATUS SetSpecificExtension; // r12d
  char *v11; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *v13; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 v15; // r9
  PVOID v16; // rdi
  ULONG_PTR v17; // rcx
  __int64 result; // rax
  _QWORD *v19; // [rsp+50h] [rbp-78h] BYREF
  int v20; // [rsp+58h] [rbp-70h] BYREF
  __int64 v21; // [rsp+60h] [rbp-68h]
  __int64 v22; // [rsp+68h] [rbp-60h]
  int v23; // [rsp+70h] [rbp-58h]
  __int128 v24; // [rsp+78h] [rbp-50h]
  PVOID Object; // [rsp+D0h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+20h] BYREF

  v5 = a5;
  v6 = *(_WORD *)(a1 + 2) & 2;
  Handle = 0LL;
  *a4 = 0LL;
  v8 = a3;
  if ( v5 )
    *v5 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741637);
    return 3221225659LL;
  }
  if ( v6 && v5 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      goto LABEL_36;
    return 3221225485LL;
  }
  if ( a2 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    goto LABEL_8;
  }
  if ( !a3 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
LABEL_36:
      RtlRaiseStatus(-1073741811);
    return 3221225485LL;
  }
LABEL_8:
  IopIncrementDeviceObjectRefCount(v8, 1, a3);
  v20 = 48;
  v21 = 0LL;
  v23 = 512;
  v22 = 0LL;
  v24 = 0LL;
  LOWORD(a5) = 1;
  SetSpecificExtension = ObCreateObjectEx(0, (_DWORD)IoFileObjectType, (unsigned int)&v20, 0);
  if ( SetSpecificExtension < 0 )
  {
    IopDecrementDeviceObjectRef(v8, 0, 0LL);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(SetSpecificExtension);
    return (unsigned int)SetSpecificExtension;
  }
  v11 = (char *)Object;
  memset(Object, 0, 0xD8uLL);
  *(_DWORD *)v11 = 14155781;
  *((_QWORD *)v11 + 1) = v8;
  *((_DWORD *)v11 + 20) = 256;
  KeInitializeEvent((PRKEVENT)(v11 + 152), SynchronizationEvent, 0);
  *((_QWORD *)v11 + 23) = 0LL;
  *((_QWORD *)v11 + 25) = v11 + 192;
  *((_QWORD *)v11 + 24) = v11 + 192;
  if ( v6 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = (_SLIST_ENTRY *)*((_QWORD *)v11 - 2);
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v13);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v13);
    }
    *((_QWORD *)v11 - 2) = 0LL;
LABEL_13:
    v16 = Object;
    *((_DWORD *)Object + 20) |= 0x40000u;
    v17 = *(_QWORD *)(v8 + 56);
    if ( v17 )
      IopIncrementVpbRefCount(v17, 1);
    if ( !v6 )
    {
      if ( v5 )
      {
        *v5 = Handle;
        ObfDereferenceObject(v16);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      LOBYTE(v15) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)v16, 1u, 0x20u, v15, &v19, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        if ( v5 )
        {
          ObCloseHandle(*v5, 0);
          *v5 = 0LL;
        }
        else
        {
          ObfDereferenceObject(v16);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(SetSpecificExtension);
        return (unsigned int)SetSpecificExtension;
      }
      *v19 = *(_QWORD *)(a1 + 8);
    }
    *a4 = v16;
    return (unsigned int)SetSpecificExtension;
  }
  result = ObInsertObjectEx(v11, 0LL, 0, (__int64)&Object, (__int64)&Handle);
  SetSpecificExtension = result;
  if ( (int)result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
