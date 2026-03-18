/*
 * XREFs of DxgkDDisplayEnumInternal @ 0x1C0143330
 * Callers:
 *     DxgkDDisplayEnum @ 0x1C0143310 (DxgkDDisplayEnum.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C01436C0 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET@@I@Z @ 0x1C0143758 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDI.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER@@I@Z @ 0x1C01437E4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DD.c)
 */

__int64 __fastcall DxgkDDisplayEnumInternal(ULONG64 a1, char a2)
{
  __m128i *v3; // rax
  unsigned int v4; // ebx
  char *v5; // r15
  unsigned int v6; // esi
  char *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  PVOID v10; // rcx
  PVOID v11; // rax
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // r12
  unsigned __int64 *v15; // rbx
  size_t v16; // r8
  const void *v17; // rdx
  const void *v18; // rdx
  char *v19; // rcx
  __int64 v21; // rax
  void *Src[2]; // [rsp+20h] [rbp-718h] BYREF
  void *v23[2]; // [rsp+30h] [rbp-708h]
  __m128i v24; // [rsp+40h] [rbp-6F8h]
  __m128i v25; // [rsp+50h] [rbp-6E8h]
  __m128i v26; // [rsp+60h] [rbp-6D8h]
  __m128i v27; // [rsp+70h] [rbp-6C8h]
  PVOID v28; // [rsp+80h] [rbp-6B8h] BYREF
  _BYTE v29[560]; // [rsp+88h] [rbp-6B0h] BYREF
  int v30; // [rsp+2B8h] [rbp-480h]
  PVOID P; // [rsp+2C0h] [rbp-478h] BYREF
  _BYTE v32[1076]; // [rsp+2C8h] [rbp-470h] BYREF
  int v33; // [rsp+6FCh] [rbp-3Ch]

  if ( !a2 )
    return DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)a1);
  v3 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v3 = (__m128i *)MmUserProbeAddress;
  v27 = *v3;
  v25 = v27;
  v24 = v3[1];
  v26 = v24;
  v4 = _mm_cvtsi128_si32(_mm_srli_si128(v27, 4));
  v5 = (char *)_mm_srli_si128(v27, 8).m128i_u64[0];
  ProbeForWrite(v5, 560LL * v4, 4u);
  v6 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 4));
  v7 = (char *)_mm_srli_si128(v24, 8).m128i_u64[0];
  ProbeForWrite(v7, 1076LL * v6, 4u);
  v10 = 0LL;
  v28 = 0LL;
  v30 = 0;
  v11 = 0LL;
  P = 0LL;
  v33 = 0;
  if ( v4 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::AllocateElements(&v28, v4);
    v10 = v28;
    v11 = P;
  }
  if ( v6 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET,1>::AllocateElements(&P, v6);
    v10 = v28;
    v11 = P;
  }
  if ( v4 && !v10 || v6 && !v11 )
  {
    v21 = WdLogNewEntry5_WdError(v10, v8, v9);
    *(_QWORD *)(v21 + 24) = v4;
    *(_QWORD *)(v21 + 32) = v6;
    WdLogEvent5_WdError(v21);
    if ( P != v32 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v33 = 0;
    if ( v28 != v29 && v28 )
      ExFreePoolWithTag(v28, 0);
    return 3221225495LL;
  }
  else
  {
    Src[0] = (void *)v27.m128i_i64[0];
    v23[0] = (void *)v24.m128i_i64[0];
    Src[1] = v10;
    v23[1] = v11;
    v12 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)Src);
    v13 = LODWORD(Src[0]);
    v25.m128i_i32[0] = (__int32)Src[0];
    v14 = LODWORD(v23[0]);
    v26.m128i_i32[0] = (__int32)v23[0];
    v15 = (unsigned __int64 *)MmUserProbeAddress;
    if ( a1 + 32 > MmUserProbeAddress || a1 + 32 <= a1 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v15 = (unsigned __int64 *)MmUserProbeAddress;
    }
    *(__m128i *)a1 = v25;
    *(__m128i *)(a1 + 16) = v26;
    if ( v12 >= 0 )
    {
      if ( v5 )
      {
        v16 = 560 * v13;
        v17 = Src[1];
        if ( (unsigned __int64)&v5[v16] > *v15 || &v5[v16] <= v5 )
        {
          *(_BYTE *)*v15 = 0;
          v15 = (unsigned __int64 *)MmUserProbeAddress;
        }
        memmove(v5, v17, v16);
      }
      if ( v7 )
      {
        v18 = v23[1];
        v19 = &v7[1076 * v14];
        if ( (unsigned __int64)v19 > *v15 || v19 <= v7 )
          *(_BYTE *)*v15 = 0;
        memmove(v7, v18, 1076 * v14);
      }
    }
    if ( P != v32 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v33 = 0;
    if ( v28 != v29 )
    {
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
    }
    return (unsigned int)v12;
  }
}
