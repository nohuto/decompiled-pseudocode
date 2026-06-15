/*
 * XREFs of ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180022130
 * Callers:
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800389C8 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     wistd::__function::__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned___int64_void___unsigned___int64_unsigned_int)_::operator() @ 0x180046810 (wistd--__function--__func__lambda_8db0ce862824541f40dfb767113f1e28__bool___cdecl(void___unsigned.c)
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x1800C0A14 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 * Callees:
 *     memcpy_s @ 0x180039174 (memcpy_s.c)
 *     ?Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z @ 0x1800459E4 (-Write@UsageIndexProperty@details_abi@wil@@QEBA_NAEAPEAEPEAE@Z.c)
 *     memmove_s @ 0x180048EA4 (memmove_s.c)
 *     ?UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z @ 0x18004EA44 (-UpdateCount@UsageIndexProperty@details_abi@wil@@QEAAXI@Z.c)
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x18006C957 (memcmp_0.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x1800BEADC (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x1800C0694 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 */

char __fastcall wil::details_abi::RawUsageIndex::RecordUsageInternal(
        unsigned __int64 this,
        void *a2,
        size_t a3,
        void *a4,
        size_t Size,
        unsigned int a6)
{
  __int64 v6; // rdi
  size_t v7; // r10
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r11
  unsigned __int8 *v10; // rdi
  char v11; // r13
  unsigned __int64 v12; // r14
  unsigned __int8 *v13; // r12
  unsigned __int8 *v14; // rsi
  unsigned __int16 v15; // r15
  unsigned int v16; // r9d
  unsigned __int16 v17; // ax
  unsigned __int8 *v18; // r15
  int v19; // eax
  int v20; // ecx
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  unsigned __int16 v23; // di
  char v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  unsigned int v27; // r12d
  unsigned __int16 v28; // r9
  unsigned __int64 v29; // r13
  unsigned __int16 v30; // si
  unsigned __int8 *v31; // r10
  unsigned __int8 *v32; // rdx
  unsigned __int64 v33; // r12
  unsigned __int8 *v34; // r14
  unsigned __int64 v35; // r14
  void *v36; // r12
  int v37; // eax
  int v38; // ecx
  unsigned __int8 *v39; // rsi
  unsigned __int64 v40; // r14
  unsigned __int16 v41; // ax
  unsigned __int16 v42; // cx
  int v43; // r13d
  char v44; // al
  __int64 v46; // rcx
  int v47; // r15d
  unsigned __int16 v48; // r8
  char v49; // dl
  __int64 v50; // rax
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // rdx
  unsigned __int8 *v54; // r8
  unsigned int v55; // esi
  unsigned int v56; // r12d
  unsigned int v57; // esi
  unsigned int v58; // r12d
  void *v59; // r15
  unsigned __int8 *v60; // r8
  unsigned __int16 v61; // [rsp+20h] [rbp-89h]
  unsigned __int16 v62; // [rsp+22h] [rbp-87h]
  unsigned __int16 v63; // [rsp+28h] [rbp-81h] BYREF
  char v64; // [rsp+2Ah] [rbp-7Fh]
  unsigned int Destination; // [rsp+2Ch] [rbp-7Dh] BYREF
  unsigned __int16 v66; // [rsp+30h] [rbp-79h] BYREF
  __int128 v67; // [rsp+38h] [rbp-71h]
  unsigned __int16 v68; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int16 v69; // [rsp+50h] [rbp-59h] BYREF
  char v70; // [rsp+52h] [rbp-57h]
  unsigned int v71; // [rsp+54h] [rbp-55h] BYREF
  unsigned __int16 v72; // [rsp+58h] [rbp-51h] BYREF
  void *Buf2[2]; // [rsp+60h] [rbp-49h]
  void *Source; // [rsp+70h] [rbp-39h]
  unsigned __int16 v75; // [rsp+78h] [rbp-31h] BYREF
  char v76; // [rsp+7Ah] [rbp-2Fh]
  int v77; // [rsp+7Ch] [rbp-2Dh] BYREF
  unsigned __int16 v78; // [rsp+80h] [rbp-29h] BYREF
  __int128 v79; // [rsp+88h] [rbp-21h]
  unsigned __int8 *v80; // [rsp+98h] [rbp-11h]
  unsigned __int8 *v81; // [rsp+A0h] [rbp-9h]
  unsigned __int8 *v82; // [rsp+100h] [rbp+57h] BYREF
  void *Buf1; // [rsp+108h] [rbp+5Fh]
  size_t v84; // [rsp+110h] [rbp+67h]
  void *v85; // [rsp+118h] [rbp+6Fh]

  v85 = a4;
  v84 = a3;
  Buf1 = a2;
  v6 = *(_QWORD *)(this + 24);
  v7 = a3;
  v8 = this;
  if ( v6 )
  {
    v9 = 0LL;
    v63 = *(_WORD *)(this + 2);
    v10 = (unsigned __int8 *)(v6 + 10);
    v64 = *(_BYTE *)(this + 4);
    v11 = 0;
    Destination = 0;
    v66 = 0;
    v67 = 0LL;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v8 + 32);
      v13 = v10;
      v82 = v10;
      if ( v64 == 1 )
      {
        v14 = v10 + 2;
        if ( (unsigned __int64)(v10 + 2) > v12 )
          goto LABEL_57;
        *(_QWORD *)&v67 = v10;
        if ( v10 )
        {
          v15 = *(_WORD *)v10;
        }
        else
        {
          v15 = 0;
          *(_DWORD *)_o__errno(this) = 22;
          invalid_parameter_noinfo();
          v7 = v84;
          v9 = 0LL;
        }
        v16 = v15;
        Destination = v15;
      }
      else
      {
        v14 = v10;
        if ( v64 == 2 )
        {
          v14 = v10 + 4;
          if ( (unsigned __int64)(v10 + 4) > v12 )
            goto LABEL_57;
          *(_QWORD *)&v67 = v10;
          memcpy_s(&Destination, 4uLL, v10, 4uLL);
          v7 = v84;
          v9 = 0LL;
        }
        v16 = Destination;
      }
      v17 = v63;
      v66 = v63;
      if ( !v63 )
      {
        if ( (unsigned __int64)(v14 + 2) > v12 )
        {
LABEL_57:
          LOWORD(v35) = Size;
          *(_QWORD *)(v8 + 32) = v10;
          goto LABEL_58;
        }
        memcpy_s(&v66, 2uLL, v14, 2uLL);
        v17 = v66;
        v9 = 0LL;
        v16 = Destination;
        v14 += 2;
        v7 = v84;
      }
      v18 = &v14[v17];
      if ( (unsigned __int64)v18 > v12 )
        goto LABEL_57;
      *((_QWORD *)&v67 + 1) = v14;
      v10 = &v14[v17];
      if ( v7 == v17 )
      {
        v19 = memcmp_0(Buf1, v14, v7);
        v16 = Destination;
        v20 = v19;
        LOWORD(v7) = v84;
        v9 = 0LL;
      }
      else
      {
        v20 = v7 - v17;
      }
      if ( v20 < 0 )
      {
        LOWORD(v35) = Size;
        v10 = v13;
        v82 = v13;
        goto LABEL_59;
      }
      v21 = *(_QWORD *)(v8 + 16);
      if ( !v20 )
        break;
      v82 = v18;
      if ( v21 )
      {
        v22 = *(_QWORD *)(v8 + 32) - *(_QWORD *)(v8 + 24);
        if ( v21 == 4 )
          this = v22 >> 2;
        else
          this = v22 / v21;
        if ( v16 > this )
        {
          wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v63, this);
          v21 = *(_QWORD *)(v8 + 16);
          v9 = 0LL;
          v16 = Destination;
        }
        v10 = &v18[v21 * v16];
      }
      else
      {
        v69 = *(_WORD *)(v8 + 6);
        v55 = 0;
        v70 = *(_BYTE *)(v8 + 8);
        v71 = 0;
        v72 = 0;
        *(_OWORD *)Buf2 = 0LL;
        if ( v16 )
        {
          v56 = Destination;
          do
          {
            if ( !wil::details_abi::UsageIndexProperty::Read(
                    (wil::details_abi::UsageIndexProperty *)&v69,
                    &v82,
                    *(unsigned __int8 **)(v8 + 32)) )
              break;
            ++v55;
          }
          while ( v55 < v56 );
          v10 = v82;
        }
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v63, v55);
        v9 = 0LL;
      }
      v7 = v84;
    }
    v23 = *(_WORD *)(v8 + 6);
    v24 = *(_BYTE *)(v8 + 8);
    v62 = v23;
    v75 = v23;
    LOBYTE(v82) = v24;
    v76 = v24;
    v77 = 0;
    v78 = 0;
    v79 = 0LL;
    if ( v21 )
    {
      v25 = *(_QWORD *)(v8 + 32) - *(_QWORD *)(v8 + 24);
      if ( v21 == 4 )
        v26 = v25 >> 2;
      else
        v26 = v25 / v21;
      v27 = Destination;
      v28 = v23;
      v61 = v23;
      v10 = v18;
      if ( Destination > v26 )
      {
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v63, v26);
        v28 = *(_WORD *)(v8 + 6);
        v24 = *(_BYTE *)(v8 + 8);
        v21 = *(_QWORD *)(v8 + 16);
        v27 = Destination;
        v61 = v28;
        LOBYTE(v82) = v24;
      }
      v29 = v27;
      *(_OWORD *)Buf2 = 0LL;
      v69 = v28;
      v30 = 0;
      v31 = &v18[v27 * v21];
      v70 = v24;
      v81 = v31;
      v71 = 0;
      v72 = 0;
      if ( v27 )
      {
        v32 = v18;
        Source = v18;
        while ( 1 )
        {
          v33 = *(_QWORD *)(v8 + 32);
          v10 = &v32[*(_QWORD *)(v8 + 16) * (v29 >> 1)];
          v34 = v10;
          if ( v24 == 1 )
          {
            v34 = v10 + 2;
            if ( (unsigned __int64)(v10 + 2) > v33 )
              goto LABEL_33;
            Buf2[0] = &v32[*(_QWORD *)(v8 + 16) * (v29 >> 1)];
            memcpy_s(&v68, 2uLL, v10, 2uLL);
            v24 = (char)v82;
            v28 = v61;
            v71 = v68;
          }
          else
          {
            if ( v24 != 2 )
              goto LABEL_30;
            v34 = v10 + 4;
            if ( (unsigned __int64)(v10 + 4) > v33 )
              goto LABEL_33;
            Buf2[0] = &v32[*(_QWORD *)(v8 + 16) * (v29 >> 1)];
            memcpy_s(&v71, 4uLL, v10, 4uLL);
            v24 = v70;
            v28 = v69;
            LOBYTE(v82) = v70;
            v61 = v69;
          }
          v32 = (unsigned __int8 *)Source;
LABEL_30:
          v72 = v28;
          v30 = v28;
          if ( v28 )
            goto LABEL_31;
          v80 = v34 + 2;
          if ( (unsigned __int64)(v34 + 2) <= v33 )
          {
            memcpy_s(&v72, 2uLL, v34, 2uLL);
            v24 = v70;
            v28 = v69;
            v34 = v80;
            v30 = v72;
            v32 = (unsigned __int8 *)Source;
            LOBYTE(v82) = v70;
            v61 = v69;
LABEL_31:
            if ( (unsigned __int64)&v34[v30] <= v33 )
            {
              Buf2[1] = v34;
              v10 = &v34[v30];
            }
          }
LABEL_33:
          LOWORD(v35) = Size;
          v36 = v85;
          if ( Size == v30 )
          {
            v37 = memcmp_0(v85, Buf2[1], Size);
            v32 = (unsigned __int8 *)Source;
            v38 = v37;
            v24 = (char)v82;
            v28 = v61;
          }
          else
          {
            v38 = Size - v30;
          }
          if ( v38 <= 0 )
            v29 >>= 1;
          else
            v29 += -1LL - (v29 >> 1);
          if ( v38 <= 0 )
            v10 = v32;
          v32 = v10;
          Source = v10;
          if ( !v29 )
          {
            v31 = v81;
            goto LABEL_41;
          }
        }
      }
      LOWORD(v35) = Size;
      v36 = v85;
LABEL_41:
      if ( v10 < v31 )
      {
        v39 = v10;
        v40 = *(_QWORD *)(v8 + 32);
        if ( v76 == 1 )
        {
          v39 = v10 + 2;
          if ( (unsigned __int64)(v10 + 2) > v40 )
            goto LABEL_112;
          *(_QWORD *)&v79 = v10;
          memcpy_s(&v82, 2uLL, v10, 2uLL);
          v77 = (unsigned __int16)v82;
LABEL_44:
          v41 = v62;
LABEL_45:
          v78 = v41;
          v42 = v41;
          if ( !v41 )
          {
            if ( (unsigned __int64)(v39 + 2) > v40 )
              goto LABEL_113;
            memcpy_s(&v78, 2uLL, v39, 2uLL);
            v42 = v78;
            v39 += 2;
          }
          if ( (unsigned __int64)&v39[v42] > v40 )
            goto LABEL_113;
          *((_QWORD *)&v79 + 1) = v39;
        }
        else
        {
          if ( v76 != 2 )
            goto LABEL_44;
          v39 = v10 + 4;
          if ( (unsigned __int64)(v10 + 4) <= v40 )
          {
            *(_QWORD *)&v79 = v10;
            memcpy_s(&v77, 4uLL, v10, 4uLL);
            v41 = v75;
            goto LABEL_45;
          }
LABEL_112:
          v42 = v78;
LABEL_113:
          v39 = (unsigned __int8 *)*((_QWORD *)&v79 + 1);
        }
        LOWORD(v35) = Size;
        v43 = Size == v42 ? memcmp_0(v36, v39, Size) : Size - v42;
LABEL_50:
        if ( !v43 )
        {
          if ( v76 )
          {
            wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v75, v77 + a6);
          }
          else if ( !*(_BYTE *)(v8 + 56) )
          {
            v44 = 0;
            goto LABEL_54;
          }
          v44 = 1;
LABEL_54:
          *(_BYTE *)(v8 + 56) = v44;
          return 1;
        }
      }
    }
    else
    {
      v35 = Size;
      v57 = 0;
      v10 = v18;
      if ( v16 )
      {
        v58 = Destination;
        v43 = -1;
        v59 = v85;
        while ( 1 )
        {
          v60 = *(unsigned __int8 **)(v8 + 32);
          v82 = v10;
          if ( !wil::details_abi::UsageIndexProperty::Read((wil::details_abi::UsageIndexProperty *)&v75, &v82, v60) )
            break;
          v43 = wil::details_abi::UsageIndexProperty::Compare((wil::details_abi::UsageIndexProperty *)&v75, v59, v35);
          if ( v43 > 0 )
          {
            v10 = v82;
            if ( ++v57 < v58 )
              continue;
          }
          goto LABEL_50;
        }
        wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v63, v57);
        goto LABEL_50;
      }
    }
    v82 = v10;
    if ( !v10 )
      return 1;
    LOWORD(v7) = v84;
    v11 = 1;
    v9 = 0LL;
LABEL_58:
    v46 = 0LL;
    if ( v11 )
    {
      v47 = Destination;
    }
    else
    {
LABEL_59:
      v47 = 1;
      Destination = 1;
      *((_QWORD *)&v67 + 1) = Buf1;
      v66 = v7;
      *(_QWORD *)&v67 = 0LL;
      if ( v63 )
        v46 = v63;
      else
        v46 = (unsigned __int16)v7 + 2LL;
      if ( v64 == 1 )
      {
        v46 += 2LL;
      }
      else if ( v64 == 2 )
      {
        v46 += 4LL;
      }
    }
    v48 = *(_WORD *)(v8 + 6);
    v49 = *(_BYTE *)(v8 + 8);
    v71 = a6;
    Buf2[1] = v85;
    v69 = v48;
    v70 = v49;
    v72 = v35;
    Buf2[0] = 0LL;
    if ( v48 )
      v50 = v48;
    else
      v50 = (unsigned __int16)v35 + 2LL;
    if ( v49 == 1 )
    {
      v50 += 2LL;
    }
    else if ( v49 == 2 )
    {
      v50 += 4LL;
    }
    v51 = *(_QWORD *)(v8 + 32);
    v52 = v50 + v46;
    v53 = *(_QWORD *)(v8 + 40);
    if ( v51 < v53 )
      v9 = v53 - v51;
    if ( v9 >= v52 )
    {
      memmove_s(&v10[v52], v53 - v52 - (_QWORD)v10, v10, v51 - (_QWORD)v10);
      v54 = (unsigned __int8 *)(v52 + *(_QWORD *)(v8 + 32));
      *(_QWORD *)(v8 + 32) = v54;
      if ( v11 )
      {
        if ( v64 )
          wil::details_abi::UsageIndexProperty::UpdateCount((wil::details_abi::UsageIndexProperty *)&v63, v47 + 1);
      }
      else
      {
        wil::details_abi::UsageIndexProperty::Write((wil::details_abi::UsageIndexProperty *)&v63, &v82, v54);
      }
      wil::details_abi::UsageIndexProperty::Write(
        (wil::details_abi::UsageIndexProperty *)&v69,
        &v82,
        *(unsigned __int8 **)(v8 + 32));
      *(_BYTE *)(v8 + 56) = 1;
      return 1;
    }
  }
  return 0;
}
