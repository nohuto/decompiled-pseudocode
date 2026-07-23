/*
 * XREFs of PnpFilterResourceRequirementsList @ 0x140740D10
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FC3D4 (PnpGetResourceRequirementsForAssignTable.c)
 *     IopQueryDeviceResources @ 0x1406FC794 (IopQueryDeviceResources.c)
 * Callees:
 *     RtlCmDecodeMemIoResource @ 0x140139500 (RtlCmDecodeMemIoResource.c)
 *     RtlIoDecodeMemIoResource @ 0x1401840C0 (RtlIoDecodeMemIoResource.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpCmResourcesToIoResources @ 0x1407310C4 (PnpCmResourcesToIoResources.c)
 */

__int64 __fastcall PnpFilterResourceRequirementsList(_DWORD *Src, unsigned int *a2, char **a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned int *v6; // r12
  int v8; // r15d
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // r13
  unsigned int *v11; // rdi
  __int64 v12; // r9
  unsigned int *v13; // rcx
  unsigned int v14; // eax
  __int64 i; // r8
  char v16; // al
  unsigned int v17; // edx
  int v18; // eax
  _DWORD *v19; // r14
  int v20; // r10d
  _DWORD *v21; // rdx
  int v22; // r9d
  _DWORD *v23; // r8
  bool v24; // zf
  int v25; // ecx
  int v26; // r9d
  __int64 v27; // r11
  struct _IO_RESOURCE_DESCRIPTOR *v28; // r8
  __int64 v29; // rdx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v30; // rax
  int v31; // r10d
  unsigned int v32; // ecx
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v33; // r15
  ULONG v34; // r9d
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v35; // r13
  unsigned __int64 v36; // r12
  unsigned int v37; // eax
  struct _IO_RESOURCE_DESCRIPTOR *v38; // rdi
  UCHAR Type; // r12
  unsigned __int64 v40; // rax
  int ShareDisposition; // eax
  unsigned __int64 v42; // r10
  int v43; // edx
  bool v44; // cc
  int v45; // r8d
  int v46; // r9d
  unsigned __int64 v47; // r11
  unsigned __int64 Vector; // r15
  unsigned __int64 v49; // rdx
  unsigned __int64 Length; // rax
  unsigned __int64 v51; // rcx
  UCHAR v52; // cl
  struct _IO_RESOURCE_DESCRIPTOR *m; // rdi
  __int64 LowPart; // rax
  int v55; // ecx
  unsigned int v56; // r14d
  unsigned int *v57; // rax
  unsigned int *v58; // rdi
  unsigned int v59; // eax
  int v60; // r11d
  _DWORD *v61; // r8
  _DWORD *v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // r9
  __int16 v65; // ax
  char *v66; // rcx
  ULONGLONG v67; // rax
  ULONGLONG v68; // rax
  int v70; // r12d
  int v71; // r12d
  int v72; // r12d
  int v73; // r12d
  int v74; // r12d
  struct _IO_RESOURCE_DESCRIPTOR *j; // rax
  struct _IO_RESOURCE_DESCRIPTOR *k; // rax
  unsigned __int64 v77; // [rsp+28h] [rbp-79h]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v78; // [rsp+30h] [rbp-71h]
  int v79; // [rsp+38h] [rbp-69h]
  unsigned int v80; // [rsp+3Ch] [rbp-65h]
  int v81; // [rsp+40h] [rbp-61h]
  int v82; // [rsp+44h] [rbp-5Dh]
  __int16 v83; // [rsp+4Ch] [rbp-55h]
  ULONG v84; // [rsp+50h] [rbp-51h]
  unsigned int v85; // [rsp+54h] [rbp-4Dh]
  int v86; // [rsp+58h] [rbp-49h]
  int v87; // [rsp+5Ch] [rbp-45h]
  unsigned __int64 Start; // [rsp+60h] [rbp-41h] BYREF
  unsigned __int64 MaximumAddress; // [rsp+68h] [rbp-39h] BYREF
  unsigned __int64 MinimumAddress; // [rsp+70h] [rbp-31h] BYREF
  int v91; // [rsp+78h] [rbp-29h]
  int v92; // [rsp+7Ch] [rbp-25h]
  int v93; // [rsp+80h] [rbp-21h]
  unsigned __int64 Alignment; // [rsp+88h] [rbp-19h] BYREF
  _DWORD *v95; // [rsp+90h] [rbp-11h]
  unsigned __int64 v96; // [rsp+98h] [rbp-9h]
  ULONGLONG v97; // [rsp+A0h] [rbp-1h]
  _DWORD *v98; // [rsp+A8h] [rbp+7h]
  __int64 v99; // [rsp+B0h] [rbp+Fh]
  struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *v100; // [rsp+108h] [rbp+67h]
  UCHAR v101; // [rsp+108h] [rbp+67h]

  v4 = 0;
  v95 = 0LL;
  v6 = a2;
  v81 = 0;
  *a3 = 0LL;
  v8 = 0;
  *a4 = 0;
  if ( !Src || !Src[7] )
  {
    if ( a2 && *a2 )
      *a3 = PnpCmResourcesToIoResources((__int64)Src, a2, 1);
    return 0LL;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)*Src, 0x75737050u);
  v98 = PoolWithTag;
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, (unsigned int)*Src);
  if ( !v6 || !*v6 )
    goto LABEL_151;
  v11 = v6 + 1;
  v12 = *v6;
  v13 = v6 + 1;
  do
  {
    v14 = v13[3];
    v13 += 4;
    v8 += v14;
    if ( v14 )
    {
      for ( i = v14; i; --i )
      {
        v16 = *(_BYTE *)v13;
        v17 = 0;
        if ( *(_BYTE *)v13 == 5 )
        {
          v17 = v13[1];
        }
        else if ( v16 >= -126 && (unsigned __int8)(v16 - 1) <= 6u )
        {
          goto LABEL_12;
        }
        --v8;
LABEL_12:
        v13 = (unsigned int *)((char *)v13 + v17 + 20);
      }
    }
    --v12;
  }
  while ( v12 );
  v82 = v8;
  if ( !v8 )
  {
LABEL_151:
    *a3 = (char *)v10;
    return 0LL;
  }
  v18 = v10[7];
  v19 = v10 + 8;
  v20 = 0;
  v87 = 0;
  v21 = v10 + 8;
  v22 = v18 - 1;
  if ( v18 - 1 >= 0 )
  {
    do
    {
      v23 = v21 + 2;
      v21 += 8 * (unsigned int)v21[1] + 2;
      while ( v23 < v21 )
      {
        v24 = *((_BYTE *)v23 + 1) == 0;
        v25 = v20 + 1;
        *((_BYTE *)v23 + 3) = 0;
        if ( !v24 )
          v25 = v20;
        v23 += 8;
        v20 = v25;
      }
      --v22;
    }
    while ( v22 >= 0 );
    v18 = v10[7];
    v87 = v20;
  }
  v26 = v18 - 1;
  v93 = v18 - 1;
  v86 = v18 - 1;
  if ( v18 - 1 >= 0 )
  {
    while ( 2 )
    {
      v83 = *(_WORD *)v19;
      if ( *(_WORD *)v19 == 0xFFFF )
        v83 = 1;
      v27 = (unsigned int)v19[1];
      v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
      *(_WORD *)v19 = 0;
      v29 = (__int64)&v19[8 * v27 + 2];
      v99 = v27;
      v77 = v29;
      if ( v19 + 2 == (_DWORD *)v29 )
      {
        *(_WORD *)v19 = -1;
        --v10[7];
        goto LABEL_78;
      }
      v30 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v11;
      v31 = 1;
      v32 = 0;
      v100 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)v11;
      v79 = 1;
      v85 = 0;
      if ( *v6 )
      {
        do
        {
          v33 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v30->u.Memory48 + 1);
          v34 = 0;
          v78 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)(&v30->u.Memory48 + 1);
          v84 = 0;
          if ( v30->u.Generic.Length )
          {
            v35 = v100;
            do
            {
              if ( v33->Type == 5 )
              {
                LowPart = v33->u.Generic.Start.LowPart;
              }
              else
              {
                if ( v33->Type != 129 && (unsigned __int8)(v33->Type - 1) <= 6u )
                {
                  v36 = v77;
                  v37 = 0;
                  v80 = 0;
                  while ( 1 )
                  {
                    v38 = v28;
                    if ( (unsigned __int64)v28 >= v36 )
                      goto LABEL_65;
                    Type = v33->Type;
                    v40 = v77;
                    v101 = v33->Type;
                    while ( 1 )
                    {
                      if ( v38->Type != Type || v38->Spare1 )
                        goto LABEL_39;
                      ShareDisposition = v33->ShareDisposition;
                      v42 = 1LL;
                      v43 = v38->ShareDisposition;
                      v44 = (unsigned __int8)(v33->ShareDisposition - 1) <= 2u;
                      Alignment = 1LL;
                      v45 = ShareDisposition;
                      if ( !v44 )
                        v45 = v43;
                      v46 = v43;
                      v91 = v45;
                      v47 = 1LL;
                      if ( (unsigned __int8)(v43 - 1) > 2u )
                        v46 = (unsigned __int8)v45;
                      v92 = v46;
                      switch ( Type )
                      {
                        case 1u:
                          goto LABEL_96;
                        case 2u:
                          Vector = v33->u.Interrupt.Vector;
                          Start = Vector;
                          v49 = (unsigned int)Vector;
LABEL_49:
                          Length = v38->u.Port.Length;
                          v51 = v38->u.Port.Alignment;
                          MinimumAddress = Length;
                          MaximumAddress = v51;
                          break;
                        case 3u:
LABEL_96:
                          v67 = RtlCmDecodeMemIoResource(v33, &Start);
                          Vector = Start;
                          v97 = v67;
                          v96 = v67 + Start - 1;
                          v68 = RtlIoDecodeMemIoResource(v38, &Alignment, &MinimumAddress, &MaximumAddress);
                          v51 = MaximumAddress;
                          v47 = v68;
                          Length = MinimumAddress;
                          v49 = v96;
                          LOBYTE(v45) = v91;
                          LOBYTE(v46) = v92;
                          v42 = v97;
                          break;
                        case 4u:
                          v49 = v33->u.Generic.Start.LowPart;
                          Vector = v49;
                          Start = v49;
                          goto LABEL_49;
                        case 6u:
                          Vector = v33->u.Generic.Start.LowPart;
                          v51 = v38->u.Port.MinimumAddress.LowPart;
                          v47 = v38->u.Port.Length;
                          v42 = v78->u.Interrupt.Vector;
                          Length = v38->u.Port.Alignment;
                          Start = Vector;
                          MinimumAddress = Length;
                          MaximumAddress = v51;
                          v49 = (unsigned int)(Vector + v42 - 1);
                          break;
                        case 7u:
                          goto LABEL_96;
                        default:
                          Length = 0LL;
                          MinimumAddress = 0LL;
                          Vector = 0LL;
                          Start = 0LL;
                          v51 = 0LL;
                          MaximumAddress = 0LL;
                          v49 = 0LL;
                          break;
                      }
                      if ( v80 )
                      {
                        v79 = 0;
                        if ( v51 >= v49
                          && (_BYTE)v45 == (_BYTE)v46
                          && Length <= Vector
                          && v47 >= v42
                          && ((Alignment - 1) & Vector) == 0 )
                        {
                          v70 = Type - 1;
                          if ( !v70 )
                            goto LABEL_125;
                          v71 = v70 - 1;
                          if ( !v71 )
                            goto LABEL_135;
                          v72 = v71 - 1;
                          if ( !v72 )
                            goto LABEL_125;
                          v73 = v72 - 1;
                          if ( v73 )
                          {
                            v74 = v73 - 2;
                            if ( v74 )
                            {
                              if ( v74 == 1 )
                              {
LABEL_125:
                                v38->u.Port.MinimumAddress.QuadPart = Vector;
                                v38->u.Port.MaximumAddress.QuadPart = Vector + v47 - 1;
                              }
                            }
                            else
                            {
                              v38->u.Port.Alignment = Vector;
                              v38->u.Port.MinimumAddress.LowPart = v47 + Vector - 1;
                            }
                          }
                          else
                          {
LABEL_135:
                            v38->u.Port.Length = Vector;
                            v38->u.Port.Alignment = v49;
                          }
                          ++*(_WORD *)v19;
                          v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                          v24 = (v38->Option & 8) == 0;
                          v33 = v78;
                          v38->Spare1 = 0x80;
                          v38->Flags = v78->Flags;
                          if ( !v24 )
                          {
                            for ( j = v38 - 1; j >= v28; --j )
                            {
                              j->Type = 0;
                              --v19[1];
                              if ( j->Option != 8 )
                                break;
                            }
                          }
                          v36 = v77;
                          v38->Option = 1;
                          while ( (unsigned __int64)++v38 < v77 && (v38->Option & 8) != 0 )
                          {
                            v38->Type = 0;
                            --v19[1];
                          }
                          v31 = 0;
LABEL_41:
                          v37 = v80;
                          goto LABEL_65;
                        }
                        goto LABEL_98;
                      }
                      if ( Length == Vector && (_BYTE)v45 == (_BYTE)v46 && v51 >= v49 && v47 >= v42 )
                        break;
LABEL_98:
                      v33 = v78;
                      Type = v101;
                      v40 = v77;
LABEL_39:
                      if ( (unsigned __int64)++v38 >= v40 )
                      {
                        v36 = v77;
                        v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                        v31 = v79;
                        goto LABEL_41;
                      }
                    }
                    v31 = v79;
                    v28 = (struct _IO_RESOURCE_DESCRIPTOR *)(v19 + 2);
                    if ( v51 != v49 )
                      v31 = 0;
                    ++*(_WORD *)v19;
                    v24 = (v38->Option & 8) == 0;
                    v79 = v31;
                    v38->Spare1 = 0x80;
                    if ( !v24 )
                    {
                      for ( k = v38 - 1; k >= v28; --k )
                      {
                        k->Type = 0;
                        --v19[1];
                        if ( k->Option != 8 )
                          break;
                      }
                    }
                    v52 = v38->Type;
                    v38->Option = 1;
                    v38->Flags = v78->Flags;
                    if ( ((v52 - 1) & 0xF9) != 0 || v52 == 5 )
                    {
                      if ( v52 == 6 )
                      {
                        v38->u.Port.Alignment = Vector;
                        v38->u.Port.MinimumAddress.LowPart = v47 + Vector - 1;
                      }
                    }
                    else
                    {
                      v38->u.Port.MinimumAddress.QuadPart = Vector;
                      v38->u.Port.Alignment = 1;
                      v38->u.Port.MaximumAddress.QuadPart = Vector + v47 - 1;
                    }
                    v36 = v77;
                    for ( m = v38 + 1; (unsigned __int64)m < v77 && (m->Option & 8) != 0; ++m )
                    {
                      m->Type = 0;
                      --v19[1];
                    }
                    v33 = v78;
                    v37 = 1;
LABEL_65:
                    v80 = ++v37;
                    if ( v37 >= 2 )
                    {
                      v34 = v84;
                      break;
                    }
                  }
                }
                LowPart = 0LL;
              }
              ++v34;
              v33 = (struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)v33 + LowPart + 20);
              v84 = v34;
              v78 = v33;
            }
            while ( v34 < v35->u.Generic.Length );
            v6 = a2;
            v32 = v85;
          }
          ++v32;
          v30 = v33;
          v100 = v33;
          v85 = v32;
        }
        while ( v32 < *v6 );
        v10 = v98;
        v11 = v6 + 1;
        v8 = v82;
        v29 = v77;
        v26 = v86;
        LODWORD(v27) = v99;
      }
      if ( *(_WORD *)v19 == (_WORD)v8 )
      {
        v55 = v19[1];
        if ( v55 != v8 && (v55 != v8 + 1 || *((_BYTE *)v19 + 9) != 0x80) )
        {
          v81 += v55;
          *(_WORD *)v19 = v83;
          goto LABEL_77;
        }
        if ( !v95 )
        {
          v81 += v55;
          v95 = v19;
          *(_WORD *)v19 = v83;
          if ( v31 )
            *a4 = 1;
          goto LABEL_77;
        }
      }
      *(_WORD *)v19 = -1;
      --v10[7];
LABEL_77:
      v19[1] = v27;
      v19 = (_DWORD *)v29;
LABEL_78:
      v18 = v10[7];
      v86 = --v26;
      if ( v26 >= 0 )
        continue;
      break;
    }
    v20 = v87;
  }
  if ( v18 )
  {
    v56 = 32 * (v81 - v20 + 1) + 40 * v18;
    v57 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v56, 0x75737050u);
    v58 = v57;
    if ( v57 )
    {
      memset(v57, 0, v56);
      *v58 = v56;
      v58[1] = v6[1];
      v58[2] = v6[2];
      v58[3] = v10[3];
      v59 = v10[7];
      if ( v59 > 1 )
        *a4 = 0;
      v60 = v93;
      v61 = v58 + 8;
      v58[7] = v59;
      if ( v60 >= 0 )
      {
        v62 = v10 + 8;
        do
        {
          v63 = (unsigned __int64)(v62 + 2);
          v64 = (unsigned __int64)&v62[8 * v62[1] + 2];
          if ( *(_WORD *)v62 != 0xFFFF )
          {
            *(_WORD *)v61 = *(_WORD *)v62;
            v65 = *((_WORD *)v62 + 1);
            v66 = (char *)(v61 + 2);
            *((_WORD *)v61 + 1) = v65;
            if ( *(_BYTE *)(v63 + 1) == 0x80 )
            {
              *v58 -= 32;
            }
            else
            {
              *((_WORD *)v61 + 4) = -32767;
              v66 = (char *)(v61 + 10);
              *(_DWORD *)((char *)v61 + 10) = 3;
              *((_WORD *)v61 + 7) = 0;
              v61[4] = 1;
            }
            while ( v63 < v64 )
            {
              if ( *(_BYTE *)(v63 + 1) )
              {
                *(_OWORD *)v66 = *(_OWORD *)v63;
                *((_OWORD *)v66 + 1) = *(_OWORD *)(v63 + 16);
                v66 += 32;
              }
              v63 += 32LL;
            }
            v61[1] = (v66 - (char *)v61 - 8) >> 5;
            v61[4] = 1;
            v61 = v66;
          }
          --v60;
          v62 = (_DWORD *)v64;
        }
        while ( v60 >= 0 );
      }
      *a3 = (char *)v58;
      ExFreePoolWithTag(v10, 0);
      return 0LL;
    }
    v4 = -1073741670;
  }
  else
  {
    *a3 = PnpCmResourcesToIoResources(0xFFFFLL, v6, 1);
  }
  ExFreePoolWithTag(v10, 0);
  return v4;
}
