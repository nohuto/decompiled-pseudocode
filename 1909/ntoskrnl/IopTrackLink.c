/*
 * XREFs of IopTrackLink @ 0x1406B19B0
 * Callers:
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     IopTrackLink @ 0x1406B19B0 (IopTrackLink.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota @ 0x140037A20 (IopVerifierExAllocatePoolWithQuota.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     RtlULongSub @ 0x1401006A4 (RtlULongSub.c)
 *     IoGetTransactionParameterBlock @ 0x1401006D0 (IoGetTransactionParameterBlock.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1401CCDF0 (RtlCompareMemoryUlong.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     IopTrackLink @ 0x1406B19B0 (IopTrackLink.c)
 *     IopGetSetObjectId @ 0x1406B2378 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x1406F9A64 (IopGetVolumeId.c)
 *     IopMarshalIds @ 0x140853AA4 (IopMarshalIds.c)
 *     IopSendMessageToTrackService @ 0x140853FB4 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140854BD8 (IopSetRemoteLink.c)
 */

__int64 __fastcall IopTrackLink(
        struct _FILE_OBJECT *Object,
        __int64 a2,
        void *a3,
        ULONG a4,
        struct _KEVENT *a5,
        KPROCESSOR_MODE AccessMode)
{
  struct _FILE_OBJECT *v9; // rsi
  unsigned int *PoolWithQuota; // rdi
  void *v11; // r10
  __int64 v12; // rax
  NTSTATUS v13; // ebx
  char v14; // r15
  int v15; // eax
  struct _KEVENT *v16; // r15
  __int64 v17; // rax
  NTSTATUS v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int VolumeId; // eax
  int v22; // eax
  NTSTATUS v23; // eax
  int SetObjectId; // eax
  PVOID v26; // [rsp+50h] [rbp-2B8h] BYREF
  ULONG pulResult; // [rsp+58h] [rbp-2B0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-2A8h]
  __int64 v29; // [rsp+68h] [rbp-2A0h]
  __int128 v30; // [rsp+70h] [rbp-298h] BYREF
  __int128 v31; // [rsp+80h] [rbp-288h]
  __int128 v32; // [rsp+90h] [rbp-278h]
  __int128 v33; // [rsp+A0h] [rbp-268h]
  _OWORD v34[6]; // [rsp+B0h] [rbp-258h] BYREF
  _OWORD v35[6]; // [rsp+110h] [rbp-1F8h] BYREF
  _OWORD v36[4]; // [rsp+170h] [rbp-198h] BYREF
  _DWORD Src[68]; // [rsp+1B0h] [rbp-158h] BYREF

  v28 = a2;
  v29 = (__int64)a5;
  v9 = 0LL;
  v26 = 0LL;
  memset(v35, 0, 20);
  memset(&v34[2], 0, 0x40uLL);
  memset(&v35[2], 0, 0x40uLL);
  memset(v34, 0, 20);
  memset(v36, 0, sizeof(v36));
  memset(Src, 0, sizeof(Src));
  if ( AccessMode )
  {
    PoolWithQuota = (unsigned int *)IopVerifierExAllocatePoolWithQuota(PagedPool, a4);
    memmove(PoolWithQuota, a3, a4);
  }
  else
  {
    PoolWithQuota = (unsigned int *)a3;
  }
  if ( !*(_QWORD *)PoolWithQuota && AccessMode == 1 )
  {
LABEL_87:
    ExFreePoolWithTag(PoolWithQuota, 0);
    return 3221225485LL;
  }
  if ( RtlULongSub(a4, 0xCu, &pulResult) < 0 )
  {
    if ( AccessMode )
      ExFreePoolWithTag(PoolWithQuota, 0);
    return 3221225621LL;
  }
  else
  {
    v12 = PoolWithQuota[2];
    if ( pulResult < (unsigned int)v12 )
    {
      if ( !AccessMode )
        return 3221225485LL;
      goto LABEL_87;
    }
    if ( (unsigned __int64)(v12 + 36) <= 0x100 )
    {
      if ( v11 )
      {
        v13 = ObReferenceObjectByHandle(v11, 2u, (POBJECT_TYPE)IoFileObjectType, AccessMode, &v26, 0LL);
        v9 = (struct _FILE_OBJECT *)v26;
        if ( v13 < 0 )
        {
          if ( AccessMode )
            ExFreePoolWithTag(PoolWithQuota, 0);
          return (unsigned int)v13;
        }
      }
      if ( (Object->DeviceObject->Characteristics & 0x10) != 0 )
      {
        SetObjectId = IopGetSetObjectId(Object);
        v13 = SetObjectId;
        if ( SetObjectId == -1073741772 )
          goto LABEL_36;
        if ( SetObjectId < 0 )
          goto LABEL_14;
        if ( RtlCompareMemoryUlong(&v34[4], 0x10uLL, 0) == 16 )
          goto LABEL_36;
        if ( IoGetTransactionParameterBlock(Object) )
          goto LABEL_78;
        if ( *(_QWORD *)PoolWithQuota )
        {
          if ( IoGetTransactionParameterBlock(v9) )
            goto LABEL_78;
          if ( *(_QWORD *)PoolWithQuota )
          {
            if ( (v9->DeviceObject->Characteristics & 0x10) != 0 )
            {
              v13 = IopGetSetObjectId(v9);
              if ( v13 < 0 )
                goto LABEL_14;
              v13 = IopGetSetObjectId(v9);
              if ( v13 < 0 )
                goto LABEL_14;
              IopMarshalIds(Src, v34, v36, PoolWithQuota);
              v16 = a5;
              v22 = IopTrackLink(Object, (__int64)a5, 0);
              goto LABEL_52;
            }
            VolumeId = IopGetVolumeId(v9);
LABEL_48:
            v13 = VolumeId;
            if ( VolumeId < 0 )
              goto LABEL_14;
            v13 = IopGetSetObjectId(v9);
            if ( v13 < 0 )
              goto LABEL_14;
            IopMarshalIds(Src, v34, v36, PoolWithQuota);
            v16 = a5;
            v13 = IopTrackLink(Object, (__int64)a5, 0);
            if ( v13 < 0 )
              goto LABEL_79;
            v22 = IopGetSetObjectId(Object);
LABEL_52:
            v13 = v22;
            if ( v22 >= 0 )
            {
              v35[2] = v34[2];
              v35[3] = v34[3];
              v35[4] = v34[4];
              v35[5] = v34[5];
              LOBYTE(v35[3]) = _mm_cvtsi128_si32((__m128i)v34[3]) | 1;
              v13 = IopGetSetObjectId(v9);
              if ( v13 < 0 )
                IopGetSetObjectId(Object);
            }
            goto LABEL_79;
          }
        }
        if ( IoGetTransactionParameterBlock(Object) || *(_QWORD *)PoolWithQuota && IoGetTransactionParameterBlock(v9) )
          goto LABEL_78;
        v23 = IopSetRemoteLink(Object);
      }
      else
      {
        if ( *(_QWORD *)PoolWithQuota )
        {
          if ( (v9->DeviceObject->Characteristics & 0x10) == 0 )
          {
            v14 = 0;
            v15 = IopGetSetObjectId(Object);
            v13 = v15;
            if ( v15 != -1073741772 )
            {
              if ( v15 < 0 )
              {
LABEL_14:
                v16 = a5;
LABEL_79:
                if ( AccessMode )
                  ExFreePoolWithTag(PoolWithQuota, 0);
                if ( v9 )
                  ObfDereferenceObject(v9);
                KeSetEvent(v16, 0, 0);
                return (unsigned int)v13;
              }
              if ( RtlCompareMemoryUlong(&v34[4], 0x10uLL, 0) != 16 )
              {
                if ( !IoGetTransactionParameterBlock(Object)
                  && (!*(_QWORD *)PoolWithQuota || !IoGetTransactionParameterBlock(v9)) )
                {
                  v13 = IopGetVolumeId(v9);
                  if ( v13 >= 0 )
                  {
                    v13 = IopGetVolumeId(Object);
                    if ( v13 >= 0 )
                    {
                      v13 = IopGetSetObjectId(Object);
                      if ( v13 >= 0 )
                      {
                        v36[0] = v34[2];
                        v36[1] = v34[3];
                        v36[2] = v34[4];
                        v36[3] = v34[5];
                        v35[2] = v34[2];
                        v35[3] = v34[3];
                        v35[4] = v34[4];
                        v35[5] = v34[5];
                        v17 = *(_QWORD *)((char *)v34 + 4) - *(_QWORD *)((char *)v35 + 4);
                        if ( *(_QWORD *)((char *)v34 + 4) == *(_QWORD *)((char *)v35 + 4) )
                          v17 = *(_QWORD *)((char *)v34 + 12) - *(_QWORD *)((char *)v35 + 12);
                        if ( v17 )
                          LOBYTE(v35[3]) = LOBYTE(v34[3]) | 1;
                        v18 = IopGetSetObjectId(v9);
                        v13 = v18;
                        if ( v18 == -1073741635 || v18 == -1073741771 )
                        {
                          v13 = IopGetSetObjectId(v9);
                          if ( v13 >= 0 )
                            v13 = IopGetSetObjectId(v9);
                        }
                        if ( v13 < 0 )
                          goto LABEL_34;
                        v14 = 1;
                        v19 = *(_QWORD *)((char *)v34 + 4) - *(_QWORD *)((char *)v35 + 4);
                        if ( *(_QWORD *)((char *)v34 + 4) == *(_QWORD *)((char *)v35 + 4) )
                          v19 = *(_QWORD *)((char *)v34 + 12) - *(_QWORD *)((char *)v35 + 12);
                        if ( v19 )
                        {
                          IopMarshalIds(Src, v34, v36, PoolWithQuota);
                          v30 = v34[2];
                          v31 = v34[3];
                          v32 = v34[4];
                          v33 = v34[5];
                          LOBYTE(v31) = _mm_cvtsi128_si32((__m128i)v34[3]) & 0xFE;
                          v13 = IopSendMessageToTrackService(v35, &v30, Src);
                        }
                        if ( v13 < 0 )
                        {
LABEL_34:
                          v20 = 0;
                          if ( v14 )
                            v20 = IopGetSetObjectId(v9);
                          if ( v20 >= 0 )
                            IopGetSetObjectId(Object);
                        }
                      }
                    }
                  }
                  goto LABEL_14;
                }
                goto LABEL_78;
              }
            }
LABEL_36:
            v13 = 0;
            goto LABEL_14;
          }
          if ( (int)IopGetSetObjectId(Object) < 0 || RtlCompareMemoryUlong(&v34[4], 0x10uLL, 0) == 16 )
            goto LABEL_36;
          if ( !IoGetTransactionParameterBlock(Object)
            && (!*(_QWORD *)PoolWithQuota || !IoGetTransactionParameterBlock(v9)) )
          {
            VolumeId = IopGetSetObjectId(v9);
            goto LABEL_48;
          }
LABEL_78:
          v13 = -1072103335;
          goto LABEL_14;
        }
        v13 = IopGetVolumeId(Object);
        if ( v13 < 0 )
          goto LABEL_14;
        v13 = IopGetSetObjectId(Object);
        if ( v13 < 0 )
          goto LABEL_14;
        if ( RtlCompareMemoryUlong(&v34[4], 0x10uLL, 0) == 16 )
          goto LABEL_36;
        if ( IoGetTransactionParameterBlock(Object) || *(_QWORD *)PoolWithQuota && IoGetTransactionParameterBlock(v9) )
          goto LABEL_78;
        v30 = v34[2];
        v31 = v34[3];
        v32 = v34[4];
        v33 = v34[5];
        LOBYTE(v31) = _mm_cvtsi128_si32((__m128i)v34[3]) & 0xFE;
        v23 = IopSendMessageToTrackService(v35, &v30, PoolWithQuota);
      }
      v13 = v23;
      goto LABEL_14;
    }
    if ( AccessMode )
      ExFreePoolWithTag(PoolWithQuota, 0);
    return 2147483653LL;
  }
}
