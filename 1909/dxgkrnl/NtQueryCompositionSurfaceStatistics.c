/*
 * XREFs of NtQueryCompositionSurfaceStatistics @ 0x1C0017870
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceStatistics(HANDLE Handle, unsigned __int64 a2)
{
  _QWORD **v4; // rdi
  NTSTATUS v5; // ebx
  _QWORD **v6; // r14
  bool v7; // sf
  _QWORD **v8; // r14
  __int64 v9; // rdx
  char v10; // al
  _QWORD **v11; // rcx
  _OWORD v13[6]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD **v14; // [rsp+C0h] [rbp+18h]
  PVOID Object; // [rsp+C8h] [rbp+20h] BYREF

  memset(v13, 0, 0x38uLL);
  KeEnterCriticalRegion();
  v4 = 0LL;
  v5 = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v6 = (_QWORD **)Object;
  if ( v5 < 0 )
    goto LABEL_38;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v6[2] + 16LL))(v6[2]) == 1 )
      v4 = v6;
    else
      v5 = -1073741788;
  }
  else
  {
    v5 = -1073741816;
  }
  v7 = v5 < 0;
  if ( v5 < 0 )
  {
    ObfDereferenceObject(v6);
LABEL_38:
    v7 = v5 < 0;
  }
  if ( v7 )
    v4 = 0LL;
  if ( v5 >= 0 )
  {
    v8 = 0LL;
    v14 = 0LL;
    v5 = ObReferenceObjectByPointer(v4, 3u, g_pDxgkCompositionObjectType, 0);
    if ( v5 < 0 )
    {
LABEL_14:
      if ( v5 >= 0 )
      {
        v5 = -1073741823;
        v9 = 0LL;
        if ( *((_DWORD *)v8 + 20) && *((_BYTE *)v8[8] + 16) )
          v9 = (__int64)(v8[8] - 3);
        if ( v9 )
        {
          v10 = *(_BYTE *)(v9 + 41);
          if ( v10 )
          {
            v13[0] = *(_OWORD *)(v9 + 168);
            v13[1] = *(_OWORD *)(v9 + 184);
            v13[2] = *(_OWORD *)(v9 + 200);
            *(_QWORD *)&v13[3] = *(_QWORD *)(v9 + 216);
          }
          v5 = v10 == 0 ? 0xC0000001 : 0;
        }
        if ( v5 < 0 )
          memset(v13, 0, 0x38uLL);
        v11 = v14 + 2;
        if ( KeGetCurrentThread() == (struct _KTHREAD *)v14[3] )
        {
          v14[3] = 0LL;
          ExReleasePushLockExclusiveEx(v11, 0LL);
        }
        else
        {
          ExReleasePushLockSharedEx(v11, 0LL);
        }
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v14 - 5);
      }
      ObfDereferenceObject(v4);
      goto LABEL_28;
    }
    v5 = 0;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD **))*v4[6])(v4 + 6) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4 + 7, 0LL);
      if ( ((unsigned __int8 (__fastcall *)(_QWORD **))*v4[6])(v4 + 6) )
        goto LABEL_12;
      CPushLock::ReleaseLock((CPushLock *)(v4 + 6));
    }
    v5 = -1073741816;
LABEL_12:
    if ( v5 < 0 )
    {
      ObfDereferenceObject(v4);
    }
    else
    {
      v8 = v4 + 5;
      v14 = v4 + 5;
    }
    goto LABEL_14;
  }
LABEL_28:
  if ( a2 )
  {
    if ( a2 + 56 < a2 || a2 + 56 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a2 = v13[0];
    *(_OWORD *)(a2 + 16) = v13[1];
    *(_OWORD *)(a2 + 32) = v13[2];
    *(_QWORD *)(a2 + 48) = *(_QWORD *)&v13[3];
  }
  else
  {
    v5 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v5;
}
