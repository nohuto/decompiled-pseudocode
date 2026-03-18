/*
 * XREFs of ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C02C3434
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00DD334 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x1C00D2178 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C00D8678 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C00D9258 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02C4B44 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C02C4C3C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C02C52DC (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02C53C0 (-_ConstructExternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C02C5530 (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::operator()(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        int a2,
        CCD_TOPOLOGY *a3,
        unsigned __int16 *a4)
{
  __int64 v5; // r14
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  _QWORD *v13; // rax
  __m128i *v15; // r12
  unsigned int v16; // esi
  unsigned int i; // r15d
  __int64 v18; // rbp
  int v19; // eax
  CCD_TOPOLOGY *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  unsigned __int16 v26; // dx
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v31; // ecx
  unsigned int v32; // [rsp+20h] [rbp-68h] BYREF
  __m128i si128; // [rsp+28h] [rbp-60h] BYREF
  int v34; // [rsp+38h] [rbp-50h]

  *(_QWORD *)this = a3;
  *((_DWORD *)this + 2) = 0;
  v5 = a2;
  CCD_TOPOLOGY::Clear(a3);
  v8 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 12), v7);
  v12 = v8;
  if ( v8 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v13[3] = v12;
LABEL_3:
    v13[4] = v5;
    v13[5] = *(_QWORD *)this;
    WdLogEvent5_WdError(v13);
    return (unsigned int)v12;
  }
  v15 = &si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v34 = 8;
  LODWORD(v12) = -1073741811;
  v16 = 0;
  v32 = 0;
  for ( i = 0; i < 5; ++i )
  {
    v18 = v15->m128i_i32[0];
    if ( ((unsigned int)v5 & v15->m128i_i32[0]) != (_DWORD)v18 )
      goto LABEL_21;
    switch ( (_DWORD)v18 )
    {
      case 1:
        v19 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
LABEL_18:
        LODWORD(v12) = v19;
        if ( v19 >= 0 )
          goto LABEL_24;
        goto LABEL_19;
      case 2:
        v19 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 1);
        goto LABEL_18;
      case 4:
        v19 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 1);
        goto LABEL_18;
    }
    v10 = (unsigned int)(v18 - 8);
    if ( (_DWORD)v18 == 8 )
    {
      v19 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
      goto LABEL_18;
    }
    if ( (_DWORD)v18 == 15 )
    {
      v19 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(this, &v32);
      v16 = v32;
      goto LABEL_18;
    }
    LODWORD(v12) = -1073741811;
LABEL_19:
    if ( (_DWORD)v18 == 15 )
      break;
    v20 = *(CCD_TOPOLOGY **)this;
    *((_DWORD *)this + 2) = 0;
    CCD_TOPOLOGY::Clear(v20);
    v16 = 0;
    v32 = 0;
    v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23);
    v24[3] = (int)v12;
    v24[4] = v18;
    v24[5] = *(_QWORD *)this;
    WdLogEvent5_WdWarning(v24);
LABEL_21:
    v15 = (__m128i *)((char *)v15 + 4);
  }
  if ( (int)v12 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v10, v9, v11);
    v13[3] = (int)v12;
    goto LABEL_3;
  }
LABEL_24:
  v25 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v25 )
    v26 = *(_WORD *)(v25 + 22);
  else
    v26 = 0;
  v27 = *((_WORD *)this + 4);
  if ( v27 <= v26 )
  {
    while ( 1 )
    {
      v28 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v29 = v28 ? *(_WORD *)(v28 + 20) : 0;
      if ( v16 >= v29 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, v16);
      v31 = v16;
      if ( *((_BYTE *)this + 11) )
        v31 = 0;
      *((_DWORD *)PathDescriptor + 46) = v31 | 0xFE530000;
      *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
      ++v16;
    }
  }
  else
  {
    if ( a4 )
      *a4 = v27;
    LODWORD(v12) = -1073741789;
  }
  return (unsigned int)v12;
}
