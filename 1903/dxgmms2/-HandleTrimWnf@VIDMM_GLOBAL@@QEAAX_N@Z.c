/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C005E3D0
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0087740 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0001530 (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003790 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00037EC (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C005EAD4 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x1C005EBB4 (-SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C00637BC (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r13
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 v8; // r10
  __int64 v9; // rbp
  __int64 v10; // rsi
  unsigned __int64 v11; // r9
  _QWORD *v12; // rax
  _QWORD *i; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // r8
  signed __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD **v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *j; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  signed __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  _QWORD **v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  char v33; // r14
  signed __int64 v34; // rax
  __int64 v35; // rdx
  signed __int64 v36; // rcx
  char v37; // bl
  char v38; // bp
  __int64 v39; // rcx
  const GUID *v40; // r8
  char v41; // r8
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // r8
  unsigned __int64 v50; // rax
  __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  VIDMM_GLOBAL *v55; // rcx
  VIDMM_GLOBAL *v56; // rax
  struct D3DDDI_TRIMRESIDENCYSET_FLAGS v57; // ebx
  char *v58; // r14
  DXGPROCESS *v59; // rcx
  char IsHighPriorityProcess; // al
  __int64 v61; // rcx
  bool v62; // cc
  unsigned __int64 v63; // r9
  int v64; // r9d
  __int64 v65; // rax
  _BYTE v66[104]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v67; // [rsp+90h] [rbp+8h]
  signed __int64 v68; // [rsp+90h] [rbp+8h]
  VIDMM_GLOBAL *v69; // [rsp+90h] [rbp+8h]
  unsigned __int64 v71; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v72; // [rsp+A8h] [rbp+20h]

  v2 = *((_QWORD *)this + 576);
  v4 = -1LL;
  v72 = v2;
  v5 = -1LL;
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v6 = *((_DWORD *)this + 1748);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 5023);
    v8 = 0LL;
    v9 = 0LL;
    v67 = 0LL;
    v10 = 0LL;
    v71 = *((unsigned int *)this + 1748);
    v11 = v6;
    while ( (*(_BYTE *)(v7 + v10 + 512) & 1) != 0 )
    {
      v12 = VIDMM_PARTITION::_PartitionTree;
      i = 0LL;
      if ( VIDMM_PARTITION::_PartitionTree )
      {
        do
        {
          i = v12;
          v12 = (_QWORD *)*v12;
        }
        while ( v12 );
      }
      if ( i )
      {
        while ( 1 )
        {
          v14 = *(_QWORD *)(i[5] + 368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL) + 24);
          v15 = *(_QWORD *)(v8 + v14 + 8);
          if ( v15 )
            break;
LABEL_15:
          v19 = (_QWORD **)i[1];
          v20 = i;
          if ( v19 )
          {
            v21 = *v19;
            for ( i = (_QWORD *)i[1]; v21; v21 = (_QWORD *)*v21 )
              i = v21;
          }
          else
          {
            for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*i == v20 )
                break;
              v20 = i;
            }
          }
          if ( !i )
            goto LABEL_19;
        }
        v16 = 100 - 100LL * *(_QWORD *)(v8 + v14 + 112) / v15;
        if ( v16 <= (unsigned int)dword_1C004E384 )
        {
          if ( v16 <= (unsigned int)dword_1C004E388 )
          {
            v17 = (unsigned int)dword_1C004E398;
            v18 = (unsigned int)dword_1C004E394;
            v8 = v67;
            goto LABEL_11;
          }
          v8 = v67;
          v17 = (unsigned int)dword_1C004E398
              + (v16 - (unsigned int)dword_1C004E388)
              * (unsigned int)(dword_1C004E394 - dword_1C004E398)
              / (unsigned int)(dword_1C004E384 - dword_1C004E388);
        }
        else
        {
          v17 = (unsigned int)dword_1C004E38C;
        }
        v18 = (unsigned int)dword_1C004E390;
LABEL_11:
        if ( v4 >= v17 )
          v4 = v17;
        if ( v5 >= v18 )
          v5 = v18;
        goto LABEL_15;
      }
LABEL_19:
      v11 = v71;
LABEL_20:
      if ( (*(_BYTE *)(v10 + v7 + 536) & 1) != 0 )
      {
        v22 = VIDMM_PARTITION::_PartitionTree;
        j = 0LL;
        if ( VIDMM_PARTITION::_PartitionTree )
        {
          do
          {
            j = v22;
            v22 = (_QWORD *)*v22;
          }
          while ( v22 );
        }
        if ( j )
        {
          while ( 1 )
          {
            v24 = *(_QWORD *)(j[5] + 368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL) + 24);
            v25 = *(_QWORD *)(v8 + v24 + 8);
            if ( v25 )
              break;
LABEL_32:
            v29 = (_QWORD **)j[1];
            v30 = j;
            if ( v29 )
            {
              v31 = *v29;
              for ( j = (_QWORD *)j[1]; v31; v31 = (_QWORD *)*v31 )
                j = v31;
            }
            else
            {
              for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
              {
                if ( (_QWORD *)*j == v30 )
                  break;
                v30 = j;
              }
            }
            if ( !j )
            {
              v11 = v71;
              goto LABEL_37;
            }
          }
          v26 = 100 - 100LL * *(_QWORD *)(v8 + v24 + 112) / v25;
          if ( v26 > (unsigned int)dword_1C004E384 )
          {
            v27 = (unsigned int)dword_1C004E38C;
            goto LABEL_27;
          }
          if ( v26 > (unsigned int)dword_1C004E388 )
          {
            v8 = v67;
            v27 = (unsigned int)dword_1C004E398
                + (v26 - (unsigned int)dword_1C004E388)
                * (unsigned int)(dword_1C004E394 - dword_1C004E398)
                / (unsigned int)(dword_1C004E384 - dword_1C004E388);
LABEL_27:
            v28 = (unsigned int)dword_1C004E390;
          }
          else
          {
            v27 = (unsigned int)dword_1C004E398;
            v28 = (unsigned int)dword_1C004E394;
            v8 = v67;
          }
          if ( v4 >= v27 )
            v4 = v27;
          if ( v5 >= v28 )
            v5 = v28;
          goto LABEL_32;
        }
      }
      else
      {
        v48 = *(_QWORD *)(v7 + v9 + 880);
        if ( v48 )
        {
          v49 = 100LL * *(_QWORD *)(v7 + v9 + 984);
          if ( v48 == 917943091 )
            v50 = v49 / 0x36B6B333;
          else
            v50 = v49 / v48;
          v51 = 100 - v50;
          if ( (__int64)(100 - v50) > (unsigned int)dword_1C004E384 )
          {
            v52 = (unsigned int)dword_1C004E38C;
            goto LABEL_71;
          }
          v8 = v67;
          if ( v51 > (unsigned int)dword_1C004E388 )
          {
            v11 = v71;
            v52 = (unsigned int)dword_1C004E398
                + (v51 - (unsigned int)dword_1C004E388)
                * (unsigned int)(dword_1C004E394 - dword_1C004E398)
                / (unsigned int)(dword_1C004E384 - dword_1C004E388);
LABEL_71:
            v53 = (unsigned int)dword_1C004E390;
          }
          else
          {
            v52 = (unsigned int)dword_1C004E398;
            v53 = (unsigned int)dword_1C004E394;
            v11 = v71;
          }
          if ( v4 >= v52 )
            v4 = v52;
          if ( v5 >= v53 )
            v5 = v53;
        }
      }
LABEL_37:
      v8 += 328LL;
      v10 += 1560LL;
      v9 += 1560LL;
      v67 = v8;
      v71 = --v11;
      if ( !v11 )
        goto LABEL_38;
    }
    v42 = *(_QWORD *)(v7 + v9 + 552);
    if ( !v42 )
      goto LABEL_20;
    v43 = 100LL * *(_QWORD *)(v7 + v9 + 656);
    if ( v42 == 917943091 )
      v44 = v43 / 0x36B6B333;
    else
      v44 = v43 / v42;
    v45 = 100 - v44;
    if ( (__int64)(100 - v44) <= (unsigned int)dword_1C004E384 )
    {
      v8 = v67;
      if ( v45 <= (unsigned int)dword_1C004E388 )
      {
        v46 = (unsigned int)dword_1C004E398;
        v47 = (unsigned int)dword_1C004E394;
        v11 = v71;
        goto LABEL_62;
      }
      v11 = v71;
      v46 = (unsigned int)dword_1C004E398
          + (v45 - (unsigned int)dword_1C004E388)
          * (unsigned int)(dword_1C004E394 - dword_1C004E398)
          / (unsigned int)(dword_1C004E384 - dword_1C004E388);
    }
    else
    {
      v46 = (unsigned int)dword_1C004E38C;
    }
    v47 = (unsigned int)dword_1C004E390;
LABEL_62:
    if ( v4 >= v46 )
      v4 = v46;
    if ( v5 >= v47 )
      v5 = v47;
    goto LABEL_20;
  }
LABEL_38:
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v32 = *((_QWORD *)this + 5150);
  if ( v32 && (__int64)v4 > v2 - v32 )
  {
    v33 = 0;
    v34 = v2 - v32 - v4;
  }
  else
  {
    *((_QWORD *)this + 5150) = v2;
    v34 = -(__int64)v4;
    v33 = 1;
  }
  v35 = *((_QWORD *)this + 5151);
  if ( v35 && (__int64)v5 > v2 - v35 )
  {
    v36 = v2 - v35 - v5;
    if ( v34 <= v36 )
      v34 = v2 - v35 - v5;
    v37 = 0;
  }
  else
  {
    *((_QWORD *)this + 5151) = v2;
    v36 = -(__int64)v5;
    if ( v34 <= -(__int64)v5 )
      v34 = -(__int64)v5;
    v37 = 1;
  }
  v38 = 0;
  v68 = v34;
  if ( this != (VIDMM_GLOBAL *)-40968LL )
  {
    if ( *((struct _KTHREAD **)this + 5122) == KeGetCurrentThread() )
    {
      v65 = WdLogNewEntry5_WdAssertion(v36, v35);
      *(_QWORD *)(v65 + 24) = 1448LL;
      WdLogEvent5_WdAssertion(v65);
    }
    v2 = v72;
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 40968, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v64 = *((_DWORD *)this + 10246);
      if ( v64 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v39, (const EVENT_DESCRIPTOR *)"g", v40, v64);
    }
    ExAcquirePushLockSharedEx((char *)this + 40968, 0LL);
  }
  if ( v33 )
  {
    v54 = *((_QWORD *)this + 575);
    if ( *((_QWORD *)this + 5152) == v54 )
    {
      ++*((_DWORD *)this + 10308);
    }
    else
    {
      *((_DWORD *)this + 10308) = 0;
      *((_QWORD *)this + 5152) = v54;
    }
    if ( !v37 )
      goto LABEL_93;
  }
  else
  {
    if ( !v37 )
      goto LABEL_53;
    v54 = *((_QWORD *)this + 575);
  }
  if ( *((_QWORD *)this + 5153) == v54 )
  {
    ++*((_DWORD *)this + 10309);
  }
  else
  {
    *((_DWORD *)this + 10309) = 0;
    *((_QWORD *)this + 5153) = v54;
  }
LABEL_93:
  if ( *((_DWORD *)this + 10308) > 1u && *((_DWORD *)this + 10309) > 1u )
    goto LABEL_54;
  v38 = 1;
LABEL_53:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v68, 5LL);
  if ( v38 )
  {
    v41 = a2;
LABEL_96:
    v55 = (VIDMM_GLOBAL *)((char *)this + 41008);
    v56 = (VIDMM_GLOBAL *)*((_QWORD *)this + 5126);
    v69 = v56;
    if ( v56 == (VIDMM_GLOBAL *)((char *)this + 41008) )
      goto LABEL_55;
    while ( 1 )
    {
      v57.0 = 0;
      v58 = (char *)v56 - 24;
      if ( !v38 )
        goto LABEL_107;
      v59 = *(DXGPROCESS **)(*((_QWORD *)v58 + 5) + 32LL);
      if ( v59 && (*((_BYTE *)v59 + 265) && !*((_BYTE *)v59 + 297) || *((_BYTE *)v59 + 296)) )
      {
        IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v59);
        v61 = *((_QWORD *)v58 + 63);
        if ( IsHighPriorityProcess )
        {
          if ( !v61 )
          {
LABEL_105:
            v57.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)1;
            *((_QWORD *)v58 + 63) = v2;
            goto LABEL_106;
          }
          v62 = (__int64)v5 <= v2 - v61;
        }
        else
        {
          if ( !v61 )
            goto LABEL_105;
          v62 = (__int64)v4 <= v2 - v61;
        }
        if ( v62 )
          goto LABEL_105;
      }
LABEL_106:
      v56 = v69;
      v55 = (VIDMM_GLOBAL *)((char *)this + 41008);
LABEL_107:
      v63 = 0LL;
      v71 = 0LL;
      if ( v41 )
      {
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
          (DXGAUTOPUSHLOCKSHARED *)v66,
          (struct DXGPUSHLOCK *const)(v58 + 360));
        VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((VIDMM_PROCESS_ADAPTER_INFO *)v58, &v71, 0, 1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v66);
        v63 = v71;
        v55 = (VIDMM_GLOBAL *)((char *)this + 41008);
        v56 = v69;
        v41 = a2;
        if ( v71 )
          v57.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)(v57.Value | 4);
      }
      if ( v57.0 )
      {
        VIDMM_GLOBAL::SendTrimWnf(this, *((struct VIDMM_PROCESS **)v58 + 5), v57, v63);
        v56 = v69;
        v55 = (VIDMM_GLOBAL *)((char *)this + 41008);
        v41 = a2;
      }
      v56 = *(VIDMM_GLOBAL **)v56;
      v69 = v56;
      if ( v56 == v55 )
        goto LABEL_55;
    }
  }
LABEL_54:
  v41 = a2;
  if ( a2 )
    goto LABEL_96;
LABEL_55:
  ExReleasePushLockSharedEx((char *)this + 40968, 0LL);
  KeLeaveCriticalRegion();
}
