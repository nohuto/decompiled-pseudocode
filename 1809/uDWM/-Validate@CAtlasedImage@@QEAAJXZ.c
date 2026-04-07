/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x18001E7F0
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x18001E030 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001F390 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033EA0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??1AtlasedRects@@QEAA@XZ @ 0x180072B50 (--1AtlasedRects@@QEAA@XZ.c)
 */

__int64 __fastcall CAtlasedImage::Validate(CAtlasedImage *this)
{
  int v2; // edi
  int v3; // eax
  bool v4; // zf
  char *v5; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  CBaseObject *v9; // rsi
  int v10; // eax
  int v11; // r14d
  int v12; // eax
  __int128 v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+50h] [rbp-29h]
  unsigned int v15; // [rsp+58h] [rbp-21h]
  __int128 v16; // [rsp+60h] [rbp-19h] BYREF
  __int64 v17; // [rsp+70h] [rbp-9h]
  int v18; // [rsp+78h] [rbp-1h]
  __int128 v19; // [rsp+80h] [rbp+7h] BYREF
  __int64 v20; // [rsp+90h] [rbp+17h]
  int v21; // [rsp+98h] [rbp+1Fh]
  char *v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+E0h] [rbp+67h] BYREF

  v2 = 0;
  if ( !*((_QWORD *)this + 11) )
  {
    v7 = *((_QWORD *)this + 13);
    *((_QWORD *)this + 11) = 0LL;
    v8 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
           WPF::g_pProcessHeap,
           32LL);
    v9 = (CBaseObject *)v8;
    if ( !v8 )
    {
      v2 = -2147024882;
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u);
      goto LABEL_32;
    }
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)(v8 + 16) = v7;
    *(_QWORD *)v8 = &CResource::`vftable';
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 96LL))(v7, 3LL, v8 + 24);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x44u);
    }
    else if ( !*((_DWORD *)v9 + 6) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u);
      v11 = -2147024882;
      goto LABEL_30;
    }
    if ( v11 >= 0 )
    {
      *((_QWORD *)this + 11) = v9;
      goto LABEL_24;
    }
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x29u);
    CBaseObject::Release(v9);
LABEL_24:
    v2 = v11;
    if ( v11 >= 0 )
      goto LABEL_2;
LABEL_32:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x3A3u);
  }
LABEL_2:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x189u);
    return (unsigned int)v2;
  }
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL) + 984LL))(
              *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
              *((unsigned int *)this + 17));
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1B5u);
        return (unsigned int)v2;
      }
    }
    goto LABEL_17;
  }
  v4 = *((_BYTE *)this + 128) == 0;
  v5 = (char *)this + 112;
  v23 = 0;
  if ( v4 )
    v5 = 0LL;
  v13 = 0LL;
  v22 = v5;
  v14 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v15 = 0;
  DynArrayImpl<0>::ShrinkToSize(&v13, 16LL);
  v18 = 0;
  DynArrayImpl<0>::ShrinkToSize(&v16, 16LL);
  v21 = 0;
  DynArrayImpl<0>::ShrinkToSize(&v19, 4LL);
  (*(void (__fastcall **)(CAtlasedImage *, int *))(*(_QWORD *)this + 32LL))(this, &v23);
  v2 = DynArrayImpl<0>::Grow((unsigned int)&v13, 16, v23, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x197u);
LABEL_37:
    AtlasedRects::~AtlasedRects((AtlasedRects *)&v13);
    return (unsigned int)v2;
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)&v16, 16, v23, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x198u);
    goto LABEL_37;
  }
  v2 = DynArrayImpl<0>::Grow((unsigned int)&v19, 4, v23, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x199u);
    goto LABEL_37;
  }
  v2 = (*(__int64 (__fastcall **)(CAtlasedImage *, __int128 *))(*(_QWORD *)this + 16LL))(this, &v13);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x19Eu);
    goto LABEL_37;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool, _QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL)
                                                                                       + 1088LL))(
         *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
         (unsigned int)(*((_DWORD *)this + 33) - 18) > 3,
         v15,
         v13,
         v16,
         v19);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1AFu);
    goto LABEL_37;
  }
  if ( (_QWORD)v19 != *((_QWORD *)&v19 + 1) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)&v19 = 0LL;
  }
  if ( (_QWORD)v16 != *((_QWORD *)&v16 + 1) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)&v16 = 0LL;
  }
  if ( (_QWORD)v13 != *((_QWORD *)&v13 + 1) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
LABEL_17:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return (unsigned int)v2;
}
