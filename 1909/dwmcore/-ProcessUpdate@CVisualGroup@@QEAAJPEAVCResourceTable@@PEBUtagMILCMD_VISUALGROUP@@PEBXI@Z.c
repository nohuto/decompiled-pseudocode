/*
 * XREFs of ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801CC500
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AB6F0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800AF0D4 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x1801CC23C (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 *     ?InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z @ 0x1801CC2C4 (-InitializeVisualGroupData@CVisualGroup@@AEAAJPEAPEAVCVisual@@I0I@Z.c)
 */

__int64 __fastcall CVisualGroup::ProcessUpdate(
        CVisualGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALGROUP *a3,
        __int64 a4,
        unsigned int a5)
{
  struct CVisual **v9; // rdi
  unsigned int v10; // r14d
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  signed int v14; // eax
  __int64 v15; // rcx
  signed int v16; // eax
  __int64 v17; // rcx
  void *lpMem; // [rsp+40h] [rbp-38h] BYREF
  struct CVisual **v20; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v22; // [rsp+98h] [rbp+20h] BYREF

  v9 = 0LL;
  CVisualGroup::ClearVisualGroupData(this);
  v10 = a5;
  v11 = CResource::UnmarshalResourceArray(a4, a5, *((_DWORD *)a3 + 2), 0xBDu, &v22, &lpMem, (__int64)a2, 0);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x62u, 0LL);
  }
  else
  {
    v14 = CResource::UnmarshalResourceArray(
            a4 + *((unsigned int *)a3 + 2),
            v10 - *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 3),
            0xBDu,
            &v21,
            (void **)&v20,
            (__int64)a2,
            0);
    v9 = v20;
    v13 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x73u, 0LL);
    }
    else
    {
      v16 = CVisualGroup::InitializeVisualGroupData(this, (struct CVisual **)lpMem, v22, v20, v21);
      v13 = v16;
      if ( v16 >= 0 )
        goto LABEL_8;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x76u, 0LL);
    }
  }
  CVisualGroup::ClearVisualGroupData(this);
LABEL_8:
  if ( lpMem )
    operator delete(lpMem);
  if ( v9 )
    operator delete(v9);
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return v13;
}
