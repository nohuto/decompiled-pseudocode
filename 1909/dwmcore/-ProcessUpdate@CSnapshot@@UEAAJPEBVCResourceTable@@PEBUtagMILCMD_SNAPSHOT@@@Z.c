/*
 * XREFs of ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_SNAPSHOT@@@Z @ 0x180216CB0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z @ 0x1800AE250 (--$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z.c)
 *     ?GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z @ 0x180175EE4 (-GetPrimaryDisplayDimensions@CComposition@@QEAAJPEAH0@Z.c)
 *     ?CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z @ 0x180216A58 (-CreateCVI@CSnapshot@@AEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CSnapshot::ProcessUpdate(
        CSnapshot *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_SNAPSHOT *a3)
{
  unsigned int v5; // edi
  struct CVisual *Resource; // rbp
  CComposition *v7; // rcx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  unsigned int v10; // edx
  signed int CVI; // eax
  __int64 v12; // rcx
  int v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+60h] [rbp+18h] BYREF

  v5 = 0;
  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xBDu);
  ReleaseInterface<CCachedVisualImage>((__int64 *)this + 9);
  if ( Resource )
  {
    if ( *((_DWORD *)a3 + 3) )
    {
      if ( *((_DWORD *)a3 + 4) )
      {
        v14 = 0x7FFFFFFF;
        v15 = 0x7FFFFFFF;
        if ( (int)CComposition::GetPrimaryDisplayDimensions(v7, &v14, &v15) >= 0 )
        {
          v8 = *((_DWORD *)a3 + 4);
          v9 = *((_DWORD *)a3 + 3);
          v10 = v15;
          if ( v14 > v15 )
            v10 = v14;
          if ( v9 >= v10 )
            v9 = v10;
          *((_DWORD *)this + 14) = v9;
          if ( v8 >= v10 )
            v8 = v10;
          *((_DWORD *)this + 15) = v8;
          *((_BYTE *)this + 64) = *((_BYTE *)a3 + 20) != 0;
          CVI = CSnapshot::CreateCVI(this, Resource);
          v5 = CVI;
          if ( CVI < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, CVI, 0xAEu, 0LL);
        }
      }
    }
  }
  return v5;
}
