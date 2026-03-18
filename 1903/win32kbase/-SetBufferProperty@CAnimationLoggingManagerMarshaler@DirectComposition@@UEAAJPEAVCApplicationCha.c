/*
 * XREFs of ?SetBufferProperty@CAnimationLoggingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0008BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0008DE0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0008E64 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C0008EC8 (-ReleaseCompositorComment@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAAXXZ.c)
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0013EF0 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

__int64 __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::SetBufferProperty(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __m128i *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v6; // ebx
  int v10; // r8d
  int v11; // r8d
  const unsigned __int16 *v12; // r12
  int v13; // eax
  _QWORD *v14; // r11
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rax
  __m128i *p_Src; // rdx
  size_t v20; // r8
  void *v21; // rcx
  int v23; // r8d
  int v24; // eax
  unsigned __int64 v25; // r15
  unsigned __int16 *v26; // rax
  int v27; // ecx
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // xmm0_8
  int v33; // eax
  unsigned __int64 v34; // rdx
  _DWORD *v35; // rcx
  unsigned __int64 v36; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-48h] BYREF
  __int64 Src; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v39[4]; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v40[4]; // [rsp+48h] [rbp-28h] BYREF
  __m128i v41; // [rsp+58h] [rbp-18h] BYREF

  v6 = 0;
  if ( a3 )
  {
    v10 = a3 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v23 = v11 - 1;
        if ( v23 )
        {
          if ( v23 == 2 && a5 == 16 )
          {
            v27 = _mm_cvtsi128_si32(*a4);
            v41 = *a4;
            v28 = (unsigned int)(v27 - 1);
            if ( v27 && v28 < *((_QWORD *)a2 + 10) )
            {
              _mm_lfence();
              v29 = *(_QWORD *)(v28 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
            }
            else
            {
              v29 = 0LL;
            }
            if ( v29 )
            {
              v41.m128i_i32[0] = *(_DWORD *)(v29 + 24);
              v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
                     (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 136),
                     1uLL,
                     0x6D6C4344u);
              if ( v6 < 0 )
                return (unsigned int)v6;
              p_Src = &v41;
              v20 = *((_QWORD *)this + 21);
              v21 = (void *)(*((_QWORD *)this + 17) + v20 * (*((_QWORD *)this + 20) - 1LL));
              goto LABEL_15;
            }
          }
          return (unsigned int)-1073741811;
        }
        if ( a5 )
        {
          if ( !a4 )
            return (unsigned int)-1073741811;
          v37 = 0LL;
          v24 = StringCchLengthW((const unsigned __int16 *)a4, a5, &v37);
          v25 = v37 + 1;
          if ( v24 < 0 || a5 != 2 * v25 )
            return (unsigned int)-1073741811;
          DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
          v26 = (unsigned __int16 *)Win32AllocPoolWithQuota(a5, 1835811652LL);
          *((_QWORD *)this + 29) = v26;
          if ( !v26 )
            return (unsigned int)-1073741801;
          if ( (int)StringCchCopyW(v26, v25, (const unsigned __int16 *)a4) < 0 )
            return (unsigned int)-1073741811;
        }
        else
        {
          if ( a4 )
            return (unsigned int)-1073741811;
          DirectComposition::CAnimationLoggingManagerMarshaler::ReleaseCompositorComment(this);
        }
        *a6 = 1;
        *((_BYTE *)this + 240) |= 1u;
        return (unsigned int)v6;
      }
      if ( a5 <= 4 )
        return (unsigned int)-1073741811;
      v36 = 0LL;
      v12 = &a4->m128i_u16[2];
      v13 = StringCchLengthW(&a4->m128i_u16[2], a5 - 4, &v36);
      v15 = ++v36;
      if ( v13 < 0 || a5 != 2 * v15 + 4 )
        return (unsigned int)-1073741811;
      v16 = (unsigned int)(a4->m128i_i32[0] - 1);
      if ( a4->m128i_i32[0] && v16 < v14[10] )
      {
        _mm_lfence();
        v15 = v36;
        v17 = *(_QWORD *)(v16 * v14[11] + v14[7]);
      }
      else
      {
        v17 = 0LL;
      }
      if ( v17 )
      {
        v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
               (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 184),
               1uLL,
               0x6D6C4344u);
        if ( v6 >= 0 )
        {
          v18 = Win32AllocPoolWithQuota(2 * v15 + 16, 1835811652LL);
          Src = v18;
          if ( v18 )
          {
            *(_DWORD *)v18 = *(_DWORD *)(v17 + 24);
            *(_QWORD *)(v18 + 8) = v15;
            if ( (int)StringCchCopyW((unsigned __int16 *)(v18 + 16), v15, v12) >= 0 )
            {
              p_Src = (__m128i *)&Src;
              v20 = *((_QWORD *)this + 27);
              v21 = (void *)(*((_QWORD *)this + 23) + v20 * (*((_QWORD *)this + 26) - 1LL));
LABEL_15:
              memmove(v21, p_Src, v20);
              *a6 = 1;
              return (unsigned int)v6;
            }
            return (unsigned int)-1073741811;
          }
          return (unsigned int)-1073741801;
        }
      }
    }
    else
    {
      if ( a5 != 12 )
        return (unsigned int)-1073741811;
      v30 = (unsigned int)(a4->m128i_i32[0] - 1);
      if ( a4->m128i_i32[0] && v30 < *((_QWORD *)a2 + 10) )
      {
        _mm_lfence();
        v31 = *(_QWORD *)(v30 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
      }
      else
      {
        v31 = 0LL;
      }
      if ( v31 )
      {
        v32 = a4->m128i_i64[0];
        v39[2] = a4->m128i_i32[2];
        v33 = *(_DWORD *)(v31 + 24);
        v39[1] = HIDWORD(v32);
        v39[0] = v33;
        v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
               (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 88),
               1uLL,
               0x6D6C4344u);
        if ( v6 >= 0 )
        {
          p_Src = (__m128i *)v39;
          v20 = *((_QWORD *)this + 15);
          v21 = (void *)(*((_QWORD *)this + 11) + v20 * (*((_QWORD *)this + 14) - 1LL));
          goto LABEL_15;
        }
      }
    }
  }
  else
  {
    if ( a5 != 8 )
      return (unsigned int)-1073741811;
    v34 = (unsigned int)(a4->m128i_i32[0] - 1);
    if ( a4->m128i_i32[0] && v34 < *((_QWORD *)a2 + 10) )
    {
      _mm_lfence();
      v35 = *(_DWORD **)(v34 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
    }
    else
    {
      v35 = 0LL;
    }
    if ( v35 )
    {
      v40[0] = v35[6];
      v40[1] = a4->m128i_i32[1];
      v40[2] = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v35 + 16LL))(v35);
      v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
             (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 40),
             1uLL,
             0x6D6C4344u);
      if ( v6 >= 0 )
      {
        p_Src = (__m128i *)v40;
        v20 = *((_QWORD *)this + 9);
        v21 = (void *)(*((_QWORD *)this + 5) + v20 * (*((_QWORD *)this + 8) - 1LL));
        goto LABEL_15;
      }
    }
  }
  return (unsigned int)v6;
}
