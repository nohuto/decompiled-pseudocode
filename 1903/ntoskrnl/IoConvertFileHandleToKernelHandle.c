/*
 * XREFs of IoConvertFileHandleToKernelHandle @ 0x140856070
 * Callers:
 *     CmpNameFromAttributes @ 0x14063A530 (CmpNameFromAttributes.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406DDF24 (IopOpenLinkOrRenameTarget.c)
 *     NtRestoreKey @ 0x140824F70 (NtRestoreKey.c)
 *     NtSaveKeyEx @ 0x140825240 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1408254F0 (NtSaveMergedKeys.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x1409095AC (ExpQueryCodeIntegrityCertificateInfo.c)
 *     ExpQueryElamCertInfo @ 0x1409097E4 (ExpQueryElamCertInfo.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 */

NTSTATUS __fastcall IoConvertFileHandleToKernelHandle(
        void *a1,
        KPROCESSOR_MODE a2,
        ACCESS_MASK a3,
        char a4,
        PVOID Object)
{
  _QWORD *v5; // r14
  NTSTATUS result; // eax
  PVOID v10; // rsi
  NTSTATUS v11; // ebx
  int v12; // eax
  HANDLE v13; // rdi
  PVOID v14; // [rsp+40h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+48h] [rbp-10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp+8h] BYREF

  v5 = Object;
  HandleInformation = 0LL;
  *(_QWORD *)Object = 0LL;
  if ( !a1 )
    return 0;
  result = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, a2, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    if ( a4 || (a3 & HandleInformation.GrantedAccess) == a3 )
    {
      v12 = ObDuplicateObject(
              KeGetCurrentThread()->ApcState.Process,
              a1,
              PsInitialSystemProcess,
              (__int64 *)Handle,
              a3,
              512,
              0,
              0);
      v10 = Object;
      v11 = v12;
      if ( v12 >= 0 )
      {
        v13 = Handle[0];
        v11 = ObReferenceObjectByHandle(Handle[0], 0, (POBJECT_TYPE)IoFileObjectType, 0, &v14, 0LL);
        if ( v11 >= 0 )
        {
          if ( v14 == v10 )
          {
            *v5 = v13;
          }
          else
          {
            v11 = -1073741788;
            ObCloseHandle(v13, 0);
          }
          ObfDereferenceObject(v14);
        }
        else
        {
          ObCloseHandle(v13, 0);
        }
      }
    }
    else
    {
      v10 = Object;
      v11 = -1073741790;
    }
    ObfDereferenceObject(v10);
    return v11;
  }
  return result;
}
