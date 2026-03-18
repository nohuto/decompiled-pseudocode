/*
 * XREFs of ?ProcessSetSurfaces@CCompositionMipmapSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES@@PEBXI@Z @ 0x1801D029C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007CBC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800BFF10 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionMipmapSurface::ProcessSetSurfaces(
        CCompositionMipmapSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONMIPMAPSURFACE_SETSURFACES *a3,
        _DWORD *a4)
{
  unsigned __int64 ResourceWithoutType; // rcx
  CResourceTable *v8; // r10
  unsigned int v9; // ebx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rbp
  struct CResource *v13; // r15
  __int128 v14; // xmm6
  struct CResource *v15; // rax
  __int64 v16; // r9
  __int64 v17; // r12
  struct CResource *v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  signed int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rbx
  struct CResource *v24; // rdx
  __int64 v25; // rcx
  unsigned int v27; // [rsp+20h] [rbp-58h]
  __int128 v28; // [rsp+30h] [rbp-48h] BYREF

  ResourceWithoutType = *((unsigned int *)a3 + 2);
  v8 = a2;
  if ( ResourceWithoutType > (__int64)(*((_QWORD *)this + 12) - *((_QWORD *)this + 11)) >> 5 )
  {
    v27 = 226;
    goto LABEL_3;
  }
  v10 = 0LL;
  if ( (_DWORD)ResourceWithoutType )
  {
    while ( 1 )
    {
      ResourceWithoutType = (unsigned __int64)CResourceTable::GetResourceWithoutType(v8, a4[6 * v10 + 1]);
      if ( a4[2 * v11] >= *((_DWORD *)this + 32) )
        break;
      if ( ResourceWithoutType )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
                ResourceWithoutType,
                39LL) )
          break;
        v8 = a2;
      }
      LODWORD(ResourceWithoutType) = *((_DWORD *)a3 + 2);
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= (unsigned int)ResourceWithoutType )
        goto LABEL_11;
    }
    v27 = 250;
LABEL_3:
    v9 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(ResourceWithoutType, 0LL, 0, 0x88980403, v27, 0LL);
    return v9;
  }
LABEL_11:
  v12 = 0LL;
  if ( (_DWORD)ResourceWithoutType )
  {
    do
    {
      v13 = 0LL;
      v14 = 0LL;
      v15 = CResourceTable::GetResourceWithoutType(v8, a4[6 * v12 + 1]);
      v17 = (unsigned int)a4[2 * v16];
      v18 = v15;
      if ( v15 )
      {
        v14 = *(_OWORD *)&a4[2 * v16 + 2];
        v19 = *((_QWORD *)this + 11);
        v20 = 32LL * (unsigned int)v17;
        v13 = v15;
        v28 = v14;
        if ( *(struct CResource **)(v20 + v19) != v15 || !operator==((_DWORD *)(v20 + v19 + 8), &v28) )
        {
          *(_BYTE *)(v20 + v19 + 24) = 1;
          *((_BYTE *)this + 152) = 1;
          if ( *(struct CResource **)(v20 + *((_QWORD *)this + 11)) != v18 )
          {
            v21 = CResource::RegisterNotifier(this, v18);
            v9 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x111u, 0LL);
              return v9;
            }
            v23 = *((_QWORD *)this + 11);
            v24 = *(struct CResource **)(v20 + v23);
            if ( v24 )
            {
              CResource::UnRegisterNotifierInternal(this, v24);
              *(_QWORD *)(v20 + v23) = 0LL;
            }
            v8 = a2;
          }
        }
      }
      v25 = 32 * v17;
      v12 = (unsigned int)(v12 + 1);
      *(_QWORD *)(v25 + *((_QWORD *)this + 11)) = v13;
      *(_OWORD *)(v25 + *((_QWORD *)this + 11) + 8) = v14;
    }
    while ( (unsigned int)v12 < *((_DWORD *)a3 + 2) );
  }
  return 0;
}
