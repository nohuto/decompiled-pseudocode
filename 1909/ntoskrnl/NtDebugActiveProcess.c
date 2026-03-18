/*
 * XREFs of NtDebugActiveProcess @ 0x140848C20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsTestProtectedProcessIncompatibility @ 0x1406B8A5C (PsTestProtectedProcessIncompatibility.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140847CC0 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1408486C0 (DbgkpSetProcessDebugObject.c)
 */

NTSTATUS __stdcall NtDebugActiveProcess(HANDLE Process, HANDLE DebugObject)
{
  char PreviousMode; // bp
  NTSTATUS result; // eax
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdi
  _KPROCESS *v8; // rsi
  NTSTATUS v9; // ebx
  __int64 v10; // rbx
  unsigned __int64 v11; // rax
  __int16 v12; // cx
  __int64 v13; // rax
  __int16 v14; // cx
  BOOLEAN v15; // al
  struct _KEVENT *v16; // rsi
  int v17; // eax
  struct _OBJECT_HANDLE_INFORMATION v18; // [rsp+40h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v21[14]; // [rsp+60h] [rbp-98h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)Process,
             2048,
             (__int64)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &v18,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (__int64)v18;
    v8 = CurrentThread->ApcState.Process;
    if ( *(_KPROCESS **)&v18 == v8 || *(PEPROCESS *)&v18 == PsInitialSystemProcess )
    {
      v9 = -1073741790;
    }
    else
    {
      LOBYTE(v5) = PreviousMode;
      if ( PsTestProtectedProcessIncompatibility(v5, (__int64)CurrentThread->ApcState.Process, *(_QWORD *)&v18) )
      {
        v9 = -1073740014;
      }
      else
      {
        v10 = *(_QWORD *)(v7 + 728);
        if ( (v10 & 1) == 0
          || (memset(v21, 0, 0x68uLL),
              v21[1] = v10,
              v21[2] = 1LL,
              v9 = VslpEnterIumSecureMode(2, 12LL, 0LL, (__int64)v21),
              v9 >= 0) )
        {
          v11 = v8[1].ActiveProcessors.Bitmap[6];
          if ( !v11
            || (v12 = *(_WORD *)(v11 + 8), v12 != 332) && v12 != 452
            || (v13 = *(_QWORD *)(v7 + 1064)) != 0 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
          {
            v9 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
            if ( v9 >= 0 )
            {
              v15 = ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 768));
              v16 = (struct _KEVENT *)Object;
              if ( v15 )
              {
                v17 = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v7, (struct _KEVENT *)Object, &v20);
                v9 = DbgkpSetProcessDebugObject(v7, v16, v17, v20);
                ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v7 + 768));
              }
              else
              {
                v9 = -1073741558;
              }
              ObfDereferenceObject(v16);
            }
          }
          else
          {
            v9 = -1073741637;
          }
        }
      }
    }
    ObfDereferenceObjectWithTag((PVOID)v7, 0x4F676244u);
    return v9;
  }
  return result;
}
