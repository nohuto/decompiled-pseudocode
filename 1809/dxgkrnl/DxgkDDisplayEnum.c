/*
 * XREFs of DxgkDDisplayEnum @ 0x1C0135C50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z @ 0x1C0135FE4 (-DxgkDDisplayEnumCore@@YAJPEAU_D3DKMT_DDISPLAY_ENUM@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_TARGET@@I@Z @ 0x1C01414A4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_TARGET@@$00@@QEAAPEAU_D3DKMT_DDI.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DDISPLAY_ENUM_ADAPTER@@I@Z @ 0x1C0141544 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_DDISPLAY_ENUM_ADAPTER@@$00@@QEAAPEAU_D3DKMT_DD.c)
 */

__int64 __fastcall DxgkDDisplayEnum(ULONG64 a1, char a2)
{
  __m128i *v4; // rax
  unsigned int v5; // ebx
  char *v6; // r15
  unsigned int v7; // esi
  char *v8; // r14
  PVOID v9; // rcx
  PVOID v10; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int64 *v14; // rbx
  size_t v15; // r8
  const void *v16; // rdx
  const void *v17; // rdx
  char *v18; // rcx
  __int64 v19; // rax
  void *Src[2]; // [rsp+20h] [rbp-718h] BYREF
  void *v21[2]; // [rsp+30h] [rbp-708h]
  __m128i v22; // [rsp+40h] [rbp-6F8h]
  __m128i v23; // [rsp+50h] [rbp-6E8h]
  __m128i v24; // [rsp+60h] [rbp-6D8h]
  __m128i v25; // [rsp+70h] [rbp-6C8h]
  PVOID v26; // [rsp+80h] [rbp-6B8h] BYREF
  _BYTE v27[560]; // [rsp+88h] [rbp-6B0h] BYREF
  int v28; // [rsp+2B8h] [rbp-480h]
  PVOID P; // [rsp+2C0h] [rbp-478h] BYREF
  _BYTE v30[1076]; // [rsp+2C8h] [rbp-470h] BYREF
  int v31; // [rsp+6FCh] [rbp-3Ch]

  if ( !a2 )
    return DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)a1);
  v4 = (__m128i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (__m128i *)MmUserProbeAddress;
  v25 = *v4;
  v23 = v25;
  v22 = v4[1];
  v24 = v22;
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(v25, 4));
  v6 = (char *)_mm_srli_si128(v25, 8).m128i_u64[0];
  ProbeForWrite(v6, 560LL * v5, 4u);
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 4));
  v8 = (char *)_mm_srli_si128(v22, 8).m128i_u64[0];
  ProbeForWrite(v8, 1076LL * v7, 4u);
  v9 = 0LL;
  v26 = 0LL;
  v28 = 0;
  v10 = 0LL;
  P = 0LL;
  v31 = 0;
  if ( v5 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_ADAPTER,1>::AllocateElements(&v26, v5);
    v9 = v26;
    v10 = P;
  }
  if ( v7 )
  {
    PagedPoolZeroedArray<_D3DKMT_DDISPLAY_ENUM_TARGET,1>::AllocateElements(&P, v7);
    v9 = v26;
    v10 = P;
  }
  if ( v5 && !v9 || v7 && !v10 )
  {
    v19 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v19 + 24) = v5;
    *(_QWORD *)(v19 + 32) = v7;
    WdLogEvent5_WdError(v19);
    if ( P != v30 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v31 = 0;
    if ( v26 != v27 && v26 )
      ExFreePoolWithTag(v26, 0);
    return 3221225495LL;
  }
  else
  {
    Src[0] = (void *)v25.m128i_i64[0];
    v21[0] = (void *)v22.m128i_i64[0];
    Src[1] = v9;
    v21[1] = v10;
    v11 = DxgkDDisplayEnumCore((struct _D3DKMT_DDISPLAY_ENUM *)Src);
    v12 = LODWORD(Src[0]);
    v23.m128i_i32[0] = (__int32)Src[0];
    v13 = LODWORD(v21[0]);
    v24.m128i_i32[0] = (__int32)v21[0];
    v14 = (unsigned __int64 *)MmUserProbeAddress;
    if ( a1 + 32 > MmUserProbeAddress || a1 + 32 <= a1 )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
      v14 = (unsigned __int64 *)MmUserProbeAddress;
    }
    *(__m128i *)a1 = v23;
    *(__m128i *)(a1 + 16) = v24;
    if ( v11 >= 0 )
    {
      if ( v6 )
      {
        v15 = 560 * v12;
        v16 = Src[1];
        if ( (unsigned __int64)&v6[v15] > *v14 || &v6[v15] <= v6 )
        {
          *(_BYTE *)*v14 = 0;
          v14 = (unsigned __int64 *)MmUserProbeAddress;
        }
        memmove(v6, v16, v15);
      }
      if ( v8 )
      {
        v17 = v21[1];
        v18 = &v8[1076 * v13];
        if ( (unsigned __int64)v18 > *v14 || v18 <= v8 )
          *(_BYTE *)*v14 = 0;
        memmove(v8, v17, 1076 * v13);
      }
    }
    if ( P != v30 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v31 = 0;
    if ( v26 != v27 )
    {
      if ( v26 )
        ExFreePoolWithTag(v26, 0);
    }
    return (unsigned int)v11;
  }
}
