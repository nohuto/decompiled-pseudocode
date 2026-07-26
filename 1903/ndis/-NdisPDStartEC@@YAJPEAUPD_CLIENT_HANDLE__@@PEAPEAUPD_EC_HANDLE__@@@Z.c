/*
 * XREFs of ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C0120D60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C001D460 (WPP_RECORDER_SF_qqqd.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x1C011E05C (--_GNDIS_PD_EC@@QEAAPEAXI@Z.c)
 *     ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x1C0121E68 (-ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall NdisPDStartEC(struct PD_CLIENT_HANDLE__ *a1, struct PD_EC_HANDLE__ **a2)
{
  struct PD_EC_HANDLE__ **v2; // r14
  _QWORD *PoolWithTag; // rax
  int v5; // edx
  _QWORD *v6; // rbx
  int ECInstanceName; // edi
  unsigned int CurrentThreadId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct PD_CLIENT_HANDLE__ **v10; // rcx
  KLockHolder v12; // [rsp+50h] [rbp-38h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      29,
      90,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1,
      (char)KeGetCurrentThread());
  }
  *v2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6541444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[4] = 0LL;
    *((_DWORD *)PoolWithTag + 34) = 0;
    PoolWithTag[18] = 0LL;
    PoolWithTag[19] = 0LL;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
    PoolWithTag[5] = 0LL;
    *((_WORD *)PoolWithTag + 21) = 0;
    PoolWithTag[6] = 0LL;
    memset(PoolWithTag + 7, 0, 0x40uLL);
    v6[16] = v6 + 15;
    v6[15] = v6 + 15;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    v6[2] = a1;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *((_DWORD *)v6 + 8) = CurrentThreadId;
    ECInstanceName = ndisPcwGetECInstanceName(*((void **)a1 + 10), CurrentThreadId, (struct _UNICODE_STRING *)(v6 + 5));
    if ( ECInstanceName < 0 )
    {
      NDIS_PD_EC::`scalar deleting destructor'((char *)v6);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v6[3] = CurrentThread;
      ObfReferenceObject(CurrentThread);
      v12.m_Lock = (KPushLockBase *)qword_1C00E67A8;
      v12.m_State = Unlocked;
      v12.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v12);
      v10 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 7);
      if ( *v10 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 48) )
        __fastfail(3u);
      v6[1] = v10;
      *v6 = (char *)a1 + 48;
      *v10 = (struct PD_CLIENT_HANDLE__ *)v6;
      *((_QWORD *)a1 + 7) = v6;
      KLockHolder::~KLockHolder(&v12);
      *v2 = (struct PD_EC_HANDLE__ *)v6;
      ECInstanceName = 0;
    }
  }
  else
  {
    ECInstanceName = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x1Du,
      0x5Bu,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1,
      (char)KeGetCurrentThread(),
      (char)*v2,
      ECInstanceName);
  return (unsigned int)ECInstanceName;
}
