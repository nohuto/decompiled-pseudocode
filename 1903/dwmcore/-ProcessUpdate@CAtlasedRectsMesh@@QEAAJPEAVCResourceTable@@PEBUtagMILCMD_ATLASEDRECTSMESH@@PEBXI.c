/*
 * XREFs of ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x18002A638
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?HrAlloc@@YAJ_KPEAPEAX@Z @ 0x18002A77C (-HrAlloc@@YAJ_KPEAPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x18002A9C0 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall CAtlasedRectsMesh::ProcessUpdate(
        void **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ATLASEDRECTSMESH *a3,
        char *a4,
        unsigned int a5)
{
  int v8; // ebx
  __int64 v9; // rcx
  unsigned int v10; // ebp
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rax
  unsigned int v15; // eax
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-28h]
  unsigned int v19; // [rsp+20h] [rbp-28h]

  v8 = 0;
  CAtlasedRectsMesh::UnRegisterNotifiers((CAtlasedRectsMesh *)this);
  v10 = a5;
  *((_BYTE *)this + 56) = *((_BYTE *)a3 + 8);
  *((_DWORD *)this + 15) = *((_DWORD *)a3 + 3);
  v11 = *((_DWORD *)a3 + 4);
  if ( v11 )
  {
    if ( v11 > a5 || (v11 & 0xF) != 0 )
    {
      v19 = 149;
      goto LABEL_23;
    }
    v12 = HrAlloc(v11, this + 9);
    v8 = v12;
    if ( v12 < 0 )
    {
      v18 = 154;
      goto LABEL_20;
    }
    memcpy_0(this[9], a4, *((unsigned int *)a3 + 4));
    *((_DWORD *)this + 16) = *((_DWORD *)a3 + 4);
    v9 = *((unsigned int *)a3 + 4);
    v10 = a5 - v9;
    a4 += v9;
  }
  v13 = *((_DWORD *)a3 + 5);
  if ( v13 )
  {
    if ( v13 <= v10 && (v13 & 0xF) == 0 )
    {
      v12 = HrAlloc(v13, this + 11);
      v8 = v12;
      if ( v12 < 0 )
      {
        v18 = 179;
        goto LABEL_20;
      }
      memcpy_0(this[11], a4, *((unsigned int *)a3 + 5));
      *((_DWORD *)this + 20) = *((_DWORD *)a3 + 5);
      v14 = *((unsigned int *)a3 + 5);
      v10 -= v14;
      a4 += v14;
      goto LABEL_11;
    }
    v19 = 174;
LABEL_23:
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, v19, 0LL);
    goto LABEL_24;
  }
LABEL_11:
  v15 = *((_DWORD *)a3 + 6);
  if ( !v15 )
    goto LABEL_16;
  if ( v15 > v10 || (v15 & 3) != 0 )
  {
    v17 = -2003303421;
    v8 = -2003303421;
    v18 = 199;
    goto LABEL_27;
  }
  v12 = HrAlloc(v15, this + 13);
  v8 = v12;
  if ( v12 >= 0 )
  {
    memcpy_0(this[13], a4, *((unsigned int *)a3 + 6));
    *((_DWORD *)this + 24) = *((_DWORD *)a3 + 6);
    goto LABEL_16;
  }
  v18 = 204;
LABEL_20:
  v17 = v12;
LABEL_27:
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v17, v18, 0LL);
LABEL_16:
  if ( v8 < 0 )
LABEL_24:
    CAtlasedRectsMesh::UnRegisterNotifiers((CAtlasedRectsMesh *)this);
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)v8;
}
