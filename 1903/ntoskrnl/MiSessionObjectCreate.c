/*
 * XREFs of MiSessionObjectCreate @ 0x14073FCC0
 * Callers:
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 * Callees:
 *     RtlLengthSid @ 0x140004070 (RtlLengthSid.c)
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x140087CC8 (RtlStringCchPrintfW.c)
 *     KeGetSchedulingGroupSize @ 0x1400E79A8 (KeGetSchedulingGroupSize.c)
 *     KeInsertSchedulingGroup @ 0x1400E7B90 (KeInsertSchedulingGroup.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlCreateAcl @ 0x1405C8930 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D5A50 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1405D5A90 (RtlSetDaclSecurityDescriptor.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     RtlpAddKnownAce @ 0x1405DC9F0 (RtlpAddKnownAce.c)
 */

int MiSessionObjectCreate()
{
  int result; // eax
  ULONG v1; // ebx
  ULONG v2; // edi
  ACL *PoolWithTag; // rax
  ACL *v4; // rbx
  int Acl; // edi
  ACL *v6; // rcx
  unsigned __int64 v7; // rdi
  int v8; // esi
  PRKEVENT v9; // rbx
  struct _KEVENT *v10; // rcx
  int v11; // ebx
  unsigned int SchedulingGroupSize; // eax
  struct _LIST_ENTRY *v13; // rax
  void *Src; // [rsp+28h] [rbp-E0h]
  PRKEVENT Event; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v18[2]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v19; // [rsp+88h] [rbp-80h]
  UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-78h]
  int v21; // [rsp+98h] [rbp-70h]
  int v22; // [rsp+9Ch] [rbp-6Ch]
  _BYTE *v23; // [rsp+A0h] [rbp-68h]
  __int64 v24; // [rsp+A8h] [rbp-60h]
  _BYTE SecurityDescriptor[40]; // [rsp+B0h] [rbp-58h] BYREF
  wchar_t pszDest[128]; // [rsp+D8h] [rbp-30h] BYREF

  v18[1] = 0;
  v22 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v1 = RtlLengthSid(SeAliasAdminsSid);
    v2 = v1 + RtlLengthSid(SeLocalSystemSid) + 32;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v2, 0x6C636144u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    Acl = RtlCreateAcl(PoolWithTag, v2, 2u);
    v6 = v4;
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce(v4, 2u, 0, 983043, (unsigned __int8 *)SeAliasAdminsSid, 0);
      v6 = v4;
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v4, 2u, 0, 983043, (unsigned __int8 *)SeLocalSystemSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
          if ( Acl >= 0 )
          {
            v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1];
            v8 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\KernelObjects\\Session%d", *(unsigned int *)(v7 + 8));
            if ( v8 < 0 )
            {
              ExFreePoolWithTag(v4, 0);
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, pszDest);
              p_DestinationString = &DestinationString;
              v18[0] = 48;
              v23 = SecurityDescriptor;
              v19 = 0LL;
              v21 = 512;
              v24 = 0LL;
              v8 = ObCreateObjectEx(0, MmSessionObjectType, (int)v18, 0, (__int64)Src, 40, 0, 0, &Event, 0LL);
              ExFreePoolWithTag(v4, 0);
              if ( v8 >= 0 )
              {
                v9 = Event;
                v10 = Event;
                *(_QWORD *)&Event[1].Header.Lock = v7;
                KeInitializeEvent(v10, NotificationEvent, 0);
                v9[1].Header.WaitListHead.Flink = 0LL;
                if ( !PsCpuFairShareEnabled || !*(_DWORD *)(v7 + 8) )
                  goto LABEL_10;
                SchedulingGroupSize = KeGetSchedulingGroupSize();
                v13 = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(
                                              NonPagedPoolNxCacheAligned,
                                              SchedulingGroupSize,
                                              0x70724753u);
                v9[1].Header.WaitListHead.Flink = v13;
                if ( v13 )
                {
                  KeInsertSchedulingGroup((__int64)v13, 5LL, 0LL);
LABEL_10:
                  result = ObInsertObjectEx(v9, 0LL, 1u, 0, 0, 0LL, &v16);
                  v11 = result;
                  if ( result >= 0 )
                  {
                    *(_DWORD *)(v7 + 4) |= 0x40u;
                    _InterlockedAdd((volatile signed __int32 *)(v7 + 12), 1u);
                    *(_QWORD *)(v7 + 80) = v16;
                    *(_QWORD *)(v7 + 72) = Event;
                    *(_DWORD *)(v7 + 1296) = 2;
                    *(_DWORD *)(v7 + 1300) = 1;
                    KeInitializeEvent((PRKEVENT)(v7 + 1304), SynchronizationEvent, 1u);
                    return v11;
                  }
                  return result;
                }
                ObfDereferenceObject(v9);
                return -1073741670;
              }
            }
            return v8;
          }
        }
        v6 = v4;
      }
    }
    ExFreePoolWithTag(v6, 0);
    return Acl;
  }
  return result;
}
