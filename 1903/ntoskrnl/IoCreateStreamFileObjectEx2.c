/*
 * XREFs of IoCreateStreamFileObjectEx2 @ 0x1406822C0
 * Callers:
 *     IoCreateStreamFileObjectLite @ 0x140682280 (IoCreateStreamFileObjectLite.c)
 *     IoCreateStreamFileObject @ 0x14072C6F0 (IoCreateStreamFileObject.c)
 *     IoCreateStreamFileObjectEx @ 0x14073B120 (IoCreateStreamFileObjectEx.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     IopDecrementDeviceObjectRef @ 0x140036EA0 (IopDecrementDeviceObjectRef.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     IopIncrementVpbRefCount @ 0x14007A734 (IopIncrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B5370 (IopIncrementDeviceObjectRefCount.c)
 *     IopGetSetSpecificExtension @ 0x1400BA3C8 (IopGetSetSpecificExtension.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 */

__int64 IoCreateStreamFileObjectEx2(__int64 a1, __int64 a2, ULONG_PTR a3, _QWORD *a4, ...)
{
  HANDLE *v4; // r14
  __int16 v5; // r12
  ULONG_PTR v6; // r13
  NTSTATUS SetSpecificExtension; // edi
  char *v9; // r15
  struct _KPRCB *CurrentPrcb; // rdx
  _SLIST_ENTRY *v11; // r8
  _GENERAL_LOOKASIDE *P; // rcx
  __int64 v13; // r9
  PVOID v14; // r15
  ULONG_PTR v15; // rcx
  __int64 result; // rax
  __int64 v17; // [rsp+28h] [rbp-41h]
  HANDLE Handle; // [rsp+58h] [rbp-11h] BYREF
  _QWORD *v19; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v20[2]; // [rsp+68h] [rbp-1h] BYREF
  __int64 v21; // [rsp+70h] [rbp+7h]
  __int64 v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+80h] [rbp+17h]
  int v24; // [rsp+84h] [rbp+1Bh]
  __int128 v25; // [rsp+88h] [rbp+1Fh]
  PVOID Object; // [rsp+C8h] [rbp+5Fh] BYREF
  _QWORD *v27; // [rsp+E0h] [rbp+77h]
  HANDLE *v28; // [rsp+E8h] [rbp+7Fh] BYREF
  va_list va; // [rsp+E8h] [rbp+7Fh]
  va_list va1; // [rsp+F0h] [rbp+87h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v28 = va_arg(va1, HANDLE *);
  v27 = a4;
  v4 = v28;
  v5 = *(_WORD *)(a1 + 2) & 2;
  v20[1] = 0;
  v6 = a3;
  v24 = 0;
  Handle = 0LL;
  *a4 = 0LL;
  if ( v4 )
    *v4 = 0LL;
  if ( *(_WORD *)a1 != 16 )
  {
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741637);
    return 3221225659LL;
  }
  if ( v5 && v4 )
    goto LABEL_33;
  if ( a2 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    goto LABEL_8;
  }
  if ( !a3 )
  {
LABEL_33:
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(-1073741811);
    return 3221225485LL;
  }
LABEL_8:
  IopIncrementDeviceObjectRefCount(v6, 1);
  v20[0] = 48;
  v21 = 0LL;
  v23 = 512;
  v22 = 0LL;
  v25 = 0LL;
  LOWORD(v28) = 1;
  SetSpecificExtension = ObCreateObjectEx(0, IoFileObjectType, (int)v20, 0, v17, 216, 216, 0, &Object, (__int64)va);
  if ( SetSpecificExtension < 0 )
  {
    IopDecrementDeviceObjectRef(v6, 0);
    if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
      RtlRaiseStatus(SetSpecificExtension);
    return (unsigned int)SetSpecificExtension;
  }
  v9 = (char *)Object;
  memset(Object, 0, 0xD8uLL);
  *(_DWORD *)v9 = 14155781;
  *((_QWORD *)v9 + 1) = v6;
  *((_DWORD *)v9 + 20) = 256;
  KeInitializeEvent((PRKEVENT)(v9 + 152), SynchronizationEvent, 0);
  *((_QWORD *)v9 + 23) = 0LL;
  *((_QWORD *)v9 + 25) = v9 + 192;
  *((_QWORD *)v9 + 24) = v9 + 192;
  if ( v5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = (_SLIST_ENTRY *)*((_QWORD *)v9 - 2);
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, v11);
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(_SLIST_ENTRY *))P->FreeEx)(v11);
    }
    *((_QWORD *)v9 - 2) = 0LL;
LABEL_13:
    v14 = Object;
    *((_DWORD *)Object + 20) |= 0x40000u;
    v15 = *(_QWORD *)(v6 + 56);
    if ( v15 )
      IopIncrementVpbRefCount(v15, 1);
    if ( !v5 )
    {
      if ( v4 )
      {
        *v4 = Handle;
        ObfDereferenceObject(v14);
      }
      else
      {
        ObCloseHandle(Handle, 0);
      }
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      LOBYTE(v13) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension((__int64)v14, 1u, 32LL, v13, &v19, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        if ( v4 )
        {
          ObCloseHandle(*v4, 0);
          *v4 = 0LL;
        }
        else
        {
          ObfDereferenceObject(v14);
        }
        if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
          RtlRaiseStatus(SetSpecificExtension);
        return (unsigned int)SetSpecificExtension;
      }
      *v19 = *(_QWORD *)(a1 + 8);
    }
    *v27 = v14;
    return (unsigned int)SetSpecificExtension;
  }
  result = ObInsertObjectEx(v9, 0LL, 1u, 1, 0, (__int64)&Object, &Handle);
  SetSpecificExtension = result;
  if ( (int)result >= 0 )
    goto LABEL_13;
  if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
    RtlRaiseStatus(result);
  return result;
}
