/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C0150E50
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C0150940 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0017F60 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001C38C (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C0151410 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C025A0A0 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C025C490 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CombineRectList(
        const struct tagRECT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        const struct DXGDEVICE *a4,
        LONG a5,
        LONG a6)
{
  struct tagRECT *v7; // r13
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // eax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v11; // eax
  RECT *p_DstRect; // r9
  RECT *p_SrcRect; // r8
  LONG right; // edx
  __int64 v15; // r8
  LONG v16; // r10d
  __int64 bottom; // rcx
  LONG v18; // r9d
  __int64 v19; // rdx
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  unsigned int top; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned int i; // edi
  unsigned int v26; // eax
  int v27; // esi
  LONG v28; // edx
  int v29; // r14d
  LONG v30; // r10d
  int v31; // r9d
  int v32; // r8d
  LONG left; // edi
  LONG v34; // r11d
  char v35; // al
  __int64 VidPnSourceId; // rsi
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  int v41; // edx
  int v42; // r13d
  unsigned int v43; // r8d
  int v44; // r10d
  unsigned __int16 v45; // ax
  unsigned int v46; // r11d
  const struct tagRECT *v47; // r10
  LONG *v48; // r9
  LONG v49; // r8d
  LONG v50; // edx
  LONG v51; // ecx
  LONG v52; // eax
  LONG v53; // r8d
  LONG v54; // edi
  LONG v55; // r15d
  LONG v56; // r12d
  __int64 v57; // rax
  unsigned int v58; // r14d
  __int64 v59; // rcx
  unsigned __int16 v60; // dx
  __m128i *v61; // rcx
  LONG v62; // r10d
  int v63; // r9d
  int v64; // r8d
  __int64 v65; // rdx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v66; // edi
  struct tagRECT *v67; // r11
  LONG v68; // ecx
  LONG v69; // eax
  LONG v70; // eax
  LONG v71; // ecx
  __int64 v72; // rax
  SIZE_T v74; // rax
  PVOID v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  LONG *v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __m128i v83; // xmm0
  __int64 v84; // r15
  const struct _D3DKMT_PRESENT *v85; // r14
  const struct DXGDEVICE *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rax
  DXGADAPTER **v89; // r13
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rax
  __int64 v93; // rsi
  LONG *v94; // r12
  __int64 v95; // rdi
  const struct tagRECT *ContentRect; // rax
  struct tagRECT *v97; // rdi
  _DWORD *v98; // r8
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  _QWORD *v100; // rax
  char v101; // [rsp+30h] [rbp-A9h]
  LONG v102; // [rsp+34h] [rbp-A5h]
  LONG v103; // [rsp+38h] [rbp-A1h]
  int v104; // [rsp+3Ch] [rbp-9Dh]
  unsigned __int64 v105; // [rsp+40h] [rbp-99h]
  int v106; // [rsp+48h] [rbp-91h]
  int v107; // [rsp+4Ch] [rbp-8Dh]
  LONG v108; // [rsp+50h] [rbp-89h]
  int v109; // [rsp+54h] [rbp-85h]
  unsigned int v110; // [rsp+58h] [rbp-81h]
  __int128 v111; // [rsp+60h] [rbp-79h]
  __int64 v112; // [rsp+60h] [rbp-79h]
  __int64 v113; // [rsp+70h] [rbp-69h] BYREF
  unsigned int v114; // [rsp+78h] [rbp-61h]
  unsigned int v115; // [rsp+7Ch] [rbp-5Dh]
  LONG v116; // [rsp+80h] [rbp-59h]
  struct tagRECT v117; // [rsp+88h] [rbp-51h] BYREF
  struct tagRECT v118; // [rsp+98h] [rbp-41h] BYREF
  const struct _D3DKMT_PRESENT *v119; // [rsp+A8h] [rbp-31h]
  struct tagRECT v120; // [rsp+B0h] [rbp-29h] BYREF
  const struct DXGDEVICE *v121; // [rsp+C0h] [rbp-19h]
  __int128 v122; // [rsp+C8h] [rbp-11h] BYREF

  v121 = a4;
  v7 = (struct tagRECT *)&this[8];
  v119 = a2;
  this[8].top = 0;
  this[8].right = this[2].left - this[1].right;
  this[8].bottom = this[2].top - this[1].bottom;
  this[8].left = 0;
  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    if ( (*(_BYTE *)&Value & 0x40) != 0
      && !DXGPRESENT::IntersectRect((struct tagRECT *)&this[8], &a2->DstRect, this + 8) )
    {
      goto LABEL_84;
    }
    this[9] = *(const struct tagRECT *)v7;
  }
  else
  {
    this[9].right = a5;
    this[9].bottom = a6;
    *(_QWORD *)&this[9].left = 0LL;
    v11 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_BYTE *)&v11 & 0x40) != 0 )
      p_DstRect = &a2->DstRect;
    else
      p_DstRect = 0LL;
    if ( *(_BYTE *)&v11 < 0 )
      p_SrcRect = &a2->SrcRect;
    else
      p_SrcRect = 0LL;
    if ( !(unsigned int)DXGPRESENT::ClipRects(
                          (struct tagRECT *)&this[9],
                          (struct tagRECT *)&this[8],
                          p_SrcRect,
                          p_DstRect) )
      goto LABEL_84;
  }
  right = this[1].right;
  v15 = (unsigned int)(right + v7->left);
  v16 = right + this[8].right;
  bottom = (unsigned int)this[1].bottom;
  v18 = bottom + this[8].top;
  v19 = (unsigned int)(bottom + this[8].bottom);
  v7->left = v15;
  this[8].bottom = v19;
  this[8].top = v18;
  this[8].right = v16;
  if ( (a2->Flags.Value & 0x10000) != 0 )
  {
    v20 = this[26].bottom;
    if ( v20 > 1u )
    {
      v15 = v20 * (unsigned int)v15;
      v19 = v20 * (unsigned int)v19;
      v7->left = v15;
      this[8].top = v20 * v18;
      this[8].right = v20 * v16;
      this[8].bottom = v19;
    }
  }
  if ( !this[7].top )
  {
    v80 = WdLogNewEntry5_WdAssertion(bottom, v19);
    *(_QWORD *)(v80 + 24) = 10550LL;
    WdLogEvent5_WdAssertion(v80);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    v81 = WdLogNewEntry5_WdAssertion(bottom, v19);
    *(_QWORD *)(v81 + 24) = 10551LL;
    WdLogEvent5_WdAssertion(v81);
  }
  v21 = 0LL;
  while ( 1 )
  {
    top = this[4].top;
    if ( !top )
      top = 1;
    if ( (unsigned int)v21 >= top )
      break;
    v23 = (unsigned int)v21;
    v21 = (unsigned int)(v21 + 1);
    *(&this[22].left + v23) = 0;
  }
  v24 = (unsigned int)this[7].top * (unsigned __int64)*(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
  if ( v24 <= 0xFFFFFFFF )
  {
    if ( !(_DWORD)v24 )
      goto LABEL_84;
    for ( i = 0; ; ++i )
    {
      v26 = this[4].top;
      if ( !v26 )
        v26 = 1;
      if ( i >= v26 )
        break;
      if ( *(&this[10].left + i) < (unsigned int)v24 )
      {
        operator delete[](*((void **)&this[14].left + i));
        v74 = 16LL * (unsigned int)v24;
        if ( !is_mul_ok((unsigned int)v24, 0x10uLL) )
          v74 = -1LL;
        v75 = operator new[](v74, 0x4B677844u, PagedPool);
        *((_QWORD *)&this[14].left + i) = v75;
        v79 = &this->left + i;
        if ( !v75 )
        {
          v79[40] = 0;
          v82 = WdLogNewEntry5_WdLowResource(v79, v76, v77, v78);
          *(_QWORD *)(v82 + 24) = this;
          *(_QWORD *)(v82 + 32) = (unsigned int)v24;
          WdLogEvent5_WdLowResource(v82);
          return 3221225495LL;
        }
        v79[40] = v24;
      }
    }
    v27 = 0;
    v28 = this[9].top;
    v29 = 0;
    v30 = this[8].top;
    v31 = this[9].bottom - v28;
    v32 = this[8].bottom - v30;
    v107 = 0;
    v109 = 0;
    v115 = 0;
    v114 = 0;
    if ( v32 == v31 )
    {
      left = this[9].left;
      v34 = v7->left;
      if ( this[8].right - v7->left == this[9].right - left )
      {
        v35 = 0;
        goto LABEL_30;
      }
    }
    else
    {
      v34 = this[8].left;
    }
    left = this[9].left;
    v35 = 1;
LABEL_30:
    v101 = v35;
    if ( v35 )
    {
      v115 = ((this[8].right - v34) << 16) / (this[9].right - left);
      v114 = (v32 << 16) / v31;
    }
    else
    {
      v27 = v34 - left;
      v29 = v30 - v28;
      v107 = v34 - left;
      v109 = v30 - v28;
    }
    if ( (v119->Flags.Value & 0x10100) == 0x10100 )
    {
      VidPnSourceId = v119->VidPnSourceId;
      v37 = *(_QWORD *)(*((_QWORD *)v121 + 216) + 2552LL);
      v38 = *(_QWORD *)(v37 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v38 + 160) )
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v38 + 144));
      v111 = *(_OWORD *)(3968 * VidPnSourceId + *(_QWORD *)(v37 + 112) + 628);
      v39 = *(_QWORD *)(*((_QWORD *)v121 + 5) + 96LL);
      v113 = 0LL;
      v40 = (*(__int64 (__fastcall **)(HDC, __int64 *))(v39 + 312))(a3, &v113);
      v41 = v111;
      v42 = DWORD1(v111);
      v43 = DWORD2(v111);
      v44 = HIDWORD(v111);
      if ( v40 )
      {
        v42 = DWORD1(v111) - HIDWORD(v113);
        v41 = v111 - v113;
        v43 = DWORD2(v111) - v113;
        v44 = HIDWORD(v111) - HIDWORD(v113);
      }
      v45 = this[26].bottom;
      v27 = v107;
      v104 = v41;
      v106 = v42;
      v105 = __PAIR64__(v44, v43);
      if ( v45 <= 1u )
      {
LABEL_38:
        v46 = 0;
        v110 = 0;
        if ( this[7].top )
        {
          v47 = this + 9;
          do
          {
            v48 = (LONG *)(*(_QWORD *)&this[7].right + 16LL * v46);
            *(_QWORD *)&v118.left = 0LL;
            *(_QWORD *)&v118.right = 0LL;
            v49 = *v48;
            if ( *v48 > v47->left )
            {
              v118.left = *v48;
            }
            else
            {
              v49 = v47->left;
              v118.left = v47->left;
            }
            v50 = v48[2];
            if ( v50 < this[9].right )
            {
              v118.right = v48[2];
            }
            else
            {
              v50 = this[9].right;
              v118.right = v50;
            }
            v51 = v48[1];
            if ( v51 > this[9].top )
            {
              v118.top = v48[1];
            }
            else
            {
              v51 = this[9].top;
              v118.top = v51;
            }
            v52 = v48[3];
            if ( v52 >= this[9].bottom )
              v52 = this[9].bottom;
            v118.bottom = v52;
            if ( v52 > v51 && v50 > v49 )
            {
              *(_QWORD *)&v120.left = 0LL;
              *(_QWORD *)&v120.right = 0LL;
              if ( v101 )
              {
                DXGPRESENT::XformRect(this + 8, v47, &v120, &v118, v115, v114);
                v53 = v120.left;
                v47 = this + 9;
                v46 = v110;
                v56 = v120.bottom;
                v54 = v120.right;
                v55 = v120.top;
              }
              else
              {
                v53 = v27 + v49;
                v54 = v50 + v27;
                v55 = v51 + v29;
                v56 = v52 + v29;
              }
              v57 = *(_QWORD *)&this[1].left;
              v58 = 0;
              v116 = v56;
              v108 = v55;
              v103 = v54;
              v59 = v57 + 32;
              v102 = v53;
              v112 = v57 + 32;
              LODWORD(v113) = 0;
              if ( *(_DWORD *)(v57 + 8) )
              {
                while ( 1 )
                {
                  v60 = this[26].bottom;
                  v122 = 0uLL;
                  *(_QWORD *)&v117.left = 0LL;
                  *(_QWORD *)&v117.right = 0LL;
                  v61 = (__m128i *)(16LL * v58 + v59);
                  if ( v60 > 1u )
                  {
                    v83 = *v61;
                    v62 = v60 * _mm_cvtsi128_si32(*v61);
                    DWORD1(v122) = v60 * HIDWORD(v61->m128i_i64[0]);
                    LODWORD(v122) = v62;
                    DWORD2(v122) = v60 * v83.m128i_i32[2];
                    v61 = (__m128i *)&v122;
                    HIDWORD(v122) = v60 * v83.m128i_i32[3];
                  }
                  else
                  {
                    v62 = v61->m128i_i32[0];
                  }
                  if ( v62 > v53 )
                  {
                    v117.left = v62;
                  }
                  else
                  {
                    v62 = v53;
                    v117.left = v53;
                  }
                  v63 = v61->m128i_i32[2];
                  if ( v63 < v54 )
                  {
                    v117.right = v61->m128i_i32[2];
                  }
                  else
                  {
                    v63 = v54;
                    v117.right = v54;
                  }
                  if ( v62 >= v63 )
                    goto LABEL_80;
                  v64 = v61->m128i_i32[1];
                  if ( v64 > v55 )
                  {
                    v117.top = v61->m128i_i32[1];
                  }
                  else
                  {
                    v64 = v55;
                    v117.top = v55;
                  }
                  v65 = v61->m128i_u32[3];
                  if ( (int)v65 >= v56 )
                    v65 = (unsigned int)v56;
                  v117.bottom = v65;
                  if ( v64 < (int)v65 )
                    break;
LABEL_79:
                  v53 = v102;
LABEL_80:
                  v72 = *(_QWORD *)&this[1].left;
                  ++v58;
                  v59 = v112;
                  LODWORD(v113) = v58;
                  if ( v58 >= *(_DWORD *)(v72 + 8) )
                  {
                    v46 = v110;
                    v47 = this + 9;
                    v27 = v107;
                    goto LABEL_82;
                  }
                }
                v66 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v119->Flags.Value;
                if ( (*(_DWORD *)&v66 & 0x10000) != 0 )
                {
                  v67 = (struct tagRECT *)(*(_QWORD *)&this[14].left + 16LL * (unsigned int)this[22].left);
                  if ( (*(_WORD *)&v66 & 0x100) == 0 )
                  {
                    *v67 = v117;
                    goto LABEL_77;
                  }
                  v68 = v104;
                  v69 = v105;
                  if ( v62 > v104 )
                    v68 = v62;
                  v67->left = v68;
                  if ( v63 < (int)v105 )
                    v69 = v63;
                  v67->right = v69;
                  if ( v68 < v69 )
                  {
                    v70 = HIDWORD(v105);
                    v71 = v42;
                    if ( v64 > v42 )
                      v71 = v64;
                    v67->top = v71;
                    if ( (int)v65 < SHIDWORD(v105) )
                      v70 = v65;
                    v67->bottom = v70;
                    if ( v71 < v70 )
                    {
LABEL_77:
                      ++this[22].left;
                      this->top &= ~2u;
                    }
                  }
                }
                else
                {
                  v84 = 0LL;
                  if ( this[4].top )
                  {
                    v85 = v119;
                    do
                    {
                      v86 = v121;
                      v87 = *((_QWORD *)v121 + 216);
                      if ( !v87 || !*(_QWORD *)(v87 + 2552) )
                      {
                        v88 = WdLogNewEntry5_WdAssertion(v61, v65);
                        *(_QWORD *)(v88 + 24) = 10709LL;
                        WdLogEvent5_WdAssertion(v88);
                        v87 = *((_QWORD *)v86 + 216);
                      }
                      v89 = *(DXGADAPTER ***)(v87 + 2552);
                      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v89[2]) )
                      {
                        v92 = WdLogNewEntry5_WdAssertion(v91, v90);
                        *(_QWORD *)(v92 + 24) = 10712LL;
                        WdLogEvent5_WdAssertion(v92);
                      }
                      v93 = *((_QWORD *)&this[14].left + v84);
                      v94 = &this->left + v84;
                      v95 = (unsigned int)v94[88];
                      ContentRect = ADAPTER_DISPLAY::GetContentRect(v89, v84);
                      v97 = (struct tagRECT *)(v93 + 16 * v95);
                      if ( DXGPRESENT::IntersectRect(v97, &v117, ContentRect)
                        && ((v85->Flags.Value & 0x100) == 0 || (_DWORD)v84 == v85->VidPnSourceId) )
                      {
                        v97->top -= v98[1];
                        v97->bottom -= v98[1];
                        v97->left -= *v98;
                        v97->right -= *v98;
                        CddInterface = ADAPTER_DISPLAY::GetCddInterface(v89, v84);
                        v61 = (__m128i *)CddInterface;
                        if ( CddInterface )
                          (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(
                            *(_QWORD *)CddInterface,
                            v97);
                        ++v94[88];
                        this->top &= ~2u;
                      }
                      v84 = (unsigned int)(v84 + 1);
                    }
                    while ( (unsigned int)v84 < this[4].top );
                    v58 = v113;
                    v56 = v116;
                    v42 = v106;
                  }
                  v55 = v108;
                }
                v54 = v103;
                goto LABEL_79;
              }
LABEL_82:
              v29 = v109;
            }
            v110 = ++v46;
          }
          while ( v46 < this[7].top );
        }
LABEL_84:
        this->top &= 0xFFFFFEF7;
        return 0LL;
      }
      v42 *= v45;
      v104 = v45 * v41;
      LODWORD(v105) = v45 * v43;
      HIDWORD(v105) = v45 * v44;
    }
    else
    {
      v42 = 0;
      v104 = 0;
      v105 = 0LL;
    }
    v106 = v42;
    goto LABEL_38;
  }
  v100 = (_QWORD *)WdLogNewEntry5_WdError(v21, v19, v15);
  v100[3] = -1073741675LL;
  v100[4] = this;
  v100[5] = (unsigned int)this[7].top;
  v100[6] = *(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
  WdLogEvent5_WdError(v100);
  return 3221225621LL;
}
