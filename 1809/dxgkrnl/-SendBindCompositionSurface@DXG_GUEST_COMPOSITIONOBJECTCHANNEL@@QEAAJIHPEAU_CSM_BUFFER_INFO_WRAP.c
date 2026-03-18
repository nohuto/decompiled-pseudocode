/*
 * XREFs of ?SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C02325CC
 * Callers:
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z @ 0x1C025C03C (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJIHPEAU_CSM_BUFFER_INFO_WRAPPER@@IPEA_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendBindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        int a2,
        int a3,
        struct _CSM_BUFFER_INFO_WRAPPER *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v29; // [rsp+30h] [rbp-D0h] BYREF
  signed __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v32; // [rsp+48h] [rbp-B8h]
  _DWORD v33[268]; // [rsp+50h] [rbp-B0h] BYREF

  memset(v33, 0, sizeof(v33));
  v33[0] = 1886220131;
  v33[1] = -1073741823;
  v33[2] = 5;
  memset(&v33[6], 0, 0x410uLL);
  v29 = 24;
  v10 = 8LL;
  v32 = 0LL;
  v11 = &v33[6];
  v30 = 0xC0000001706D6F63uLL;
  v31 = 6LL;
  v33[3] = a2;
  v33[4] = a3;
  do
  {
    v12 = *((_OWORD *)a4 + 1);
    *v11 = *(_OWORD *)a4;
    v13 = *((_OWORD *)a4 + 2);
    v11[1] = v12;
    v14 = *((_OWORD *)a4 + 3);
    v11[2] = v13;
    v15 = *((_OWORD *)a4 + 4);
    v11[3] = v14;
    v16 = *((_OWORD *)a4 + 5);
    v11[4] = v15;
    v17 = *((_OWORD *)a4 + 6);
    v11[5] = v16;
    v18 = *((_OWORD *)a4 + 7);
    a4 = (struct _CSM_BUFFER_INFO_WRAPPER *)((char *)a4 + 128);
    v11[6] = v17;
    v11 += 8;
    *(v11 - 1) = v18;
    --v10;
  }
  while ( v10 );
  v19 = *((_QWORD *)this + 1);
  *v11 = *(_OWORD *)a4;
  v33[266] = a5;
  v20 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, signed __int64 *, unsigned int *))(*(_QWORD *)v19 + 32LL))(
          v19,
          v33,
          1072LL,
          &v30,
          &v29);
  v24 = v20;
  if ( v20 < 0 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdWarning(v25);
    return (unsigned int)v24;
  }
  if ( v29 != 24 )
  {
    v26 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    v27 = v29;
LABEL_7:
    *(_QWORD *)(v26 + 24) = v27;
    *(_QWORD *)(v26 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v26);
    LODWORD(v24) = -1073741823;
    return (unsigned int)v24;
  }
  if ( (_DWORD)v31 != 6 )
  {
    v26 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    v27 = (int)v31;
    goto LABEL_7;
  }
  LODWORD(v24) = HIDWORD(v30);
  if ( v30 >= 0 )
    *a6 = v32;
  return (unsigned int)v24;
}
