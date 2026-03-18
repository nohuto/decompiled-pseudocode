/*
 * XREFs of ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801B8E00
 * Callers:
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801B9010 (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A0000 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisualGroup::InitializeVisualGroupData(
        CVisualGroup *this,
        struct CVisual **a2,
        unsigned int a3,
        struct CVisual **a4,
        unsigned int a5)
{
  int v5; // ebx
  unsigned int v6; // ebp
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // eax
  unsigned int v16; // esi
  unsigned int v17; // edi
  unsigned int v18; // eax
  int v19; // r9d
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-48h]
  struct CWeakResourceReference *v23[7]; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v24; // [rsp+80h] [rbp+18h]

  v5 = 0;
  v6 = 0;
  if ( a3 )
  {
    v11 = v24;
    do
    {
      v23[0] = 0LL;
      if ( *a2 )
      {
        v12 = CWeakReference<CVisual>::Create(*a2, v23);
        v5 = v12;
        if ( v12 < 0 )
        {
          v22 = 165;
          goto LABEL_35;
        }
        v13 = *((unsigned int *)this + 20);
        v14 = v13 + 1;
        if ( (int)v13 + 1 >= (unsigned int)v13 )
          v11 = v13 + 1;
        v5 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
        if ( v14 < (unsigned int)v13 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v5, 0xB5u);
        }
        else if ( v11 > *((_DWORD *)this + 19) )
        {
          v15 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8, 1, v23);
          v5 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v15, 0xC0u);
        }
        else
        {
          *(struct CWeakResourceReference **)(*((_QWORD *)this + 7) + 8 * v13) = v23[0];
          *((_DWORD *)this + 20) = v11;
        }
        if ( v5 < 0 )
        {
          v22 = 167;
LABEL_25:
          v19 = v5;
          goto LABEL_36;
        }
      }
      ++v6;
      ++a2;
    }
    while ( v6 < a3 );
  }
  v16 = 0;
  if ( a5 )
  {
    v17 = v24;
    do
    {
      v23[0] = 0LL;
      if ( *a4 )
      {
        v12 = CWeakReference<CVisual>::Create(*a4, v23);
        v5 = v12;
        if ( v12 < 0 )
        {
          v22 = 177;
LABEL_35:
          v19 = v12;
LABEL_36:
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v19, v22);
          return (unsigned int)v5;
        }
        v13 = *((unsigned int *)this + 28);
        v18 = v13 + 1;
        if ( (int)v13 + 1 >= (unsigned int)v13 )
          v17 = v13 + 1;
        v5 = v18 < (unsigned int)v13 ? 0x80070216 : 0;
        if ( v18 < (unsigned int)v13 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v5, 0xB5u);
        }
        else if ( v17 > *((_DWORD *)this + 27) )
        {
          v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 88, 8, 1, v23);
          v5 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v20, 0xC0u);
        }
        else
        {
          *(struct CWeakResourceReference **)(*((_QWORD *)this + 11) + 8 * v13) = v23[0];
          *((_DWORD *)this + 28) = v17;
        }
        if ( v5 < 0 )
        {
          v22 = 179;
          goto LABEL_25;
        }
      }
      ++v16;
      ++a4;
    }
    while ( v16 < a5 );
  }
  return (unsigned int)v5;
}
