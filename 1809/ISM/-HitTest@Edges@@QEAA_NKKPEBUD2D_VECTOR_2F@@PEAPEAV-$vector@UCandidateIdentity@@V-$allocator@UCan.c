/*
 * XREFs of ?HitTest@Edges@@QEAA_NKKPEBUD2D_VECTOR_2F@@PEAPEAV?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@@Z @ 0x1800CB794
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800CA970 (-OnHitTest@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorInitialSt.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z @ 0x180027824 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@QEBG@Z.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800278A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18004B594 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z @ 0x1800CAFCC (-HitTest@Edge@@QEAA_NKKPEBUD2D_VECTOR_2F@@@Z.c)
 *     ?FindEdge@Edges@@AEBAHPEBG@Z @ 0x1800CB5A0 (-FindEdge@Edges@@AEBAHPEBG@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CC184 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Emplace_reallocate@AEAUCandidateIdentity@@@?$vector@UCandidateIdentity@@V?$allocator@UCandidateIdentity@@@std@@@std@@QEAAPEAUCandidateIdentity@@QEAU2@AEAU2@@Z @ 0x1800CC218 (--$_Emplace_reallocate@AEAUCandidateIdentity@@@-$vector@UCandidateIdentity@@V-$allocator@UCandid.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall Edges::HitTest(Edges *this, int a2, int a3, const struct D2D_VECTOR_2F *a4, _QWORD *a5)
{
  const struct D2D_VECTOR_2F *v5; // rax
  __int64 v7; // rdi
  int v8; // r13d
  unsigned int v9; // r14d
  _QWORD *v10; // r10
  __int64 v11; // rbx
  int v12; // r15d
  int Edge; // esi
  __int64 v14; // r14
  __int64 v15; // r8
  _QWORD *v16; // rcx
  const char *v17; // r9
  _QWORD *v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r8d
  char v24; // al
  char v25; // al
  bool v26; // zf
  char v27; // al
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // rbx
  __int64 v31; // rbp
  _QWORD *v32; // rax
  _WORD *v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rsi
  unsigned int v37; // [rsp+20h] [rbp-88h]
  unsigned int v38; // [rsp+24h] [rbp-84h]
  unsigned int v39; // [rsp+28h] [rbp-80h]
  __int64 v40; // [rsp+30h] [rbp-78h]
  _QWORD v42[4]; // [rsp+48h] [rbp-60h] BYREF
  int v43; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v5 = a4;
  v38 = a3;
  v39 = a2;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v37 = 0;
  v10 = (_QWORD *)*a5;
  if ( *a5 )
  {
    if ( (v10[1] - *v10) / 40LL )
    {
      do
      {
        v40 = 5LL * v9;
        v11 = *v10 + 40LL * v9;
        v12 = *(_DWORD *)(v11 + 32);
        if ( v12 )
        {
          if ( *(_QWORD *)(v11 + 24) >= 8uLL )
            v11 = *(_QWORD *)v11;
          if ( v11
            && *(_WORD *)v11
            && (Edge = 0, v14 = 0LL, v15 = *(_QWORD *)this, (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 104LL) > 0) )
          {
            while ( 1 )
            {
              v16 = (_QWORD *)(v7 + v15 + 8);
              if ( v16[3] >= 8uLL )
                v16 = (_QWORD *)*v16;
              if ( !(unsigned int)_o__wcsicmp(v16) )
                break;
              ++Edge;
              ++v14;
              v7 += 104LL;
              v15 = *(_QWORD *)this;
              if ( Edge >= (int)((*((_QWORD *)this + 1) - *(_QWORD *)this) / 104LL) )
              {
                v7 = 0LL;
                goto LABEL_17;
              }
            }
            v21 = 104 * v14;
            v22 = *(_QWORD *)this;
            v23 = *(_DWORD *)(104 * v14 + *(_QWORD *)this + 64);
            v7 = 0LL;
            if ( !v23 || (v24 = 1, v23 != v12) )
              v24 = 0;
            if ( v24 )
              goto LABEL_32;
            v25 = 0;
            if ( *(_QWORD *)(v21 + v22 + 24) )
            {
              v25 = *(_QWORD *)(v21 + v22 + 40) != 0LL;
              if ( v23 )
                v25 |= 2u;
            }
            v26 = (v25 & 1) == 0;
            v27 = 0;
            if ( !v26 )
LABEL_32:
              v27 = 1;
            if ( !v27 )
            {
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x235,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edges.cpp",
                v17);
              JUMPOUT(0x1800CBB8CLL);
            }
          }
          else
          {
LABEL_17:
            Edge = -1;
          }
        }
        else
        {
          if ( *(_QWORD *)(v11 + 24) >= 8uLL )
            v11 = *(_QWORD *)v11;
          Edge = Edges::FindEdge(this, (const unsigned __int16 *)v11);
        }
        if ( Edge >= 0 )
        {
          v9 = v37;
          if ( Edge::HitTest((Edge *)(*(_QWORD *)this + 104LL * v37), v39, v38, a4) )
          {
            ++v8;
            v9 = ++v37;
            goto LABEL_41;
          }
          v18 = (_QWORD *)*a5;
          v28 = *(_QWORD *)(*a5 + 8LL);
          v29 = *(_QWORD *)*a5 + 8 * (v40 + 5);
          if ( v29 != v28 )
          {
            do
            {
              std::wstring::operator=(v29 - 40, v29);
              *(_DWORD *)(v29 - 8) = *(_DWORD *)(v29 + 32);
              v29 += 40LL;
            }
            while ( v29 != v28 );
            v28 = v18[1];
          }
          std::wstring::~wstring(v28 - 40);
        }
        else
        {
          v18 = (_QWORD *)*a5;
          v19 = *(_QWORD *)(*a5 + 8LL);
          v20 = *(_QWORD *)*a5 + 8 * (v40 + 5);
          if ( v20 != v19 )
          {
            do
            {
              std::wstring::operator=(v20 - 40, v20);
              *(_DWORD *)(v20 - 8) = *(_DWORD *)(v20 + 32);
              v20 += 40LL;
            }
            while ( v20 != v19 );
            v19 = v18[1];
          }
          std::wstring::~wstring(v19 - 40);
          v9 = v37;
        }
        v18[1] -= 40LL;
        v7 = 0LL;
LABEL_41:
        v10 = (_QWORD *)*a5;
      }
      while ( v9 < (unsigned __int64)((*(_QWORD *)(*a5 + 8LL) - *(_QWORD *)*a5) / 40LL) );
    }
  }
  else
  {
    v30 = *(_QWORD *)this;
    v31 = *((_QWORD *)this + 1);
    while ( v30 != v31 )
    {
      if ( Edge::HitTest((Edge *)v30, a2, a3, v5) )
      {
        if ( *a5 || (v32 = operator new(0x18uLL), *v32 = 0LL, v32[1] = 0LL, v32[2] = 0LL, (*a5 = v32) != 0LL) )
        {
          v42[2] = 0LL;
          v42[3] = 7LL;
          LOWORD(v42[0]) = 0;
          v43 = 0;
          v33 = (_WORD *)(v30 + 8);
          if ( *(_QWORD *)(v30 + 32) >= 8uLL )
            v33 = *(_WORD **)v33;
          std::wstring::operator=(v42, v33);
          v43 = *(_DWORD *)(v30 + 64);
          v34 = *a5;
          v35 = *(_QWORD *)(*a5 + 8LL);
          if ( *(_QWORD *)(*a5 + 16LL) == v35 )
          {
            std::vector<CandidateIdentity>::_Emplace_reallocate<CandidateIdentity &>(*a5, *(_QWORD *)(*a5 + 8LL), v42);
          }
          else
          {
            std::wstring::wstring(*(_QWORD **)(*a5 + 8LL), (__int64)v42);
            *(_DWORD *)(v35 + 32) = v43;
            *(_QWORD *)(v34 + 8) += 40LL;
          }
          ++v8;
          std::wstring::~wstring((__int64)v42);
        }
      }
      v30 += 104LL;
      v5 = a4;
      a3 = v38;
      a2 = v39;
    }
  }
  return v8 != 0;
}
