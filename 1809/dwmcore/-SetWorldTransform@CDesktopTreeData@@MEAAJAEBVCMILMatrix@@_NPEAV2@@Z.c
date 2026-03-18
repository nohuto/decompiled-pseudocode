/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x180059740
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x180016130 (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18004A9A0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     McTemplateU0xxffffffffffffffff @ 0x180178648 (McTemplateU0xxffffffffffffffff.c)
 */

__int64 __fastcall CDesktopTreeData::SetWorldTransform(
        CDesktopTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  unsigned int v6; // ebx
  _DWORD *v9; // r9
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  _BYTE *v14; // rdx
  unsigned int i; // eax
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r11
  CVisual *v20; // r8
  int v21; // edx
  int v22; // ecx
  int v23; // r11d
  _OWORD *v24; // rax
  void *v25; // rcx
  __int64 v26; // [rsp+C0h] [rbp+8h] BYREF

  v6 = 0;
  v9 = *(_DWORD **)(*((_QWORD *)this + 3) + 224LL);
  if ( (*v9 & 0x400000) != 0 )
  {
    v13 = (unsigned int)v9[1];
    v14 = v9 + 2;
    for ( i = 0; i < (unsigned int)v13; ++v14 )
    {
      if ( *v14 == 10 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v13 )
      v16 = 0LL;
    else
      v16 = (__int64 *)((char *)v9 + v13 + 8LL * i - (((_BYTE)v13 + 15) & 7) + 15);
    v17 = *v16;
    if ( v17 )
    {
      v18 = *(_QWORD *)(v17 + 96);
      v19 = 0LL;
      if ( v18 )
        v19 = *(_QWORD *)(v18 + 64);
      if ( v19 )
      {
        if ( !CMILMatrix::IsEqualTo<0>((float *)a2, (float *)this + 10) )
        {
          CVisual::GetInputLuid(v20, &v26);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
            McTemplateU0xxffffffffffffffff(
              v22,
              v21,
              v23,
              v26,
              *(_DWORD *)a2,
              *((_DWORD *)a2 + 1),
              *((_DWORD *)a2 + 2),
              *((_DWORD *)a2 + 3),
              *((_DWORD *)a2 + 4),
              *((_DWORD *)a2 + 5),
              *((_DWORD *)a2 + 6),
              *((_DWORD *)a2 + 7),
              *((_DWORD *)a2 + 8),
              *((_DWORD *)a2 + 9),
              *((_DWORD *)a2 + 10),
              *((_DWORD *)a2 + 11),
              *((_DWORD *)a2 + 12),
              *((_DWORD *)a2 + 13),
              *((_DWORD *)a2 + 14),
              *((_DWORD *)a2 + 15));
        }
      }
    }
  }
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 3);
  v10 = *((_DWORD *)a2 + 16);
  *((_BYTE *)this + 16) &= ~2u;
  *((_BYTE *)this + 16) |= 2 * a3;
  *((_DWORD *)this + 26) = v10;
  if ( a4 )
  {
    v12 = *((_QWORD *)this + 14);
    if ( v12 )
    {
      *(_OWORD *)v12 = *(_OWORD *)a4;
      *(_OWORD *)(v12 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v12 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v12 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v12 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v24 = operator new(0x44uLL);
      v25 = v24;
      if ( v24 )
      {
        *v24 = *(_OWORD *)a4;
        v24[1] = *((_OWORD *)a4 + 1);
        v24[2] = *((_OWORD *)a4 + 2);
        v24[3] = *((_OWORD *)a4 + 3);
        *((_DWORD *)v24 + 16) = *((_DWORD *)a4 + 16);
      }
      else
      {
        v25 = 0LL;
      }
      if ( !v25 )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0x33u);
        return v6;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 14, (signed __int64)v25, 0LL) )
        operator delete(v25, 0x44uLL);
    }
  }
  *((_QWORD *)this + 15) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 368LL);
  if ( *((_BYTE *)this + 212) )
    *((_QWORD *)this + 22) = 0LL;
  return v6;
}
