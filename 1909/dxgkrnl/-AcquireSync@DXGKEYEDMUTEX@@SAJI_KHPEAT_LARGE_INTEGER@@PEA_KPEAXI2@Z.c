/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C0268A40
 * Callers:
 *     DxgkAcquireKeyedMutex @ 0x1C026B3B0 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1C026B650 (DxgkAcquireKeyedMutex2.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C02711AC (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C0024A64 (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0043364 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0044C2C (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C0044DA4 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C0044DE4 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::AcquireSync(
        __int64 a1,
        __int64 a2,
        int a3,
        union _LARGE_INTEGER *a4,
        DXGKEYEDMUTEX *a5,
        void *a6,
        size_t Size,
        unsigned __int64 *a8)
{
  __int64 v10; // rsi
  DXGKEYEDMUTEX *v11; // r12
  __int64 v12; // rax
  struct _KTHREAD **Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGKEYEDMUTEX *v17; // rbx
  __int64 v18; // rax
  unsigned int v19; // edi
  __int64 v20; // rdx
  _BYTE *v22; // rdx
  _BYTE *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  void *v30; // r15
  __int64 v31; // r14
  _QWORD *v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct DXGKEYEDMUTEX **v37; // rdx
  unsigned int v38; // r13d
  __int64 v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  unsigned __int64 *v42; // rcx
  __int64 v43; // rax
  const void *v44; // rdx
  ULONG64 v45; // r9
  __int64 v46; // rdx
  struct DXGKEYEDMUTEX *v47; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v48[24]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v49[80]; // [rsp+50h] [rbp-78h] BYREF

  v10 = (unsigned int)a1;
  v11 = a5;
  if ( !a5 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v12 + 24) = 3811LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *(_QWORD *)v11 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v10, Current, &v47);
  v17 = v47;
  if ( !v47 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v10;
    v19 = -1073741811;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
LABEL_5:
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5, v20);
    return v19;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v48, v47);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
  if ( *((_DWORD *)v17 + 9) == 3 )
    goto LABEL_9;
  if ( DXGKEYEDMUTEX::IsOwner(v17, v10)
    || *((_DWORD *)v17 + 9) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v10, *((struct DXGPROCESS ***)v17 + 9)) )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v27, v22, v28);
    v19 = -1073741811;
    v29[3] = -1073741811LL;
    v29[4] = v17;
    v29[5] = v10;
    WdLogEvent5_WdError(v29);
LABEL_14:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
    goto LABEL_5;
  }
  v30 = a6;
  if ( a6 )
  {
    v31 = (unsigned int)Size;
    if ( !(_DWORD)Size )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v22, v28);
      v32[3] = v17;
      v19 = -1073741811;
      v32[4] = -1073741811LL;
      goto LABEL_20;
    }
    if ( (_DWORD)Size != *((_DWORD *)v17 + 36) )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v22, v28);
      v32[3] = v17;
      v32[4] = v31;
      v32[5] = *((unsigned int *)v17 + 36);
      v19 = -1073741811;
      v32[6] = -1073741811LL;
      goto LABEL_20;
    }
  }
  else
  {
    LODWORD(v31) = Size;
    if ( (_DWORD)Size )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v22, v28);
      v19 = -1073741811;
      v32[3] = -1073741811LL;
LABEL_20:
      WdLogEvent5_WdWarning(v32);
      goto LABEL_14;
    }
  }
  v33 = *((_DWORD *)v17 + 9);
  if ( (v33 & 0xFFFFFFFD) != 0 && (v33 != 1 || a2 == *((_QWORD *)v17 + 7) || a3) )
  {
    v34 = *((_QWORD *)v17 + 8);
LABEL_44:
    *(_QWORD *)v11 = v34;
    v42 = a8;
    if ( a8 )
      *a8 = *((_QWORD *)v17 + 7);
    if ( (unsigned int)(*((_DWORD *)v17 + 9) - 1) > 1 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v42, v22);
      *(_QWORD *)(v43 + 24) = 3969LL;
      WdLogEvent5_WdAssertion(v43);
    }
    *((_DWORD *)v17 + 9) = 0;
    *((_DWORD *)v17 + 10) = v10;
    *((_QWORD *)v17 + 6) = DXGPROCESS::GetCurrent((__int64)v42, (__int64)v22);
    *((_QWORD *)v17 + 9) = 0LL;
    if ( v30 )
    {
      v44 = (const void *)*((_QWORD *)v17 + 17);
      v45 = (ULONG64)v30 + (unsigned int)v31;
      if ( v45 > MmUserProbeAddress || v45 <= (unsigned __int64)v30 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v30, v44, (unsigned int)v31);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5, v46);
    return 0LL;
  }
  memset(v49, 0, sizeof(v49));
  *(_DWORD *)&v49[8] = v10;
  *(_QWORD *)&v49[16] = DXGPROCESS::GetCurrent(v36, v35);
  *(_QWORD *)v49 = a2;
  *(_DWORD *)&v49[48] = 0;
  KeInitializeEvent((PRKEVENT)&v49[24], NotificationEvent, 0);
  v37 = (struct DXGKEYEDMUTEX **)*((_QWORD *)v17 + 11);
  if ( *v37 != (struct DXGKEYEDMUTEX *)((char *)v17 + 80) )
    __fastfail(3u);
  *(_QWORD *)&v49[64] = (char *)v17 + 80;
  *(_QWORD *)&v49[72] = v37;
  *v37 = (struct DXGKEYEDMUTEX *)&v49[64];
  *((_QWORD *)v17 + 11) = &v49[64];
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v48);
  v19 = KeWaitForSingleObject(&v49[24], Executive, 0, 1u, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
  v38 = *(_DWORD *)&v49[48];
  if ( !*(_DWORD *)&v49[48] )
  {
    v40 = *(_QWORD *)&v49[72];
    v23 = *(_BYTE **)&v49[64];
    if ( *(_BYTE **)(*(_QWORD *)&v49[64] + 8LL) != &v49[64] || (v22 = &v49[64], **(_BYTE ***)&v49[72] != &v49[64]) )
      __fastfail(3u);
    **(_QWORD **)&v49[72] = *(_QWORD *)&v49[64];
    *((_QWORD *)v23 + 1) = v40;
    v41 = *((_DWORD *)v17 + 9);
    if ( v41 == 2 )
    {
      v23 = v49;
      if ( *((_BYTE **)v17 + 9) == v49 )
        v19 = 0;
    }
    if ( v19 )
      goto LABEL_14;
    if ( v41 == 3 )
    {
LABEL_9:
      v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v25 + 24) = v17;
      *(_QWORD *)(v25 + 32) = 128LL;
      WdLogEvent5_WdWarning(v25);
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
      if ( a5 )
        DXGKEYEDMUTEX::ReleaseReference(a5, v26);
      return 128LL;
    }
    v34 = *(_QWORD *)&v49[56];
    goto LABEL_44;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v48);
  if ( a5 )
    DXGKEYEDMUTEX::ReleaseReference(a5, v39);
  return v38;
}
