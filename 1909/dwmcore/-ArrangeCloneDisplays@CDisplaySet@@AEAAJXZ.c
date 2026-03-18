/*
 * XREFs of ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800262B8
 * Callers:
 *     ?Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z @ 0x180025D04 (-Init@CDisplaySet@@AEAAJPEBVCDXGIEnumeration@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1800278B0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180025AF8 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x18002636C (-SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800263E0 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDisplaySet::ArrangeCloneDisplays(CDisplaySet *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebp
  __int64 i; // rdi
  int v5; // edx
  CDisplay *v6; // rcx
  __int64 v7; // r10
  struct CDisplay *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // r11
  __int64 v14; // r14
  __int64 v15; // rsi
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 18);
  v2 = 0;
  *((_DWORD *)this + 10) = 0;
  for ( i = 0LL; (unsigned int)i < v1; i = (unsigned int)(i + 1) )
  {
    if ( CDisplay::IsPrimary(*(CDisplay **)(*((_QWORD *)this + 6) + 8 * i)) )
    {
      v5 = *((_DWORD *)this + 18);
      *((_DWORD *)this + 10) = i;
    }
    if ( *(_BYTE *)(v7 + 314) )
    {
      v8 = (struct CDisplay *)v7;
    }
    else
    {
      v13 = 0LL;
      if ( !v5 )
        goto LABEL_7;
      v14 = *((_QWORD *)this + 6);
      while ( 1 )
      {
        v15 = *(_QWORD *)(v14 + 8 * v13);
        if ( *(_BYTE *)(v15 + 314) )
        {
          if ( TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                 (_DWORD *)(v7 + 120),
                 (_DWORD *)(v15 + 120)) )
          {
            break;
          }
        }
        v13 = (unsigned int)(v13 + 1);
        if ( (unsigned int)v13 >= *((_DWORD *)this + 18) )
          goto LABEL_7;
      }
      v8 = (struct CDisplay *)v15;
      v6 = (CDisplay *)v7;
    }
    CDisplay::SetPrimaryCloneDisplay(v6, v8);
LABEL_7:
    v1 = *((_DWORD *)this + 18);
  }
  v9 = 0LL;
  if ( v1 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v9);
      v11 = *(_QWORD *)(v10 + 152);
      if ( !v11 )
        break;
      if ( v11 != v10 && *(_BYTE *)(v10 + 314) )
      {
        v16 = 1159;
        goto LABEL_23;
      }
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *((_DWORD *)this + 18) )
        return v2;
    }
    v16 = 1147;
LABEL_23:
    v2 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802BE018, 1u, -2003304291, v16, 0LL);
  }
  return v2;
}
