/*
 * XREFs of ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0271504
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0271A10 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z @ 0x1C0045F6C (--_GOUTPUTDUPL_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C013D744 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C0271F7C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0272ACC (-InitializeDiagnosticBuffers@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 *     ?IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z @ 0x1C0272D1C (-IsOutputDuplAllowedForVidPn@OUTPUTDUPL_MGR@@AEAAJIHHPEAW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@@Z.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C0273200 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ??0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z @ 0x1C02780B4 (--0OUTPUTDUPL_CONTEXT@@QEAA@PEAVOUTPUTDUPL_MGR@@IHHH@Z.c)
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0278F4C (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateOutputDuplication(
        OUTPUTDUPL_MGR *this,
        struct _D3DKMT_CREATE_OUTPUTDUPL *a2,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a3)
{
  OUTPUTDUPL_MGR *v6; // rcx
  unsigned int v7; // r8d
  struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209 Value; // r9d
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  bool v10; // cf
  unsigned int v11; // r12d
  int IsOutputDuplAllowedForVidPn; // edi
  struct DXGFASTMUTEX **v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  OUTPUTDUPL_CONTEXT **v25; // r15
  OUTPUTDUPL_CONTEXT *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rbx
  __int64 v41; // rdx
  UINT v42; // eax
  unsigned int v43; // [rsp+30h] [rbp-49h] BYREF
  _D3DKMT_VIDPNSOURCEOWNER_TYPE v44; // [rsp+34h] [rbp-45h] BYREF
  _BYTE v45[8]; // [rsp+38h] [rbp-41h] BYREF
  char v46; // [rsp+40h] [rbp-39h]
  _DWORD v47[16]; // [rsp+50h] [rbp-29h] BYREF

  OUTPUTDUPL_MGR::InitializeDiagnosticBuffers(this);
  memset(v47, 0, sizeof(v47));
  OUTPUTDUPL_MGR::InitializePacketHeader(v6, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v47);
  v7 = *(_DWORD *)a3;
  Value = (struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS::$2AC88DCDFD0D040EA0D625572809A630::$3AD2520B051062E66F8E36EF65C6D209)a2->Flags.Value;
  VidPnSourceId = a2->VidPnSourceId;
  v10 = (*(_DWORD *)a3 & 0x10) != 0;
  v47[1] = 64;
  v47[13] = VidPnSourceId;
  v11 = -1;
  v47[12] = v10 ? 0xB : 0;
  v43 = -1;
  IsOutputDuplAllowedForVidPn = OUTPUTDUPL_MGR::IsOutputDuplAllowedForVidPn(
                                  this,
                                  VidPnSourceId,
                                  (v7 >> 5) & 1,
                                  *(_BYTE *)&Value & 1,
                                  &v44);
  if ( IsOutputDuplAllowedForVidPn < 0 )
  {
LABEL_22:
    v47[14] = v11;
    v47[15] = IsOutputDuplAllowedForVidPn;
    OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v47, 1);
    return (unsigned int)IsOutputDuplAllowedForVidPn;
  }
  v13 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v45, *v13, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v15, v14);
  if ( !OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v13, CurrentProcess, &v47[14]) )
  {
    ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(this, (struct _OUTPUTDUPL_CONTEXTLIST *)v13, 0LL, &v43);
    v11 = v43;
    v25 = ContextForProcess;
    IsOutputDuplAllowedForVidPn = -1073741653;
    if ( ContextForProcess )
    {
      if ( (*(_DWORD *)a3 & 0x10) != 0 )
      {
        v42 = 3;
        if ( v44 == D3DKMT_VIDPNSOURCEOWNER_SHARED )
          v42 = 1;
        IsOutputDuplAllowedForVidPn = 0;
        a2->RequiredKeyedMutexCount = v42;
      }
      else
      {
        v26 = (OUTPUTDUPL_CONTEXT *)operator new[](0x150uLL, 0x674D444Fu, PagedPool);
        if ( v26 )
          v26 = OUTPUTDUPL_CONTEXT::OUTPUTDUPL_CONTEXT(
                  v26,
                  this,
                  v11,
                  (*(_DWORD *)a3 >> 1) & 1,
                  (*(_DWORD *)a3 >> 3) & 1,
                  (*(_DWORD *)a3 >> 2) & 1);
        *v25 = v26;
        if ( v26 )
        {
          IsOutputDuplAllowedForVidPn = OUTPUTDUPL_CONTEXT::Initialize(v26, a2);
          if ( IsOutputDuplAllowedForVidPn < 0 )
          {
            v34 = WdLogNewEntry5_WdError(v32, v31, v33);
            v35 = a2->VidPnSourceId;
            v36 = v34;
            *(_QWORD *)(v34 + 24) = v35;
            *(_QWORD *)(v34 + 32) = PsGetCurrentProcess(v35, v37);
            WdLogEvent5_WdError(v36);
            if ( *v25 )
              OUTPUTDUPL_CONTEXT::`scalar deleting destructor'(*v25);
            *v25 = 0LL;
          }
        }
        else
        {
          v38 = WdLogNewEntry5_WdLowResource(v28, v27, v29, v30);
          v39 = a2->VidPnSourceId;
          v40 = v38;
          *(_QWORD *)(v38 + 24) = v39;
          *(_QWORD *)(v38 + 32) = PsGetCurrentProcess(v39, v41);
          WdLogEvent5_WdLowResource(v40);
          IsOutputDuplAllowedForVidPn = -1073741801;
        }
      }
    }
    if ( v46 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
    goto LABEL_22;
  }
  v20 = WdLogNewEntry5_WdError(v18, v17, v19);
  *(_QWORD *)(v20 + 24) = PsGetCurrentProcess(v22, v21);
  *(_QWORD *)(v20 + 32) = a2->VidPnSourceId;
  WdLogEvent5_WdError(v20);
  v47[15] = -1073740008;
  OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 1, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v47, 1);
  if ( v46 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
  return 3221227288LL;
}
