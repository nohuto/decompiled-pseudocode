/*
 * XREFs of ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180034510
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::ValidateVisualPostSubgraph(CAtlasedRectsVisual *this)
{
  int v2; // ebp
  int v3; // eax
  unsigned int v4; // edi
  __int64 result; // rax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // r10d
  unsigned int v12; // eax
  unsigned __int64 v13; // r11
  int v14; // eax
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // [rsp+50h] [rbp+8h]
  unsigned __int64 v20; // [rsp+58h] [rbp+10h]

  v2 = 0;
  if ( (*((_DWORD *)this + 20) & 0x100) != 0 )
  {
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 496LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
            *((_DWORD *)this + 22) != 0);
    v2 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x3E5u);
    if ( v2 >= 0 )
      *((_DWORD *)this + 20) &= ~0x100u;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xAFu);
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x70u);
    return (unsigned int)v2;
  }
  v3 = *((_DWORD *)this + 20);
  if ( (v3 & 0x1000) == 0 )
    goto LABEL_6;
  v4 = 0;
  if ( !*((_DWORD *)this + 66) )
    goto LABEL_5;
  do
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 30) + 8LL * v4);
    v8 = *(_DWORD *)(v7 + 32);
    v9 = *(_DWORD *)(v7 + 36);
    v10 = *(_DWORD *)(v7 + 44);
    v11 = *(_DWORD *)(v7 + 40);
    if ( v8 == 0x7FFFFFFF && v9 == 0x7FFFFFFF && v11 == 0x7FFFFFFF && v10 == 0x7FFFFFFF )
      goto LABEL_25;
    v12 = 0;
    v20 = *(_QWORD *)(v7 + 24);
    v13 = HIDWORD(v20);
    v19 = 0LL;
    if ( v9 == 0x7FFFFFFF )
    {
      if ( v8 != 0x7FFFFFFF )
        goto LABEL_14;
    }
    else
    {
      v14 = *((_DWORD *)this + 30);
      if ( v8 != 0x7FFFFFFF )
      {
        LODWORD(v20) = v14 - v9 - v8;
LABEL_14:
        LODWORD(v19) = *(_DWORD *)(v7 + 32);
        v12 = v19;
        goto LABEL_15;
      }
      v12 = v14 - v20 - v9;
      LODWORD(v19) = v12;
    }
LABEL_15:
    if ( v10 == 0x7FFFFFFF )
    {
      if ( v11 == 0x7FFFFFFF )
        goto LABEL_19;
    }
    else
    {
      v15 = *((_DWORD *)this + 31);
      if ( v11 == 0x7FFFFFFF )
      {
        HIDWORD(v19) = v15 - v13 - v10;
        goto LABEL_19;
      }
      HIDWORD(v20) = v15 - v11 - v10;
    }
    HIDWORD(v19) = *(_DWORD *)(v7 + 40);
LABEL_19:
    if ( (int)v20 <= 0 )
      LODWORD(v20) = 0;
    if ( SHIDWORD(v20) <= 0 )
      HIDWORD(v20) = 0;
    if ( __PAIR64__(HIDWORD(v19), v12) != *(_QWORD *)(v7 + 16) )
    {
      *(_DWORD *)(v7 + 96) |= 1u;
      v17 = *(_QWORD *)(v7 + 80);
      *(_QWORD *)(v7 + 16) = v19;
      if ( v17 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 24LL))(v17, 0x2000LL);
    }
    if ( *(_QWORD *)(v7 + 24) != v20 )
    {
      *(_DWORD *)(v7 + 96) |= 1u;
      v16 = *(_QWORD *)(v7 + 80);
      *(_QWORD *)(v7 + 24) = v20;
      if ( v16 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, 0x2000LL);
    }
LABEL_25:
    ++v4;
  }
  while ( v4 < *((_DWORD *)this + 66) );
  v3 = *((_DWORD *)this + 20);
LABEL_5:
  v3 &= ~0x1000u;
  *((_DWORD *)this + 20) = v3;
LABEL_6:
  if ( (v3 & 0x2000) == 0 )
    return (unsigned int)v2;
  result = (*(__int64 (__fastcall **)(CAtlasedRectsVisual *))(*(_QWORD *)this + 192LL))(this);
  v6 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x7Bu);
    return v6;
  }
  else
  {
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  return result;
}
