/*
 * XREFs of ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801CC2C4
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801CC500 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A5178 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CVisualGroup::InitializeVisualGroupData(
        CVisualGroup *this,
        struct CVisual **a2,
        unsigned int a3,
        struct CVisual **a4,
        unsigned int a5)
{
  int v5; // ebx
  unsigned int i; // esi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edx
  signed int v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // r9d
  signed int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-38h]
  struct CWeakResourceReference *v23[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  for ( i = 0; i < a3; ++i )
  {
    v23[0] = 0LL;
    if ( *a2 )
    {
      v11 = CWeakReference<CVisual>::Create(*a2, v23);
      v5 = v11;
      if ( v11 < 0 )
      {
        v22 = 161;
        goto LABEL_29;
      }
      v13 = *((_DWORD *)this + 20);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v5 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x80070216, 0xB8u, 0LL);
        goto LABEL_10;
      }
      if ( v14 > *((_DWORD *)this + 19) )
      {
        v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8, 1, v23);
        v5 = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v15, 0xC3u, 0LL);
LABEL_10:
        if ( v5 < 0 )
        {
          v22 = 163;
LABEL_18:
          v19 = v5;
          goto LABEL_30;
        }
        goto LABEL_11;
      }
      v5 = 0;
      *(struct CWeakResourceReference **)(*((_QWORD *)this + 7) + 8LL * *((unsigned int *)this + 20)) = v23[0];
      *((_DWORD *)this + 20) = v14;
    }
LABEL_11:
    ++a2;
  }
  v16 = 0;
  if ( !a5 )
    return (unsigned int)v5;
  while ( 1 )
  {
    v23[0] = 0LL;
    if ( !*a4 )
      goto LABEL_25;
    v11 = CWeakReference<CVisual>::Create(*a4, v23);
    v5 = v11;
    if ( v11 < 0 )
      break;
    v17 = *((_DWORD *)this + 28);
    v18 = v17 + 1;
    if ( v17 + 1 >= v17 )
    {
      if ( v18 <= *((_DWORD *)this + 27) )
      {
        v5 = 0;
        *(struct CWeakResourceReference **)(*((_QWORD *)this + 11) + 8LL * *((unsigned int *)this + 28)) = v23[0];
        *((_DWORD *)this + 28) = v18;
        goto LABEL_25;
      }
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 8, 1, v23);
      v5 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v20, 0xC3u, 0LL);
    }
    else
    {
      v5 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v5 < 0 )
    {
      v22 = 175;
      goto LABEL_18;
    }
LABEL_25:
    ++v16;
    ++a4;
    if ( v16 >= a5 )
      return (unsigned int)v5;
  }
  v22 = 173;
LABEL_29:
  v19 = v11;
LABEL_30:
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v19, v22, 0LL);
  return (unsigned int)v5;
}
