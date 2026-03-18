/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180086E40
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18001B008 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x180086D4C (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180018848 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     ?AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z @ 0x18001E0D8 (-AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18001E104 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18008755C (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x180087588 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memcpy_s @ 0x180087638 (memcpy_s.c)
 *     _invalid_parameter_noinfo @ 0x1800EC59A (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1800F006F (memcmp_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x180143468 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 */

bool __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        unsigned __int64 this,
        unsigned __int64 a2,
        size_t a3,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned __int8 *v8; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // r12
  unsigned __int8 *v11; // r13
  unsigned __int8 *v12; // rdi
  unsigned __int16 v13; // ax
  unsigned __int8 *v14; // r15
  int v15; // ecx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rax
  unsigned int v18; // edi
  unsigned __int16 v19; // cx
  int v20; // edi
  char v21; // r8
  int v22; // r13d
  unsigned __int64 v23; // rax
  unsigned __int16 v24; // r13
  unsigned __int8 *v25; // rdx
  unsigned __int16 v26; // r15
  unsigned __int8 *v27; // r12
  unsigned __int8 *v28; // rcx
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // rbx
  unsigned __int8 *v31; // rdi
  int v32; // ecx
  unsigned __int8 *v33; // rdi
  unsigned __int64 v34; // rsi
  unsigned __int16 v35; // ax
  unsigned __int16 v36; // cx
  unsigned __int8 *v37; // rdx
  unsigned __int64 v38; // r15
  unsigned __int8 *v39; // r8
  bool result; // al
  char v41; // al
  void *v42; // r9
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // r8
  __int64 v46; // rdx
  unsigned __int64 v47; // rdi
  unsigned __int64 v48; // rdx
  unsigned __int8 *v49; // rcx
  size_t v50; // rdx
  size_t v51; // r8
  bool v52; // zf
  unsigned __int8 *v53; // r8
  __int16 v54; // [rsp+20h] [rbp-89h]
  unsigned __int8 *v55; // [rsp+28h] [rbp-81h] BYREF
  unsigned __int16 v56; // [rsp+30h] [rbp-79h]
  unsigned __int16 v57; // [rsp+34h] [rbp-75h] BYREF
  unsigned __int16 v58; // [rsp+38h] [rbp-71h] BYREF
  char v59; // [rsp+3Ah] [rbp-6Fh]
  int Destination; // [rsp+3Ch] [rbp-6Dh] BYREF
  unsigned __int16 v61; // [rsp+40h] [rbp-69h] BYREF
  __int128 v62; // [rsp+48h] [rbp-61h]
  __int16 v63; // [rsp+58h] [rbp-51h] BYREF
  char v64; // [rsp+5Ah] [rbp-4Fh]
  unsigned int v65; // [rsp+5Ch] [rbp-4Dh] BYREF
  unsigned __int16 v66; // [rsp+60h] [rbp-49h] BYREF
  void *Buf2[2]; // [rsp+68h] [rbp-41h]
  unsigned __int16 v68; // [rsp+78h] [rbp-31h] BYREF
  char v69; // [rsp+7Ah] [rbp-2Fh]
  int v70; // [rsp+7Ch] [rbp-2Dh] BYREF
  unsigned __int16 v71; // [rsp+80h] [rbp-29h] BYREF
  __int128 v72; // [rsp+88h] [rbp-21h]
  unsigned __int8 *v73; // [rsp+98h] [rbp-11h]
  unsigned __int8 *v74; // [rsp+A0h] [rbp-9h]
  unsigned __int8 *v75; // [rsp+A8h] [rbp-1h]
  unsigned __int8 *v76; // [rsp+100h] [rbp+57h] BYREF
  void *Buf1; // [rsp+108h] [rbp+5Fh]
  size_t Size; // [rsp+110h] [rbp+67h]
  void *v79; // [rsp+118h] [rbp+6Fh]

  v79 = a4;
  Size = a3;
  Buf1 = (void *)a2;
  v6 = *(_QWORD *)(this + 24);
  v7 = this;
  if ( !v6 )
    return 0;
  v58 = *(_WORD *)(this + 2);
  v8 = (unsigned __int8 *)(v6 + 10);
  v59 = *(_BYTE *)(this + 4);
  v9 = 0;
  Destination = 0;
  LOBYTE(v76) = 0;
  v61 = 0;
  v62 = 0LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v7 + 32);
    v11 = v8;
    v55 = v8;
    if ( v59 == 1 )
    {
      v12 = v8 + 2;
      if ( (unsigned __int64)(v8 + 2) > v10 )
        goto LABEL_90;
      *(_QWORD *)&v62 = v8;
      if ( v8 )
      {
        v9 = *(unsigned __int16 *)v8;
        Destination = v9;
      }
      else
      {
        *(_DWORD *)_o__errno(this, a2, 0LL) = 22;
        invalid_parameter_noinfo();
        v9 = 0;
        Destination = 0;
      }
    }
    else
    {
      v12 = v8;
      if ( v59 == 2 )
      {
        v12 = v8 + 4;
        if ( (unsigned __int64)(v8 + 4) > v10 )
          goto LABEL_90;
        *(_QWORD *)&v62 = v8;
        memcpy_s(&Destination, 4uLL, v8, 4uLL);
        v9 = Destination;
      }
    }
    v13 = v58;
    v61 = v58;
    if ( !v58 )
    {
      if ( (unsigned __int64)(v12 + 2) > v10 )
        goto LABEL_90;
      memcpy_s(&v61, 2uLL, v12, 2uLL);
      v13 = v61;
      v12 += 2;
      v9 = Destination;
    }
    v14 = &v12[v13];
    if ( (unsigned __int64)v14 > v10 )
    {
LABEL_90:
      LOWORD(v38) = a5;
      v41 = 0;
      *(_QWORD *)(v7 + 32) = v8;
LABEL_91:
      v42 = 0LL;
      if ( !v41 )
      {
LABEL_92:
        v61 = Size;
        *((_QWORD *)&v62 + 1) = Buf1;
        Destination = 1;
        *(_QWORD *)&v62 = 0LL;
        wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v58);
      }
      v63 = *(_WORD *)(v7 + 6);
      v64 = *(_BYTE *)(v7 + 8);
      v65 = a6;
      v66 = v38;
      Buf2[0] = v42;
      Buf2[1] = v79;
      v43 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v63);
      v45 = *(_QWORD *)(v7 + 32);
      v47 = v46 + v43;
      v48 = *(_QWORD *)(v7 + 40);
      if ( v45 < v48 )
        v44 = *(_QWORD *)(v7 + 40) - v45;
      if ( v44 >= v47 )
      {
        v49 = &v8[v47];
        v50 = v48 - v47 - (_QWORD)v8;
        v51 = v45 - (_QWORD)v8;
        if ( v51 )
        {
          if ( v49 && v8 )
          {
            if ( v50 >= v51 )
            {
              memmove_0(v49, v8, v51);
            }
            else
            {
              *(_DWORD *)_o__errno(v49, v50, v51) = 34;
              invalid_parameter_noinfo();
            }
          }
          else
          {
            *(_DWORD *)_o__errno(v49, v50, v51) = 22;
            invalid_parameter_noinfo();
          }
        }
        v52 = (_BYTE)v76 == 0;
        v53 = (unsigned __int8 *)(v47 + *(_QWORD *)(v7 + 32));
        *(_QWORD *)(v7 + 32) = v53;
        if ( v52 )
          wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v58, &v55, v53);
        else
          wil::details_abi::UsageIndexProperty::AddToCount((wil::details_abi::UsageIndexProperty *)&v58, 1);
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v63,
          &v55,
          *(unsigned __int8 **)(v7 + 32));
        *(_BYTE *)(v7 + 56) = 1;
        return 1;
      }
      return 0;
    }
    v8 = &v12[v13];
    *((_QWORD *)&v62 + 1) = v12;
    if ( Size == v13 )
      v15 = memcmp_0(Buf1, v12, Size);
    else
      v15 = Size - v13;
    if ( v15 < 0 )
    {
      LOWORD(v38) = a5;
      v8 = v11;
      v55 = v11;
      goto LABEL_92;
    }
    v16 = *(_QWORD *)(v7 + 16);
    if ( !v15 )
      break;
    v55 = v14;
    if ( v16 )
    {
      v17 = (*(_QWORD *)(v7 + 32) - *(_QWORD *)(v7 + 24)) / v16;
      a2 = (*(_QWORD *)(v7 + 32) - *(_QWORD *)(v7 + 24)) % v16;
      this = v9;
      if ( v9 > v17 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v58, v17);
        v16 = *(_QWORD *)(v7 + 16);
        v9 = Destination;
      }
      v8 = &v14[v16 * v9];
    }
    else
    {
      v63 = *(_WORD *)(v7 + 6);
      v18 = 0;
      v64 = *(_BYTE *)(v7 + 8);
      v65 = 0;
      v66 = 0;
      *(_OWORD *)Buf2 = 0LL;
      if ( v9 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v63,
                  &v55,
                  *(unsigned __int8 **)(v7 + 32)) )
            break;
          ++v18;
        }
        while ( v18 < v9 );
        v8 = v55;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v58, v18);
      v9 = Destination;
    }
  }
  v19 = *(_WORD *)(v7 + 6);
  v20 = 0;
  v21 = *(_BYTE *)(v7 + 8);
  v56 = v19;
  v22 = -1;
  v68 = v19;
  LOBYTE(v76) = v21;
  v69 = v21;
  v70 = 0;
  v71 = 0;
  v72 = 0LL;
  if ( !v16 )
  {
    v38 = a5;
    if ( v9 )
    {
      while ( 1 )
      {
        v39 = *(unsigned __int8 **)(v7 + 32);
        v76 = v8;
        if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v68, &v76, v39) )
          break;
        v22 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v68, v79, v38);
        if ( v22 > 0 )
        {
          v8 = v76;
          if ( ++v20 < v9 )
            continue;
        }
        goto LABEL_80;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v58, v20);
      goto LABEL_80;
    }
    goto LABEL_87;
  }
  v54 = v19;
  v23 = (*(_QWORD *)(v7 + 32) - (_QWORD)v14) / v16;
  v24 = v19;
  if ( v9 > v23 )
  {
    wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v58, v23);
    v21 = *(_BYTE *)(v7 + 8);
    v24 = *(_WORD *)(v7 + 6);
    v16 = *(_QWORD *)(v7 + 16);
    v9 = Destination;
    LOBYTE(v76) = v21;
    v54 = v24;
  }
  v25 = (unsigned __int8 *)v9;
  *(_OWORD *)Buf2 = 0LL;
  v55 = (unsigned __int8 *)v9;
  v26 = 0;
  v27 = &v8[v9 * v16];
  v63 = v24;
  v75 = v27;
  v64 = v21;
  v65 = 0;
  v66 = 0;
  if ( v9 )
  {
    v28 = v8;
    v74 = v8;
    while ( 1 )
    {
      v29 = *(_QWORD *)(v7 + 32);
      v30 = ((unsigned __int64)v25 >> 1) * *(_QWORD *)(v7 + 16);
      v73 = (unsigned __int8 *)((unsigned __int64)v25 >> 1);
      v8 = &v28[v30];
      v31 = v8;
      if ( v21 == 1 )
      {
        v31 = v8 + 2;
        if ( (unsigned __int64)(v8 + 2) > v29 )
          goto LABEL_45;
        Buf2[0] = v8;
        memcpy_s(&v57, 2uLL, v8, 2uLL);
        v65 = v57;
      }
      else if ( v21 == 2 )
      {
        v31 = v8 + 4;
        if ( (unsigned __int64)(v8 + 4) > v29 )
          goto LABEL_45;
        Buf2[0] = v8;
        memcpy_s(&v65, 4uLL, v8, 4uLL);
        v24 = v63;
        LOBYTE(v76) = v64;
        v54 = v63;
      }
      v66 = v24;
      v26 = v24;
      if ( v24 )
        goto LABEL_43;
      if ( (unsigned __int64)(v31 + 2) <= v29 )
      {
        memcpy_s(&v66, 2uLL, v31, 2uLL);
        v31 += 2;
        v26 = v66;
        LOBYTE(v76) = v64;
        v54 = v63;
LABEL_43:
        if ( (unsigned __int64)&v31[v26] <= v29 )
        {
          Buf2[1] = v31;
          v8 = &v31[v26];
        }
      }
LABEL_45:
      if ( a5 == v26 )
        v32 = memcmp_0(v79, Buf2[1], a5);
      else
        v32 = a5 - v26;
      if ( v32 <= 0 )
        v25 = v73;
      else
        v25 = &v55[-1LL - (_QWORD)v73];
      v21 = (char)v76;
      v24 = v54;
      if ( v32 <= 0 )
        v8 = v74;
      v74 = v8;
      v28 = v8;
      v55 = v25;
      if ( !v25 )
      {
        v27 = v75;
        break;
      }
    }
  }
  if ( v8 >= v27 )
  {
    LOWORD(v38) = a5;
LABEL_87:
    v55 = v8;
    if ( !v8 )
      return 1;
    v41 = 1;
    LOBYTE(v76) = 1;
    goto LABEL_91;
  }
  v33 = v8;
  v34 = *(_QWORD *)(v7 + 32);
  if ( v69 == 1 )
  {
    v33 = v8 + 2;
    if ( (unsigned __int64)(v8 + 2) <= v34 )
    {
      *(_QWORD *)&v72 = v8;
      memcpy_s(&v76, 2uLL, v8, 2uLL);
      v70 = (unsigned __int16)v76;
      goto LABEL_59;
    }
LABEL_71:
    v36 = v71;
LABEL_72:
    v37 = (unsigned __int8 *)*((_QWORD *)&v72 + 1);
  }
  else
  {
    if ( v69 == 2 )
    {
      v33 = v8 + 4;
      if ( (unsigned __int64)(v8 + 4) > v34 )
        goto LABEL_71;
      *(_QWORD *)&v72 = v8;
      memcpy_s(&v70, 4uLL, v8, 4uLL);
      v35 = v68;
    }
    else
    {
LABEL_59:
      v35 = v56;
    }
    v71 = v35;
    v36 = v35;
    if ( !v35 )
    {
      if ( (unsigned __int64)(v33 + 2) > v34 )
        goto LABEL_72;
      memcpy_s(&v71, 2uLL, v33, 2uLL);
      v36 = v71;
      v33 += 2;
    }
    v37 = (unsigned __int8 *)*((_QWORD *)&v72 + 1);
    if ( (unsigned __int64)&v33[v36] <= v34 )
      v37 = v33;
    *((_QWORD *)&v72 + 1) = v37;
  }
  LOWORD(v38) = a5;
  if ( a5 == v36 )
    v22 = memcmp_0(v79, v37, a5);
  else
    v22 = a5 - v36;
LABEL_80:
  if ( v22 )
    goto LABEL_87;
  if ( v69 )
  {
    wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v68, v70 + a6);
LABEL_83:
    result = 1;
    *(_BYTE *)(v7 + 56) = 1;
    return result;
  }
  if ( *(_BYTE *)(v7 + 56) )
    goto LABEL_83;
  *(_BYTE *)(v7 + 56) = 0;
  return 1;
}
