/*
 * XREFs of NtWaitForDebugEvent @ 0x140811500
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     DbgkpConvertKernelToUserStateChange @ 0x14080FAA4 (DbgkpConvertKernelToUserStateChange.c)
 *     DbgkpOpenHandles @ 0x14080FD70 (DbgkpOpenHandles.c)
 */

NTSTATUS __stdcall NtWaitForDebugEvent(
        HANDLE DebugObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE StateChange)
{
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v8; // rcx
  NTSTATUS result; // eax
  BOOLEAN v10; // r9
  char *v11; // rdi
  char v12; // r14
  _QWORD *v13; // rdx
  __int64 i; // rax
  __int64 v15; // rbx
  int v16; // r8d
  _QWORD *v17; // rcx
  int v18; // ebx
  bool v19; // sf
  unsigned __int64 *v20; // rsi
  LONGLONG QuadPart; // [rsp+38h] [rbp-150h] BYREF
  PLARGE_INTEGER Timeouta; // [rsp+40h] [rbp-148h]
  __int64 v24; // [rsp+48h] [rbp-140h]
  PVOID Object; // [rsp+50h] [rbp-138h] BYREF
  PVOID v26; // [rsp+58h] [rbp-130h]
  PVOID v27; // [rsp+60h] [rbp-128h]
  _OWORD v28[12]; // [rsp+80h] [rbp-108h] BYREF

  Timeouta = Timeout;
  QuadPart = 0LL;
  v24 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v28, 0, 0xB8uLL);
  if ( Timeouta )
  {
    QuadPart = Timeouta->QuadPart;
    Timeouta = (PLARGE_INTEGER)&QuadPart;
    v24 = MEMORY[0xFFFFF78000000014];
  }
  if ( PreviousMode )
  {
    v8 = (__int64)StateChange;
    if ( (unsigned __int64)StateChange >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v8 = *(_BYTE *)v8;
    *(_BYTE *)(v8 + 183) = *(_BYTE *)(v8 + 183);
  }
  result = ObReferenceObjectByHandle(DebugObject, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v26 = 0LL;
    v27 = 0LL;
    v10 = Alertable;
    v11 = (char *)Object;
    while ( 1 )
    {
      v18 = KeWaitForSingleObject(v11, Executive, PreviousMode, v10, Timeouta);
      if ( v18 < 0 || v18 == 192 || (unsigned int)(v18 - 257) <= 1 )
        break;
      v12 = 0;
      ExAcquireFastMutex((PFAST_MUTEX)(v11 + 24));
      if ( (*((_DWORD *)v11 + 24) & 1) != 0 )
      {
        v18 = -1073740972;
      }
      else
      {
        v13 = v11 + 80;
        for ( i = *((_QWORD *)v11 + 10); ; i = *(_QWORD *)i )
        {
          if ( (_QWORD *)i == v13 )
          {
            KeResetEvent((PRKEVENT)v11);
            goto LABEL_24;
          }
          v15 = i;
          v16 = *(_DWORD *)(i + 76);
          if ( (v16 & 5) == 0 )
          {
            v12 = 1;
            v17 = (_QWORD *)*v13;
            if ( *v13 != i )
            {
              while ( *(_QWORD *)(i + 40) != v17[5] )
              {
                v17 = (_QWORD *)*v17;
                if ( v17 == (_QWORD *)i )
                  goto LABEL_19;
              }
              *(_DWORD *)(i + 76) = v16 | 4;
              *(_QWORD *)(i + 80) = 0LL;
              v12 = 0;
            }
LABEL_19:
            if ( v12 )
              break;
          }
        }
        v26 = *(PVOID *)(i + 56);
        v27 = *(PVOID *)(i + 64);
        ObfReferenceObjectWithTag(v27, 0x4F676244u);
        ObfReferenceObjectWithTag(v26, 0x4F676244u);
        DbgkpConvertKernelToUserStateChange((__int64)v28, v15);
        *(_DWORD *)(v15 + 76) |= 1u;
LABEL_24:
        v18 = 0;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v11 + 24));
      if ( v18 < 0 )
        break;
      if ( v12 )
      {
        DbgkpOpenHandles((__int64)v28, v26, v27);
        ObfDereferenceObjectWithTag(v27, 0x4F676244u);
        ObfDereferenceObjectWithTag(v26, 0x4F676244u);
        break;
      }
      if ( QuadPart < 0 )
      {
        v19 = MEMORY[0xFFFFF78000000014] - v24 + QuadPart < 0;
        QuadPart += MEMORY[0xFFFFF78000000014] - v24;
        v24 = MEMORY[0xFFFFF78000000014];
        v11 = (char *)Object;
        if ( !v19 )
        {
          v18 = 258;
          break;
        }
      }
      v10 = Alertable;
    }
    ObfDereferenceObject(v11);
    *(_OWORD *)&StateChange->NewState = v28[0];
    *(_OWORD *)&StateChange->AppClientId.UniqueThread = v28[1];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 1) = v28[2];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 3) = v28[3];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 5) = v28[4];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 7) = v28[5];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 9) = v28[6];
    v20 = &StateChange->StateInfo.Exception.ExceptionRecord.ExceptionInformation[9];
    *((_OWORD *)v20 - 1) = v28[7];
    *(_OWORD *)v20 = v28[8];
    *((_OWORD *)v20 + 1) = v28[9];
    *((_OWORD *)v20 + 2) = v28[10];
    v20[6] = *(_QWORD *)&v28[11];
    return v18;
  }
  return result;
}
