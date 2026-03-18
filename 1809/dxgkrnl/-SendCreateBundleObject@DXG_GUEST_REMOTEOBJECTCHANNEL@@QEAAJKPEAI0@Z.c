/*
 * XREFs of ?SendCreateBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAI0@Z @ 0x1C022FFE8
 * Callers:
 *     ?VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z @ 0x1C025C4B0 (-VailSendCreateBundleObject@DXGSESSIONDATA@@QEAAJKPEAI0@Z.c)
 * Callees:
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000FFE8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0010EFC (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0010F58 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C00FFC64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C012BD74 (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObject(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
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
  unsigned int v18; // edx
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
  __int64 v41; // rcx
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v57; // [rsp+30h] [rbp-D0h]
  _QWORD *v58; // [rsp+30h] [rbp-D0h]
  unsigned int v59; // [rsp+38h] [rbp-C8h] BYREF
  struct _EX_RUNDOWN_REF *v60; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v61[24]; // [rsp+48h] [rbp-B8h] BYREF
  signed __int64 v62; // [rsp+60h] [rbp-A0h]
  signed __int64 v63; // [rsp+68h] [rbp-98h]
  DXG_GUEST_REMOTEOBJECTCHANNEL *v64; // [rsp+70h] [rbp-90h]
  _BYTE v65[24]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v66[16]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v67[16]; // [rsp+D0h] [rbp-30h] BYREF
  signed __int64 v68; // [rsp+150h] [rbp+50h] BYREF
  __int64 v69; // [rsp+158h] [rbp+58h]
  _DWORD v70[3]; // [rsp+160h] [rbp+60h] BYREF
  int v71; // [rsp+16Ch] [rbp+6Ch]
  int v72; // [rsp+170h] [rbp+70h]
  _BYTE v73[68]; // [rsp+174h] [rbp+74h] BYREF

  v4 = a4;
  v60 = a4;
  v6 = a2;
  v64 = this;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    LODWORD(a3) = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return (unsigned int)a3;
  }
  if ( !v4 || !a3 || (unsigned int)(v6 - 1) > 0xF )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9);
    v55[4] = a3;
    LODWORD(a3) = -1073741811;
    v55[6] = -1073741811LL;
    v55[3] = v4;
    v55[5] = v6;
    WdLogEvent5_WdWarning(v55);
    return (unsigned int)a3;
  }
  LODWORD(v4->Count) = 0;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v8);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v65, Global);
  v13 = 0;
  memset(v66, 0, sizeof(v66));
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v61, (struct _KTHREAD **)Current);
  if ( (_DWORD)v6 )
  {
    v14 = a3 - (char *)v66;
    v15 = (_QWORD *)((char *)Current + 232);
    v16 = v6;
    v17 = v66;
    v57 = v6;
    while ( 1 )
    {
      v18 = (*(_DWORD *)((char *)v17 + v14) >> 6) & 0xFFFFFF;
      if ( v18 < *((_DWORD *)Current + 62) )
      {
        v19 = *(_DWORD *)(*v15 + 16LL * v18 + 8);
        if ( ((*(_DWORD *)((char *)v17 + v14) >> 25) & 0x60) == (*(_BYTE *)(*v15 + 16LL * v18 + 8) & 0x60)
          && (v19 & 0x2000) == 0
          && (v19 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType((__int64)Current + 232, v18);
          v21 = EntryType == 11;
          *v17 = EntryType;
          v16 = v57;
          if ( v21 )
            v13 = 1;
          goto LABEL_17;
        }
        v16 = v57;
      }
      *v17 = 0;
LABEL_17:
      ++v17;
      v57 = --v16;
      if ( !v16 )
      {
        v4 = v60;
        break;
      }
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v61);
  v71 = 0;
  v72 = 0;
  v70[2] = 1;
  v70[0] = 1869901170;
  v70[1] = -1073741823;
  memset(v73, 0, sizeof(v73));
  v59 = 16;
  v68 = 0xC00000016F746D72uLL;
  v69 = 2LL;
  if ( v13 )
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v65);
  `vector constructor iterator'(
    (char *)v67,
    8LL,
    16LL,
    (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v61, (struct _KTHREAD **)Current);
  v24 = 0LL;
  if ( !(_DWORD)v6 )
  {
LABEL_58:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v61);
    v72 = v6;
    v71 = *((_DWORD *)Current + 98);
    v48 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, signed __int64 *, unsigned int *))(**((_QWORD **)v64 + 1)
                                                                                                 + 32LL))(
            *((_QWORD *)v64 + 1),
            v70,
            88LL,
            &v68,
            &v59);
    a3 = (char *)v48;
    if ( v48 < 0 )
    {
      v52 = WdLogNewEntry5_WdWarning(v50, v49, v51);
      *(_QWORD *)(v52 + 24) = a3;
      WdLogEvent5_WdWarning(v52);
      goto LABEL_67;
    }
    if ( v59 == 16 )
    {
      if ( (_DWORD)v69 == 2 )
      {
        LODWORD(a3) = HIDWORD(v68);
        if ( v68 >= 0 )
          LODWORD(v4->Count) = HIDWORD(v69);
        goto LABEL_67;
      }
      v53 = WdLogNewEntry5_WdWarning(v50, v49, v51);
      v54 = (int)v69;
    }
    else
    {
      v53 = WdLogNewEntry5_WdWarning(v50, v49, v51);
      v54 = v59;
    }
    *(_QWORD *)(v53 + 24) = v54;
    *(_QWORD *)(v53 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v53);
    LODWORD(a3) = -1073741823;
    goto LABEL_67;
  }
  v25 = a3;
  v58 = v67;
  v26 = (char *)v66 - a3;
  v27 = &v73[4] - a3;
  v63 = (char *)v66 - a3;
  v62 = &v73[4] - a3;
  while ( 1 )
  {
    v28 = *(_DWORD *)&v25[v26];
    if ( v28 == 4 )
      break;
    if ( v28 != 11 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v22, v23);
      v47 = *(unsigned int *)&a3[4 * v24];
      LODWORD(a3) = -1073741811;
      v43[3] = v47;
      v43[4] = (int)v66[v24];
      v43[5] = -1073741811LL;
      goto LABEL_57;
    }
    v29 = *(unsigned int *)v25;
    v30 = (*(_DWORD *)v25 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v30 >= *((_DWORD *)Current + 62) )
      goto LABEL_50;
    v23 = *((_QWORD *)Current + 29);
    v29 = ((unsigned int)v29 >> 25) & 0x60;
    v27 = *(unsigned int *)(v23 + 16 * v30 + 8);
    if ( (_BYTE)v29 != (*(_BYTE *)(v23 + 16 * v30 + 8) & 0x60) || (v27 & 0x2000) != 0 || (v27 & 0x1F) == 0 )
      goto LABEL_50;
    v27 &= 0x1Fu;
    if ( (_BYTE)v27 != 11 )
    {
      v45 = WdLogNewEntry5_WdError(v27);
      *(_QWORD *)(v45 + 24) = 316LL;
      WdLogEvent5_WdError(v45);
LABEL_50:
      v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v29, v23);
      v46 = *(unsigned int *)&a3[4 * v24];
LABEL_53:
      v43[3] = v46;
      goto LABEL_56;
    }
    v31 = *(_QWORD *)(v23 + 16LL * (unsigned int)v30);
    if ( !v31 )
      goto LABEL_50;
    v32 = *(unsigned int *)(*(_QWORD *)(v31 + 32) + 172LL);
    if ( (v32 & 2) == 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v29, v23);
      v44 = *(_QWORD *)(v31 + 32);
      goto LABEL_55;
    }
    v33 = *(_DWORD *)(v31 + 44);
    v34 = v58;
LABEL_45:
    v27 = v62;
    v22 = v34 + 1;
    v24 = (unsigned int)(v24 + 1);
    v58 = v22;
    *(_DWORD *)&v25[v62] = v33;
    v25 += 4;
    if ( (unsigned int)v24 >= (unsigned int)v6 )
      goto LABEL_58;
    v26 = v63;
  }
  v35 = (*(_DWORD *)v25 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v35 < *((_DWORD *)Current + 62) )
  {
    v36 = *((_QWORD *)Current + 29);
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
      v39 = WdLogNewEntry5_WdError(v38);
      *(_QWORD *)(v39 + 24) = 316LL;
      WdLogEvent5_WdError(v39);
    }
  }
  v40 = 0LL;
LABEL_40:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v60, v40);
  DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)&v67[v24], (struct DXGRESOURCE **)&v60);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v60);
  v34 = v58;
  v41 = *v58;
  if ( *v58 )
  {
    if ( (*(_DWORD *)(v41 + 4) & 1) != 0 )
    {
      v42 = *(_QWORD *)(v41 + 56);
      if ( v42 )
      {
        if ( (*(_DWORD *)(v42 + 12) & 8) == 0 )
        {
          v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v58, v23);
          v46 = *(_QWORD *)(v67[v24] + 56LL);
          goto LABEL_53;
        }
        v33 = *(_DWORD *)(v41 + 20);
        goto LABEL_45;
      }
    }
  }
  v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v41, v58, v23);
  v44 = *(unsigned int *)&a3[4 * v24];
LABEL_55:
  v43[3] = v44;
LABEL_56:
  LODWORD(a3) = -1073741811;
  v43[4] = -1073741811LL;
LABEL_57:
  WdLogEvent5_WdWarning(v43);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v61);
LABEL_67:
  `vector destructor iterator'(
    (char *)v67,
    8LL,
    16LL,
    (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
  if ( v65[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v65);
  return (unsigned int)a3;
}
