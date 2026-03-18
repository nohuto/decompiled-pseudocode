/*
 * XREFs of PfSnOpenVolumesForPrefetch @ 0x14062A850
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14066EA90 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtCreateEvent @ 0x1405D86F0 (NtCreateEvent.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     IopGetDeviceInterfaces @ 0x140627858 (IopGetDeviceInterfaces.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14062A510 (PfSnVolumeCheckSeekPenalty.c)
 *     PfSnLogOpenVolumesForPrefetch @ 0x14062A67C (PfSnLogOpenVolumesForPrefetch.c)
 *     PfMetadataRecordIsEqual @ 0x14062A710 (PfMetadataRecordIsEqual.c)
 *     PfSnIsVolumeMounted @ 0x14062A72C (PfSnIsVolumeMounted.c)
 *     PfSnQueryVolumeInfo @ 0x14062AE1C (PfSnQueryVolumeInfo.c)
 *     PfpOpenHandleCreate @ 0x14062CAC4 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14062CC38 (PfpOpenHandleClose.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A1548 (PfSnVolumeCheckIsSdBus.c)
 */

__int64 __fastcall PfSnOpenVolumesForPrefetch(__int64 *a1, _DWORD *a2)
{
  __int64 *v2; // r14
  __int64 v3; // r15
  unsigned int v4; // r12d
  int v5; // ebx
  void *v6; // r13
  unsigned int v7; // eax
  PVOID PoolWithTag; // rax
  _QWORD *v9; // rsi
  NTSTATUS v10; // edi
  int DeviceInterfaces; // eax
  unsigned int v12; // edi
  const WCHAR *v13; // rsi
  __int64 v14; // r14
  unsigned __int64 v15; // r12
  int IsVolumeMounted; // eax
  int v17; // ecx
  _OWORD *v18; // rax
  _OWORD *v19; // rdi
  int v20; // eax
  __int128 v21; // xmm1
  PVOID v22; // rcx
  PVOID *v23; // rax
  wchar_t *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdi
  unsigned int *v28; // rcx
  PVOID *v29; // r9
  int v30; // r8d
  PVOID *v31; // r12
  __int64 v32; // rcx
  wchar_t *v33; // rax
  __int16 v34; // ax
  _QWORD *v35; // r12
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int64 *v38; // rcx
  HANDLE v39; // rdx
  _QWORD *v40; // rbx
  __int64 v41; // rax
  __int64 *v43; // rcx
  PVOID P; // [rsp+40h] [rbp-99h] BYREF
  PVOID *p_P; // [rsp+48h] [rbp-91h]
  PVOID v46; // [rsp+50h] [rbp-89h] BYREF
  HANDLE EventHandle; // [rsp+58h] [rbp-81h] BYREF
  int v48; // [rsp+60h] [rbp-79h] BYREF
  __int64 v49; // [rsp+68h] [rbp-71h] BYREF
  __int64 v50; // [rsp+70h] [rbp-69h] BYREF
  wchar_t *v51; // [rsp+78h] [rbp-61h]
  __m256i v52; // [rsp+80h] [rbp-59h] BYREF
  __m256i v53; // [rsp+A0h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-19h] BYREF
  unsigned int v57; // [rsp+150h] [rbp+77h]
  int i; // [rsp+150h] [rbp+77h]
  size_t cbDest; // [rsp+158h] [rbp+7Fh] BYREF

  v2 = a1;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v3 = *v2;
  v4 = 0;
  v46 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v5 = 0;
  cbDest = 0LL;
  p_P = &P;
  memset(&v53, 0, 24);
  P = &P;
  memset(&v52, 0, 24);
  v53.m256i_i64[3] = 0x200000000LL;
  v6 = 0LL;
  v52.m256i_i64[3] = 0x200000000LL;
  EventHandle = 0LL;
  PfSnLogOpenVolumesForPrefetch(v3, 1);
  if ( v3 && (v7 = *(_DWORD *)(v3 + 112), v7 < 0x4000) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 112 * v7, 0x76506343u);
    v2[2] = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_57;
    if ( *(_DWORD *)(v3 + 112) )
    {
      do
      {
        v9 = (_QWORD *)(v2[2] + 112LL * v4);
        memset(v9, 0, 0x70uLL);
        v9[1] = v9;
        *v9 = v9;
        memset(v9 + 4, 0, 0x20uLL);
        v9[7] |= 0x200000000uLL;
        memset(v9 + 8, 0, 0x20uLL);
        v9[11] |= 0x200000000uLL;
        ++v4;
      }
      while ( v4 < *(_DWORD *)(v3 + 112) );
      v5 = 0;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v10 < 0 )
      goto LABEL_43;
    DeviceInterfaces = IopGetDeviceInterfaces((__int64)&GUID_DEVINTERFACE_VOLUME, 0LL, 0, 0, &cbDest, 0LL);
    v6 = (void *)cbDest;
    v10 = DeviceInterfaces;
    if ( DeviceInterfaces < 0 )
      goto LABEL_43;
    v12 = 0;
    v57 = 0;
    v13 = (const WCHAR *)cbDest;
    if ( *(_WORD *)cbDest )
    {
      do
      {
        v14 = -1LL;
        do
          ++v14;
        while ( v13[v14] );
        v15 = 2LL * (unsigned int)(v14 + 1);
        if ( v12 <= v15 )
          v57 = 2 * v14 + 2;
        IsVolumeMounted = PfSnIsVolumeMounted(v13, (int *)&cbDest, &v48);
        v17 = cbDest;
        if ( IsVolumeMounted < 0 )
          v17 = 0;
        LODWORD(cbDest) = v17;
        if ( v17
          && !v48
          && (int)PfSnQueryVolumeInfo(a1[1], (_DWORD)v13, (unsigned int)&v53, (unsigned int)&v46, (__int64)&v49) >= 0 )
        {
          v18 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x76506343u);
          v19 = v18;
          if ( !v18 )
            goto LABEL_57;
          memset(v18, 0, 0x48uLL);
          v20 = v49;
          v21 = *(_OWORD *)&v53.m256i_u64[2];
          v22 = v46;
          v19[1] = *(_OWORD *)v53.m256i_i8;
          *((_DWORD *)v19 + 15) = v20;
          *((_QWORD *)v19 + 8) = v22;
          v19[2] = v21;
          *((_QWORD *)v19 + 6) = v13;
          *((_DWORD *)v19 + 14) = v14;
          memset(&v53, 0, 24);
          v23 = p_P;
          v53.m256i_i64[3] = 0x200000000LL;
          if ( *p_P != &P )
LABEL_64:
            __fastfail(3u);
          *((_QWORD *)v19 + 1) = p_P;
          *(_QWORD *)v19 = &P;
          *v23 = v19;
          p_P = (PVOID *)v19;
        }
        v12 = v57;
        v13 = (const WCHAR *)((char *)v13 + v15);
      }
      while ( *v13 );
      v2 = a1;
    }
    cbDest = v12 + 2;
    v24 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, cbDest, 0x76506343u);
    if ( v24 )
    {
      v25 = v3 + *(unsigned int *)(v3 + 108);
      v26 = 0LL;
      v49 = v25;
      for ( i = 0; (unsigned int)v26 < *(_DWORD *)(v3 + 112); i = v26 )
      {
        v27 = v2[2] + 112 * v26;
        v28 = (unsigned int *)(v25 + 96 * v26);
        *(_QWORD *)(v27 + 16) = v25 + *v28;
        *(_DWORD *)(v27 + 24) = v28[1];
        *(_DWORD *)(v27 + 104) = 0;
        *(_QWORD *)(v27 + 96) = v25 + v28[7];
        v29 = (PVOID *)P;
        if ( P == &P )
          goto LABEL_62;
        do
        {
          v30 = *((_DWORD *)v29 + 15);
          v31 = v29;
          v46 = v29[8];
          if ( PfMetadataRecordIsEqual((__int64)v28, &v46, v30) )
            break;
          v29 = (PVOID *)*v29;
        }
        while ( v29 != &P );
        if ( v29 == &P )
          goto LABEL_62;
        RtlStringCbPrintfW(v24, cbDest, L"%s\\", v31[6]);
        v50 = 0LL;
        v51 = 0LL;
        v32 = 0x7FFFLL;
        v33 = v24;
        do
        {
          if ( !*v33 )
            break;
          ++v33;
          --v32;
        }
        while ( v32 );
        if ( v32 )
          v34 = 0x7FFF - v32;
        else
          v34 = 0;
        if ( v32 )
        {
          v51 = v24;
          LOWORD(v50) = 2 * v34;
          WORD1(v50) = 2 * v34 + 2;
        }
        v35 = v31 + 2;
        if ( (int)PfpOpenHandleCreate((unsigned int)&v52, v2[1], (unsigned int)&v50, 0, 1179785, 33, 128, (__int64)v35) < 0 )
        {
LABEL_62:
          memset(&v52, 0, 24);
          v52.m256i_i64[3] = 0x200000000LL;
          v43 = (__int64 *)v2[4];
          if ( (__int64 *)*v43 != v2 + 3 )
            goto LABEL_64;
          *(_QWORD *)v27 = v2 + 3;
          *(_QWORD *)(v27 + 8) = v43;
          *v43 = v27;
          v2[4] = v27;
        }
        else
        {
          *(_OWORD *)(v27 + 32) = *(_OWORD *)v35;
          *(_OWORD *)(v27 + 48) = *((_OWORD *)v35 + 1);
          memset(v35, 0, 0x20uLL);
          v36 = *(_OWORD *)v52.m256i_i8;
          v35[3] |= 0x200000000uLL;
          v37 = *(_OWORD *)&v52.m256i_u64[2];
          v52.m256i_i64[0] = 0LL;
          *(_OWORD *)(v27 + 64) = v36;
          v52.m256i_i64[3] = 0x200000000LL;
          *(_OWORD *)(v27 + 80) = v37;
          v38 = (__int64 *)v2[6];
          *(_OWORD *)&v52.m256i_u64[1] = 0LL;
          if ( (__int64 *)*v38 != v2 + 5 )
            goto LABEL_64;
          v39 = EventHandle;
          *(_QWORD *)(v27 + 8) = v38;
          *(_QWORD *)v27 = v2 + 5;
          *v38 = v27;
          v2[6] = v27;
          *(_DWORD *)(v27 + 108) ^= (*(_DWORD *)(v27 + 108) ^ PfSnVolumeCheckSeekPenalty((HANDLE *)(v27 + 32), v39)) & 1;
          if ( (*(_DWORD *)(v27 + 108) & 1) != 0 )
          {
            v5 |= 1u;
          }
          else if ( (v5 & 3) == 0 && !(unsigned int)PfSnVolumeCheckIsSdBus(v27 + 32, EventHandle) )
          {
            v5 |= 2u;
          }
        }
        v25 = v49;
        v26 = (unsigned int)(i + 1);
      }
      v10 = 0;
      *a2 = v5;
      ExFreePoolWithTag(v24, 0);
    }
    else
    {
LABEL_57:
      v10 = -1073741670;
    }
  }
  else
  {
    v10 = -1073741811;
  }
LABEL_43:
  if ( (v53.m256i_i64[3] & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v53, a1[1]);
  while ( 1 )
  {
    v40 = P;
    if ( P == &P )
      break;
    if ( *((PVOID **)P + 1) != &P )
      goto LABEL_64;
    v41 = *(_QWORD *)P;
    if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P )
      goto LABEL_64;
    P = *(PVOID *)P;
    *(_QWORD *)(v41 + 8) = &P;
    if ( (v40[5] & 0x400000000LL) != 0 )
      PfpOpenHandleClose(v40 + 2, a1[1]);
    ExFreePoolWithTag(v40, 0);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( EventHandle )
    NtClose(EventHandle);
  PfSnLogOpenVolumesForPrefetch(v3, 0);
  return (unsigned int)v10;
}
