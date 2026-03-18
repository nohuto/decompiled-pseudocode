/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C027A800
 * Callers:
 *     ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C0274BB4 (-ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0pqqttq @ 0x1C0046AD8 (McTemplateK0pqqttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C013D744 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0270B1C (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0272C78 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0273200 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C02748A0 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ReleaseFrame(
        OUTPUTDUPL_CONTEXT *this,
        struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  OUTPUTDUPL_MGR *v6; // rcx
  __int64 v7; // r8
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  OUTPUTDUPL_MGR *v22; // rcx
  __int64 v23; // rdx
  DXGFASTMUTEX ***v24; // rcx
  unsigned int v25; // r8d
  __int64 v27; // [rsp+20h] [rbp-59h]
  __int64 v28; // [rsp+28h] [rbp-51h]
  union _LARGE_INTEGER v29[2]; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v30[16]; // [rsp+60h] [rbp-19h] BYREF

  LODWORD(v4) = 0;
  memset(v30, 0, sizeof(v30));
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v30);
    v8 = *((_DWORD *)this + 71);
    v30[13] = *((_DWORD *)this + 4);
    v30[1] = 64;
    v30[14] = v30[14] & 0xFFFFFFF3 | (4 * (v8 & 1));
    v30[12] = 10;
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
    v12 = WdLogNewEntry5_WdAssertion(v9, v5);
    *(_QWORD *)(v12 + 24) = 2307LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_DWORD *)this + 71) )
  {
    v13 = *((_QWORD *)this + 34);
    if ( *(_DWORD *)(v13 + 16) == 2 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v13, v5);
      *(_QWORD *)(v14 + 24) = 2317LL;
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
      v29[0].QuadPart = 0LL;
      v16 = DXGDXGIKEYEDMUTEX::AcquireCPU(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), v5, v7, v29, 0LL, 1);
      v4 = v16;
      if ( v16 == 258 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v18, v17);
        *(_QWORD *)(v20 + 24) = 2346LL;
        WdLogEvent5_WdAssertion(v20);
      }
      if ( (int)v4 < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = v4;
        WdLogEvent5_WdError(v21);
        return (unsigned int)v4;
      }
      DXGDXGIKEYEDMUTEX::Release(*((_QWORD *)this + *((unsigned int *)this + 11) + 6), 1LL, 0LL, 1);
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
        v30[14] |= 8u;
    }
  }
  v22 = (OUTPUTDUPL_MGR *)*((_QWORD *)this + 37);
  *((_DWORD *)this + 77) = 0;
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(v22) )
  {
    v30[14] = ((unsigned __int8)v25 ^ (unsigned __int8)*(_DWORD *)(*((_QWORD *)this + 33) + 16LL)) & 3 ^ v25;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v24, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v30, 1);
    v25 = v30[14];
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v28) = *(_DWORD *)(*((_QWORD *)this + 33) + 16LL);
    LODWORD(v27) = *((_DWORD *)this + 11);
    McTemplateK0pqqttq(
      (v25 >> 3) & 1,
      v23,
      (const GUID *)((v25 >> 2) & 1),
      this,
      v27,
      v28,
      (v25 >> 2) & 1,
      (v25 >> 3) & 1,
      v4);
  }
  return (unsigned int)v4;
}
