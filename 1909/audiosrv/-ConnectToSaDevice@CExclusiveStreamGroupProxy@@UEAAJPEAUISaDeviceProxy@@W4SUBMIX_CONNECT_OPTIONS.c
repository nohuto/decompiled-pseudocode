/*
 * XREFs of ?ConnectToSaDevice@CExclusiveStreamGroupProxy@@UEAAJPEAUISaDeviceProxy@@W4SUBMIX_CONNECT_OPTIONS@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EDF90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180047D84 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z @ 0x1800ED31C (--4-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAUISaDeviceProxy@@@Z.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x1800EE134 (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::ConnectToSaDevice(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v8; // ebx
  __int64 v9; // rdx
  char *v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  RPC_STATUS v24; // eax
  char v26; // [rsp+30h] [rbp-4F8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-4D8h]
  __int64 v28; // [rsp+60h] [rbp-4C8h]
  __int64 v29; // [rsp+538h] [rbp+10h] BYREF

  v29 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 56LL))(a2, &v29);
  if ( v8 >= 0 )
  {
    v9 = 9LL;
    v10 = &v26;
    v11 = (_OWORD *)a4;
    do
    {
      v12 = v11[1];
      *(_OWORD *)v10 = *v11;
      v13 = v11[2];
      *((_OWORD *)v10 + 1) = v12;
      v14 = v11[3];
      *((_OWORD *)v10 + 2) = v13;
      v15 = v11[4];
      *((_OWORD *)v10 + 3) = v14;
      v16 = v11[5];
      *((_OWORD *)v10 + 4) = v15;
      v17 = v11[6];
      *((_OWORD *)v10 + 5) = v16;
      v18 = v11[7];
      v11 += 8;
      *((_OWORD *)v10 + 6) = v17;
      v10 += 128;
      *((_OWORD *)v10 - 1) = v18;
      --v9;
    }
    while ( v9 );
    v19 = v11[1];
    *(_OWORD *)v10 = *v11;
    v20 = v11[2];
    *((_OWORD *)v10 + 1) = v19;
    v21 = v11[3];
    *((_OWORD *)v10 + 2) = v20;
    v22 = v11[4];
    *((_OWORD *)v10 + 3) = v21;
    v23 = v11[5];
    *((_OWORD *)v10 + 4) = v22;
    *((_OWORD *)v10 + 5) = v23;
    v24 = RpcImpersonateClient(0LL);
    v8 = v24;
    if ( v24 > 0 )
      v8 = (unsigned __int16)v24 | 0x80070000;
    if ( v8 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v29 + 72LL))(
             v29,
             a1 + 272,
             0LL,
             *(_QWORD *)(a1 + 560),
             a4);
      RpcRevertToSelf();
      *(_QWORD *)(a4 + 48) = v28;
      *(_QWORD *)(a4 + 32) = v27;
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 80) + 80LL))(
               *(_QWORD *)(a1 + 80),
               v29,
               a3);
        if ( v8 >= 0 )
        {
          Microsoft::WRL::ComPtr<ISaDeviceProxy>::operator=((__int64 *)(a1 + 88), a2);
          CBaseStreamGroupProxy::ConnectToSaDevice_Base((CBaseStreamGroupProxy *)a1);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
  return (unsigned int)v8;
}
