/*
 * XREFs of ?InnerGetAPOProperties@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14004338C
 * Callers:
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x140043250 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 * Callees:
 *     ?InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14000EA70 (-InnerGetCommon@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 */

__int64 __fastcall InnerGetAPOProperties(HKEY hkey, const struct _GUID *a2, struct APO_REG_PROPERTIES *a3)
{
  HRESULT Common; // edx
  LSTATUS ValueW; // eax
  __int64 v7; // rcx
  struct APO_REG_PROPERTIES *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  IID v15; // xmm1
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  int v19; // eax
  DWORD pcbData[4]; // [rsp+40h] [rbp-878h] BYREF
  struct APO_REG_PROPERTIES v22; // [rsp+50h] [rbp-868h] BYREF
  OLECHAR sz[512]; // [rsp+4A0h] [rbp-418h] BYREF

  Common = InnerGetCommon(hkey, a2, &v22);
  if ( Common >= 0 )
  {
    v22.u32NumAPOInterfaces = 1;
    pcbData[0] = 1024;
    ValueW = RegGetValueW(hkey, 0LL, L"APOInterface0", 2u, 0LL, sz, pcbData);
    Common = ValueW;
    if ( ValueW )
    {
      if ( ValueW > 0 )
        return (unsigned __int16)ValueW | 0x80070000;
    }
    else
    {
      Common = CLSIDFromString(sz, v22.iidAPOInterfaceList);
      if ( Common >= 0 )
      {
        v7 = 8LL;
        v8 = &v22;
        do
        {
          v9 = *(_OWORD *)&v8->Flags;
          a3->clsid = v8->clsid;
          v10 = *(_OWORD *)&v8->szFriendlyName[6];
          *(_OWORD *)&a3->Flags = v9;
          v11 = *(_OWORD *)&v8->szFriendlyName[14];
          *(_OWORD *)&a3->szFriendlyName[6] = v10;
          v12 = *(_OWORD *)&v8->szFriendlyName[22];
          *(_OWORD *)&a3->szFriendlyName[14] = v11;
          v13 = *(_OWORD *)&v8->szFriendlyName[30];
          *(_OWORD *)&a3->szFriendlyName[22] = v12;
          v14 = *(_OWORD *)&v8->szFriendlyName[38];
          *(_OWORD *)&a3->szFriendlyName[30] = v13;
          v15 = *(IID *)&v8->szFriendlyName[46];
          v8 = (struct APO_REG_PROPERTIES *)((char *)v8 + 128);
          *(_OWORD *)&a3->szFriendlyName[38] = v14;
          a3 = (struct APO_REG_PROPERTIES *)((char *)a3 + 128);
          a3[-1].iidAPOInterfaceList[0] = v15;
          --v7;
        }
        while ( v7 );
        v16 = *(_OWORD *)&v8->Flags;
        a3->clsid = v8->clsid;
        v17 = *(_OWORD *)&v8->szFriendlyName[6];
        *(_OWORD *)&a3->Flags = v16;
        v18 = *(_OWORD *)&v8->szFriendlyName[14];
        v19 = *(_DWORD *)&v8->szFriendlyName[22];
        *(_OWORD *)&a3->szFriendlyName[6] = v17;
        *(_OWORD *)&a3->szFriendlyName[14] = v18;
        *(_DWORD *)&a3->szFriendlyName[22] = v19;
      }
    }
  }
  return (unsigned int)Common;
}
