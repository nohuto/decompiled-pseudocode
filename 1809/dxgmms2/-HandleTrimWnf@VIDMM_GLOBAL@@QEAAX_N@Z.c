/*
 * XREFs of ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1C0078F20
 * Callers:
 *     ?Run@VIDMM_WORKER_THREAD@@QEAAXXZ @ 0x1C0083F00 (-Run@VIDMM_WORKER_THREAD@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00029E0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002A3C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ @ 0x1C0010BFC (-IsHighPriorityProcess@DXGPROCESS@@QEBA_NXZ.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     ?SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x1C00795E0 (-SetTimeout@VIDMM_WORKER_THREAD@@QEAAX_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z.c)
 *     ?SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z @ 0x1C00796C0 (-SendTrimWnf@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@UD3DDDI_TRIMRESIDENCYSET_FLAGS@@_K@Z.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C007D1E0 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

void __fastcall VIDMM_GLOBAL::HandleTrimWnf(VIDMM_GLOBAL *this, char a2)
{
  struct VIDMM_PROCESS *v2; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r11
  unsigned __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r10
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *i; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD **v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *j; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  _QWORD **v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // rcx
  char v36; // r15
  signed __int64 v37; // rax
  __int64 v38; // rdx
  signed __int64 v39; // rcx
  char v40; // bl
  char v41; // r14
  __int64 v42; // rcx
  const GUID *v43; // r8
  char v44; // r8
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rax
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rcx
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  __int64 v57; // rax
  VIDMM_GLOBAL *v58; // rax
  struct D3DDDI_TRIMRESIDENCYSET_FLAGS v59; // ebx
  struct VIDMM_PROCESS **v60; // r15
  DXGPROCESS *v61; // rcx
  char IsHighPriorityProcess; // al
  struct VIDMM_PROCESS *v63; // rcx
  bool v64; // cc
  unsigned __int64 v65; // r9
  struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A v66; // ecx
  _QWORD *v67; // rcx
  _QWORD *v68; // rcx
  __int64 v69; // rax
  int v70; // r9d
  _BYTE v71[104]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v72; // [rsp+A0h] [rbp+8h]
  signed __int64 v73; // [rsp+A0h] [rbp+8h]
  VIDMM_GLOBAL *v74; // [rsp+A0h] [rbp+8h]
  unsigned __int64 v76; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v77; // [rsp+B8h] [rbp+20h]

  v2 = (struct VIDMM_PROCESS *)*((_QWORD *)this + 576);
  v4 = -1LL;
  v5 = -1LL;
  ExAcquirePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v6 = *((unsigned int *)this + 1748);
  if ( (_DWORD)v6 )
  {
    v7 = *((_QWORD *)this + 5023);
    v8 = 0LL;
    v9 = 0LL;
    v76 = 0LL;
    v10 = 0LL;
    v77 = 0LL;
    v11 = 0LL;
    v72 = v6;
    v12 = (unsigned int)v6;
    while ( (*(_BYTE *)(v7 + v11 + 512) & 1) != 0 )
    {
      v13 = VIDMM_PARTITION::_PartitionTree;
      i = 0LL;
      if ( VIDMM_PARTITION::_PartitionTree )
      {
        do
        {
          i = v13;
          v13 = (_QWORD *)*v13;
        }
        while ( v13 );
      }
      if ( i )
      {
        while ( 1 )
        {
          v15 = *(_QWORD *)(i[4] + 368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL) + 24);
          v16 = *(_QWORD *)(v15 + v10 + 8);
          if ( v16 )
            break;
LABEL_17:
          v22 = (_QWORD **)i[1];
          v23 = i;
          if ( v22 )
          {
            v67 = *v22;
            for ( i = (_QWORD *)i[1]; v67; v67 = (_QWORD *)*v67 )
              i = v67;
          }
          else
          {
            for ( i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL); i; i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*i == v23 )
                break;
              v23 = i;
            }
          }
          if ( !i )
          {
            v8 = v76;
            v9 = v77;
            goto LABEL_21;
          }
        }
        v17 = 100LL * *(_QWORD *)(v15 + v10 + 112);
        if ( v16 == 0x1E4AE7D99LL )
          v18 = v17 / 0x1E4AE7D99LL;
        else
          v18 = v17 / v16;
        v19 = 100 - v18;
        if ( (__int64)(100 - v18) <= (unsigned int)dword_1C004D37C )
        {
          if ( v19 <= (unsigned int)dword_1C004D380 )
          {
            v20 = (unsigned int)dword_1C004D390;
            v21 = (unsigned int)dword_1C004D38C;
            goto LABEL_13;
          }
          v20 = (unsigned int)dword_1C004D390
              + (v19 - (unsigned int)dword_1C004D380)
              * (unsigned int)(dword_1C004D38C - dword_1C004D390)
              / (unsigned int)(dword_1C004D37C - dword_1C004D380);
        }
        else
        {
          v20 = (unsigned int)dword_1C004D384;
        }
        v21 = (unsigned int)dword_1C004D388;
LABEL_13:
        if ( v4 >= v20 )
          v4 = v20;
        if ( v5 >= v21 )
          v5 = v21;
        goto LABEL_17;
      }
LABEL_22:
      if ( (*(_BYTE *)(v7 + v11 + 536) & 1) == 0 )
      {
        v51 = *(_QWORD *)(1560 * v8 + v7 + 880);
        if ( v51 )
        {
          v52 = 100LL * *(_QWORD *)(1560 * v8 + v7 + 984);
          if ( v51 == 917943091 )
            v53 = v52 / 0x36B6B333;
          else
            v53 = v52 / v51;
          v54 = 100 - v53;
          if ( (__int64)(100 - v53) > (unsigned int)dword_1C004D37C )
          {
            v55 = (unsigned int)dword_1C004D384;
            goto LABEL_74;
          }
          v8 = v76;
          if ( v54 > (unsigned int)dword_1C004D380 )
          {
            v55 = (unsigned int)dword_1C004D390
                + (v54 - (unsigned int)dword_1C004D380)
                * (unsigned int)(dword_1C004D38C - dword_1C004D390)
                / (unsigned int)(dword_1C004D37C - dword_1C004D380);
LABEL_74:
            v56 = (unsigned int)dword_1C004D388;
          }
          else
          {
            v55 = (unsigned int)dword_1C004D390;
            v56 = (unsigned int)dword_1C004D38C;
          }
          if ( v4 >= v55 )
            v4 = v55;
          if ( v5 >= v56 )
            v5 = v56;
        }
LABEL_40:
        v12 = v72;
        goto LABEL_41;
      }
      v24 = VIDMM_PARTITION::_PartitionTree;
      j = 0LL;
      if ( VIDMM_PARTITION::_PartitionTree )
      {
        do
        {
          j = v24;
          v24 = (_QWORD *)*v24;
        }
        while ( v24 );
      }
      if ( j )
      {
        while ( 1 )
        {
          v26 = *(_QWORD *)(j[4] + 368LL * *(unsigned int *)(*((_QWORD *)this + 3) + 208LL) + 24);
          v27 = *(_QWORD *)(v26 + v10 + 8);
          if ( v27 )
            break;
LABEL_36:
          v33 = (_QWORD **)j[1];
          v34 = j;
          if ( v33 )
          {
            v68 = *v33;
            for ( j = (_QWORD *)j[1]; v68; v68 = (_QWORD *)*v68 )
              j = v68;
          }
          else
          {
            for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
            {
              if ( (_QWORD *)*j == v34 )
                break;
              v34 = j;
            }
          }
          if ( !j )
          {
            v8 = v76;
            v9 = v77;
            goto LABEL_40;
          }
        }
        v28 = 100LL * *(_QWORD *)(v26 + v10 + 112);
        if ( v27 == 0x1E4AE7D99LL )
          v29 = v28 / 0x1E4AE7D99LL;
        else
          v29 = v28 / v27;
        v30 = 100 - v29;
        if ( (__int64)(100 - v29) > (unsigned int)dword_1C004D37C )
        {
          v31 = (unsigned int)dword_1C004D384;
          goto LABEL_31;
        }
        if ( v30 > (unsigned int)dword_1C004D380 )
        {
          v31 = (unsigned int)dword_1C004D390
              + (v30 - (unsigned int)dword_1C004D380)
              * (unsigned int)(dword_1C004D38C - dword_1C004D390)
              / (unsigned int)(dword_1C004D37C - dword_1C004D380);
LABEL_31:
          v32 = (unsigned int)dword_1C004D388;
        }
        else
        {
          v31 = (unsigned int)dword_1C004D390;
          v32 = (unsigned int)dword_1C004D38C;
        }
        if ( v4 >= v31 )
          v4 = v31;
        if ( v5 >= v32 )
          v5 = v32;
        goto LABEL_36;
      }
LABEL_41:
      ++v8;
      v9 += 1560LL;
      v11 += 1560LL;
      v76 = v8;
      v10 += 328LL;
      v77 = v9;
      v72 = --v12;
      if ( !v12 )
        goto LABEL_42;
    }
    v45 = *(_QWORD *)(v7 + v9 + 552);
    if ( !v45 )
    {
LABEL_21:
      v12 = v72;
      goto LABEL_22;
    }
    v46 = 100LL * *(_QWORD *)(v7 + v9 + 656);
    if ( v45 == 917943091 )
      v47 = v46 / 0x36B6B333;
    else
      v47 = v46 / v45;
    v48 = 100 - v47;
    if ( (__int64)(100 - v47) <= (unsigned int)dword_1C004D37C )
    {
      v8 = v76;
      if ( v48 <= (unsigned int)dword_1C004D380 )
      {
        v49 = (unsigned int)dword_1C004D390;
        v50 = (unsigned int)dword_1C004D38C;
        goto LABEL_65;
      }
      v49 = (unsigned int)dword_1C004D390
          + (v48 - (unsigned int)dword_1C004D380)
          * (unsigned int)(dword_1C004D38C - dword_1C004D390)
          / (unsigned int)(dword_1C004D37C - dword_1C004D380);
    }
    else
    {
      v49 = (unsigned int)dword_1C004D384;
    }
    v50 = (unsigned int)dword_1C004D388;
LABEL_65:
    if ( v4 >= v49 )
      v4 = v49;
    if ( v5 >= v50 )
      v5 = v50;
    goto LABEL_21;
  }
LABEL_42:
  ExReleasePushLockSharedEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v35 = *((_QWORD *)this + 5150);
  if ( v35 && (__int64)v4 > (__int64)v2 - v35 )
  {
    v36 = 0;
    v37 = (signed __int64)v2 - v35 - v4;
  }
  else
  {
    *((_QWORD *)this + 5150) = v2;
    v37 = -(__int64)v4;
    v36 = 1;
  }
  v38 = *((_QWORD *)this + 5151);
  if ( v38 && (__int64)v5 > (__int64)v2 - v38 )
  {
    v39 = (signed __int64)v2 - v38 - v5;
    if ( v37 <= v39 )
      v37 = (signed __int64)v2 - v38 - v5;
    v40 = 0;
  }
  else
  {
    *((_QWORD *)this + 5151) = v2;
    v39 = -(__int64)v5;
    if ( v37 <= -(__int64)v5 )
      v37 = -(__int64)v5;
    v40 = 1;
  }
  v41 = 0;
  v73 = v37;
  if ( this != (VIDMM_GLOBAL *)-40968LL && *((struct _KTHREAD **)this + 5122) == KeGetCurrentThread() )
  {
    v69 = WdLogNewEntry5_WdAssertion(v39, v38);
    *(_QWORD *)(v69 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v69);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)this + 40968, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v70 = *((_DWORD *)this + 10246);
      if ( v70 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v42, &EventBlockThread, v43, v70);
    }
    ExAcquirePushLockSharedEx((char *)this + 40968, 0LL);
  }
  if ( v36 )
  {
    v57 = *((_QWORD *)this + 575);
    if ( *((_QWORD *)this + 5152) == v57 )
    {
      ++*((_DWORD *)this + 10308);
    }
    else
    {
      *((_DWORD *)this + 10308) = 0;
      *((_QWORD *)this + 5152) = v57;
    }
    if ( !v40 )
      goto LABEL_90;
  }
  else
  {
    if ( !v40 )
      goto LABEL_56;
    v57 = *((_QWORD *)this + 575);
  }
  if ( *((_QWORD *)this + 5153) == v57 )
  {
    ++*((_DWORD *)this + 10309);
  }
  else
  {
    *((_DWORD *)this + 10309) = 0;
    *((_QWORD *)this + 5153) = v57;
  }
LABEL_90:
  if ( *((_DWORD *)this + 10308) > 1u && *((_DWORD *)this + 10309) > 1u )
    goto LABEL_57;
  v41 = 1;
LABEL_56:
  VIDMM_WORKER_THREAD::SetTimeout(*(_QWORD *)this, v73, 5LL);
  if ( v41 )
  {
    v44 = a2;
LABEL_93:
    v58 = (VIDMM_GLOBAL *)*((_QWORD *)this + 5126);
    v74 = v58;
    if ( v58 == (VIDMM_GLOBAL *)((char *)this + 41008) )
      goto LABEL_58;
    while ( 1 )
    {
      v59.0 = 0;
      v60 = (struct VIDMM_PROCESS **)((char *)v58 - 24);
      if ( v41 )
        break;
LABEL_104:
      v65 = 0LL;
      v76 = 0LL;
      if ( v44 )
      {
        DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
          (DXGAUTOPUSHLOCKSHARED *)v71,
          (struct DXGPUSHLOCK *const)(v60 + 45));
        VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim((VIDMM_PROCESS_ADAPTER_INFO *)v60, &v76, 0, 1);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v71);
        v65 = v76;
        v58 = v74;
        v44 = a2;
      }
      v66 = v59.0;
      if ( v65 )
      {
        v59.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)(v59.Value | 4);
        v66 = v59.0;
      }
      if ( v66 )
      {
        VIDMM_GLOBAL::SendTrimWnf(this, v60[5], v59, v65);
        v58 = v74;
        v44 = a2;
      }
      v58 = *(VIDMM_GLOBAL **)v58;
      v74 = v58;
      if ( v58 == (VIDMM_GLOBAL *)((char *)this + 41008) )
        goto LABEL_58;
    }
    v61 = (DXGPROCESS *)*((_QWORD *)v60[5] + 4);
    if ( v61 && (*((_BYTE *)v61 + 289) && !*((_BYTE *)v61 + 321) || *((_BYTE *)v61 + 320)) )
    {
      IsHighPriorityProcess = DXGPROCESS::IsHighPriorityProcess(v61);
      v63 = v60[63];
      if ( IsHighPriorityProcess )
      {
        if ( !v63 )
          goto LABEL_102;
        v64 = (__int64)v5 <= v2 - v63;
      }
      else
      {
        if ( !v63 )
        {
LABEL_102:
          v59.0 = (struct D3DDDI_TRIMRESIDENCYSET_FLAGS::$0BC72FD4B990B613421A1F64C323019C::$3F3131289ECAE89F0D7ECD777680E73A)1;
          v60[63] = v2;
          goto LABEL_103;
        }
        v64 = (__int64)v4 <= v2 - v63;
      }
      if ( v64 )
        goto LABEL_102;
    }
LABEL_103:
    v58 = v74;
    goto LABEL_104;
  }
LABEL_57:
  v44 = a2;
  if ( a2 )
    goto LABEL_93;
LABEL_58:
  ExReleasePushLockSharedEx((char *)this + 40968, 0LL);
  KeLeaveCriticalRegion();
}
