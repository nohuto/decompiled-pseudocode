/*
 * XREFs of ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_YCBCRSURFACE@@@Z @ 0x1802126F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CYCbCrSurface::ProcessUpdate(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_YCBCRSURFACE *a3)
{
  char v6; // r12
  char v7; // r15
  struct CResource *Resource; // r14
  __int64 v9; // rax
  int v10; // edi
  struct CResource *v11; // rbp
  _BOOL8 v12; // rcx
  int v13; // ebx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx

  v6 = 0;
  v7 = 0;
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x27u);
  v9 = CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 3), 0x27u);
  v10 = *((_DWORD *)a3 + 4);
  v11 = (struct CResource *)v9;
  v12 = v9 == 0;
  if ( v12 != (Resource == 0LL) )
  {
    v13 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, 0x88980403, 0x1Eu, 0LL);
    return (unsigned int)v13;
  }
  v13 = 0;
  if ( Resource != this[7] )
  {
    v14 = CResource::RegisterNotifier((CResource *)this, Resource);
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x23u, 0LL);
      goto LABEL_14;
    }
    v6 = 1;
  }
  if ( v11 == this[8] )
  {
LABEL_9:
    if ( v6 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
      this[7] = Resource;
    }
    if ( v7 )
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[8]);
      this[8] = v11;
    }
    *((_DWORD *)this + 18) = v10;
    goto LABEL_14;
  }
  v16 = CResource::RegisterNotifier((CResource *)this, v11);
  v13 = v16;
  if ( v16 >= 0 )
  {
    v7 = 1;
    goto LABEL_9;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x29u, 0LL);
LABEL_14:
  if ( v13 < 0 )
  {
    if ( v6 )
      CResource::UnRegisterNotifierInternal((CResource *)this, Resource);
    if ( v7 )
      CResource::UnRegisterNotifierInternal((CResource *)this, v11);
  }
  return (unsigned int)v13;
}
