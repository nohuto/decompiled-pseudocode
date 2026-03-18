/*
 * XREFs of ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C0264508
 * Callers:
 *     ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C02927B0 (-VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z.c)
 * Callees:
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007260 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C564 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DBB8 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0113C24 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0139CE4 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0139F28 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObject(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        __int64 a2,
        char *a3,
        struct _EX_RUNDOWN_REF *a4)
{
  struct _EX_RUNDOWN_REF *v4; // r12
  __int64 v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r13
  __int64 v11; // rax
  PERESOURCE *Global; // rax
  char v13; // si
  signed __int64 v14; // r15
  _QWORD *v15; // r12
  __int64 v16; // rax
  _DWORD *v17; // rdi
  __int64 v18; // rdx
  int v19; // r9d
  int EntryType; // eax
  bool v21; // zf
  _QWORD *v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rsi
  char *v25; // r15
  signed __int64 v26; // rax
  signed __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r9
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rax
  struct _EX_RUNDOWN_REF *v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  _QWORD *v56; // rax
  __int64 v58; // [rsp+30h] [rbp-D0h]
  _QWORD *v59; // [rsp+30h] [rbp-D0h]
  unsigned int v60; // [rsp+38h] [rbp-C8h] BYREF
  struct _EX_RUNDOWN_REF *v61; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v62[24]; // [rsp+48h] [rbp-B8h] BYREF
  signed __int64 v63; // [rsp+60h] [rbp-A0h]
  signed __int64 v64; // [rsp+68h] [rbp-98h]
  DXG_GUEST_REMOTEOBJECTCHANNEL *v65; // [rsp+70h] [rbp-90h]
  _BYTE v66[24]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v67[16]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v68[16]; // [rsp+D0h] [rbp-30h] BYREF
  int v69; // [rsp+150h] [rbp+50h] BYREF
  int v70; // [rsp+154h] [rbp+54h]
  int v71; // [rsp+158h] [rbp+58h]
  int v72; // [rsp+15Ch] [rbp+5Ch]
  _DWORD v73[3]; // [rsp+160h] [rbp+60h] BYREF
  int v74; // [rsp+16Ch] [rbp+6Ch]
  int v75; // [rsp+170h] [rbp+70h]
  _BYTE v76[68]; // [rsp+174h] [rbp+74h] BYREF

  v4 = a4;
  v61 = a4;
  v6 = (unsigned int)a2;
  v65 = this;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    LODWORD(a3) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return (unsigned int)a3;
  }
  if ( !v4 || !a3 || (unsigned int)(v6 - 1) > 0xF )
  {
    v56 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v56[4] = a3;
    LODWORD(a3) = -1073741811;
    v56[6] = -1073741811LL;
    v56[3] = v4;
    v56[5] = v6;
    WdLogEvent5_WdWarning(v56);
    return (unsigned int)a3;
  }
  LODWORD(v4->Count) = 0;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8, v7);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v66, Global);
  v13 = 0;
  memset(v67, 0, sizeof(v67));
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v62, (struct _KTHREAD **)Current);
  if ( (_DWORD)v6 )
  {
    v14 = a3 - (char *)v67;
    v15 = (_QWORD *)((char *)Current + 208);
    v16 = v6;
    v17 = v67;
    v58 = v6;
    while ( 1 )
    {
      v18 = (*(_DWORD *)((char *)v17 + v14) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v18 < *((_DWORD *)Current + 56) )
      {
        v19 = *(_DWORD *)(*v15 + 16LL * (unsigned int)v18 + 8);
        if ( ((*(_DWORD *)((char *)v17 + v14) >> 25) & 0x60) == (*(_BYTE *)(*v15 + 16LL * (unsigned int)v18 + 8) & 0x60)
          && (v19 & 0x2000) == 0
          && (v19 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType((__int64)Current + 208, v18);
          v21 = EntryType == 11;
          *v17 = EntryType;
          v16 = v58;
          if ( v21 )
            v13 = 1;
          goto LABEL_17;
        }
        v16 = v58;
      }
      *v17 = 0;
LABEL_17:
      ++v17;
      v58 = --v16;
      if ( !v16 )
      {
        v4 = v61;
        break;
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v62);
  v74 = 0;
  v75 = 0;
  v73[2] = 1;
  v73[0] = 1869901170;
  v73[1] = -1073741823;
  memset(v76, 0, sizeof(v76));
  v72 = 0;
  v69 = 1869901170;
  v70 = -1073741823;
  v71 = 2;
  v60 = 16;
  if ( v13 )
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v66);
  `vector constructor iterator'(
    (char *)v68,
    8LL,
    16LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v62, (struct _KTHREAD **)Current);
  v24 = 0LL;
  if ( !(_DWORD)v6 )
  {
LABEL_58:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v62);
    v75 = v6;
    v74 = *((_DWORD *)Current + 92);
    v49 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, int *, unsigned int *))(**((_QWORD **)v65 + 1) + 32LL))(
            *((_QWORD *)v65 + 1),
            v73,
            88LL,
            &v69,
            &v60);
    a3 = (char *)v49;
    if ( v49 < 0 )
    {
      v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
      *(_QWORD *)(v53 + 24) = a3;
      WdLogEvent5_WdWarning(v53);
      goto LABEL_67;
    }
    if ( v60 == 16 )
    {
      if ( v71 == 2 )
      {
        LODWORD(a3) = v70;
        if ( v70 >= 0 )
          LODWORD(v4->Count) = v72;
        goto LABEL_67;
      }
      v54 = WdLogNewEntry5_WdWarning(v51, v50, v52);
      v55 = v71;
    }
    else
    {
      v54 = WdLogNewEntry5_WdWarning(v51, v50, v52);
      v55 = v60;
    }
    *(_QWORD *)(v54 + 24) = v55;
    *(_QWORD *)(v54 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v54);
    LODWORD(a3) = -1073741823;
    goto LABEL_67;
  }
  v25 = a3;
  v59 = v68;
  v26 = (char *)v67 - a3;
  v27 = &v76[4] - a3;
  v64 = (char *)v67 - a3;
  v63 = &v76[4] - a3;
  while ( 1 )
  {
    v28 = *(_DWORD *)&v25[v26];
    if ( v28 == 4 )
      break;
    if ( v28 != 11 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v22, v23);
      v48 = *(unsigned int *)&a3[4 * v24];
      LODWORD(a3) = -1073741811;
      v44[3] = v48;
      v44[4] = (int)v67[v24];
      v44[5] = -1073741811LL;
      goto LABEL_57;
    }
    v29 = *(unsigned int *)v25;
    v30 = (*(_DWORD *)v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 >= *((_DWORD *)Current + 56) )
      goto LABEL_50;
    v23 = *((_QWORD *)Current + 26);
    v29 = ((unsigned int)v29 >> 25) & 0x60;
    v27 = *(unsigned int *)(v23 + 16 * v30 + 8);
    if ( (_BYTE)v29 != (*(_BYTE *)(v23 + 16 * v30 + 8) & 0x60) || (v27 & 0x2000) != 0 || (v27 & 0x1F) == 0 )
      goto LABEL_50;
    v27 &= 0x1Fu;
    if ( (_BYTE)v27 != 11 )
    {
      v46 = WdLogNewEntry5_WdError(v27, v29, v23);
      *(_QWORD *)(v46 + 24) = 267LL;
      WdLogEvent5_WdError(v46);
LABEL_50:
      v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v29, v23);
      v47 = *(unsigned int *)&a3[4 * v24];
LABEL_53:
      v44[3] = v47;
      goto LABEL_56;
    }
    v31 = *(_QWORD *)(v23 + 16LL * (unsigned int)v30);
    if ( !v31 )
      goto LABEL_50;
    v32 = *(unsigned int *)(*(_QWORD *)(v31 + 32) + 196LL);
    if ( (v32 & 2) == 0 )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v29, v23);
      v45 = *(_QWORD *)(v31 + 32);
      goto LABEL_55;
    }
    v33 = *(_DWORD *)(v31 + 44);
    v34 = v59;
LABEL_45:
    v27 = v63;
    v22 = v34 + 1;
    v24 = (unsigned int)(v24 + 1);
    v59 = v22;
    *(_DWORD *)&v25[v63] = v33;
    v25 += 4;
    if ( (unsigned int)v24 >= (unsigned int)v6 )
      goto LABEL_58;
    v26 = v64;
  }
  v35 = (*(_DWORD *)v25 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v35 < *((_DWORD *)Current + 56) )
  {
    v36 = *((_QWORD *)Current + 26);
    v37 = *(_DWORD *)(v36 + 16 * v35 + 8);
    if ( ((*(_DWORD *)v25 >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60)
      && (v37 & 0x2000) == 0
      && (v37 & 0x1F) != 0 )
    {
      v38 = v37 & 0x1F;
      if ( (_BYTE)v38 == 4 )
      {
        v40 = *(struct _EX_RUNDOWN_REF **)(v36 + 16LL * (unsigned int)v35);
        goto LABEL_40;
      }
      v39 = WdLogNewEntry5_WdError(v38, (*(_DWORD *)v25 >> 25) & 0x60, 2LL * (unsigned int)v35);
      *(_QWORD *)(v39 + 24) = 267LL;
      WdLogEvent5_WdError(v39);
    }
  }
  v40 = 0LL;
LABEL_40:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v61, v40);
  DXGRESOURCEREFERENCE::MoveAssign((struct _EX_RUNDOWN_REF **)&v68[v24], &v61);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v61, v41);
  v34 = v59;
  v42 = *v59;
  if ( *v59 )
  {
    if ( (*(_DWORD *)(v42 + 4) & 1) != 0 )
    {
      v43 = *(_QWORD *)(v42 + 56);
      if ( v43 )
      {
        if ( (*(_DWORD *)(v43 + 12) & 8) == 0 )
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v59, v23);
          v47 = *(_QWORD *)(v68[v24] + 56LL);
          goto LABEL_53;
        }
        v33 = *(_DWORD *)(v42 + 20);
        goto LABEL_45;
      }
    }
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v59, v23);
  v45 = *(unsigned int *)&a3[4 * v24];
LABEL_55:
  v44[3] = v45;
LABEL_56:
  LODWORD(a3) = -1073741811;
  v44[4] = -1073741811LL;
LABEL_57:
  WdLogEvent5_WdWarning(v44);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v62);
LABEL_67:
  `vector destructor iterator'(
    (char *)v68,
    8LL,
    16LL,
    (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
  if ( v66[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v66);
  return (unsigned int)a3;
}
