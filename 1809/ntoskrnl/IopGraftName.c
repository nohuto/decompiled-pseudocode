/*
 * XREFs of IopGraftName @ 0x1406AD50C
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1406AD4B0 (IopSymlinkProcessReparse.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     IopSymlinkRemoveECP @ 0x1400B7AE8 (IopSymlinkRemoveECP.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x14012592C (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x140125948 (IopSymlinkGetECP.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopCopyOverNewPathSecure @ 0x140582EF0 (IopCopyOverNewPathSecure.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060DFB0 (FsRtlFreeExtraCreateParameter.c)
 *     IoGetIrpExtraCreateParameter @ 0x14063FDB0 (IoGetIrpExtraCreateParameter.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 *     IopGetFileInformation @ 0x140662AD0 (IopGetFileInformation.c)
 *     IopSymlinkUpdateECP @ 0x1406ACF50 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406AD0F8 (IopSymlinkRememberJunction.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1406AD300 (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1406AD3E4 (IopSymlinkAllocateAndAddECP.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1406ADB60 (IopSymlinkGetRelatedMountPoint.c)
 *     IopSymlinkApplyToOpenedName @ 0x14081EFF0 (IopSymlinkApplyToOpenedName.c)
 */

IRP *__fastcall IopGraftName(IRP *a1, __int64 a2, int *a3)
{
  PVOID v3; // r12
  unsigned int v5; // edi
  char *v6; // r13
  const void **v7; // rsi
  int IrpExtraCreateParameter; // ebx
  UNICODE_STRING *v9; // r15
  __int64 v10; // r10
  unsigned __int64 v11; // rcx
  char v12; // r9
  __int64 v13; // rdx
  int v14; // eax
  bool v15; // sf
  __int16 v16; // r10
  char *v17; // rax
  ULONG v18; // esi
  unsigned int v19; // r15d
  unsigned __int16 *PoolWithTag; // rax
  const void **v21; // r12
  int v22; // eax
  unsigned int v23; // r15d
  struct _IRP *v24; // rax
  struct _IRP *v25; // r12
  int FileInformation; // eax
  unsigned int v27; // eax
  unsigned int v28; // ecx
  __int64 RelatedMountPoint; // rax
  unsigned __int16 v30; // r10
  char v31; // r11
  unsigned int v32; // r9d
  unsigned int v33; // r12d
  char *v34; // rax
  __int16 v35; // r12
  struct _IRP *v36; // rdi
  char *v37; // rbx
  char *v38; // rdx
  __int16 v39; // di
  unsigned __int16 v40; // di
  PVOID v41; // rsi
  unsigned int v42; // r15d
  __int16 v43; // dx
  void *MostRecentlyUsedName; // rax
  int updated; // eax
  PVOID v46; // rcx
  IRP *result; // rax
  int v48; // ecx
  PVOID EcpContext; // [rsp+50h] [rbp-39h] BYREF
  PVOID P; // [rsp+58h] [rbp-31h]
  PVOID Object; // [rsp+60h] [rbp-29h]
  __int64 v52; // [rsp+68h] [rbp-21h] BYREF
  struct _ECP_LIST *ExtraCreateParameter; // [rsp+70h] [rbp-19h] BYREF
  char *v54; // [rsp+78h] [rbp-11h]
  struct _IRP *v55; // [rsp+80h] [rbp-9h]
  PVOID v56; // [rsp+88h] [rbp-1h]
  unsigned __int16 *v57; // [rsp+90h] [rbp+7h]
  char v60; // [rsp+100h] [rbp+77h]
  PVOID v61; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = *(PVOID *)(a2 + 64);
  Object = v3;
  LOWORD(v61) = 0;
  v5 = 0;
  v54 = 0LL;
  v6 = 0LL;
  EcpContext = 0LL;
  v60 = 0;
  v7 = 0LL;
  v56 = 0LL;
  P = 0LL;
  v55 = 0LL;
  ExtraCreateParameter = 0LL;
  IrpExtraCreateParameter = IoGetIrpExtraCreateParameter(a1, &ExtraCreateParameter);
  IopSymlinkGetECP(ExtraCreateParameter, &EcpContext);
  v9 = (UNICODE_STRING *)EcpContext;
  v10 = 4194817LL;
  *((_WORD *)EcpContext + 1) |= 2u;
  if ( a1->IoStatus.Status != 260 )
    IrpExtraCreateParameter = -1073741192;
  v11 = a1->IoStatus.Information - 2684354563u;
  if ( v11 > 0x16 || !_bittest64(&v10, v11) )
    IrpExtraCreateParameter = -1073741192;
  v12 = 0;
  v13 = *((unsigned __int16 *)a3 + 3);
  if ( !a1->Tail.Overlay.AuxiliaryBuffer )
    IrpExtraCreateParameter = -1073741192;
  if ( !a3 )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned __int16)v13 >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  v14 = *a3;
  if ( *((_WORD *)a3 + 2) >= 0x4000u )
    IrpExtraCreateParameter = -1073741192;
  if ( (unsigned int)(v14 + 1610612733) > 0x16 || !_bittest((const int *)&v10, v14 + 1610612733) )
    IrpExtraCreateParameter = -1073741192;
  v57 = (unsigned __int16 *)(a2 + 88);
  if ( !*(_WORD *)(a2 + 88) )
    IrpExtraCreateParameter = -1073741192;
  v15 = IrpExtraCreateParameter < 0;
  if ( IrpExtraCreateParameter >= 0 )
  {
    if ( v14 == -1610612733 )
    {
      v16 = *((_WORD *)a3 + 5);
      v54 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 16;
      LOWORD(v61) = v16;
    }
    else if ( v14 == -1610612724 )
    {
      v17 = (char *)a3 + *((unsigned __int16 *)a3 + 4) + 20;
      LOWORD(v61) = *((_WORD *)a3 + 5);
      v54 = v17;
      if ( (a3[4] & 1) == 0 )
        goto LABEL_53;
      v60 = 1;
      v18 = 256;
      v19 = 256;
      if ( v3 && !IopGetFileObjectExtension((__int64)v3, 5, 0LL) )
      {
        while ( 1 )
        {
          PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, v19, 0x63466F49u);
          v12 = 0;
          P = PoolWithTag;
          v21 = (const void **)PoolWithTag;
          if ( !PoolWithTag )
            break;
          memset(PoolWithTag, 0, v19);
          v22 = ObQueryNameStringMode(*(char **)(a2 + 8), (__int64)v21, v19, &v52, 0);
          v12 = 0;
          IrpExtraCreateParameter = v22;
          if ( v22 >= 0 )
            goto LABEL_33;
          if ( v22 != -2147483643 )
            goto LABEL_32;
          v19 = v52;
          if ( (unsigned int)v52 >= 0xFFFF )
          {
            IrpExtraCreateParameter = -1073741562;
LABEL_32:
            if ( IrpExtraCreateParameter >= 0 )
            {
LABEL_33:
              v5 = *v57 + *(unsigned __int16 *)v21 - *((unsigned __int16 *)a3 + 3);
              v23 = v5;
              while ( 1 )
              {
                v24 = (struct _IRP *)ExAllocatePoolWithTag(PagedPool, v18, 0x63466F49u);
                v12 = 0;
                v56 = v24;
                v25 = v24;
                if ( !v24 )
                {
                  IrpExtraCreateParameter = -1073741670;
                  goto LABEL_40;
                }
                v55 = v24;
                memset(v24, 0, v18);
                FileInformation = IopGetFileInformation((struct _FILE_OBJECT *)Object, v18, 9u, v25, &v52);
                v12 = 0;
                IrpExtraCreateParameter = FileInformation;
                if ( FileInformation >= 0 )
                  break;
                if ( FileInformation != -2147483643 )
                  goto LABEL_40;
                v18 = *(_DWORD *)&v25->Type + 8;
                if ( v18 >= 0xFFFF )
                {
                  IrpExtraCreateParameter = -1073741562;
LABEL_40:
                  v7 = (const void **)P;
                  goto LABEL_51;
                }
                ExFreePoolWithTag(v25, 0);
              }
              v27 = -1;
              v28 = v5 + *(_DWORD *)&v25->Type;
              if ( v28 >= v5 )
                v27 = v5 + *(_DWORD *)&v25->Type;
              v5 = v27;
              if ( v28 < v23 )
              {
                IrpExtraCreateParameter = -1073741675;
                goto LABEL_40;
              }
              v9 = (UNICODE_STRING *)EcpContext;
              v7 = (const void **)P;
              v3 = Object;
              if ( v27 >= 0xFFFF )
                IrpExtraCreateParameter = -1073741562;
              goto LABEL_53;
            }
            v7 = v21;
LABEL_51:
            v3 = Object;
            goto LABEL_52;
          }
          ExFreePoolWithTag(v21, 0);
        }
        IrpExtraCreateParameter = -1073741670;
        v7 = 0LL;
        goto LABEL_51;
      }
      v7 = 0LL;
LABEL_52:
      v9 = (UNICODE_STRING *)EcpContext;
LABEL_53:
      v13 = *((unsigned __int16 *)a3 + 3);
    }
    else
    {
      IrpExtraCreateParameter = -1073741194;
    }
    if ( IrpExtraCreateParameter < 0 )
      goto LABEL_93;
    RelatedMountPoint = IopSymlinkGetRelatedMountPoint(v9, v13);
    if ( !RelatedMountPoint )
      RelatedMountPoint = IopSymlinkGetMostRecentlyUsedName((__int64)v9);
    v31 = v60;
    v32 = *(unsigned __int16 *)(RelatedMountPoint + 16);
    if ( v60 )
    {
      if ( !v3 || IopGetFileObjectExtension((__int64)v3, 5, 0LL) )
      {
        if ( v5 <= v32 )
          v5 = v32;
      }
      else
      {
        v5 += v32;
      }
      v5 += 2;
    }
    v33 = v5 + v30 + *((unsigned __int16 *)a3 + 3) + 4;
    if ( v33 >= 0xFFFF )
    {
      IrpExtraCreateParameter = -1073741562;
    }
    else
    {
      v34 = (char *)ExAllocatePoolWithTag(PagedPool, v33, 0x63466F49u);
      v12 = 0;
      v6 = v34;
      if ( !v34 )
      {
        v30 = (unsigned __int16)v61;
        IrpExtraCreateParameter = -1073741670;
        v31 = v60;
        goto LABEL_71;
      }
      memset(v34, 0, v33);
      v30 = (unsigned __int16)v61;
      v31 = v60;
    }
    v12 = 0;
LABEL_71:
    v35 = v33 - 2;
    if ( IrpExtraCreateParameter < 0 )
      goto LABEL_93;
    if ( v31 )
    {
      v61 = 0LL;
      if ( Object && !IopGetFileObjectExtension((__int64)Object, 5, 0LL) )
      {
        memmove(v6, v7[1], *(unsigned __int16 *)v7);
        v36 = v55;
        v37 = &v6[2 * ((unsigned __int64)*(unsigned __int16 *)v7 >> 1)];
        memmove(v37, &v55->Size + 1, *(unsigned int *)&v55->Type);
        v38 = &v37[2 * ((unsigned __int64)*(unsigned int *)&v36->Type >> 1)];
        v39 = (_WORD)v37 + 2 * ((unsigned __int64)*(unsigned int *)&v36->Type >> 1);
        if ( **(_WORD **)(a2 + 96) != 92 && *((_WORD *)v38 - 1) != 92 )
        {
          *(_WORD *)v38 = 92;
          v39 = (_WORD)v38 + 2;
        }
        v40 = v39 - (_WORD)v6;
        IopSymlinkRemoveECP(ExtraCreateParameter, &EcpContext);
        v41 = EcpContext;
        v42 = v40 + *((unsigned __int16 *)EcpContext + 8) + 2;
        if ( v42 >= 0xFFFF )
        {
          IrpExtraCreateParameter = -1073741562;
LABEL_80:
          ExFreePoolWithTag(v6, 0);
LABEL_92:
          v12 = 0;
LABEL_93:
          if ( v60 == v12 )
            goto LABEL_99;
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( !v56 )
            goto LABEL_99;
          v46 = v56;
          goto LABEL_98;
        }
        IrpExtraCreateParameter = IopSymlinkAllocateAndAddECP(a1, &v61, v40 + *((_WORD *)EcpContext + 8) + 2);
        if ( IrpExtraCreateParameter < 0 )
          goto LABEL_80;
        v43 = v42 + 32;
        v9 = (UNICODE_STRING *)v61;
        IopSymlinkInitializeSymlinkInfo(
          (__int64)v61,
          v43,
          *((const void **)v41 + 3),
          *((_WORD *)v41 + 8),
          *(_WORD *)v41,
          v6,
          v40,
          *(_WORD *)P,
          *((_WORD *)v41 + 1),
          *((_QWORD *)v41 + 1));
        FsRtlFreeExtraCreateParameter(v41);
      }
      MostRecentlyUsedName = (void *)IopSymlinkGetRelatedMountPoint(v9, *((unsigned __int16 *)a3 + 3));
      if ( !MostRecentlyUsedName )
        MostRecentlyUsedName = (void *)IopSymlinkGetMostRecentlyUsedName((__int64)v9);
      updated = IopSymlinkApplyToOpenedName(a2, MostRecentlyUsedName, (int)a3, a1, v6, v35);
    }
    else
    {
      IrpExtraCreateParameter = IopCopyOverNewPathSecure(v6, v54, v30, a2, *((_WORD *)a3 + 3));
      if ( IrpExtraCreateParameter < 0 )
      {
        v46 = v6;
LABEL_98:
        ExFreePoolWithTag(v46, 0);
        goto LABEL_99;
      }
      if ( *a3 == -1610612733 )
      {
        IrpExtraCreateParameter = IopSymlinkRememberJunction(*((_WORD *)a3 + 3), a2, (__int64)a1, v9);
LABEL_99:
        v15 = IrpExtraCreateParameter < 0;
        goto LABEL_100;
      }
      updated = IopSymlinkUpdateECP(a1, v9, 0, (const UNICODE_STRING *)(a2 + 88), 0, v9->MaximumLength & 0xFFFE);
    }
    IrpExtraCreateParameter = updated;
    goto LABEL_92;
  }
LABEL_100:
  result = a1;
  v48 = 260;
  if ( v15 )
    v48 = IrpExtraCreateParameter;
  a1->IoStatus.Status = v48;
  return result;
}
