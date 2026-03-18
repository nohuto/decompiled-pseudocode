/*
 * XREFs of ?SetBufferProperty@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01ADD40
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C0013EF0 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEAVCInteractionTrackerBindingManagerMarshaler@2@@Z @ 0x1C01ACA88 (-SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicatio.c)
 *     ?RemoveBindingManagerReferenceFromTrackerIfNecessary@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@II@Z @ 0x1C01ADB38 (-RemoveBindingManagerReferenceFromTrackerIfNecessary@CInteractionTrackerBindingManagerMarshaler@.c)
 */

__int64 __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::SetBufferProperty(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        _DWORD *a4,
        unsigned __int64 a5,
        bool *a6)
{
  unsigned int v6; // edi
  __int32 v9; // r12d
  int v10; // r13d
  unsigned __int64 v11; // rdx
  __int64 v12; // r15
  unsigned __int64 v13; // rdx
  __int64 v14; // r14
  unsigned __int64 v15; // r9
  unsigned int v16; // ecx
  int v17; // r11d
  int v18; // r10d
  __int64 v19; // rdx
  size_t v20; // r8
  int v21; // edx
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v22; // rax
  DirectComposition::CInteractionTrackerBindingManagerMarshaler *v23; // rax
  size_t v24; // r8
  __int64 v25; // rcx
  void *v26; // rcx
  __m128i *v28; // rcx
  __m128i v29; // xmm1
  __int64 v30; // [rsp+20h] [rbp-79h]
  _QWORD Src[2]; // [rsp+30h] [rbp-69h] BYREF
  __int32 v32; // [rsp+40h] [rbp-59h]
  int v33; // [rsp+44h] [rbp-55h]
  char v34; // [rsp+48h] [rbp-51h]
  __m128i v35; // [rsp+50h] [rbp-49h] BYREF
  __m128i v36; // [rsp+60h] [rbp-39h]
  __int128 v37; // [rsp+70h] [rbp-29h]
  unsigned int v38[2]; // [rsp+90h] [rbp-9h]
  __int32 v39; // [rsp+98h] [rbp-1h]

  v6 = 0;
  *a6 = 0;
  if ( a3 || a5 != 12 )
    return (unsigned int)-1073741811;
  v9 = a4[2];
  *(_QWORD *)v38 = *(_QWORD *)a4;
  v10 = v38[0];
  v39 = v9;
  v11 = v38[0] - 1;
  if ( v38[0] && v11 < *((_QWORD *)a2 + 10) )
  {
    _mm_lfence();
    v9 = v39;
    v10 = v38[0];
    v12 = *(_QWORD *)(v11 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
  }
  else
  {
    v12 = 0LL;
  }
  v13 = v38[1] - 1;
  if ( v38[1] && v13 < *((_QWORD *)a2 + 10) )
  {
    _mm_lfence();
    v9 = v39;
    v10 = v38[0];
    v14 = *(_QWORD *)(v13 * *((_QWORD *)a2 + 11) + *((_QWORD *)a2 + 7));
  }
  else
  {
    v14 = 0LL;
  }
  if ( v12
    && v14
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 120LL))(v12, 88LL)
    && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 120LL))(v14, 88LL) )
  {
    v15 = *((_QWORD *)this + 10);
    v16 = 0;
    v17 = *(_DWORD *)(v12 + 24);
    v18 = *(_DWORD *)(v14 + 24);
    if ( v15 )
    {
      v19 = 0LL;
      v20 = *((_QWORD *)this + 11);
      v30 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        v37 = *(_OWORD *)(v19 * v20 + v30);
        v21 = *(_DWORD *)(v37 + 24);
        if ( v21 == v17 && *(_DWORD *)(*((_QWORD *)&v37 + 1) + 24LL) == v18 )
          break;
        if ( v21 == v18 && *(_DWORD *)(*((_QWORD *)&v37 + 1) + 24LL) == v17 )
          break;
        v19 = ++v16;
        if ( v16 >= v15 )
          goto LABEL_23;
      }
      v28 = (__m128i *)(v20 * v16 + v30);
      v29 = v28[1];
      v35 = *v28;
      v36 = v29;
      if ( _mm_cvtsi128_si32(v29) == v9 )
        return v6;
      v36.m128i_i32[0] = v9;
      v36.m128i_i8[8] = 1;
      memmove(v28, &v35, v20);
      if ( !v9 )
      {
        DirectComposition::CInteractionTrackerBindingManagerMarshaler::RemoveBindingManagerReferenceFromTrackerIfNecessary(
          this,
          a2,
          v10,
          v38[1]);
        goto LABEL_31;
      }
      if ( !*(_QWORD *)(v12 + 400) )
        DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
          (DirectComposition::CInteractionTrackerMarshaler *)v12,
          a2,
          this);
      if ( *(_QWORD *)(v14 + 400) )
        goto LABEL_31;
LABEL_30:
      DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
        (DirectComposition::CInteractionTrackerMarshaler *)v14,
        a2,
        this);
LABEL_31:
      *((_DWORD *)this + 4) |= 0x40u;
      *a6 = 1;
      return v6;
    }
LABEL_23:
    if ( v9 )
    {
      v22 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v12 + 400);
      if ( !v22 || v22 == this )
      {
        v23 = *(DirectComposition::CInteractionTrackerBindingManagerMarshaler **)(v14 + 400);
        if ( !v23 || v23 == this )
        {
          v6 = DirectComposition::CDCompDynamicArrayBase::Grow(
                 (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 56),
                 1LL,
                 0x73694344u);
          if ( (v6 & 0x80000000) != 0 )
            return v6;
          v24 = *((_QWORD *)this + 11);
          v25 = *((_QWORD *)this + 10) - 1LL;
          v33 = 0;
          Src[0] = v12;
          v26 = (void *)(*((_QWORD *)this + 7) + v24 * v25);
          Src[1] = v14;
          v32 = v9;
          v34 = 1;
          memmove(v26, Src, v24);
          DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(
            (DirectComposition::CInteractionTrackerMarshaler *)v12,
            a2,
            this);
          goto LABEL_30;
        }
      }
    }
  }
  return 3221225485LL;
}
