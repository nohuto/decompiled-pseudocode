/*
 * XREFs of ?NdisPDAddProviderToBMGroup@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@PEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C011E250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0013C08 (WPP_RECORDER_SF_qqd.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

__int64 __fastcall NdisPDAddProviderToBMGroup(
        struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1,
        struct NDIS_PD_PROVIDER_HANDLE__ *a2)
{
  unsigned int v2; // ebx
  char v3; // si
  struct NDIS_PD_PROVIDER_HANDLE__ *i; // rdi
  int v6; // edx
  char *v7; // r9
  char *v8; // r8
  __int64 v9; // rax
  char **v10; // rax
  char **v11; // rax
  char v13; // [rsp+30h] [rbp-48h]
  char v14[4]; // [rsp+38h] [rbp-40h]
  KLockHolder v15; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0;
  v3 = (char)a2;
  for ( i = a2; *((_BYTE *)i + 88); i = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)i + 9) )
    ;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      29,
      72,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1,
      v13);
  }
  v15.m_Lock = (KPushLockBase *)qword_1C00E67A8;
  v15.m_State = Unlocked;
  v15.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v15);
  v7 = (char *)(i + 4);
  if ( *((_QWORD *)i + 2) )
  {
    v2 = -1073741768;
    goto LABEL_16;
  }
  v8 = (char *)a1 + 24;
  v9 = *((_QWORD *)a1 + 3);
  if ( (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v9 != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 6) + 5472LL) + 72LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 32)
                                                                                               + 5472LL)
                                                                                   + 72LL) )
    {
      v2 = -1073740007;
      goto LABEL_16;
    }
    v11 = (char **)*((_QWORD *)a1 + 4);
    if ( *v11 == v8 )
    {
      *(_QWORD *)v7 = v8;
      *((_QWORD *)i + 3) = v11;
      *v11 = v7;
      *((_QWORD *)a1 + 4) = v7;
      goto LABEL_16;
    }
LABEL_13:
    __fastfail(3u);
  }
  v10 = (char **)*((_QWORD *)a1 + 4);
  if ( *v10 != v8 )
    goto LABEL_13;
  *(_QWORD *)v7 = v8;
  *((_QWORD *)i + 3) = v10;
  *v10 = v7;
  *((_QWORD *)a1 + 4) = v7;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_18;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_qq(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    v6,
    29,
    73,
    (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
    (char)a1,
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 6) + 5472LL) + 72LL));
LABEL_16:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = v2;
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x4Au,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1,
      v3,
      *(_DWORD *)v14);
  }
LABEL_18:
  KLockHolder::~KLockHolder(&v15);
  return v2;
}
