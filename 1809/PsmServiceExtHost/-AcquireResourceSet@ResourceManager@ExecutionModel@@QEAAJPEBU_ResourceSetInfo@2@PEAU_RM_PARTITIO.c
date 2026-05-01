/*
 * XREFs of ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KPEAU_RM_ACTIVATOR@@PEA_N6PEAPEAVResourceSet@2@@Z @ 0x18001DCA0
 * Callers:
 *     ?RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUIResourceSetCallback@3@PEAXPEBG3KK_K5PEAU_RM_ACTIVATOR@@PEA_N@Z @ 0x18001BA50 (-RmSrvAcquireResourceSet@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_ResourceSetInfo@ExecutionModel@@PEAUI.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT@@@Z @ 0x18000B384 (-RmpActivityHostEnumerateResourceSetGetNext@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x18000B3F0 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015E54 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 *     ?CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@3PEAU_RM_ACTIVITY_HOST@@PEBGPEAT_RM_SID@@KK_KW4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVATOR@@8PEAPEAV12@@Z @ 0x18001C900 (-CreateInstance@ResourceSet@ExecutionModel@@SAJPEAVBaseResourceSet@2@PEBU_ResourceSetInfo@2@PEAU.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180020A10 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024860 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800277F0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180047C58 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18004903C (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x180049A02 (memcpy_0.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::AcquireResourceSet(
        ExecutionModel::ResourceManager *this,
        const struct ExecutionModel::_ResourceSetInfo *a2,
        struct _RM_PARTITION *a3,
        void *a4,
        struct ExecutionModel::IResourceSetCallback *a5,
        void *a6,
        wchar_t *a7,
        PSID Sid,
        unsigned int a9,
        unsigned int a10,
        unsigned __int64 a11,
        struct _RM_ACTIVATOR *a12,
        bool *a13,
        unsigned __int64 a14,
        struct ExecutionModel::ResourceSet **a15)
{
  _QWORD *v17; // rax
  _QWORD *v18; // rbx
  _QWORD *v19; // rcx
  int v20; // r14d
  unsigned int v21; // r12d
  __int64 v22; // rax
  __int128 v23; // xmm0
  ULONG v24; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // rdi
  int v28; // esi
  unsigned int v29; // edx
  char v30; // cl
  __int64 v31; // r9
  unsigned int v32; // r10d
  int v33; // esi
  ExecutionModel::BaseResourceSet *v34; // r14
  DWORD v35; // r12d
  _QWORD *Value; // r14
  _QWORD *v37; // rax
  int v40; // eax
  struct ExecutionModel::ResourceSet *Next; // rax
  _QWORD v42[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  struct _RM_ACTIVITY_HOST *v45; // [rsp+A0h] [rbp-60h] BYREF
  ExecutionModel::BaseResourceSet *v46; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t *Source; // [rsp+B0h] [rbp-50h]
  struct _RM_PARTITION *v48; // [rsp+B8h] [rbp-48h]
  ExecutionModel::ResourceManager *v49; // [rsp+C0h] [rbp-40h]
  struct ExecutionModel::ResourceSet **v50; // [rsp+C8h] [rbp-38h]
  __int64 v51; // [rsp+D0h] [rbp-30h]
  struct ExecutionModel::IResourceSetCallback *v52; // [rsp+D8h] [rbp-28h]
  void *v53; // [rsp+E0h] [rbp-20h]
  wchar_t Destination[232]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v55[68]; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v56; // [rsp+304h] [rbp+204h]
  unsigned int v57; // [rsp+308h] [rbp+208h]
  unsigned __int64 v58; // [rsp+310h] [rbp+210h]

  v52 = a5;
  Source = a7;
  v49 = this;
  v50 = a15;
  v53 = a4;
  v48 = a3;
  v51 = (__int64)Sid;
  v46 = 0LL;
  v45 = 0LL;
  v17 = operator new(0x178uLL);
  v18 = v17;
  if ( !v17 )
    return 3489660951LL;
  v17[11] = 0LL;
  v19 = v17;
  *((_WORD *)v17 + 50) = 0;
  *((_DWORD *)v17 + 24) = 101;
  v20 = -1;
  *((_DWORD *)v17 + 20) = -1;
  *((_DWORD *)v17 + 26) = -1;
  v17[14] = 0LL;
  *((_DWORD *)v17 + 30) = 101;
  *((_WORD *)v17 + 62) = 0;
  *((_DWORD *)v17 + 32) = -1;
  v17[17] = 0LL;
  *((_DWORD *)v17 + 36) = 101;
  *((_WORD *)v17 + 74) = 0;
  v21 = 2;
  v22 = 2LL;
  do
  {
    v19 += 16;
    v23 = *(_OWORD *)a2;
    a2 = (const struct ExecutionModel::_ResourceSetInfo *)((char *)a2 + 128);
    *((_OWORD *)v19 - 8) = v23;
    *((_OWORD *)v19 - 7) = *((_OWORD *)a2 - 7);
    *((_OWORD *)v19 - 6) = *((_OWORD *)a2 - 6);
    *((_OWORD *)v19 - 5) = *((_OWORD *)a2 - 5);
    *((_OWORD *)v19 - 4) = *((_OWORD *)a2 - 4);
    *((_OWORD *)v19 - 3) = *((_OWORD *)a2 - 3);
    *((_OWORD *)v19 - 2) = *((_OWORD *)a2 - 2);
    *((_OWORD *)v19 - 1) = *((_OWORD *)a2 - 1);
    --v22;
  }
  while ( v22 );
  *(_OWORD *)v19 = *(_OWORD *)a2;
  *((_OWORD *)v19 + 1) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v19 + 2) = *((_OWORD *)a2 + 2);
  *((_OWORD *)v19 + 3) = *((_OWORD *)a2 + 3);
  *((_OWORD *)v19 + 4) = *((_OWORD *)a2 + 4);
  *((_OWORD *)v19 + 5) = *((_OWORD *)a2 + 5);
  *((_OWORD *)v19 + 6) = *((_OWORD *)a2 + 6);
  v19[14] = *((_QWORD *)a2 + 14);
  memset_0(Destination, 0, 0x228uLL);
  wcscpy_s(Destination, 0xE8uLL, Source);
  memset_0(v55, 0, sizeof(v55));
  v24 = RtlLengthSid(Sid);
  memcpy_0(v55, Sid, v24);
  v56 = a9;
  v58 = a11;
  v25 = *((_QWORD *)this + 19);
  v57 = a10;
  v44 = v25;
  RtlAcquireSRWLockShared(v25 + 32);
  v26 = a11;
  v27 = 0LL;
  v28 = -1073741275;
  v29 = *(_DWORD *)(v44 + 20);
  v30 = v29 & 0x1F;
  v43 = v29;
  v31 = (-1LL << (v29 & 0x1F)) & (HIBYTE(a11)
                                + 37
                                * (BYTE6(a11)
                                 + 37
                                 * (BYTE5(a11)
                                  + 37
                                  * (BYTE4(a11)
                                   + 37
                                   * (BYTE3(a11)
                                    + 37 * (BYTE2(a11) + 37 * (BYTE1(a11) + 37 * ((unsigned __int8)a11 + 11623883LL))))))));
  v42[0] = v31;
LABEL_5:
  if ( v27 )
    goto LABEL_8;
  v32 = v29 >> 5;
  if ( v29 >= 0x20 )
  {
    v29 = v43;
    v26 = a11;
    v27 = *(_QWORD *)(v44 + 24)
        + 8LL
        * ((37
          * (BYTE6(v42[0])
           + 37
           * (BYTE5(v42[0])
            + 37
            * (BYTE4(v42[0])
             + 37
             * (BYTE3(v42[0]) + 37 * (BYTE2(v42[0]) + 37 * (BYTE1(v42[0]) + 37 * ((unsigned __int8)v31 + 11623883)))))))
          + HIBYTE(v42[0])) & (v32 - 1));
LABEL_8:
    while ( 1 )
    {
      v27 = *(_QWORD *)v27;
      if ( (v27 & 1) != 0 )
        break;
      if ( v31 == ((-1LL << v30) & *(_QWORD *)(v27 + 8)) )
      {
        if ( v26 != *(_QWORD *)(v27 + 32) )
          goto LABEL_5;
        v28 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v27 + 16)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_12;
      }
    }
  }
  v27 = (__int64)v50;
LABEL_12:
  RtlReleaseSRWLockShared(v44 + 32);
  if ( v28 < 0 )
  {
    v40 = RmpActivityHostCreateHostPsm(
            *((struct _RM_SERVICE_GLOBALS **)v49 + 19),
            v48,
            (struct _RM_PSM_HOST_INFO *)Destination,
            0,
            &v45);
    v27 = (__int64)v45;
    if ( v40 < 0 )
    {
      v33 = v40 | 0x10000000;
      goto LABEL_23;
    }
  }
  else if ( ((*(_BYTE *)(v27 + 812) ^ (unsigned __int8)(*((unsigned __int16 *)v18 + 20) >> 5)) & 1) != 0 )
  {
    v33 = -805306320;
    goto LABEL_23;
  }
  if ( (*((_BYTE *)v18 + 42) & 7) == 4 )
  {
    v42[1] = 3LL;
    v42[0] = RmpActivityHostEnumerateResourceSetGetFirst(v27, 3, 0);
    Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v42);
    if ( Next )
    {
      while ( !*((_QWORD *)Next + 190) )
      {
        Next = RmpActivityHostEnumerateResourceSetGetNext((struct _RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *)v42);
        if ( !Next )
          goto LABEL_15;
      }
      v33 = -805305980;
      goto LABEL_23;
    }
  }
LABEL_15:
  if ( a13 )
  {
    if ( a10 == 2 )
    {
      v20 = 11;
    }
    else if ( a10 == 4 || a10 == 8 )
    {
      v20 = 12;
    }
  }
  v33 = ExecutionModel::ResourceSet::CreateInstance(
          *((_QWORD *)v49 + 6),
          (__int128 *)v18,
          (__int64)v48,
          v53,
          (__int64)v52,
          (__int64)a6,
          v27,
          (char *)Source,
          v51,
          a9,
          a10,
          a11,
          v20,
          (__int64)a12,
          a14,
          &v46);
  if ( v33 < 0 )
  {
    v34 = v46;
LABEL_52:
    if ( v34 )
    {
      (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *, _QWORD))(*(_QWORD *)v34 + 32LL))(v34, 0LL);
      (*(void (__fastcall **)(ExecutionModel::BaseResourceSet *))(*(_QWORD *)v34 + 16LL))(v34);
    }
    goto LABEL_23;
  }
  if ( a13 )
    v21 = 1;
  v34 = v46;
  v33 = ExecutionModel::ResourceSet::AcquireInternalResources(v46, v21, a13);
  if ( v33 < 0 )
    goto LABEL_52;
  v33 = 0;
  *v50 = v34;
LABEL_23:
  if ( v27 )
  {
    v35 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v35) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        __int2c();
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockExclusive(v27 + 64);
    *(_DWORD *)(v27 + 72) = GetCurrentThreadId();
    if ( RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)v27) )
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(v27 + 64), 1u);
    if ( HampLockTrackerId != -1 )
    {
      v37 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v37 & 2) == 0 )
        __int2c();
      if ( v37[2]-- == 1LL )
        *v37 &= ~2uLL;
    }
    *(_DWORD *)(v27 + 72) = 0;
    RtlReleaseSRWLockExclusive(v27 + 64);
    RmpObjectRelease((struct _RM_OBJECT_HEADER *)v27);
  }
  operator delete(v18);
  return (unsigned int)v33;
}
