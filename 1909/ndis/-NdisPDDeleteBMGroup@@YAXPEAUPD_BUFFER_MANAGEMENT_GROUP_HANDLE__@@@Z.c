/*
 * XREFs of ?NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C011F0F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall NdisPDDeleteBMGroup(struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *a1)
{
  __int64 v2; // rax
  struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **v3; // rcx
  KLockHolder v4; // [rsp+30h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      77,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00E67E8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  if ( *((struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)a1 + 3) != (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)((char *)a1 + 24) )
    ndisBugCheckEx(0x23uLL, 6uLL, (ULONG_PTR)a1, *(_QWORD *)(*((_QWORD *)a1 + 2) + 80LL));
  v2 = *(_QWORD *)a1;
  if ( *(struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v3 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ **)*((_QWORD *)a1 + 1), *v3 != a1) )
  {
    __fastfail(3u);
  }
  *v3 = (struct PD_BUFFER_MANAGEMENT_GROUP_HANDLE__ *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  KLockHolder::~KLockHolder(&v4);
  ExFreePoolWithTag(a1, 0x6D41444Eu);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      78,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
}
