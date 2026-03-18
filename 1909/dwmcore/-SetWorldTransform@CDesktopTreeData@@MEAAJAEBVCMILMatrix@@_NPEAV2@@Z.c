/*
 * XREFs of ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800B8260
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputLuid@CVisual@@QEBA?AU_LUID@@XZ @ 0x1800161BC (-GetInputLuid@CVisual@@QEBA-AU_LUID@@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18006FF40 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     McTemplateU0pxffffffffffffffff @ 0x18017B208 (McTemplateU0pxffffffffffffffff.c)
 */

__int64 __fastcall CDesktopTreeData::SetWorldTransform(
        CDesktopTreeData *this,
        const struct CMILMatrix *a2,
        char a3,
        struct CMILMatrix *a4)
{
  _DWORD *v8; // r8
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  _BYTE *v13; // rdx
  __int64 i; // rcx
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r11
  CVisual *v19; // r10
  int v20; // edx
  int v21; // ecx
  int v22; // r11d
  _OWORD *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // [rsp+B0h] [rbp+8h] BYREF

  v8 = *(_DWORD **)(*((_QWORD *)this + 3) + 224LL);
  if ( (*v8 & 0x400000) != 0 )
  {
    v12 = (unsigned int)v8[1];
    v13 = v8 + 2;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v12; ++v13 )
    {
      if ( *v13 == 10 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i >= (unsigned int)v12 )
      v15 = 0LL;
    else
      v15 = (__int64 *)((char *)v8 + 8 * i - (((_BYTE)v12 + 15) & 7) + v12 + 15);
    v16 = *v15;
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 96);
      v18 = 0LL;
      if ( v17 )
        v18 = *(_QWORD *)(v17 + 64);
      if ( v18 )
      {
        if ( !CMILMatrix::IsEqualTo<0>((float *)a2, (float *)this + 10) )
        {
          CVisual::GetInputLuid(v19, &v25);
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
            McTemplateU0pxffffffffffffffff(
              v21,
              v20,
              v22,
              v25,
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
  v9 = *((_DWORD *)a2 + 16);
  *((_BYTE *)this + 16) &= ~2u;
  *((_BYTE *)this + 16) |= 2 * a3;
  *((_DWORD *)this + 26) = v9;
  if ( a4 )
  {
    v11 = *((_QWORD *)this + 14);
    if ( v11 )
    {
      *(_OWORD *)v11 = *(_OWORD *)a4;
      *(_OWORD *)(v11 + 16) = *((_OWORD *)a4 + 1);
      *(_OWORD *)(v11 + 32) = *((_OWORD *)a4 + 2);
      *(_OWORD *)(v11 + 48) = *((_OWORD *)a4 + 3);
      *(_DWORD *)(v11 + 64) = *((_DWORD *)a4 + 16);
    }
    else
    {
      v23 = operator new(0x44uLL);
      if ( !v23 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, 0x8007000E, 0x33u, 0LL);
        return 2147942414LL;
      }
      *v23 = *(_OWORD *)a4;
      v23[1] = *((_OWORD *)a4 + 1);
      v23[2] = *((_OWORD *)a4 + 2);
      v23[3] = *((_OWORD *)a4 + 3);
      *((_DWORD *)v23 + 16) = *((_DWORD *)a4 + 16);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 14, (signed __int64)v23, 0LL) )
        operator delete(v23);
    }
  }
  result = 0LL;
  *((_QWORD *)this + 15) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 384LL);
  if ( *((_BYTE *)this + 212) )
    *((_QWORD *)this + 22) = 0LL;
  return result;
}
