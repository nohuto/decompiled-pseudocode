/*
 * XREFs of IopTrackLink @ 0x14068CEE8
 * Callers:
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     IopTrackLink @ 0x14068CEE8 (IopTrackLink.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     RtlULongSub @ 0x140101D94 (RtlULongSub.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140101DB8 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IoGetTransactionParameterBlock @ 0x140103F40 (IoGetTransactionParameterBlock.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlCompareMemoryUlong @ 0x1401C5DB0 (RtlCompareMemoryUlong.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     IopTrackLink @ 0x14068CEE8 (IopTrackLink.c)
 *     IopGetSetObjectId @ 0x14068D7F0 (IopGetSetObjectId.c)
 *     IopGetVolumeId @ 0x14081B024 (IopGetVolumeId.c)
 *     IopMarshalIds @ 0x14081B668 (IopMarshalIds.c)
 *     IopSendMessageToTrackService @ 0x14081BB54 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x14081C6F8 (IopSetRemoteLink.c)
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
  unsigned int *PoolWithQuota_0; // rdi
  NTSTATUS v11; // eax
  void *v12; // r10
  char v13; // r13
  __int64 v14; // rax
  NTSTATUS v15; // ebx
  int v16; // eax
  struct _KEVENT *v17; // r13
  __int64 v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rax
  int v21; // eax
  int VolumeId; // eax
  int v23; // eax
  NTSTATUS v24; // eax
  int SetObjectId; // eax
  PVOID v27; // [rsp+50h] [rbp-2A8h] BYREF
  ULONG pulResult; // [rsp+58h] [rbp-2A0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-298h]
  __int64 v30; // [rsp+68h] [rbp-290h]
  __int128 v31; // [rsp+70h] [rbp-288h] BYREF
  __m128i v32; // [rsp+80h] [rbp-278h]
  __int128 v33; // [rsp+90h] [rbp-268h]
  __int128 v34; // [rsp+A0h] [rbp-258h]
  __int128 v35; // [rsp+B0h] [rbp-248h]
  __m128i v36; // [rsp+C0h] [rbp-238h]
  __int128 Source; // [rsp+D0h] [rbp-228h] BYREF
  __int128 v38; // [rsp+E0h] [rbp-218h]
  _BYTE v39[4]; // [rsp+F0h] [rbp-208h] BYREF
  __int64 v40; // [rsp+F4h] [rbp-204h]
  __int64 v41; // [rsp+FCh] [rbp-1FCh]
  _BYTE v42[4]; // [rsp+108h] [rbp-1F0h] BYREF
  __int64 v43; // [rsp+10Ch] [rbp-1ECh]
  __int64 v44; // [rsp+114h] [rbp-1E4h]
  __int128 v45; // [rsp+120h] [rbp-1D8h]
  __m128i v46; // [rsp+130h] [rbp-1C8h]
  __int128 v47; // [rsp+140h] [rbp-1B8h]
  __int128 v48; // [rsp+150h] [rbp-1A8h]
  _OWORD v49[4]; // [rsp+160h] [rbp-198h] BYREF
  _BYTE Src[8]; // [rsp+1A0h] [rbp-158h] BYREF

  v29 = a2;
  v30 = (__int64)a5;
  v9 = 0LL;
  v27 = 0LL;
  if ( AccessMode )
  {
    PoolWithQuota_0 = (unsigned int *)IopVerifierExAllocatePoolWithQuota_0(PagedPool, a4);
    memmove(PoolWithQuota_0, a3, a4);
  }
  else
  {
    PoolWithQuota_0 = (unsigned int *)a3;
  }
  if ( !*(_QWORD *)PoolWithQuota_0 && AccessMode == 1 )
  {
LABEL_88:
    ExFreePoolWithTag(PoolWithQuota_0, 0);
    return 3221225485LL;
  }
  v11 = RtlULongSub(a4, 0xCu, &pulResult);
  v13 = 0;
  if ( v11 < 0 )
  {
    if ( AccessMode )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return 3221225621LL;
  }
  else
  {
    v14 = PoolWithQuota_0[2];
    if ( pulResult < (unsigned int)v14 )
    {
      if ( !AccessMode )
        return 3221225485LL;
      goto LABEL_88;
    }
    if ( (unsigned __int64)(v14 + 36) <= 0x100 )
    {
      if ( v12 )
      {
        v15 = ObReferenceObjectByHandle(v12, 2u, (POBJECT_TYPE)IoFileObjectType, AccessMode, &v27, 0LL);
        v9 = (struct _FILE_OBJECT *)v27;
        if ( v15 < 0 )
        {
          if ( AccessMode )
            ExFreePoolWithTag(PoolWithQuota_0, 0);
          return (unsigned int)v15;
        }
      }
      if ( (Object->DeviceObject->Characteristics & 0x10) != 0 )
      {
        SetObjectId = IopGetSetObjectId(Object);
        v15 = SetObjectId;
        if ( SetObjectId == -1073741772 )
          goto LABEL_47;
        if ( SetObjectId < 0 )
          goto LABEL_14;
        if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) == 16 )
          goto LABEL_47;
        if ( IoGetTransactionParameterBlock(Object) )
          goto LABEL_79;
        if ( *(_QWORD *)PoolWithQuota_0 )
        {
          if ( IoGetTransactionParameterBlock(v9) )
            goto LABEL_79;
          if ( *(_QWORD *)PoolWithQuota_0 )
          {
            if ( (v9->DeviceObject->Characteristics & 0x10) != 0 )
            {
              v15 = IopGetSetObjectId(v9);
              if ( v15 < 0 )
                goto LABEL_14;
              v15 = IopGetSetObjectId(v9);
              if ( v15 < 0 )
                goto LABEL_14;
              IopMarshalIds(Src, v39, v49, PoolWithQuota_0);
              v17 = a5;
              v23 = IopTrackLink(Object, (__int64)a5, 0);
              goto LABEL_53;
            }
            VolumeId = IopGetVolumeId(v9);
LABEL_49:
            v15 = VolumeId;
            if ( VolumeId < 0 )
              goto LABEL_14;
            v15 = IopGetSetObjectId(v9);
            if ( v15 < 0 )
              goto LABEL_14;
            IopMarshalIds(Src, v39, v49, PoolWithQuota_0);
            v17 = a5;
            v15 = IopTrackLink(Object, (__int64)a5, 0);
            if ( v15 < 0 )
              goto LABEL_80;
            v23 = IopGetSetObjectId(Object);
LABEL_53:
            v15 = v23;
            if ( v23 >= 0 )
            {
              v45 = v35;
              v46 = v36;
              v47 = Source;
              v48 = v38;
              v46.m128i_i8[0] = _mm_cvtsi128_si32(v36) | 1;
              v15 = IopGetSetObjectId(v9);
              if ( v15 < 0 )
                IopGetSetObjectId(Object);
            }
            goto LABEL_80;
          }
        }
        if ( IoGetTransactionParameterBlock(Object) || *(_QWORD *)PoolWithQuota_0 && IoGetTransactionParameterBlock(v9) )
          goto LABEL_79;
        v24 = IopSetRemoteLink(Object);
      }
      else
      {
        if ( *(_QWORD *)PoolWithQuota_0 )
        {
          if ( (v9->DeviceObject->Characteristics & 0x10) == 0 )
          {
            v16 = IopGetSetObjectId(Object);
            v15 = v16;
            if ( v16 == -1073741772 )
              goto LABEL_15;
            if ( v16 < 0 )
            {
LABEL_14:
              v17 = a5;
LABEL_80:
              if ( AccessMode )
                ExFreePoolWithTag(PoolWithQuota_0, 0);
              if ( v9 )
                ObfDereferenceObject(v9);
              KeSetEvent(v17, 0, 0);
              return (unsigned int)v15;
            }
            if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) == 16 )
            {
LABEL_15:
              v15 = 0;
              goto LABEL_14;
            }
            if ( !IoGetTransactionParameterBlock(Object)
              && (!*(_QWORD *)PoolWithQuota_0 || !IoGetTransactionParameterBlock(v9)) )
            {
              v15 = IopGetVolumeId(v9);
              if ( v15 >= 0 )
              {
                v15 = IopGetVolumeId(Object);
                if ( v15 >= 0 )
                {
                  v15 = IopGetSetObjectId(Object);
                  if ( v15 >= 0 )
                  {
                    v49[0] = v35;
                    v49[1] = v36;
                    v49[2] = Source;
                    v49[3] = v38;
                    v45 = v35;
                    v46 = v36;
                    v47 = Source;
                    v48 = v38;
                    v18 = v40 - v43;
                    if ( v40 == v43 )
                      v18 = v41 - v44;
                    if ( v18 )
                      v46.m128i_i8[0] = v36.m128i_i8[0] | 1;
                    v19 = IopGetSetObjectId(v9);
                    v15 = v19;
                    if ( v19 == -1073741635 || v19 == -1073741771 )
                    {
                      v15 = IopGetSetObjectId(v9);
                      if ( v15 >= 0 )
                        v15 = IopGetSetObjectId(v9);
                    }
                    if ( v15 < 0 )
                      goto LABEL_37;
                    v13 = 1;
                    v20 = v40 - v43;
                    if ( v40 == v43 )
                      v20 = v41 - v44;
                    if ( v20 )
                    {
                      IopMarshalIds(Src, v39, v49, PoolWithQuota_0);
                      v31 = v35;
                      v32 = v36;
                      v33 = Source;
                      v34 = v38;
                      v32.m128i_i8[0] = _mm_cvtsi128_si32(v36) & 0xFE;
                      v15 = IopSendMessageToTrackService(v42, &v31, Src);
                    }
                    if ( v15 < 0 )
                    {
LABEL_37:
                      v21 = 0;
                      if ( v13 )
                        v21 = IopGetSetObjectId(v9);
                      if ( v21 >= 0 )
                        IopGetSetObjectId(Object);
                    }
                  }
                }
              }
              goto LABEL_14;
            }
LABEL_79:
            v15 = -1072103335;
            goto LABEL_14;
          }
          if ( (int)IopGetSetObjectId(Object) >= 0 && RtlCompareMemoryUlong(&Source, 0x10uLL, 0) != 16 )
          {
            if ( IoGetTransactionParameterBlock(Object)
              || *(_QWORD *)PoolWithQuota_0 && IoGetTransactionParameterBlock(v9) )
            {
              goto LABEL_79;
            }
            VolumeId = IopGetSetObjectId(v9);
            goto LABEL_49;
          }
LABEL_47:
          v15 = 0;
          goto LABEL_14;
        }
        v15 = IopGetVolumeId(Object);
        if ( v15 < 0 )
          goto LABEL_14;
        v15 = IopGetSetObjectId(Object);
        if ( v15 < 0 )
          goto LABEL_14;
        if ( RtlCompareMemoryUlong(&Source, 0x10uLL, 0) == 16 )
          goto LABEL_47;
        if ( IoGetTransactionParameterBlock(Object) || *(_QWORD *)PoolWithQuota_0 && IoGetTransactionParameterBlock(v9) )
          goto LABEL_79;
        v31 = v35;
        v32 = v36;
        v33 = Source;
        v34 = v38;
        v32.m128i_i8[0] = _mm_cvtsi128_si32(v36) & 0xFE;
        v24 = IopSendMessageToTrackService(v42, &v31, PoolWithQuota_0);
      }
      v15 = v24;
      goto LABEL_14;
    }
    if ( AccessMode )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return 2147483653LL;
  }
}
