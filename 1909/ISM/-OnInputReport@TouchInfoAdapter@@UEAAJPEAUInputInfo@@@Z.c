/*
 * XREFs of ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x180141E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C06E (memset_0.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBK@Z @ 0x18006E520 (-lower_bound@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@2@@Z @ 0x180079100 (-erase@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ??$emplace@AEBKAEAG@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@AEBKAEAG@Z @ 0x180141B24 (--$emplace@AEBKAEAG@-$_Hash@V-$_Umap_traits@KGV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@.c)
 *     ?ExistingTouchContactWithId@TouchInfoAdapter@@AEAA_NGPEAPEAUTouchContact@@@Z @ 0x180141E14 (-ExistingTouchContactWithId@TouchInfoAdapter@@AEAA_NGPEAPEAUTouchContact@@@Z.c)
 */

__int64 __fastcall TouchInfoAdapter::OnInputReport(TouchInfoAdapter *this, struct InputInfo *a2)
{
  const char *v4; // r9
  unsigned int v5; // eax
  char v6; // r11
  char v7; // r10
  unsigned int v8; // r15d
  __int16 v9; // si
  unsigned int v10; // ecx
  __int64 v11; // r12
  char *v12; // r9
  __int16 v13; // r15
  __int64 v14; // r12
  int v15; // r14d
  char v16; // cl
  __int64 *v17; // rbx
  __int16 v18; // r14
  __int16 v19; // dx
  __int16 v20; // ax
  __int16 v21; // ax
  int v22; // r14d
  int v23; // eax
  __int16 v24; // ax
  __int64 v25; // rcx
  unsigned int v26; // r15d
  int v27; // eax
  char v28; // dl
  unsigned int v29; // r14d
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 i; // rax
  __int64 v33; // r8
  int v34; // r9d
  unsigned __int16 v35; // dx
  __int64 v37; // r9
  __int64 v38; // rax
  __int16 v39; // cx
  __int64 v40; // rcx
  unsigned __int8 v41; // r10
  unsigned int v42; // r9d
  unsigned int k; // r8d
  __int64 v44; // rdx
  unsigned __int16 v45; // dx
  int v46; // eax
  unsigned __int8 v47; // r10
  unsigned int j; // r8d
  __int64 v49; // rdx
  __int16 v50; // ax
  unsigned __int16 v51; // dx
  int v52; // eax
  unsigned __int16 v53; // dx
  _OWORD *v54; // rcx
  __int16 *v55; // rax
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int64 v66; // rax
  int v67; // [rsp+20h] [rbp-E0h] BYREF
  __int16 v68; // [rsp+24h] [rbp-DCh]
  int v69; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v70; // [rsp+2Ch] [rbp-D4h]
  struct TouchContact *v71; // [rsp+30h] [rbp-D0h] BYREF
  int v72; // [rsp+38h] [rbp-C8h]
  unsigned int v73; // [rsp+3Ch] [rbp-C4h]
  __int64 v74; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v75; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v76; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v77; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 v78; // [rsp+62h] [rbp-9Eh]
  int v79; // [rsp+64h] [rbp-9Ch]
  int v80; // [rsp+70h] [rbp-90h]
  char v81; // [rsp+75h] [rbp-8Bh]
  char v82; // [rsp+76h] [rbp-8Ah]
  unsigned __int8 v83; // [rsp+77h] [rbp-89h]
  _BYTE v84[568]; // [rsp+78h] [rbp-88h]
  __int64 *v85; // [rsp+2B0h] [rbp+1B0h] BYREF
  __int64 v86; // [rsp+2B8h] [rbp+1B8h]
  int v87; // [rsp+2C0h] [rbp+1C0h]
  wil::details::in1diag3 *retaddr; // [rsp+308h] [rbp+208h]

  if ( (*(_BYTE *)a2 & 0x3B) != 0 )
  {
    memset_0(&v77, 0, 0x248uLL);
    v5 = *((_DWORD *)a2 + 53);
    v6 = 0;
    LOBYTE(v72) = 0;
    v7 = 0;
    v8 = 0;
    memset(&v67, 0, 3);
    v70 = 0;
    if ( v5 > 0xA )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        129LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
        v4);
      __debugbreak();
    }
    v73 = 0;
    v9 = 1;
    v10 = 0;
    v11 = 4LL;
    if ( v5 )
    {
      v12 = (char *)this + 40;
      while ( 1 )
      {
        v13 = 0;
        v14 = 18LL * v10;
        v15 = *((_DWORD *)a2 + 36 * v10 + 57);
        if ( (*(_BYTE *)a2 & 2) != 0 && (v15 & 0x10) == 0 )
        {
          v15 &= ~4u;
          *((_DWORD *)a2 + 36 * v10 + 57) = v15;
        }
        if ( (v15 & 2) != 0 && !*((_BYTE *)this + 32) )
        {
          v13 = 8;
          BYTE1(v67) = v6 + 1;
        }
        v16 = v7 + 1;
        v69 = v15 & 4;
        if ( (v15 & 4) == 0 )
          v16 = v7;
        LOBYTE(v67) = v16;
        LODWORD(v71) = *((_DWORD *)a2 + 2 * v14 + 55);
        std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
          (__int64)v12,
          (__int64)&v75,
          (unsigned __int8 *)&v71);
        v17 = v75;
        if ( v75 != *((__int64 **)this + 6) )
          break;
        if ( v69 )
        {
          v13 |= 1u;
LABEL_17:
          LOWORD(v71) = *((_WORD *)this + 54);
          v18 = (__int16)v71;
          *((_WORD *)this + 54) = (_WORD)v71 + 1;
          v69 = *((_DWORD *)a2 + 2 * v14 + 55);
          std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::lower_bound(
            (__int64)this + 40,
            (__int64)&v74,
            (unsigned __int8 *)&v69);
          v17 = (__int64 *)v74;
          if ( v74 == *((_QWORD *)this + 6) )
          {
            std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::emplace<unsigned long const &,unsigned short &>(
              (__int64)this + 40,
              (__int64)&v85,
              &v69,
              &v71);
            v19 = (__int16)v71;
            v17 = v85;
          }
          else
          {
            v19 = v18;
            *(_WORD *)(v74 + 20) = v18;
            v85 = v17;
            LOBYTE(v86) = 0;
          }
          v75 = v17;
LABEL_36:
          v25 = 56LL * v70;
          *(_WORD *)&v84[v25 + 2] = v13;
          v26 = v70;
          *(_WORD *)&v84[v25] = v19;
          v8 = v26 + 1;
          *(_WORD *)&v84[v25 + 4] = *((_WORD *)a2 + 4 * v14 + 132);
          *(_WORD *)&v84[v25 + 6] = *((_WORD *)a2 + 4 * v14 + 134);
          *(_WORD *)&v84[v25 + 8] = *((_WORD *)a2 + 4 * v14 + 124);
          *(_WORD *)&v84[v25 + 10] = *((_WORD *)a2 + 4 * v14 + 126);
          v27 = *((_DWORD *)a2 + 2 * v14 + 57);
          v70 = v8;
          if ( (v27 & 2) == 0 || *((_BYTE *)this + 32) && (v27 & 4) == 0 )
            std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::erase(
              (_QWORD *)this + 5,
              &v76,
              v17);
          goto LABEL_40;
        }
        if ( !*((_BYTE *)this + 32) )
          goto LABEL_17;
        v8 = v70;
LABEL_40:
        v12 = (char *)this + 40;
        v7 = v67;
        v10 = v73 + 1;
        v6 = BYTE1(v67);
        v73 = v10;
        if ( v10 >= *((_DWORD *)a2 + 53) )
        {
          v11 = 4LL;
          goto LABEL_42;
        }
      }
      v20 = *((_WORD *)v75 + 10);
      v71 = 0LL;
      v68 = v20;
      if ( !TouchInfoAdapter::ExistingTouchContactWithId(this, v20, &v71) )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          192LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
          (const char *)0x8000FFFFLL);
        __debugbreak();
      }
      if ( v69 )
      {
        if ( (v71->Flags & 1) != 0 || (v71->Flags & 2) != 0 )
          v21 = 2;
        else
          v21 = 1;
        v13 |= v21;
      }
      else if ( (v71->Flags & 1) != 0 || (v71->Flags & 2) != 0 )
      {
        v13 |= 4u;
      }
      v22 = v15 & 0x8000;
      v19 = v68;
      v23 = (unsigned __int8)v72;
      if ( v22 )
        v23 = 1;
      v71->Reserved = 1;
      v72 = v23;
      v24 = v13 | 0x2000;
      if ( !v22 )
        v24 = v13;
      v13 = v24;
      goto LABEL_36;
    }
LABEL_42:
    v28 = *((_BYTE *)this + 696);
    if ( v28 )
    {
      v29 = 0;
      if ( *((_BYTE *)this + 135) )
      {
        do
        {
          v30 = 56LL * v29;
          if ( (*((_BYTE *)this + v30 + 138) & 0xB) != 0 && *(_WORD *)((char *)this + v30 + 154) != 1 )
          {
            v31 = 56LL * v8;
            *(_OWORD *)&v84[v31] = *(_OWORD *)((char *)this + v30 + 136);
            *(_OWORD *)&v84[v31 + 16] = *(_OWORD *)((char *)this + v30 + 152);
            *(_OWORD *)&v84[v31 + 32] = *(_OWORD *)((char *)this + v30 + 168);
            *(_QWORD *)&v84[v31 + 48] = *(_QWORD *)((char *)this + v30 + 184);
            *(_WORD *)&v84[v31 + 2] = (*((_BYTE *)this + v30 + 138) & 3) != 0 ? 4 : 0;
            ++v8;
            i = *((_QWORD *)this + 6);
LABEL_47:
            for ( i = *(_QWORD *)i; i != *((_QWORD *)this + 6); i = v74 )
            {
              if ( *(_WORD *)(i + 20) != *(_WORD *)((char *)this + v30 + 136) )
                goto LABEL_47;
              std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::erase(
                (_QWORD *)this + 5,
                &v74,
                (__int64 *)i);
            }
          }
          ++v29;
        }
        while ( v29 < *((unsigned __int8 *)this + 135) );
        v28 = *((_BYTE *)this + 696);
        v6 = BYTE1(v67);
        v7 = v67;
      }
    }
    v33 = 0LL;
    v34 = *((_DWORD *)this + 26);
    v79 = *((_DWORD *)a2 + 2);
    v80 = v34;
    v78 = 0;
    v81 = v6;
    v82 = v7;
    v83 = v8;
    v77 = 56 * v8 + 24;
    if ( !v28 )
    {
      *((_BYTE *)this + 696) = 1;
      if ( v7 )
      {
        v33 = 1LL;
        v78 = 1;
      }
      else if ( v6 )
      {
        v33 = 257LL;
        v78 = 257;
        v9 = 257;
      }
      else
      {
        if ( !*((_BYTE *)this + 32) )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x150,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
            (const char *)0x8000FFFFLL);
          return 2147549183LL;
        }
        BYTE2(v67) = 1;
        v9 = 0;
        *((_BYTE *)this + 696) = 0;
      }
      v35 = v9;
      goto LABEL_88;
    }
    if ( *((_BYTE *)this + 32) || (v35 = 256, (*((_WORD *)this + 57) & 0x100) == 0) )
    {
      v35 = 0;
      if ( v7 )
        goto LABEL_88;
      v78 = 4;
      if ( v6 )
      {
        (*(void (__fastcall **)(_QWORD, __int16 *, _QWORD))(**((_QWORD **)this + 3) + 24LL))(
          *((_QWORD *)this + 3),
          &v77,
          0LL);
        v47 = v83;
        v42 = 0;
        for ( j = 0; j < v47; ++j )
        {
          v49 = 56LL * v42;
          v50 = *(_WORD *)&v84[56 * j + 2];
          if ( (v50 & 8) != 0 )
          {
            *(_WORD *)&v84[56 * v42++ + 2] = v50 & 0xFFFB;
            *(_WORD *)&v84[v49] = *(_WORD *)&v84[56 * j];
            *(_WORD *)&v84[v49 + 4] = *(_WORD *)&v84[56 * j + 4];
            *(_WORD *)&v84[v49 + 6] = *(_WORD *)&v84[56 * j + 6];
            *(_WORD *)&v84[v49 + 8] = *(_WORD *)&v84[56 * j + 8];
            *(_WORD *)&v84[v49 + 10] = *(_WORD *)&v84[56 * j + 10];
            v47 = v83;
          }
        }
        v51 = v78;
        v52 = *((_DWORD *)this + 26) + 1;
        *((_DWORD *)this + 26) = v52;
        v80 = v52;
        v35 = v51 & 0xFEFA | 0x101;
        goto LABEL_85;
      }
      v33 = 4LL;
      v35 = 4;
    }
    else
    {
      if ( v7 )
      {
        v37 = 0LL;
        v85 = 0LL;
        v86 = 0LL;
        v87 = 0;
        if ( (_BYTE)v8 )
        {
          do
          {
            v38 = (unsigned int)v37;
            v37 = (unsigned int)(v37 + 1);
            v39 = *(_WORD *)&v84[56 * v38 + 2];
            *((_WORD *)&v85 + v38) = v39;
            *(_WORD *)&v84[56 * v38 + 2] = v39 & 0xFFFE;
          }
          while ( (unsigned int)v37 < v83 );
          v33 = v78;
        }
        v40 = *((_QWORD *)this + 3);
        LOWORD(v33) = v33 | 0x104;
        v82 = 0;
        v78 = v33;
        (*(void (__fastcall **)(__int64, __int16 *, __int64, __int64))(*(_QWORD *)v40 + 24LL))(v40, &v77, v33, v37);
        v41 = v83;
        v42 = 0;
        for ( k = 0; k < v41; ++k )
        {
          v44 = 56LL * v42;
          if ( (v84[56 * k + 2] & 8) != 0 )
          {
            ++v42;
            *(_WORD *)&v84[v44 + 2] = *((_WORD *)&v85 + k);
            *(_WORD *)&v84[v44] = *(_WORD *)&v84[56 * k];
            *(_WORD *)&v84[v44 + 4] = *(_WORD *)&v84[56 * k + 4];
            *(_WORD *)&v84[v44 + 6] = *(_WORD *)&v84[56 * k + 6];
            *(_WORD *)&v84[v44 + 8] = *(_WORD *)&v84[56 * k + 8];
            *(_WORD *)&v84[v44 + 10] = *(_WORD *)&v84[56 * k + 10];
            v41 = v83;
          }
        }
        v45 = v78;
        v46 = *((_DWORD *)this + 26) + 1;
        *((_DWORD *)this + 26) = v46;
        v80 = v46;
        v82 = v67;
        v35 = v45 & 0xFEFA | 1;
LABEL_85:
        v33 = v35;
        v78 = v35;
        v83 = v42;
        v77 = 56 * v42 + 24;
        goto LABEL_88;
      }
      if ( v6 )
      {
        v33 = 256LL;
        v78 = 256;
LABEL_88:
        if ( (_BYTE)v72 )
        {
          v53 = v35 | 0x8000;
          v33 = v53;
          v78 = v53;
        }
        if ( (*(_BYTE *)a2 & 0x20) != 0 )
        {
          LOWORD(v33) = v33 | 0x1000;
          v78 = v33;
        }
        if ( !BYTE2(v67) )
        {
          v54 = (_OWORD *)((char *)this + 112);
          v55 = &v77;
          do
          {
            v56 = *((_OWORD *)v55 + 1);
            *v54 = *(_OWORD *)v55;
            v57 = *((_OWORD *)v55 + 2);
            v54[1] = v56;
            v58 = *((_OWORD *)v55 + 3);
            v54[2] = v57;
            v59 = *((_OWORD *)v55 + 4);
            v54[3] = v58;
            v60 = *((_OWORD *)v55 + 5);
            v54[4] = v59;
            v61 = *((_OWORD *)v55 + 6);
            v54[5] = v60;
            v62 = *((_OWORD *)v55 + 7);
            v55 += 64;
            v54[6] = v61;
            v54 += 8;
            *(v54 - 1) = v62;
            --v11;
          }
          while ( v11 );
          v63 = *((_OWORD *)v55 + 1);
          *v54 = *(_OWORD *)v55;
          v64 = *((_OWORD *)v55 + 2);
          v54[1] = v63;
          v65 = *((_OWORD *)v55 + 3);
          v66 = *((_QWORD *)v55 + 8);
          v54[2] = v64;
          v54[3] = v65;
          *((_QWORD *)v54 + 8) = v66;
          (*(void (__fastcall **)(_QWORD, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
            *((_QWORD *)this + 3),
            &v77,
            v33);
        }
        return 0LL;
      }
      v35 = 260;
      v33 = 260LL;
      v78 = 260;
    }
    *((_WORD *)this + 54) = 0;
    *((_DWORD *)this + 26) = v34 + 1;
    *((_BYTE *)this + 696) = 0;
    goto LABEL_88;
  }
  return 0LL;
}
