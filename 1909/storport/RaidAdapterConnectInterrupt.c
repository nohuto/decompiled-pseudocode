/*
 * XREFs of RaidAdapterConnectInterrupt @ 0x1C001DB08
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C001C5B8 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidGetResourceListInterrupt @ 0x1C001DE30 (RaidGetResourceListInterrupt.c)
 *     WPP_SF_ @ 0x1C0038C2C (WPP_SF_.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C006F370 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C0072918 (RaidAdapterConnectNonMSIInterrupt.c)
 */

__int64 __fastcall RaidAdapterConnectInterrupt(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  unsigned int ResourceListInterrupt; // edi
  int v6; // r8d
  int v7; // r9d
  unsigned __int8 v8; // si
  int v9; // eax
  PDEVICE_OBJECT v10; // rcx
  __int64 v11; // rdx
  int v12; // edx
  int v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+28h] [rbp-40h]
  _BYTE v15[8]; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v16[4]; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int8 v17; // [rsp+90h] [rbp+28h] BYREF
  char v18; // [rsp+98h] [rbp+30h] BYREF
  unsigned __int8 v19; // [rsp+A0h] [rbp+38h] BYREF
  int v20; // [rsp+A8h] [rbp+40h] BYREF

  result = 0LL;
  v3 = (_QWORD *)(a1 + 280);
  v16[0] = 0LL;
  v16[1] = 0LL;
  if ( *v3 && *(_QWORD *)(a1 + 288) )
  {
    ResourceListInterrupt = RaidGetResourceListInterrupt(
                              (_DWORD)v3,
                              *(_BYTE *)(a1 + 4448),
                              (unsigned int)&v20,
                              (unsigned int)&v19,
                              (__int64)v15,
                              (__int64)&v18,
                              (__int64)v16,
                              (__int64)&v17);
    if ( (ResourceListInterrupt & 0x80000000) != 0 )
    {
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return ResourceListInterrupt;
      }
      v11 = 20LL;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 4448) )
      {
        v8 = v17;
        LOBYTE(v4) = v17;
        v9 = RaidAdapterConnectMSIInterrupt(a1, v4);
      }
      else
      {
        v8 = v19;
        v12 = v20;
        LOBYTE(v7) = v19;
        LOBYTE(v6) = v19;
        v14 = v18;
        *(_BYTE *)(a1 + 4449) = 0;
        v9 = RaidAdapterConnectNonMSIInterrupt(a1, v12, v6, v7, v13, v14, (__int64)v16);
      }
      ResourceListInterrupt = v9;
      if ( v9 >= 0 )
      {
        *(_DWORD *)(a1 + 672) = v8;
        return ResourceListInterrupt;
      }
      v10 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return ResourceListInterrupt;
      }
      v11 = 21LL;
    }
    WPP_SF_(v10->AttachedDevice, v11, &WPP_a09e26a5f087304ee2330933c6b86cea_Traceguids);
    return ResourceListInterrupt;
  }
  return result;
}
