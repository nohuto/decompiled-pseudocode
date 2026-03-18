/*
 * XREFs of ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C013C990
 * Callers:
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C013CF90 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 * Callees:
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C00112C0 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001B8C8 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z @ 0x1C013CF10 (-ClipRects@DXGPRESENT@@SAHPEAUtagRECT@@0PEBU2@1@Z.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C02251AC (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z @ 0x1C0227350 (-XformRect@DXGPRESENT@@SAXPEBUtagRECT@@0PEAU2@0II@Z.c)
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
  LONG v15; // r8d
  LONG v16; // r10d
  __int64 bottom; // rcx
  LONG v18; // r9d
  LONG v19; // edx
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
  __int64 v39; // rax
  int v40; // eax
  int v41; // edx
  LONG v42; // r12d
  int v43; // r10d
  LONG v44; // r13d
  unsigned __int16 v45; // ax
  unsigned int v46; // edi
  const struct tagRECT *v47; // r10
  LONG *v48; // r9
  LONG v49; // r8d
  LONG v50; // edx
  LONG v51; // ecx
  LONG v52; // eax
  LONG v53; // r8d
  LONG v54; // r11d
  LONG v55; // esi
  LONG v56; // r15d
  __int64 v57; // rax
  unsigned int v58; // r14d
  __int64 v59; // rcx
  unsigned __int16 v60; // dx
  __m128i *v61; // rcx
  LONG v62; // r10d
  __int32 v63; // r9d
  LONG v64; // r8d
  LONG v65; // edx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v66; // edi
  struct tagRECT *v67; // r11
  int v68; // ecx
  int v69; // eax
  LONG v70; // ecx
  LONG v71; // eax
  __int64 v72; // rax
  SIZE_T v74; // rax
  PVOID v75; // rax
  LONG *v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __m128i v80; // xmm0
  __int64 v81; // r15
  const struct _D3DKMT_PRESENT *v82; // r14
  const struct DXGDEVICE *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // rax
  DXGADAPTER **v86; // r13
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rsi
  LONG *v90; // r12
  __int64 v91; // rdi
  const struct tagRECT *ContentRect; // rax
  struct tagRECT *v93; // rdi
  _DWORD *v94; // r8
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  _QWORD *v96; // rax
  char v97; // [rsp+30h] [rbp-99h]
  struct tagRECT v98; // [rsp+38h] [rbp-91h] BYREF
  int v99; // [rsp+48h] [rbp-81h]
  int v100; // [rsp+4Ch] [rbp-7Dh]
  LONG v101; // [rsp+50h] [rbp-79h]
  LONG v102; // [rsp+54h] [rbp-75h]
  int v103; // [rsp+58h] [rbp-71h]
  int v104; // [rsp+5Ch] [rbp-6Dh]
  __int128 v105; // [rsp+60h] [rbp-69h]
  unsigned int v106; // [rsp+70h] [rbp-59h]
  unsigned int v107; // [rsp+74h] [rbp-55h]
  unsigned int v108; // [rsp+78h] [rbp-51h]
  unsigned int v109; // [rsp+80h] [rbp-49h] BYREF
  int v110; // [rsp+84h] [rbp-45h]
  struct tagRECT v111; // [rsp+88h] [rbp-41h] BYREF
  struct tagRECT v112; // [rsp+98h] [rbp-31h] BYREF
  const struct _D3DKMT_PRESENT *v113; // [rsp+A8h] [rbp-21h]
  const struct DXGDEVICE *v114; // [rsp+B0h] [rbp-19h]
  _DWORD v115[4]; // [rsp+B8h] [rbp-11h] BYREF

  v114 = a4;
  v7 = (struct tagRECT *)&this[8];
  v113 = a2;
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
  v15 = right + v7->left;
  v16 = right + this[8].right;
  bottom = (unsigned int)this[1].bottom;
  v18 = bottom + this[8].top;
  v19 = bottom + this[8].bottom;
  v7->left = v15;
  this[8].bottom = v19;
  this[8].top = v18;
  this[8].right = v16;
  if ( (a2->Flags.Value & 0x10000) != 0 )
  {
    v20 = this[26].bottom;
    if ( v20 > 1u )
    {
      v7->left = v20 * v15;
      this[8].top = v20 * v18;
      this[8].right = v20 * v16;
      this[8].bottom = v20 * v19;
    }
  }
  if ( !this[7].top )
  {
    v77 = WdLogNewEntry5_WdAssertion(bottom);
    *(_QWORD *)(v77 + 24) = 10385LL;
    WdLogEvent5_WdAssertion(v77);
  }
  if ( !*(_QWORD *)&this[1].left )
  {
    v78 = WdLogNewEntry5_WdAssertion(bottom);
    *(_QWORD *)(v78 + 24) = 10386LL;
    WdLogEvent5_WdAssertion(v78);
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
        v75 = operator new(v74, 0x4B677844u, PagedPool);
        *((_QWORD *)&this[14].left + i) = v75;
        v76 = &this->left + i;
        if ( !v75 )
        {
          v76[40] = 0;
          v79 = WdLogNewEntry5_WdLowResource(v76);
          *(_QWORD *)(v79 + 24) = this;
          *(_QWORD *)(v79 + 32) = (unsigned int)v24;
          WdLogEvent5_WdLowResource(v79);
          return 3221225495LL;
        }
        v76[40] = v24;
      }
    }
    v27 = 0;
    v28 = this[9].top;
    v29 = 0;
    v30 = this[8].top;
    v31 = this[9].bottom - v28;
    v32 = this[8].bottom - v30;
    v103 = 0;
    v104 = 0;
    v107 = 0;
    v106 = 0;
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
    v97 = v35;
    if ( v35 )
    {
      v107 = ((this[8].right - v34) << 16) / (this[9].right - left);
      v106 = (v32 << 16) / v31;
    }
    else
    {
      v27 = v34 - left;
      v29 = v30 - v28;
      v103 = v34 - left;
      v104 = v30 - v28;
    }
    v105 = 0LL;
    if ( (v113->Flags.Value & 0x10100) == 0x10100 )
    {
      VidPnSourceId = v113->VidPnSourceId;
      v37 = *(_QWORD *)(*((_QWORD *)v114 + 216) + 2520LL);
      v38 = *(_QWORD *)(v37 + 16);
      if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v38 + 160) )
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v38 + 144));
      v39 = *((_QWORD *)v114 + 5);
      v105 = *(_OWORD *)(3760 * VidPnSourceId + *(_QWORD *)(v37 + 112) + 628);
      v40 = (*(__int64 (__fastcall **)(HDC, unsigned int *))(*(_QWORD *)(v39 + 104) + 320LL))(a3, &v109);
      v41 = v105;
      v42 = DWORD1(v105);
      v43 = DWORD2(v105);
      v44 = HIDWORD(v105);
      if ( v40 )
      {
        v42 = DWORD1(v105) - v110;
        v41 = v105 - v109;
        v43 = DWORD2(v105) - v109;
        v44 = HIDWORD(v105) - v110;
      }
      v45 = this[26].bottom;
      v27 = v103;
      v99 = v41;
      v101 = v42;
      v100 = v43;
      v102 = v44;
      if ( v45 <= 1u )
      {
LABEL_38:
        v46 = 0;
        v109 = 0;
        if ( this[7].top )
        {
          v47 = this + 9;
          do
          {
            v48 = (LONG *)(*(_QWORD *)&this[7].right + 16LL * v46);
            v49 = *v48;
            if ( *v48 > v47->left )
            {
              v112.left = *v48;
            }
            else
            {
              v49 = v47->left;
              v112.left = v47->left;
            }
            v50 = v48[2];
            if ( v50 < this[9].right )
            {
              v112.right = v48[2];
            }
            else
            {
              v50 = this[9].right;
              v112.right = v50;
            }
            v51 = v48[1];
            if ( v51 > this[9].top )
            {
              v112.top = v48[1];
            }
            else
            {
              v51 = this[9].top;
              v112.top = v51;
            }
            v52 = v48[3];
            if ( v52 >= this[9].bottom )
              v52 = this[9].bottom;
            v112.bottom = v52;
            if ( v52 > v51 && v50 > v49 )
            {
              if ( v97 )
              {
                DXGPRESENT::XformRect(this + 8, v47, &v98, &v112, v107, v106);
                v53 = v98.left;
                v47 = this + 9;
                v54 = v98.right;
                v55 = v98.top;
                v56 = v98.bottom;
              }
              else
              {
                v53 = v27 + v49;
                v54 = v50 + v27;
                v55 = v51 + v29;
                v98.left = v53;
                v56 = v52 + v29;
                v98.top = v51 + v29;
                v98.right = v54;
                v98.bottom = v52 + v29;
              }
              v57 = *(_QWORD *)&this[1].left;
              v58 = 0;
              v108 = 0;
              v59 = v57 + 32;
              *(_QWORD *)&v105 = v57 + 32;
              if ( *(_DWORD *)(v57 + 8) )
              {
                while ( 1 )
                {
                  v60 = this[26].bottom;
                  v61 = (__m128i *)(16LL * v58 + v59);
                  if ( v60 > 1u )
                  {
                    v80 = *v61;
                    v62 = v60 * _mm_cvtsi128_si32(*v61);
                    v115[1] = v60 * HIDWORD(v61->m128i_i64[0]);
                    v115[0] = v62;
                    v115[2] = v60 * v80.m128i_i32[2];
                    v61 = (__m128i *)v115;
                    v115[3] = v60 * v80.m128i_i32[3];
                  }
                  else
                  {
                    v62 = v61->m128i_i32[0];
                  }
                  if ( v62 > v53 )
                  {
                    v111.left = v62;
                  }
                  else
                  {
                    v62 = v53;
                    v111.left = v53;
                  }
                  v63 = v61->m128i_i32[2];
                  if ( v63 < v54 )
                  {
                    v111.right = v61->m128i_i32[2];
                  }
                  else
                  {
                    v63 = v54;
                    v111.right = v54;
                  }
                  if ( v62 >= v63 )
                    goto LABEL_80;
                  v64 = v61->m128i_i32[1];
                  if ( v64 > v55 )
                  {
                    v111.top = v61->m128i_i32[1];
                  }
                  else
                  {
                    v64 = v55;
                    v111.top = v55;
                  }
                  v65 = v61->m128i_i32[3];
                  if ( v65 >= v56 )
                    v65 = v56;
                  v111.bottom = v65;
                  if ( v64 < v65 )
                    break;
LABEL_79:
                  v53 = v98.left;
LABEL_80:
                  v72 = *(_QWORD *)&this[1].left;
                  ++v58;
                  v59 = v105;
                  v108 = v58;
                  if ( v58 >= *(_DWORD *)(v72 + 8) )
                  {
                    v46 = v109;
                    v47 = this + 9;
                    goto LABEL_82;
                  }
                }
                v66 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)v113->Flags.Value;
                if ( (*(_DWORD *)&v66 & 0x10000) == 0 )
                {
                  v81 = 0LL;
                  if ( this[4].top )
                  {
                    v82 = v113;
                    do
                    {
                      v83 = v114;
                      v84 = *((_QWORD *)v114 + 216);
                      if ( !v84 || !*(_QWORD *)(v84 + 2520) )
                      {
                        v85 = WdLogNewEntry5_WdAssertion(v61);
                        *(_QWORD *)(v85 + 24) = 10544LL;
                        WdLogEvent5_WdAssertion(v85);
                        v84 = *((_QWORD *)v83 + 216);
                      }
                      v86 = *(DXGADAPTER ***)(v84 + 2520);
                      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v86[2]) )
                      {
                        v88 = WdLogNewEntry5_WdAssertion(v87);
                        *(_QWORD *)(v88 + 24) = 10547LL;
                        WdLogEvent5_WdAssertion(v88);
                      }
                      v89 = *((_QWORD *)&this[14].left + v81);
                      v90 = &this->left + v81;
                      v91 = (unsigned int)v90[88];
                      ContentRect = ADAPTER_DISPLAY::GetContentRect(v86, v81);
                      v93 = (struct tagRECT *)(v89 + 16 * v91);
                      if ( DXGPRESENT::IntersectRect(v93, &v111, ContentRect)
                        && ((v82->Flags.Value & 0x100) == 0 || (_DWORD)v81 == v82->VidPnSourceId) )
                      {
                        v93->top -= v94[1];
                        v93->bottom -= v94[1];
                        v93->left -= *v94;
                        v93->right -= *v94;
                        CddInterface = ADAPTER_DISPLAY::GetCddInterface(v86, v81);
                        v61 = (__m128i *)CddInterface;
                        if ( CddInterface )
                          (*((void (__fastcall **)(_QWORD, struct tagRECT *))CddInterface + 1))(
                            *(_QWORD *)CddInterface,
                            v93);
                        ++v90[88];
                        this->top &= ~2u;
                      }
                      v81 = (unsigned int)(v81 + 1);
                    }
                    while ( (unsigned int)v81 < this[4].top );
                    v58 = v108;
                    v54 = v98.right;
                    v55 = v98.top;
                    v42 = v101;
                    v44 = v102;
                  }
                  v56 = v98.bottom;
                  goto LABEL_79;
                }
                v67 = (struct tagRECT *)(*(_QWORD *)&this[14].left + 16LL * (unsigned int)this[22].left);
                if ( (*(_WORD *)&v66 & 0x100) != 0 )
                {
                  v68 = v99;
                  v69 = v100;
                  if ( v62 > v99 )
                    v68 = v62;
                  v67->left = v68;
                  if ( v63 < v69 )
                    v69 = v63;
                  v67->right = v69;
                  if ( v68 < v69 )
                  {
                    v70 = v42;
                    v71 = v44;
                    if ( v64 > v42 )
                      v70 = v64;
                    v67->top = v70;
                    if ( v65 < v44 )
                      v71 = v65;
                    v67->bottom = v71;
                    if ( v70 < v71 )
                    {
LABEL_77:
                      ++this[22].left;
                      this->top &= ~2u;
                    }
                  }
                  v54 = v98.right;
                  goto LABEL_79;
                }
                *v67 = v111;
                goto LABEL_77;
              }
LABEL_82:
              v29 = v104;
            }
            v27 = v103;
            v109 = ++v46;
          }
          while ( v46 < this[7].top );
        }
LABEL_84:
        this->top &= 0xFFFFFEF7;
        return 0LL;
      }
      v42 *= v45;
      v44 *= v45;
      v99 = v45 * v41;
      v100 = v45 * v43;
    }
    else
    {
      v44 = HIDWORD(v105);
      v42 = DWORD1(v105);
      v100 = DWORD2(v105);
      v99 = v105;
    }
    v101 = v42;
    v102 = v44;
    goto LABEL_38;
  }
  v96 = (_QWORD *)WdLogNewEntry5_WdError(v21);
  v96[3] = -1073741675LL;
  v96[4] = this;
  v96[5] = (unsigned int)this[7].top;
  v96[6] = *(unsigned int *)(*(_QWORD *)&this[1].left + 8LL);
  WdLogEvent5_WdError(v96);
  return 3221225621LL;
}
