/*
 * XREFs of ?FillDeviceInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUMPCControllerDeviceInfo@@@Z @ 0x1800BD8E0
 * Callers:
 *     ?PublishRemovalIfNeeded@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800BD7D0 (-PublishRemovalIfNeeded@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NPEAUDynamicNodeInfo@Holographic@34@@Z @ 0x1800AA4A4 (-GetDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NP.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::FillDeviceInfo(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct MPCControllerDeviceInfo *a2)
{
  bool DynamicNodeInfo; // al
  PCWSTR StringRawBuffer; // rax
  unsigned __int64 v6; // r9
  char *v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  signed __int64 v10; // r8
  __int16 v11; // ax
  char *v12; // rax
  UINT32 length; // [rsp+20h] [rbp-38h] BYREF
  __int128 v15; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  memset_0(a2, 0, 0x3A4uLL);
  *(_DWORD *)a2 = *((_DWORD *)this + 3);
  *((_DWORD *)a2 + 216) = 1065353216;
  *((_DWORD *)a2 + 223) = 1065353216;
  DynamicNodeInfo = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::GetDynamicNodeInfo(
                      this,
                      (struct Windows::Internal::Holographic::DynamicNodeInfo *)&v15);
  *((_BYTE *)a2 + 412) = DynamicNodeInfo;
  if ( DynamicNodeInfo )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 12), &length);
    v6 = length;
    v7 = (char *)a2 + 414;
    *((_OWORD *)a2 + 51) = v15;
    if ( v6 > 0x7FFFFFFE )
    {
      v8 = -2147024809;
      *(_WORD *)v7 = 0;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\hands\\spatialinteractionsourcehand.cpp",
        (const char *)v8);
      return v8;
    }
    v9 = 200LL;
    v10 = (char *)StringRawBuffer - v7;
    do
    {
      if ( !(v9 + v6 - 200) )
        break;
      v11 = *(_WORD *)&v7[v10];
      if ( !v11 )
        break;
      *(_WORD *)v7 = v11;
      v7 += 2;
      --v9;
    }
    while ( v9 );
    v12 = v7 - 2;
    if ( v9 )
      v12 = v7;
    *(_WORD *)v12 = 0;
    v8 = v9 == 0 ? 0x8007007A : 0;
    if ( !v9 )
      goto LABEL_11;
  }
  return 0LL;
}
