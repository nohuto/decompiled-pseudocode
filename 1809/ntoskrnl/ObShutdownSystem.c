/*
 * XREFs of ObShutdownSystem @ 0x140861F6C
 * Callers:
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByName @ 0x1405C9DA0 (ObReferenceObjectByName.c)
 *     ObpDeleteSymbolicLinkName @ 0x14068F354 (ObpDeleteSymbolicLinkName.c)
 *     ExEnumHandleTable @ 0x140690C90 (ExEnumHandleTable.c)
 *     ObMakeTemporaryObject @ 0x1406C8670 (ObMakeTemporaryObject.c)
 */

char __fastcall ObShutdownSystem(int a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // rbx
  void *v3; // rcx
  __int64 v4; // rax
  char *v5; // rsi
  char *v6; // r15
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  __int64 v9; // rax
  char *v10; // r9
  char *v11; // rdx
  char *v12; // rdi
  char *v13; // r13
  char *v14; // r11
  char *v15; // r10
  struct _OBJECT_TYPE *v16; // rax
  char v17; // cl
  __int64 v18; // r12
  struct _KTHREAD *CurrentThread; // rax
  char *v20; // rcx
  PVOID *v21; // rcx
  int v23; // [rsp+40h] [rbp-38h]
  char *v24; // [rsp+50h] [rbp-28h]
  struct _OBJECT_TYPE *v25; // [rsp+58h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-18h] BYREF
  int v27; // [rsp+C0h] [rbp+48h]
  int v28; // [rsp+C8h] [rbp+50h]
  int v29; // [rsp+D0h] [rbp+58h] BYREF
  PVOID Object; // [rsp+D8h] [rbp+60h] BYREF

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v29 = 0;
      LOBYTE(v4) = ExEnumHandleTable(
                     (unsigned int *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[5],
                     (__int64 (__fastcall *)(unsigned int *, signed __int64 *, _QWORD, __int64))ObpShutdownCloseHandleProcedure,
                     (__int64)&v29,
                     0LL);
    }
    else
    {
      v1 = ObpTypeObjectType;
      v2 = *(_QWORD **)ObpTypeObjectType;
      while ( v2 != v1 )
      {
        v3 = v2 + 10;
        v2 = (_QWORD *)*v2;
        Object = v3;
        ObMakeTemporaryObject(v3);
      }
      RtlInitUnicodeString(&DestinationString, L"DosDevices");
      if ( (int)ObReferenceObjectByName(
                  (__int64)&DestinationString,
                  64,
                  0LL,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0LL,
                  &Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(&DestinationString, L"Global");
      if ( (int)ObReferenceObjectByName(
                  (__int64)&DestinationString,
                  64,
                  0LL,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0LL,
                  &Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      RtlInitUnicodeString(&DestinationString, L"GLOBALROOT");
      if ( (int)ObReferenceObjectByName(
                  (__int64)&DestinationString,
                  64,
                  0LL,
                  0,
                  (__int64)ObpSymbolicLinkObjectType,
                  0,
                  0LL,
                  &Object) >= 0 )
      {
        ObMakeTemporaryObject(Object);
        ObfDereferenceObject(Object);
      }
      ObfDereferenceObject(ObpRootDirectoryObject);
      ObfDereferenceObject(ObpDirectoryObjectType);
      ObfDereferenceObject(ObpSymbolicLinkObjectType);
      ObfDereferenceObject(ObpTypeDirectoryObject);
      LOBYTE(v4) = ObfDereferenceObject(ObpTypeObjectType);
    }
  }
  else
  {
    v5 = (char *)ObpRootDirectoryObject;
    LOBYTE(v4) = 1;
    v27 = 1;
    v6 = 0LL;
    v7 = 1;
    v8 = 1;
    if ( ObpRootDirectoryObject )
    {
LABEL_15:
      while ( 2 )
      {
        v9 = 0LL;
LABEL_16:
        v28 = v9;
        if ( (unsigned int)v9 < 0x25 )
        {
          v10 = &v5[8 * v9];
          v11 = *(char **)v10;
          v12 = v10;
          v24 = v10;
          while ( 1 )
          {
            if ( !v11 )
            {
              v9 = (unsigned int)(v28 + 1);
              goto LABEL_16;
            }
            v13 = (char *)*((_QWORD *)v11 + 1);
            v14 = v6;
            v15 = v6;
            v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v13 - 48) >> 8)];
            v17 = *(v13 - 22);
            v25 = v16;
            if ( (v17 & 2) != 0 )
            {
              v18 = (__int64)&v13[-ObpInfoMaskToOffset[v17 & 3] - 48];
              v16 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v13 - 48) >> 8)];
            }
            else
            {
              v18 = 0LL;
            }
            if ( v6 )
            {
              if ( v13 == v6 && (v6 = 0LL, v8 > v7) )
              {
                v8 = v7;
                v12 = v10;
                v27 = v7;
              }
              else
              {
                v6 = 0LL;
                v12 = v11;
                if ( v13 != v15 )
                  v6 = v14;
              }
            }
            else if ( v16 == ObpTypeObjectType )
            {
              v12 = v11;
            }
            else
            {
              if ( v16 == ObpDirectoryObjectType )
              {
                ++v7;
                v5 = (char *)*((_QWORD *)v11 + 1);
                goto LABEL_15;
              }
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(v13 - 32), 0LL);
              *(v13 - 21) &= ~0x10u;
              ExReleasePushLockEx((ULONG_PTR)(v13 - 32), 0LL);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              v20 = *(char **)v12;
              if ( *((_QWORD *)v13 - 5) )
              {
                v8 = v27;
                v12 = *(char **)v12;
              }
              else
              {
                *(_QWORD *)v12 = *(_QWORD *)v20;
                ExFreePoolWithTag(v20, 0);
                if ( (v25->TypeInfo.ObjectTypeFlags & 8) == 0 )
                {
                  LOBYTE(v23) = 0;
                  v25->TypeInfo.SecurityProcedure(
                    v13,
                    DeleteSecurityDescriptor,
                    0LL,
                    0LL,
                    0LL,
                    (void **)v13 - 1,
                    v25->TypeInfo.PoolType,
                    0LL,
                    v23);
                }
                if ( v25 == ObpSymbolicLinkObjectType )
                {
                  v8 = v7;
                  v27 = v7;
                  ObpDeleteSymbolicLinkName((__int64)v13);
                  v12 = v24;
                }
                else
                {
                  v8 = v27;
                }
                ExFreePoolWithTag(*(PVOID *)(v18 + 16), 0);
                *(_QWORD *)(v18 + 16) = 0LL;
                *(_DWORD *)(v18 + 8) = 0;
                *(_QWORD *)v18 = 0LL;
                ObfDereferenceObject(v13);
                ObfDereferenceObject(v5);
              }
              v10 = v24;
            }
            v11 = *(char **)v12;
          }
        }
        --v7;
        LOBYTE(v4) = *(v5 - 22);
        if ( (v4 & 2) != 0 )
        {
          v4 = ObpInfoMaskToOffset[*(v5 - 22) & 3];
          v21 = (PVOID *)&v5[-v4 - 48];
        }
        else
        {
          v21 = 0LL;
        }
        v6 = v5;
        v5 = (char *)*v21;
        if ( *v21 )
          continue;
        break;
      }
    }
  }
  return v4;
}
