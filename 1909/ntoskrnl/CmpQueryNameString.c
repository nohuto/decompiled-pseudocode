/*
 * XREFs of CmpQueryNameString @ 0x14068BC28
 * Callers:
 *     CmpInitCmRM @ 0x14068AF98 (CmpInitCmRM.c)
 *     CmpTraceHiveMountBaseFileMounted @ 0x14068E030 (CmpTraceHiveMountBaseFileMounted.c)
 *     CmKtmNotification @ 0x1406BAEA0 (CmKtmNotification.c)
 *     CmpStartRMLog @ 0x1406BC0BC (CmpStartRMLog.c)
 *     CmpTraceHiveRestoreStart @ 0x14082624C (CmpTraceHiveRestoreStart.c)
 *     CmpAddRemoveRMLogContainer @ 0x14083177C (CmpAddRemoveRMLogContainer.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ObQueryNameStringMode @ 0x14062E570 (ObQueryNameStringMode.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
 */

NTSTATUS __fastcall CmpQueryNameString(void *a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  SIZE_T i; // rbp
  UNICODE_STRING *PoolWithTag; // rax
  UNICODE_STRING *v7; // rdi
  int v8; // eax
  SIZE_T Length; // rcx
  __int64 StringRoutine; // rax
  NTSTATUS appended; // eax
  unsigned __int16 v12; // dx
  wchar_t *Buffer; // r8
  unsigned int v14; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  result = ObReferenceObjectByHandle(a1, 1u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
  v4 = result;
  if ( result >= 0 )
  {
    for ( i = 272LL; ; i = v14 )
    {
      PoolWithTag = (UNICODE_STRING *)ExAllocatePoolWithTag(PagedPool, i, 0x62534D43u);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      v8 = ObQueryNameStringMode((char *)Object, (__int64)PoolWithTag, i, &v14, 0);
      v4 = v8;
      if ( v8 >= 0 )
      {
        a2->Length = 0;
        Length = v7->Length;
        a2->MaximumLength = v7->Length;
        StringRoutine = ExpAllocateStringRoutine(Length);
        a2->Buffer = (wchar_t *)StringRoutine;
        if ( StringRoutine )
        {
          appended = RtlAppendUnicodeStringToString(a2, v7);
          v12 = a2->Length;
          v4 = appended;
          if ( a2->Length )
          {
            Buffer = a2->Buffer;
            do
            {
              if ( Buffer[((unsigned __int64)v12 >> 1) - 1] )
                break;
              v12 -= 2;
              a2->Length = v12;
            }
            while ( v12 );
          }
        }
        else
        {
          v4 = -1073741801;
        }
LABEL_9:
        if ( v7 )
          ExFreePoolWithTag(v7, 0);
        break;
      }
      if ( v8 != -2147483643 || v14 <= (unsigned int)i )
        goto LABEL_9;
      ExFreePoolWithTag(v7, 0);
    }
    ObfDereferenceObject(Object);
    return v4;
  }
  return result;
}
