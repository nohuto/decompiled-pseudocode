/*
 * XREFs of ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800812CC
 * Callers:
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18007ED10 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18007F940 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 * Callees:
 *     ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x180081384 (-SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z.c)
 *     ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180081530 (-IsPrimary@CDisplay@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18008FE94 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::ArrangeCloneDisplays(CDisplaySet *this)
{
  unsigned int v1; // edx
  unsigned int v2; // ebx
  unsigned int i; // esi
  __int64 v5; // r14
  int v6; // edx
  CDisplay *v7; // rcx
  struct CDisplay *v8; // r10
  struct CDisplay *v9; // rdx
  unsigned int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v14; // r11d
  struct CDisplay *v15; // rbp
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v1 = *((_DWORD *)this + 18);
  v2 = 0;
  *((_DWORD *)this + 10) = 0;
  for ( i = 0; i < v1; ++i )
  {
    v5 = *((_QWORD *)this + 6);
    if ( CDisplay::IsPrimary(*(CDisplay **)(v5 + 8LL * i)) )
    {
      v6 = *((_DWORD *)this + 18);
      *((_DWORD *)this + 10) = i;
    }
    if ( *((_BYTE *)v8 + 322) )
    {
      v9 = v8;
    }
    else
    {
      v14 = 0;
      if ( !v6 )
        goto LABEL_7;
      while ( 1 )
      {
        v15 = *(struct CDisplay **)(v5 + 8LL * v14);
        if ( *((_BYTE *)v15 + 322) )
        {
          if ( (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEquivalentTo(
                                  (char *)v8 + 120,
                                  (char *)v15 + 120) )
            break;
        }
        if ( ++v14 >= *((_DWORD *)this + 18) )
          goto LABEL_7;
      }
      v9 = v15;
      v7 = v8;
    }
    CDisplay::SetPrimaryCloneDisplay(v7, v9);
LABEL_7:
    v1 = *((_DWORD *)this + 18);
  }
  v10 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * v10);
      v12 = *(_QWORD *)(v11 + 152);
      if ( !v12 )
        break;
      if ( v12 != v11 && *(_BYTE *)(v11 + 322) )
      {
        v16 = 1179;
        goto LABEL_22;
      }
      if ( ++v10 >= *((_DWORD *)this + 18) )
        return v2;
    }
    v16 = 1167;
LABEL_22:
    v2 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_18029B8C0, 1u, -2003304291, v16);
  }
  return v2;
}
