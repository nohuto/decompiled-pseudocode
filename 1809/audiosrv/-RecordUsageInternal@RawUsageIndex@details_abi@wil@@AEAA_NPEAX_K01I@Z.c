/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000AF80
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18000AD9C (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18000AED0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd--detai.c)
 * Callees:
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x18000B680 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memmove_s @ 0x18000B768 (memmove_s.c)
 *     ?GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ @ 0x18000B7AC (-GetSize@UsageIndexProperty@details_abi@wil@@QEBA_KXZ.c)
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     ?AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z @ 0x180046B0C (-AddToCount@UsageIndexProperty@details_abi@wil@@QEAA_NI@Z.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x180046B38 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x180068897 (memcmp_0.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800B0588 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800B22DC (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 */

bool __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        unsigned __int64 this,
        void *a2,
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
  unsigned int v20; // edi
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
  void *v42; // r10
  unsigned __int64 v43; // r9
  unsigned __int16 v44; // r8
  char v45; // dl
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // r9
  bool v50; // zf
  unsigned __int8 *v51; // r8
  unsigned __int16 v52; // [rsp+20h] [rbp-89h]
  unsigned __int8 *v53; // [rsp+28h] [rbp-81h] BYREF
  unsigned __int16 v54; // [rsp+30h] [rbp-79h]
  unsigned __int16 v55; // [rsp+34h] [rbp-75h] BYREF
  unsigned __int16 v56; // [rsp+38h] [rbp-71h] BYREF
  char v57; // [rsp+3Ah] [rbp-6Fh]
  int Destination; // [rsp+3Ch] [rbp-6Dh] BYREF
  unsigned __int16 v59; // [rsp+40h] [rbp-69h] BYREF
  __int128 v60; // [rsp+48h] [rbp-61h]
  unsigned __int16 v61; // [rsp+58h] [rbp-51h] BYREF
  char v62; // [rsp+5Ah] [rbp-4Fh]
  unsigned int v63; // [rsp+5Ch] [rbp-4Dh] BYREF
  unsigned __int16 v64; // [rsp+60h] [rbp-49h] BYREF
  void *Buf2[2]; // [rsp+68h] [rbp-41h]
  unsigned __int16 v66; // [rsp+78h] [rbp-31h] BYREF
  char v67; // [rsp+7Ah] [rbp-2Fh]
  int v68; // [rsp+7Ch] [rbp-2Dh] BYREF
  unsigned __int16 v69; // [rsp+80h] [rbp-29h] BYREF
  __int128 v70; // [rsp+88h] [rbp-21h]
  unsigned __int8 *v71; // [rsp+98h] [rbp-11h]
  unsigned __int8 *v72; // [rsp+A0h] [rbp-9h]
  unsigned __int8 *v73; // [rsp+A8h] [rbp-1h]
  unsigned __int8 *v74; // [rsp+100h] [rbp+57h] BYREF
  void *Buf1; // [rsp+108h] [rbp+5Fh]
  size_t Size; // [rsp+110h] [rbp+67h]
  void *v77; // [rsp+118h] [rbp+6Fh]

  v77 = a4;
  Size = a3;
  Buf1 = a2;
  v6 = *(_QWORD *)(this + 24);
  v7 = this;
  if ( !v6 )
    return 0;
  v56 = *(_WORD *)(this + 2);
  v8 = (unsigned __int8 *)(v6 + 10);
  v57 = *(_BYTE *)(this + 4);
  v9 = 0;
  Destination = 0;
  LOBYTE(v74) = 0;
  v59 = 0;
  v60 = 0LL;
  while ( 1 )
  {
    v10 = *(_QWORD *)(v7 + 32);
    v11 = v8;
    v53 = v8;
    if ( v57 == 1 )
    {
      v12 = v8 + 2;
      if ( (unsigned __int64)(v8 + 2) > v10 )
        goto LABEL_90;
      *(_QWORD *)&v60 = v8;
      if ( v8 )
      {
        v9 = *(unsigned __int16 *)v8;
        Destination = v9;
      }
      else
      {
        *(_DWORD *)_o__errno(this) = 22;
        invalid_parameter_noinfo();
        v9 = 0;
        Destination = 0;
      }
    }
    else
    {
      v12 = v8;
      if ( v57 == 2 )
      {
        v12 = v8 + 4;
        if ( (unsigned __int64)(v8 + 4) > v10 )
          goto LABEL_90;
        *(_QWORD *)&v60 = v8;
        memcpy_s(&Destination, 4uLL, v8, 4uLL);
        v9 = Destination;
      }
    }
    v13 = v56;
    v59 = v56;
    if ( !v56 )
    {
      if ( (unsigned __int64)(v12 + 2) > v10 )
        goto LABEL_90;
      memcpy_s(&v59, 2uLL, v12, 2uLL);
      v13 = v59;
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
      v43 = 0LL;
      if ( !v41 )
      {
LABEL_92:
        v59 = Size;
        *((_QWORD *)&v60 + 1) = Buf1;
        Destination = 1;
        *(_QWORD *)&v60 = 0LL;
        v43 = wil::details_abi::UsageIndexProperty::GetSize((wil::details_abi::UsageIndexProperty *)&v56);
      }
      v44 = *(_WORD *)(v7 + 6);
      v45 = *(_BYTE *)(v7 + 8);
      v61 = v44;
      v62 = v45;
      v63 = a6;
      v64 = v38;
      Buf2[0] = v42;
      Buf2[1] = v77;
      if ( v44 )
        v46 = v44;
      else
        v46 = (unsigned __int16)v38 + 2LL;
      if ( v45 == 1 )
      {
        v46 += 2LL;
      }
      else if ( v45 == 2 )
      {
        v46 += 4LL;
      }
      v47 = *(_QWORD *)(v7 + 40);
      v48 = v46 + v43;
      v49 = *(_QWORD *)(v7 + 32);
      if ( v49 < v47 )
        v42 = (void *)(*(_QWORD *)(v7 + 40) - v49);
      if ( (unsigned __int64)v42 >= v48 )
      {
        memmove_s(&v8[v48], v47 - v48 - (_QWORD)v8, v8, v49 - (_QWORD)v8);
        v50 = (_BYTE)v74 == 0;
        v51 = (unsigned __int8 *)(v48 + *(_QWORD *)(v7 + 32));
        *(_QWORD *)(v7 + 32) = v51;
        if ( v50 )
          wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v56, &v53, v51);
        else
          wil::details_abi::UsageIndexProperty::AddToCount((wil::details_abi::UsageIndexProperty *)&v56, 1u);
        wil::details_abi::UsageIndexProperty::Write(
          (wil::details_abi::UsageIndexProperty *)&v61,
          &v53,
          *(unsigned __int8 **)(v7 + 32));
        *(_BYTE *)(v7 + 56) = 1;
        return 1;
      }
      return 0;
    }
    v8 = &v12[v13];
    *((_QWORD *)&v60 + 1) = v12;
    if ( Size == v13 )
      v15 = memcmp_0(Buf1, v12, Size);
    else
      v15 = Size - v13;
    if ( v15 < 0 )
    {
      LOWORD(v38) = a5;
      v8 = v11;
      v53 = v11;
      goto LABEL_92;
    }
    v16 = *(_QWORD *)(v7 + 16);
    if ( !v15 )
      break;
    v53 = v14;
    if ( v16 )
    {
      v17 = (*(_QWORD *)(v7 + 32) - *(_QWORD *)(v7 + 24)) / v16;
      this = v9;
      if ( v9 > v17 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v56, v17);
        v16 = *(_QWORD *)(v7 + 16);
        v9 = Destination;
      }
      v8 = &v14[v16 * v9];
    }
    else
    {
      v61 = *(_WORD *)(v7 + 6);
      v18 = 0;
      v62 = *(_BYTE *)(v7 + 8);
      v63 = 0;
      v64 = 0;
      *(_OWORD *)Buf2 = 0LL;
      if ( v9 )
      {
        do
        {
          if ( !wil::details_abi::UsageIndexProperty::Read(
                  (wil::details_abi::UsageIndexProperty *)&v61,
                  &v53,
                  *(unsigned __int8 **)(v7 + 32)) )
            break;
          ++v18;
        }
        while ( v18 < v9 );
        v8 = v53;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v56, v18);
      v9 = Destination;
    }
  }
  v19 = *(_WORD *)(v7 + 6);
  v20 = 0;
  v21 = *(_BYTE *)(v7 + 8);
  v54 = v19;
  v22 = -1;
  v66 = v19;
  LOBYTE(v74) = v21;
  v67 = v21;
  v68 = 0;
  v69 = 0;
  v70 = 0LL;
  if ( !v16 )
  {
    v38 = a5;
    if ( v9 )
    {
      while ( 1 )
      {
        v39 = *(unsigned __int8 **)(v7 + 32);
        v74 = v8;
        if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v66, &v74, v39) )
          break;
        v22 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v66, v77, v38);
        if ( v22 > 0 )
        {
          v8 = v74;
          if ( ++v20 < v9 )
            continue;
        }
        goto LABEL_80;
      }
      wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v56, v20);
      goto LABEL_80;
    }
    goto LABEL_87;
  }
  v52 = v19;
  v23 = (*(_QWORD *)(v7 + 32) - (_QWORD)v14) / v16;
  v24 = v19;
  if ( v9 > v23 )
  {
    wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v56, v23);
    v21 = *(_BYTE *)(v7 + 8);
    v24 = *(_WORD *)(v7 + 6);
    v16 = *(_QWORD *)(v7 + 16);
    v9 = Destination;
    LOBYTE(v74) = v21;
    v52 = v24;
  }
  v25 = (unsigned __int8 *)v9;
  *(_OWORD *)Buf2 = 0LL;
  v53 = (unsigned __int8 *)v9;
  v26 = 0;
  v27 = &v8[v9 * v16];
  v61 = v24;
  v73 = v27;
  v62 = v21;
  v63 = 0;
  v64 = 0;
  if ( v9 )
  {
    v28 = v8;
    v72 = v8;
    while ( 1 )
    {
      v29 = *(_QWORD *)(v7 + 32);
      v30 = ((unsigned __int64)v25 >> 1) * *(_QWORD *)(v7 + 16);
      v71 = (unsigned __int8 *)((unsigned __int64)v25 >> 1);
      v8 = &v28[v30];
      v31 = v8;
      if ( v21 == 1 )
      {
        v31 = v8 + 2;
        if ( (unsigned __int64)(v8 + 2) > v29 )
          goto LABEL_45;
        Buf2[0] = v8;
        memcpy_s(&v55, 2uLL, v8, 2uLL);
        v63 = v55;
      }
      else if ( v21 == 2 )
      {
        v31 = v8 + 4;
        if ( (unsigned __int64)(v8 + 4) > v29 )
          goto LABEL_45;
        Buf2[0] = v8;
        memcpy_s(&v63, 4uLL, v8, 4uLL);
        v24 = v61;
        LOBYTE(v74) = v62;
        v52 = v61;
      }
      v64 = v24;
      v26 = v24;
      if ( v24 )
        goto LABEL_43;
      if ( (unsigned __int64)(v31 + 2) <= v29 )
      {
        memcpy_s(&v64, 2uLL, v31, 2uLL);
        v31 += 2;
        v26 = v64;
        LOBYTE(v74) = v62;
        v52 = v61;
LABEL_43:
        if ( (unsigned __int64)&v31[v26] <= v29 )
        {
          Buf2[1] = v31;
          v8 = &v31[v26];
        }
      }
LABEL_45:
      if ( a5 == v26 )
        v32 = memcmp_0(v77, Buf2[1], a5);
      else
        v32 = a5 - v26;
      if ( v32 <= 0 )
        v25 = v71;
      else
        v25 = &v53[-1LL - (_QWORD)v71];
      v21 = (char)v74;
      v24 = v52;
      if ( v32 <= 0 )
        v8 = v72;
      v72 = v8;
      v28 = v8;
      v53 = v25;
      if ( !v25 )
      {
        v27 = v73;
        break;
      }
    }
  }
  if ( v8 >= v27 )
  {
    LOWORD(v38) = a5;
LABEL_87:
    v53 = v8;
    if ( !v8 )
      return 1;
    v41 = 1;
    LOBYTE(v74) = 1;
    goto LABEL_91;
  }
  v33 = v8;
  v34 = *(_QWORD *)(v7 + 32);
  if ( v67 == 1 )
  {
    v33 = v8 + 2;
    if ( (unsigned __int64)(v8 + 2) <= v34 )
    {
      *(_QWORD *)&v70 = v8;
      memcpy_s(&v74, 2uLL, v8, 2uLL);
      v68 = (unsigned __int16)v74;
      goto LABEL_59;
    }
LABEL_71:
    v36 = v69;
LABEL_72:
    v37 = (unsigned __int8 *)*((_QWORD *)&v70 + 1);
  }
  else
  {
    if ( v67 == 2 )
    {
      v33 = v8 + 4;
      if ( (unsigned __int64)(v8 + 4) > v34 )
        goto LABEL_71;
      *(_QWORD *)&v70 = v8;
      memcpy_s(&v68, 4uLL, v8, 4uLL);
      v35 = v66;
    }
    else
    {
LABEL_59:
      v35 = v54;
    }
    v69 = v35;
    v36 = v35;
    if ( !v35 )
    {
      if ( (unsigned __int64)(v33 + 2) > v34 )
        goto LABEL_72;
      memcpy_s(&v69, 2uLL, v33, 2uLL);
      v36 = v69;
      v33 += 2;
    }
    v37 = (unsigned __int8 *)*((_QWORD *)&v70 + 1);
    if ( (unsigned __int64)&v33[v36] <= v34 )
      v37 = v33;
    *((_QWORD *)&v70 + 1) = v37;
  }
  LOWORD(v38) = a5;
  if ( a5 == v36 )
    v22 = memcmp_0(v77, v37, a5);
  else
    v22 = a5 - v36;
LABEL_80:
  if ( v22 )
    goto LABEL_87;
  if ( v67 )
  {
    wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v66, v68 + a6);
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
