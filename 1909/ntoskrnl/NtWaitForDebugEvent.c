/*
 * XREFs of NtWaitForDebugEvent @ 0x1408492B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     DbgkpConvertKernelToUserStateChange @ 0x14084784C (DbgkpConvertKernelToUserStateChange.c)
 *     DbgkpOpenHandles @ 0x140847B28 (DbgkpOpenHandles.c)
 */

NTSTATUS __stdcall NtWaitForDebugEvent(
        HANDLE DebugObject,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE StateChange)
{
  char v7; // r14
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rcx
  NTSTATUS result; // eax
  BOOLEAN v11; // r9
  char *v12; // rdi
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
  __int64 v28; // [rsp+68h] [rbp-120h]
  _OWORD v29[12]; // [rsp+80h] [rbp-108h] BYREF

  Timeouta = Timeout;
  v7 = 0;
  QuadPart = 0LL;
  v24 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v29, 0, 0xB8uLL);
  if ( Timeouta )
  {
    QuadPart = Timeouta->QuadPart;
    Timeouta = (PLARGE_INTEGER)&QuadPart;
    v24 = MEMORY[0xFFFFF78000000014];
  }
  if ( PreviousMode )
  {
    v9 = (__int64)StateChange;
    if ( (unsigned __int64)StateChange >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 183) = *(_BYTE *)(v9 + 183);
  }
  result = ObReferenceObjectByHandle(DebugObject, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v26 = 0LL;
    v27 = 0LL;
    v11 = Alertable;
    v12 = (char *)Object;
    while ( 1 )
    {
      v18 = KeWaitForSingleObject(v12, Executive, PreviousMode, v11, Timeouta);
      if ( v18 < 0 || v18 == 192 || (unsigned int)(v18 - 257) <= 1 )
        break;
      ExAcquireFastMutex((PFAST_MUTEX)(v12 + 24));
      if ( (*((_DWORD *)v12 + 24) & 1) != 0 )
      {
        v18 = -1073740972;
      }
      else
      {
        v13 = v12 + 80;
        for ( i = *((_QWORD *)v12 + 10); ; i = *(_QWORD *)i )
        {
          if ( (_QWORD *)i == v13 )
          {
            KeResetEvent((PRKEVENT)v12);
            goto LABEL_24;
          }
          v15 = i;
          v16 = *(_DWORD *)(i + 76);
          if ( (v16 & 5) == 0 )
          {
            v7 = 1;
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
              v7 = 0;
            }
LABEL_19:
            if ( v7 )
              break;
          }
        }
        v26 = *(PVOID *)(i + 56);
        v27 = *(PVOID *)(i + 64);
        ObfReferenceObjectWithTag(v27, 0x4F676244u);
        ObfReferenceObjectWithTag(v26, 0x4F676244u);
        DbgkpConvertKernelToUserStateChange((__int64)v29, v15);
        *(_DWORD *)(v15 + 76) |= 1u;
LABEL_24:
        v18 = 0;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 24));
      if ( v18 < 0 )
        break;
      if ( v7 )
      {
        DbgkpOpenHandles((__int64)v29, v26, v27);
        ObfDereferenceObjectWithTag(v27, 0x4F676244u);
        ObfDereferenceObjectWithTag(v26, 0x4F676244u);
        break;
      }
      v7 = 0;
      if ( QuadPart < 0 )
      {
        v28 = MEMORY[0xFFFFF78000000014];
        v19 = MEMORY[0xFFFFF78000000014] - v24 + QuadPart < 0;
        QuadPart += MEMORY[0xFFFFF78000000014] - v24;
        v24 = MEMORY[0xFFFFF78000000014];
        v12 = (char *)Object;
        if ( !v19 )
        {
          v18 = 258;
          break;
        }
      }
      v11 = Alertable;
    }
    ObfDereferenceObject(v12);
    *(_OWORD *)&StateChange->NewState = v29[0];
    *(_OWORD *)&StateChange->AppClientId.UniqueThread = v29[1];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 1) = v29[2];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 3) = v29[3];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 5) = v29[4];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 7) = v29[5];
    *(_OWORD *)(&StateChange->StateInfo.UnloadDll + 9) = v29[6];
    v20 = &StateChange->StateInfo.Exception.ExceptionRecord.ExceptionInformation[9];
    *((_OWORD *)v20 - 1) = v29[7];
    *(_OWORD *)v20 = v29[8];
    *((_OWORD *)v20 + 1) = v29[9];
    *((_OWORD *)v20 + 2) = v29[10];
    v20[6] = *(_QWORD *)&v29[11];
    return v18;
  }
  return result;
}
