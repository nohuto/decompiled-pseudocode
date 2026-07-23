/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x14065EE0C
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140667720 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     NtCreateEvent @ 0x14062DF70 (NtCreateEvent.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14065DEA0 (PfSnVolumeCheckSeekPenalty.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x14065ECA4 (PfSnLogOpenVolumesForPrefetch.c)
 *     PfMetadataRecordIsEqual @ 0x14065ED38 (PfMetadataRecordIsEqual.c)
 *     PfSnIsVolumeMounted @ 0x14065F3D4 (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x14065F4D8 (PfSnQueryVolumeInfo.c)
 *     PfpOpenHandleCreate @ 0x140661528 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14066168C (PfpOpenHandleClose.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140866A5C (PfSnVolumeCheckIsSdBus.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  __int64 *v2; // r14
  void *v3; // r13
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // rcx
  unsigned int v7; // eax
  PVOID PoolWithTag; // rax
  unsigned int v9; // r12d
  _QWORD *v10; // rsi
  NTSTATUS v11; // edi
  int DeviceInterfaces; // eax
  bool v13; // zf
  unsigned int v14; // edi
  const WCHAR *v15; // r14
  __int64 v16; // r12
  int IsVolumeMounted; // eax
  int v18; // ecx
  PVOID **v19; // rax
  PVOID **v20; // rsi
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  int v23; // eax
  PVOID *v24; // rax
  wchar_t *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned int *v29; // rcx
  PVOID *v30; // r9
  int v31; // r8d
  PVOID *v32; // r12
  __int64 v33; // rcx
  wchar_t *v34; // rax
  __int16 v35; // ax
  _QWORD *v36; // r12
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int64 *v39; // rcx
  HANDLE v40; // rdx
  _QWORD *v41; // rbx
  __int64 v42; // rax
  __int64 *v44; // rcx
  PVOID P; // [rsp+40h] [rbp-99h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-91h]
  HANDLE EventHandle; // [rsp+50h] [rbp-89h] BYREF
  int v48; // [rsp+58h] [rbp-81h]
  int v49; // [rsp+5Ch] [rbp-7Dh] BYREF
  PVOID *v50; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int64 v51; // [rsp+68h] [rbp-71h]
  __int64 v52; // [rsp+70h] [rbp-69h] BYREF
  wchar_t *v53; // [rsp+78h] [rbp-61h]
  _OWORD v54[2]; // [rsp+80h] [rbp-59h] BYREF
  _OWORD v55[2]; // [rsp+A0h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-19h] BYREF
  unsigned int v59; // [rsp+150h] [rbp+77h]
  int i; // [rsp+150h] [rbp+77h]
  size_t cbDest; // [rsp+158h] [rbp+7Fh] BYREF

  p_P = &P;
  v2 = a1;
  cbDest = 0LL;
  P = &P;
  v3 = 0LL;
  memset(v55, 0, sizeof(v55));
  *((_QWORD *)&v55[1] + 1) = 0x200000000LL;
  memset(v54, 0, sizeof(v54));
  v4 = *v2;
  v5 = 0;
  v6 = *v2;
  *((_QWORD *)&v54[1] + 1) = 0x200000000LL;
  EventHandle = 0LL;
  PfSnLogOpenVolumesForPrefetch(v6, 1);
  if ( v4 && (v7 = *(_DWORD *)(v4 + 112), v7 < 0x4000) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 112 * v7, 0x76506343u);
    v2[2] = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      v9 = 0;
      if ( *(_DWORD *)(v4 + 112) )
      {
        do
        {
          v10 = (_QWORD *)(v2[2] + 112LL * v9);
          memset(v10, 0, 0x70uLL);
          v10[1] = v10;
          *v10 = v10;
          memset(v10 + 4, 0, 0x20uLL);
          v10[7] |= 0x200000000uLL;
          memset(v10 + 8, 0, 0x20uLL);
          v10[11] |= 0x200000000uLL;
          ++v9;
        }
        while ( v9 < *(_DWORD *)(v4 + 112) );
        v5 = 0;
      }
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v11 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      if ( v11 >= 0 )
      {
        DeviceInterfaces = IopGetDeviceInterfaces((int *)&GUID_DEVINTERFACE_VOLUME, 0LL, 0, 0, &cbDest, 0LL);
        v3 = (void *)cbDest;
        v11 = DeviceInterfaces;
        if ( DeviceInterfaces >= 0 )
        {
          v13 = *(_WORD *)cbDest == 0;
          v14 = 0;
          v59 = 0;
          v15 = (const WCHAR *)cbDest;
          while ( !v13 )
          {
            v16 = -1LL;
            do
              ++v16;
            while ( v15[v16] );
            v51 = 2LL * (unsigned int)(v16 + 1);
            if ( v14 <= v51 )
              v59 = 2 * v16 + 2;
            IsVolumeMounted = PfSnIsVolumeMounted(v15);
            v18 = cbDest;
            if ( IsVolumeMounted < 0 )
              v18 = 0;
            LODWORD(cbDest) = v18;
            if ( v18 && !v48 && (int)PfSnQueryVolumeInfo(a1[1], v15, v55, &v50, &v49) >= 0 )
            {
              v19 = (PVOID **)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x76506343u);
              v20 = v19;
              if ( !v19 )
                goto LABEL_58;
              memset(v19, 0, 0x48uLL);
              memset(v20 + 2, 0, 0x20uLL);
              v21 = v55[0];
              v20[8] = v50;
              v22 = v55[1];
              v23 = v49;
              *((_OWORD *)v20 + 1) = v21;
              *((_DWORD *)v20 + 15) = v23;
              *((_OWORD *)v20 + 2) = v22;
              memset(v55, 0, sizeof(v55));
              v20[6] = (PVOID *)v15;
              *((_DWORD *)v20 + 14) = v16;
              *((_QWORD *)&v55[1] + 1) = 0x200000000LL;
              v24 = p_P;
              if ( *p_P != &P )
LABEL_65:
                __fastfail(3u);
              v20[1] = p_P;
              *v20 = &P;
              *v24 = v20;
              p_P = (PVOID *)v20;
            }
            v15 = (const WCHAR *)((char *)v15 + v51);
            v14 = v59;
            v13 = *v15 == 0;
          }
          cbDest = v14 + 2;
          v25 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest, 0x76506343u);
          if ( !v25 )
          {
LABEL_58:
            v2 = a1;
            v11 = -1073741670;
            goto LABEL_43;
          }
          v2 = a1;
          v26 = v4 + *(unsigned int *)(v4 + 108);
          v27 = 0LL;
          v51 = v26;
          for ( i = 0; (unsigned int)v27 < *(_DWORD *)(v4 + 112); i = v27 )
          {
            v28 = a1[2] + 112 * v27;
            v29 = (unsigned int *)(v26 + 96 * v27);
            *(_QWORD *)(v28 + 16) = v26 + *v29;
            *(_DWORD *)(v28 + 24) = v29[1];
            *(_DWORD *)(v28 + 104) = 0;
            *(_QWORD *)(v28 + 96) = v26 + v29[7];
            v30 = (PVOID *)P;
            if ( P == &P )
              goto LABEL_63;
            do
            {
              v31 = *((_DWORD *)v30 + 15);
              v32 = v30;
              v50 = (PVOID *)v30[8];
              if ( PfMetadataRecordIsEqual((__int64)v29, &v50, v31) )
                break;
              v30 = (PVOID *)*v30;
            }
            while ( v30 != &P );
            if ( v30 == &P )
              goto LABEL_63;
            RtlStringCbPrintfW(v25, cbDest, L"%s\\", v32[6]);
            v52 = 0LL;
            v53 = 0LL;
            v33 = 0x7FFFLL;
            v34 = v25;
            do
            {
              if ( !*v34 )
                break;
              ++v34;
              --v33;
            }
            while ( v33 );
            if ( v33 )
              v35 = 0x7FFF - v33;
            else
              v35 = 0;
            if ( v33 )
            {
              v53 = v25;
              LOWORD(v52) = 2 * v35;
              WORD1(v52) = 2 * v35 + 2;
            }
            v36 = v32 + 2;
            if ( (int)PfpOpenHandleCreate(
                        (unsigned int)v54,
                        a1[1],
                        (unsigned int)&v52,
                        0,
                        1179785,
                        33,
                        128,
                        (__int64)v36) < 0 )
            {
LABEL_63:
              memset(v54, 0, sizeof(v54));
              *((_QWORD *)&v54[1] + 1) = 0x200000000LL;
              v44 = (__int64 *)a1[4];
              if ( (__int64 *)*v44 != a1 + 3 )
                goto LABEL_65;
              *(_QWORD *)v28 = a1 + 3;
              *(_QWORD *)(v28 + 8) = v44;
              *v44 = v28;
              a1[4] = v28;
            }
            else
            {
              *(_OWORD *)(v28 + 32) = *(_OWORD *)v36;
              *(_OWORD *)(v28 + 48) = *((_OWORD *)v36 + 1);
              memset(v36, 0, 0x20uLL);
              v37 = v54[0];
              v36[3] |= 0x200000000uLL;
              v38 = v54[1];
              *(_OWORD *)(v28 + 64) = v37;
              *(_OWORD *)(v28 + 80) = v38;
              memset(v54, 0, sizeof(v54));
              *((_QWORD *)&v54[1] + 1) = 0x200000000LL;
              v39 = (__int64 *)a1[6];
              if ( (__int64 *)*v39 != a1 + 5 )
                goto LABEL_65;
              v40 = EventHandle;
              *(_QWORD *)(v28 + 8) = v39;
              *(_QWORD *)v28 = a1 + 5;
              *v39 = v28;
              a1[6] = v28;
              *(_DWORD *)(v28 + 108) ^= (*(_DWORD *)(v28 + 108) ^ PfSnVolumeCheckSeekPenalty((HANDLE *)(v28 + 32), v40)) & 1;
              if ( (*(_DWORD *)(v28 + 108) & 1) != 0 )
              {
                v5 |= 1u;
              }
              else if ( (v5 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus(v28 + 32, EventHandle) )
              {
                v5 |= 2u;
              }
            }
            v26 = v51;
            v27 = (unsigned int)(i + 1);
          }
          v11 = 0;
          *a2 = v5;
          ExFreePoolWithTag(v25, 0);
        }
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073741811;
  }
LABEL_43:
  if ( (*((_QWORD *)&v55[1] + 1) & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v55, v2[1]);
  while ( 1 )
  {
    v41 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_65;
    v42 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_65;
    P = *(PVOID *)P;
    *(_QWORD *)(v42 + 8) = &P;
    if ( (v41[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose(v41 + 2, v2[1]);
    ExFreePoolWithTag(v41, 0);
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( EventHandle )
    NtClose(EventHandle);
  PfSnLogOpenVolumesForPrefetch(v4, 0);
  return (unsigned int)v11;
}
