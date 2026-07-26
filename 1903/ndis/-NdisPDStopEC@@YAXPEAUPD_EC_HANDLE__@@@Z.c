/*
 * XREFs of ?NdisPDStopEC@@YAXPEAUPD_EC_HANDLE__@@@Z @ 0x1C0120F60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x1C011E05C (--_GNDIS_PD_EC@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDStopEC(struct PD_EC_HANDLE__ *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // r9
  __int64 v4; // rcx
  struct PD_EC_HANDLE__ **v5; // rax
  void *v6; // rcx
  int v7; // edx
  KLockHolder v8; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      92,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1,
      *((_QWORD *)a1 + 3),
      (char)CurrentThread);
  v3 = *((_QWORD *)a1 + 3);
  if ( (struct _KTHREAD *)v3 != CurrentThread )
    ndisBugCheckEx(0x23uLL, 1uLL, *((_QWORD *)a1 + 2), v3);
  v8.m_Lock = (KPushLockBase *)qword_1C00E67A8;
  v8.m_State = Unlocked;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v8);
  v4 = *(_QWORD *)a1;
  if ( *(struct PD_EC_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v5 = (struct PD_EC_HANDLE__ **)*((_QWORD *)a1 + 1), *v5 != a1) )
  {
    __fastfail(3u);
  }
  *v5 = (struct PD_EC_HANDLE__ *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *(_QWORD *)a1 = 0LL;
  KLockHolder::~KLockHolder(&v8);
  v6 = (void *)*((_QWORD *)a1 + 3);
  *((_QWORD *)a1 + 2) = 0LL;
  ObfDereferenceObject(v6);
  *((_QWORD *)a1 + 3) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      29,
      93,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
  }
  NDIS_PD_EC::`scalar deleting destructor'((char *)a1);
}
