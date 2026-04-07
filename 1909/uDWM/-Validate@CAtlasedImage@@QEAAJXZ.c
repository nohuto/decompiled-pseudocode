/*
 * XREFs of ?Validate@CAtlasedImage@@QEAAJXZ @ 0x180019990
 * Callers:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180019610 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800175C0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033B00 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ??1AtlasedRects@@QEAA@XZ @ 0x1800792F4 (--1AtlasedRects@@QEAA@XZ.c)
 */

__int64 __fastcall CAtlasedImage::Validate(CAtlasedImage *this)
{
  int v2; // edi
  int v3; // eax
  bool v4; // zf
  char *v5; // rax
  __int64 v6; // r8
  __int64 v8; // rdi
  __int64 v9; // rax
  CBaseObject *v10; // rsi
  int v11; // eax
  int v12; // eax
  void *v13; // [rsp+28h] [rbp-41h]
  void *v14; // [rsp+28h] [rbp-41h]
  __int128 v15; // [rsp+40h] [rbp-29h] BYREF
  __int64 v16; // [rsp+50h] [rbp-19h]
  unsigned int v17; // [rsp+58h] [rbp-11h]
  void *v18[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v19; // [rsp+70h] [rbp+7h]
  int v20; // [rsp+78h] [rbp+Fh]
  __int128 v21; // [rsp+80h] [rbp+17h] BYREF
  __int64 v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  char *v24; // [rsp+A0h] [rbp+37h]
  int v25; // [rsp+D0h] [rbp+67h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 11) )
    goto LABEL_2;
  v8 = *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL);
  *((_QWORD *)this + 11) = 0LL;
  v9 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v10 = (CBaseObject *)v9;
  if ( !v9 )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x27u, v13);
    goto LABEL_24;
  }
  *(_DWORD *)(v9 + 8) = 1;
  *(_QWORD *)(v9 + 16) = v8;
  *(_QWORD *)v9 = &CResource::`vftable';
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 96LL))(v8, 3LL, v9 + 24);
  v2 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x44u, v13);
  }
  else if ( !*((_DWORD *)v10 + 6) )
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x45u, v13);
    goto LABEL_30;
  }
  if ( v2 < 0 )
  {
LABEL_30:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x29u, v13);
    CBaseObject::Release(v10);
    goto LABEL_24;
  }
  *((_QWORD *)this + 11) = v10;
LABEL_24:
  if ( v2 >= 0 )
    goto LABEL_3;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x39Au, v13);
LABEL_2:
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x184u, v13);
    return (unsigned int)v2;
  }
LABEL_3:
  v3 = *((_DWORD *)this + 24);
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL) + 896LL))(
              *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
              *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
              *((unsigned int *)this + 17));
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x1B0u, v13);
        return (unsigned int)v2;
      }
    }
    goto LABEL_17;
  }
  v4 = *((_BYTE *)this + 116) == 0;
  v5 = (char *)this + 100;
  v25 = 0;
  if ( v4 )
    v5 = 0LL;
  v15 = 0LL;
  v24 = v5;
  v16 = 0LL;
  *(_OWORD *)v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0;
  v17 = 0;
  DynArrayImpl<0>::ShrinkToSize(&v15, 16LL);
  v20 = 0;
  DynArrayImpl<0>::ShrinkToSize(v18, 16LL);
  v23 = 0;
  DynArrayImpl<0>::ShrinkToSize(&v21, 4LL);
  (*(void (__fastcall **)(CAtlasedImage *, int *))(*(_QWORD *)this + 32LL))(this, &v25);
  v2 = DynArrayImpl<0>::Grow((char **)&v15, 0x10u, v25, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x192u, v13);
LABEL_36:
    AtlasedRects::~AtlasedRects((AtlasedRects *)&v15);
    return (unsigned int)v2;
  }
  v2 = DynArrayImpl<0>::Grow((char **)v18, 0x10u, v25, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x193u, v13);
    goto LABEL_36;
  }
  v2 = DynArrayImpl<0>::Grow((char **)&v21, 4u, v25, 0, 0LL);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x194u, v13);
    goto LABEL_36;
  }
  v2 = (*(__int64 (__fastcall **)(CAtlasedImage *, __int128 *))(*(_QWORD *)this + 16LL))(this, &v15);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x199u, v13);
    goto LABEL_36;
  }
  LOBYTE(v6) = (unsigned int)(*((_DWORD *)this + 30) - 18) > 3;
  v14 = v18[0];
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 11) + 16LL)
                                                                          + 1000LL))(
         *(_QWORD *)(*((_QWORD *)this + 11) + 16LL),
         *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
         v6,
         v17,
         v15);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x1AAu, v14);
    goto LABEL_36;
  }
  if ( (_QWORD)v21 != *((_QWORD *)&v21 + 1) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *(_QWORD *)&v21 = 0LL;
  }
  if ( v18[0] != v18[1] )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    v18[0] = 0LL;
  }
  if ( (_QWORD)v15 != *((_QWORD *)&v15 + 1) )
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
LABEL_17:
  *((_DWORD *)this + 24) &= 0xFFFFFFFC;
  return (unsigned int)v2;
}
