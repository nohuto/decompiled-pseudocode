/*
 * XREFs of IopCheckInitiatorHint @ 0x1400A392C
 * Callers:
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     IopSetFileObjectExtensionFlag @ 0x14008BD48 (IopSetFileObjectExtensionFlag.c)
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     IoGetInitiatorProcess @ 0x14013B4B0 (IoGetInitiatorProcess.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x14064B4F0 (RtlIsSandboxedToken.c)
 */

__int64 __fastcall IopCheckInitiatorHint(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *Teb; // rbx
  __int64 v6; // rcx
  char v7; // bl
  __int64 v8; // r9
  PVOID InitiatorProcess; // rax
  int SetSpecificExtension; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  SetSpecificExtension = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( (Teb[9] | 1LL) == Teb[252] && !(unsigned __int8)RtlIsSandboxedToken(0LL) )
  {
    v6 = Teb[251];
    v7 = v6;
    SetSpecificExtension = ObReferenceObjectByHandle(
                             (HANDLE)(v6 & 0xFFFFFFFFFFFFFFFEuLL),
                             1u,
                             (POBJECT_TYPE)PsProcessType,
                             1,
                             &Object,
                             0LL);
    if ( SetSpecificExtension >= 0 )
    {
      LOBYTE(v8) = 1;
      SetSpecificExtension = IopGetSetSpecificExtension(a1, 1u, 0x20u, v8, &v13, 0LL);
      if ( SetSpecificExtension < 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      }
      else
      {
        if ( a2 )
        {
          InitiatorProcess = (PVOID)IoGetInitiatorProcess(a2);
          if ( InitiatorProcess != Object )
          {
            SetSpecificExtension = -1073741811;
            ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          }
        }
        if ( SetSpecificExtension >= 0 )
        {
          *(_QWORD *)(v13 + 8) = Object;
          if ( (v7 & 1) != 0 )
          {
            *(_DWORD *)(a1 + 80) |= 0x20000000u;
            IopSetFileObjectExtensionFlag(a1, 8, 0);
          }
        }
      }
    }
  }
  return (unsigned int)SetSpecificExtension;
}
