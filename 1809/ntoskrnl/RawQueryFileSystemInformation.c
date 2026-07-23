/*
 * XREFs of RawQueryFileSystemInformation @ 0x140890FA0
 * Callers:
 *     RawUserFsCtrl @ 0x140701740 (RawUserFsCtrl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopBuildSynchronousFsdRequest @ 0x140664070 (IopBuildSynchronousFsdRequest.c)
 *     RawPerformDevIoCtrl @ 0x140890AE4 (RawPerformDevIoCtrl.c)
 *     RawComputeFileSystemInformationChecksum @ 0x140890F50 (RawComputeFileSystemInformationChecksum.c)
 */

__int64 __fastcall RawQueryFileSystemInformation(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS v5; // ebx
  _QWORD *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // rsi
  PVOID PoolWithTag; // rax
  __int64 v12; // rdi
  IRP *v13; // rax
  unsigned int v14; // eax
  int v15; // eax
  _QWORD v17[2]; // [rsp+50h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-19h] BYREF
  LARGE_INTEGER v19; // [rsp+78h] [rbp-1h] BYREF
  __int64 v20; // [rsp+80h] [rbp+7h]
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+Fh]
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]

  memset(&Event, 0, sizeof(Event));
  v17[0] = 0LL;
  v17[1] = 0LL;
  v19.QuadPart = 0LL;
  v20 = 0LL;
  NumberOfBytes = 0LL;
  if ( *(_DWORD *)(a2 + 8) >= 9u )
  {
    v6 = *(_QWORD **)(a1 + 24);
    memset(v6, 0, *(unsigned int *)(a2 + 8));
    v5 = RawPerformDevIoCtrl(v7, *(struct _DEVICE_OBJECT **)(a3 + 176), v8, v9, &v19);
    if ( v5 >= 0 )
    {
      v10 = HIDWORD(NumberOfBytes);
      if ( HIDWORD(NumberOfBytes) >= 0x18 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x62574152u);
        v12 = (__int64)PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v10);
          KeInitializeEvent(&Event, NotificationEvent, 0);
          v13 = (IRP *)IopBuildSynchronousFsdRequest(
                         3u,
                         *(_QWORD *)(a3 + 176),
                         (void *)v12,
                         v10,
                         0LL,
                         (__int64)&Event,
                         (__int64)v17,
                         retaddr);
          if ( v13 )
          {
            v13->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
            v5 = IofCallDriver(*(PDEVICE_OBJECT *)(a3 + 176), v13);
            if ( v5 == 259 )
            {
              KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
              v5 = v17[0];
            }
            if ( v5 >= 0 )
            {
              if ( *(_DWORD *)(v12 + 16) == 1397904198
                && (v14 = *(unsigned __int16 *)(v12 + 20), v14 <= (unsigned int)v10)
                && (unsigned __int16)v14 >= 0x18u
                && (unsigned __int16)RawComputeFileSystemInformationChecksum(v12) == *(_WORD *)(v12 + 22) )
              {
                if ( *(_BYTE *)(v12 + 3) == 82
                  && *(_BYTE *)(v12 + 4) == 101
                  && *(_BYTE *)(v12 + 5) == 70
                  && *(_BYTE *)(v12 + 6) == 83 )
                {
                  v15 = v5;
                  if ( !*(_BYTE *)(v12 + 7) )
                    v15 = -1073741637;
                  v5 = v15;
                }
                *v6 = *(_QWORD *)(v12 + 3);
                *(_QWORD *)(a1 + 56) = 9LL;
              }
              else
              {
                v5 = -1073741637;
              }
            }
          }
          else
          {
            v5 = -1073741670;
          }
          ExFreePoolWithTag((PVOID)v12, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return (unsigned int)-1073741637;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v5;
}
