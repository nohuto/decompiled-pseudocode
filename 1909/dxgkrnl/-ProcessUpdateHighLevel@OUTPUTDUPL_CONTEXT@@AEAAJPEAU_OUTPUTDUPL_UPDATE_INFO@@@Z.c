/*
 * XREFs of ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C027A4E0
 * Callers:
 *     ?ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C027A1C4 (-ProcessPointerPosition@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C027A2B0 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C027A3A8 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0pqqqqqttttttttq @ 0x1C0046AD4 (McTemplateK0pqqqqqttttttttq.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C0141B94 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C02711AC (-AcquireCPU@DXGDXGIKEYEDMUTEX@@QEAAJ_KHPEAT_LARGE_INTEGER@@PEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_T.c)
 *     ?HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z @ 0x1C02730D0 (-HasConsumerGPUWorkFinished@DXGDXGIKEYEDMUTEX@@QEAAHPEAVDXGCONTEXT@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C02733A0 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0273928 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C0274FC0 (-Release@DXGDXGIKEYEDMUTEX@@QEAAJ_KPEAVDXGCONTEXT@@W4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C027AA7C (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateHighLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2)
{
  int v2; // r12d
  _BOOL8 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  OUTPUTDUPL_MGR *v9; // rcx
  DXGFASTMUTEX ***v10; // rcx
  OUTPUTDUPL_MGR *v11; // rcx
  int v12; // ecx
  int v13; // r15d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  int v19; // r14d
  int v20; // ebx
  int v21; // r13d
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v24; // rax
  int updated; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  DXGFASTMUTEX ***v37; // r10
  __int64 v38; // rax
  int v39; // r8d
  int v40; // r9d
  __int64 v41; // rax
  int *v43; // [rsp+20h] [rbp-F0h]
  int *v44; // [rsp+28h] [rbp-E8h]
  unsigned int v45; // [rsp+68h] [rbp-A8h]
  int v46; // [rsp+90h] [rbp-80h] BYREF
  int v47; // [rsp+94h] [rbp-7Ch] BYREF
  union _LARGE_INTEGER v48; // [rsp+98h] [rbp-78h] BYREF
  _DWORD v49[20]; // [rsp+A0h] [rbp-70h] BYREF
  _DWORD v50[14]; // [rsp+F0h] [rbp-20h] BYREF

  v2 = 0;
  v5 = *(_DWORD *)a2 == 0;
  if ( v5 != (*((_QWORD *)a2 + 1) != 0LL) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, a2);
    *(_QWORD *)(v6 + 24) = 1380LL;
    WdLogEvent5_WdAssertion(v6);
  }
  memset(v49, 0, sizeof(v49));
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    memset(v50, 0, sizeof(v50));
    OUTPUTDUPL_MGR::InitializePacketHeader(v9, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v50);
    v10 = (DXGFASTMUTEX ***)*((_QWORD *)this + 37);
    v50[13] = *((_DWORD *)this + 4);
    v50[1] = 56;
    v50[12] = 5;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v10, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v50, 0);
    memset(v49, 0, sizeof(v49));
    OUTPUTDUPL_MGR::InitializePacketHeader(v11, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v49);
    v12 = *((_DWORD *)this + 77);
    v49[13] = *((_DWORD *)this + 4);
    v49[14] = *((_DWORD *)this + 73);
    v49[18] = *((_DWORD *)this + 71);
    v49[1] = 80;
    v49[12] = 6;
    v49[19] ^= (LOBYTE(v49[19]) ^ (unsigned __int8)(16 * v12)) & 0x10;
  }
  if ( !*(_DWORD *)a2
    && !*((_DWORD *)this + 77)
    && *((_DWORD *)this + 78)
    && (unsigned int)DXGDXGIKEYEDMUTEX::HasConsumerGPUWorkFinished(
                       *((DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct DXGCONTEXT **)a2 + 1)) )
  {
    *((_DWORD *)this + 78) = 0;
  }
  v48.QuadPart = 0LL;
  v13 = 0;
  v14 = DXGDXGIKEYEDMUTEX::AcquireCPU(
          *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
          v7,
          v8,
          &v48,
          *((_QWORD *)a2 + 1),
          *((_DWORD *)a2 + 4));
  v18 = v14;
  if ( v14 != 258 )
  {
    if ( v14 < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v16, v15, v17);
      *(_QWORD *)(v24 + 24) = v18;
      WdLogEvent5_WdError(v24);
      return (unsigned int)v18;
    }
    v13 = 1;
  }
  v19 = 0;
  v20 = *((_DWORD *)this + 78) & 1 | (16 * (*((_DWORD *)this + 77) & 1));
  v47 = 0;
  v21 = 0;
  v22 = v13 | (16 * v20);
  v46 = 0;
  switch ( v22 )
  {
    case 0u:
      goto LABEL_26;
    case 1u:
      LODWORD(v18) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                       this,
                       a2,
                       *((struct DXGDXGIKEYEDMUTEX **)this + *((unsigned int *)this + 11) + 6),
                       *((struct _PRODUCER_INFO **)this + 33),
                       &v46,
                       &v47);
      v34 = *(_QWORD *)(*((_QWORD *)this + 33) + 8LL);
      v49[17] = *(_DWORD *)(v34 + 4);
      if ( *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) )
      {
        v35 = WdLogNewEntry5_WdAssertion(v34, v33);
        *(_QWORD *)(v35 + 24) = 1509LL;
        WdLogEvent5_WdAssertion(v35);
      }
      v19 = v46;
      goto LABEL_30;
    case 0x10u:
      if ( *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 2 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v16, v15);
        *(_QWORD *)(v30 + 24) = 1532LL;
        WdLogEvent5_WdAssertion(v30);
      }
      goto LABEL_26;
    case 0x11u:
      updated = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                  this,
                  a2,
                  0LL,
                  *((struct _PRODUCER_INFO **)this + 33),
                  &v46,
                  &v47);
      v19 = v46;
      LODWORD(v18) = updated;
      if ( v46 && !*(_DWORD *)a2 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v27, v26);
        *(_QWORD *)(v28 + 24) = 1522LL;
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = *((_QWORD *)this + 33);
      goto LABEL_29;
  }
  if ( v22 > 0x10F )
  {
LABEL_26:
    v31 = *((_QWORD *)this + 33);
    if ( *(_DWORD *)(v31 + 16) == 1 )
    {
      v21 = 1;
      v32 = *(_QWORD *)(v31 + 8);
      *(_QWORD *)(v31 + 8) = *(_QWORD *)(*((_QWORD *)this + 34) + 8LL);
      *(_QWORD *)(*((_QWORD *)this + 34) + 8LL) = v32;
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) = 0;
    }
    LODWORD(v18) = OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
                     this,
                     a2,
                     0LL,
                     *((struct _PRODUCER_INFO **)this + 34),
                     0LL,
                     &v47);
    *((_DWORD *)this + 71) = 1;
    v29 = *((_QWORD *)this + 34);
LABEL_29:
    v49[17] = *(_DWORD *)(*(_QWORD *)(v29 + 8) + 4LL);
    goto LABEL_30;
  }
  v23 = WdLogNewEntry5_WdAssertion(v16, v15);
  *(_QWORD *)(v23 + 24) = v22;
  WdLogEvent5_WdAssertion(v23);
  LODWORD(v18) = -1073741595;
LABEL_30:
  if ( v13 )
  {
    if ( !v19 || *(_DWORD *)(*((_QWORD *)this + 33) + 16LL) == 1 )
    {
      v36 = *((_QWORD *)this + *((unsigned int *)this + 11) + 6);
      DXGDXGIKEYEDMUTEX::Release(v36, *(_QWORD *)(v36 + 136), 0LL, *((_DWORD *)a2 + 4));
    }
    else
    {
      DXGDXGIKEYEDMUTEX::Release(
        *((_QWORD *)this + *((unsigned int *)this + 11) + 6),
        1LL,
        *((_QWORD *)a2 + 1),
        *((_DWORD *)a2 + 4));
      v2 = 1;
    }
  }
  if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(*((OUTPUTDUPL_MGR **)this + 37)) )
  {
    v49[15] = v18;
    v49[16] = v13;
    v38 = *((_QWORD *)this + 33);
    v49[19] = v49[19] & 0xFFFFFE3F | ((v47 & 1 | (2 * (v19 & 1 | (2 * v21)))) << 6);
    v39 = *((_DWORD *)this + 78) & 1 | (16 * v2);
    v40 = v49[19] ^ (LOBYTE(v49[19]) ^ (unsigned __int8)*(_DWORD *)(v38 + 16)) & 3;
    v41 = *((_QWORD *)this + 34);
    v49[19] = v40;
    v49[19] = v40 & 0xFFFFFDD3 | (4 * (*(_DWORD *)(v41 + 16) & 3 | (8 * v39)));
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(v37, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v49, 1);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v45 = *((_DWORD *)this + 71);
    LODWORD(v44) = *(_DWORD *)a2;
    LODWORD(v43) = *((_DWORD *)this + 11);
    McTemplateK0pqqqqqttttttttq(
      *((_QWORD *)this + 34),
      *((_QWORD *)this + 33),
      (const GUID *)v45,
      this,
      v43,
      v44,
      *(_DWORD *)(*((_QWORD *)this + 33) + 16LL),
      v45,
      *(_DWORD *)(*((_QWORD *)this + 34) + 16LL),
      v13,
      *((_DWORD *)this + 77),
      *((_DWORD *)this + 78),
      v19,
      v45,
      v21,
      v2,
      v47,
      v18);
  }
  return (unsigned int)v18;
}
