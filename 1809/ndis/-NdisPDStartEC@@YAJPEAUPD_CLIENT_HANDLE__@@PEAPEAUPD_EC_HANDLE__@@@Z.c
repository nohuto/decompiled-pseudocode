/*
 * XREFs of ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C0100980
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x1C00FE28C (--_GNDIS_PD_EC@@QEAAPEAXI@Z.c)
 *     ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x1C01018CC (-ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall NdisPDStartEC(struct PD_CLIENT_HANDLE__ *a1, struct PD_EC_HANDLE__ **a2)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  int ECInstanceName; // edi
  unsigned int CurrentThreadId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct PD_CLIENT_HANDLE__ **v9; // rcx
  KLockHolder v11; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_qq(0x5Au, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, a1, KeGetCurrentThread());
  *a2 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6541444Eu);
  v5 = PoolWithTag;
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
    v5[16] = v5 + 15;
    v5[15] = v5 + 15;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v5[2] = a1;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *((_DWORD *)v5 + 8) = CurrentThreadId;
    ECInstanceName = ndisPcwGetECInstanceName(*((void **)a1 + 10), CurrentThreadId, (struct _UNICODE_STRING *)(v5 + 5));
    if ( ECInstanceName < 0 )
    {
      NDIS_PD_EC::`scalar deleting destructor'((char *)v5);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      v5[3] = CurrentThread;
      ObfReferenceObject(CurrentThread);
      v11.m_Lock = (KPushLockBase *)qword_1C00A07C8;
      v11.m_State = Unlocked;
      v11.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v11);
      v9 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 7);
      if ( *v9 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 48) )
        __fastfail(3u);
      v5[1] = v9;
      *v5 = (char *)a1 + 48;
      *v9 = (struct PD_CLIENT_HANDLE__ *)v5;
      *((_QWORD *)a1 + 7) = v5;
      KLockHolder::~KLockHolder(&v11);
      *a2 = (struct PD_EC_HANDLE__ *)v5;
      ECInstanceName = 0;
    }
  }
  else
  {
    ECInstanceName = -1073741670;
  }
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_qqqL(0x5Bu, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, a1, KeGetCurrentThread(), *a2, ECInstanceName);
  return (unsigned int)ECInstanceName;
}
