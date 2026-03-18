/*
 * XREFs of ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C0233E80
 * Callers:
 *     DxgkAcquireKeyedMutex @ 0x1C0236460 (DxgkAcquireKeyedMutex.c)
 *     DxgkAcquireKeyedMutex2 @ 0x1C0236700 (DxgkAcquireKeyedMutex2.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C023BE3C (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0020CBC (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z @ 0x1C002245C (--0DXGKEYEDMUTEXLOCK@@QEAA@PEAVDXGKEYEDMUTEX@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C003C9AC (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C003E00C (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z @ 0x1C003E184 (-IsOwner@DXGKEYEDMUTEX@@QEAAEI@Z.c)
 *     ?IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z @ 0x1C003E1C4 (-IsSameWaiter@DXGKEYEDMUTEX@@SAEIPEAUDXGKEYEDMUTEXWAITER@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
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
  __int64 v10; // rdi
  DXGKEYEDMUTEX *v11; // r12
  __int64 v12; // rax
  struct _KTHREAD **Current; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGKEYEDMUTEX *v17; // rbx
  __int64 v18; // rax
  _BYTE *v19; // rdx
  _BYTE *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  void *v26; // r15
  __int64 v27; // r14
  _QWORD *v28; // rax
  int v30; // eax
  __int64 v31; // rax
  struct DXGKEYEDMUTEX **v32; // rcx
  unsigned int v33; // esi
  unsigned int v34; // r13d
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  unsigned __int64 *v38; // rcx
  __int64 v39; // rax
  const void *v40; // rdx
  ULONG64 v41; // r9
  struct DXGKEYEDMUTEX *v42; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v43[24]; // [rsp+38h] [rbp-90h] BYREF
  _BYTE v44[80]; // [rsp+50h] [rbp-78h] BYREF

  v10 = (unsigned int)a1;
  v11 = a5;
  if ( !a5 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v12 + 24) = 3823LL;
    WdLogEvent5_WdAssertion(v12);
  }
  *(_QWORD *)v11 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&a5, v10, Current, &v42);
  v17 = v42;
  if ( !v42 )
  {
    v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v18 + 24) = v10;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
LABEL_19:
    if ( a5 )
      DXGKEYEDMUTEX::ReleaseReference(a5);
    return 3221225485LL;
  }
  DXGKEYEDMUTEXLOCK::DXGKEYEDMUTEXLOCK((DXGKEYEDMUTEXLOCK *)v43, v42);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
  if ( *((_DWORD *)v17 + 9) != 3 )
  {
    if ( DXGKEYEDMUTEX::IsOwner(v17, v10)
      || *((_DWORD *)v17 + 9) == 2 && DXGKEYEDMUTEX::IsSameWaiter(v10, *((struct DXGPROCESS ***)v17 + 9)) )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v25[3] = -1073741811LL;
      v25[4] = v17;
      v25[5] = v10;
      WdLogEvent5_WdError(v25);
LABEL_18:
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
      goto LABEL_19;
    }
    v26 = a6;
    if ( a6 )
    {
      v27 = (unsigned int)Size;
      if ( !(_DWORD)Size )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
        v28[3] = v17;
        v28[4] = -1073741811LL;
        goto LABEL_17;
      }
      if ( (_DWORD)Size != *((_DWORD *)v17 + 36) )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
        v28[3] = v17;
        v28[4] = v27;
        v28[5] = *((unsigned int *)v17 + 36);
        v28[6] = -1073741811LL;
        goto LABEL_17;
      }
    }
    else
    {
      LODWORD(v27) = Size;
      if ( (_DWORD)Size )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
        v28[3] = -1073741811LL;
LABEL_17:
        WdLogEvent5_WdWarning(v28);
        goto LABEL_18;
      }
    }
    v30 = *((_DWORD *)v17 + 9);
    if ( (v30 & 0xFFFFFFFD) != 0 && (v30 != 1 || a2 == *((_QWORD *)v17 + 7) || a3) )
    {
      v31 = *((_QWORD *)v17 + 8);
LABEL_46:
      *(_QWORD *)v11 = v31;
      v38 = a8;
      if ( a8 )
        *a8 = *((_QWORD *)v17 + 7);
      if ( (unsigned int)(*((_DWORD *)v17 + 9) - 1) > 1 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v39 + 24) = 3981LL;
        WdLogEvent5_WdAssertion(v39);
      }
      *((_DWORD *)v17 + 9) = 0;
      *((_DWORD *)v17 + 10) = v10;
      *((_QWORD *)v17 + 6) = DXGPROCESS::GetCurrent();
      *((_QWORD *)v17 + 9) = 0LL;
      if ( v26 )
      {
        v40 = (const void *)*((_QWORD *)v17 + 17);
        v41 = (ULONG64)v26 + (unsigned int)v27;
        if ( v41 > MmUserProbeAddress || v41 <= (unsigned __int64)v26 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v26, v40, (unsigned int)v27);
      }
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
      if ( a5 )
        DXGKEYEDMUTEX::ReleaseReference(a5);
      return 0LL;
    }
    memset(v44, 0, sizeof(v44));
    *(_DWORD *)&v44[8] = v10;
    *(_QWORD *)&v44[16] = DXGPROCESS::GetCurrent();
    *(_QWORD *)v44 = a2;
    *(_DWORD *)&v44[48] = 0;
    KeInitializeEvent((PRKEVENT)&v44[24], NotificationEvent, 0);
    v32 = (struct DXGKEYEDMUTEX **)*((_QWORD *)v17 + 11);
    if ( *v32 != (struct DXGKEYEDMUTEX *)((char *)v17 + 80) )
      goto LABEL_58;
    *(_QWORD *)&v44[64] = (char *)v17 + 80;
    *(_QWORD *)&v44[72] = v32;
    *v32 = (struct DXGKEYEDMUTEX *)&v44[64];
    *((_QWORD *)v17 + 11) = &v44[64];
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v43);
    v33 = KeWaitForSingleObject(&v44[24], Executive, 0, 1u, a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
    v34 = *(_DWORD *)&v44[48];
    if ( *(_DWORD *)&v44[48] )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
      if ( a5 )
        DXGKEYEDMUTEX::ReleaseReference(a5);
      return v34;
    }
    v35 = *(_QWORD *)&v44[72];
    v20 = *(_BYTE **)&v44[64];
    if ( *(_BYTE **)(*(_QWORD *)&v44[64] + 8LL) != &v44[64] || (v19 = &v44[64], **(_BYTE ***)&v44[72] != &v44[64]) )
LABEL_58:
      __fastfail(3u);
    **(_QWORD **)&v44[72] = *(_QWORD *)&v44[64];
    *((_QWORD *)v20 + 1) = v35;
    v36 = *((_DWORD *)v17 + 9);
    if ( v36 == 2 )
    {
      v20 = v44;
      if ( *((_BYTE **)v17 + 9) == v44 )
        v33 = 0;
    }
    if ( v33 )
    {
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
      if ( a5 )
        DXGKEYEDMUTEX::ReleaseReference(a5);
      return v33;
    }
    if ( v36 != 3 )
    {
      v31 = *(_QWORD *)&v44[56];
      goto LABEL_46;
    }
  }
  v37 = WdLogNewEntry5_WdWarning(v20, v19, v21);
  *(_QWORD *)(v37 + 24) = v17;
  *(_QWORD *)(v37 + 32) = 128LL;
  WdLogEvent5_WdWarning(v37);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
  if ( a5 )
    DXGKEYEDMUTEX::ReleaseReference(a5);
  return 128LL;
}
