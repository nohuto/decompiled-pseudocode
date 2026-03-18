/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C0245394
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C023F858 (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0pqqttq @ 0x1C003FE84 (McTemplateK0pqqttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C012B874 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C023BE3C (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C023D9D8 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C023DED8 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C023F550 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ReleaseFrame(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  OUTPUTDUPL_MGR *v7; // rcx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  OUTPUTDUPL_MGR *v20; // rcx
  __int64 v21; // rdx
  DXGDIAGNOSTICSWITHMUTEX **v22; // rcx
  unsigned int v23; // r8d
  __int64 v25; // [rsp+20h] [rbp-59h]
  __int64 v26; // [rsp+28h] [rbp-51h]
  union _LARGE_INTEGER v27[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v28[16]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v3) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v28, 0, sizeof(v28));
    OUTPUTDUPL_MGR::InitializePacketHeader(v7, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v28);
    v8 = *((_DWORD *)this + 71);
    v28[13] = *((_DWORD *)this + 4);
    v28[1] = 64;
    v28[14] = v28[14] & 0xFFFFFFF3 | (4 * (v8 & 1));
    v28[12] = 10;
  }
  v9 = *((unsigned int *)this + 11);
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
  {
    v9 = (unsigned int)(v9 + 1);
    *((_DWORD *)this + 11) = v9;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 10) )
    {
      *((_DWORD *)this + 11) = 0;
      v9 = 0LL;
    }
  }
  a2->NextKeyMutexIdx = v9;
  v10 = *((_QWORD *)this + 33);
  *(_QWORD *)v10 = 0LL;
  *(_DWORD *)(v10 + 20) = 0;
  *(_DWORD *)(v10 + 40) = 0;
  if ( *(_DWORD *)(v10 + 16) != 1 )
  {
    *(_DWORD *)(v10 + 16) = 0;
    v11 = *(_QWORD *)(v10 + 8);
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(v11 + 8) = 0LL;
    *(_DWORD *)(v11 + 16) = 0;
    *(_DWORD *)(v11 + 24) = 0;
    *(_DWORD *)(v11 + 44) = 0;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 && *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) == 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v12 + 24) = 2294LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_DWORD *)this + 71) )
  {
    v13 = *((_QWORD *)this + 34);
    if ( *(_DWORD *)(v13 + 16) == 2 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v14 + 24) = 2304LL;
      WdLogEvent5_WdAssertion(v14);
      v13 = *((_QWORD *)this + 34);
    }
    v15 = (_QWORD *)*((_QWORD *)this + 33);
    *((_QWORD *)this + 34) = v15;
    *((_QWORD *)this + 33) = v13;
    if ( !*(_DWORD *)(v13 + 20) )
    {
      *(_QWORD *)v13 = *v15;
      *(_OWORD *)(*((_QWORD *)this + 33) + 24LL) = *(_OWORD *)(*((_QWORD *)this + 34) + 24LL);
      v13 = *((_QWORD *)this + 33);
    }
    *((_DWORD *)this + 71) = 0;
    if ( (*(_DWORD *)(v13 + 20) || *(_DWORD *)(v13 + 40)) && *(_DWORD *)(v13 + 16) != 1 )
    {
      v27[0].QuadPart = 0LL;
      v16 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), v5, v6, v27, 0LL, 1);
      v3 = v16;
      if ( v16 == 258 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v18 + 24) = 2333LL;
        WdLogEvent5_WdAssertion(v18);
      }
      if ( (int)v3 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v19 + 24) = v3;
        WdLogEvent5_WdError(v19);
        return (unsigned int)v3;
      }
      DXGDXGIKEYEDMUTEX::Release(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 1LL, 0LL, 1);
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
        v28[14] |= 8u;
    }
  }
  v20 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  *((_DWORD *)this + 77) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v20) )
  {
    v28[14] = ((unsigned __int8)v23 ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)this + 33) + 16LL)) & 3 ^ v23;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v22, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v28, 1);
    v23 = v28[14];
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v26) = *(_DWORD *)(*((_QWORD *)this + 33) + 16LL);
    LODWORD(v25) = *((_DWORD *)this + 11);
    McTemplateK0pqqttq(
      (v23 >> 3) & 1,
      v21,
      (const GUID *)((v23 >> 2) & 1),
      this,
      v25,
      v26,
      (v23 >> 2) & 1,
      (v23 >> 3) & 1,
      v3);
  }
  return (unsigned int)v3;
}
