/*
 * XREFs of ?OnHandEvent@BamoMPCInputObjectProxyImpl@BamoImpl@@QEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@56789@AEBUHitObjectMsg@56789@@Z @ 0x18005FAC8
 * Callers:
 *     ?OnHandEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@Input@UI@Windows@@AEBUHandStateMsg@45678@AEBUHitObjectMsg@45678@@Z @ 0x18005FA50 (-OnHandEvent@BamoMPCInputObjectProxy@@UEAAJAEBUMPCTraceInfo@@W4HandEventType@Internal@Spatial@In.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@Z @ 0x180023ED0 (-PrepareForRemoteCall@BamoProxyImpl@BamoImpl@Microsoft@@QEAAJPEAPEAUIMessageCallSendHost@@PEAI1@.c)
 */

__int64 __fastcall BamoImpl::BamoMPCInputObjectProxyImpl::OnHandEvent(
        Microsoft::BamoImpl::BamoProxyImpl *a1,
        unsigned int *a2,
        __int64 a3,
        _OWORD *a4,
        __int128 *a5)
{
  int v8; // eax
  unsigned int v9; // edi
  char *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  unsigned int v27[4]; // [rsp+58h] [rbp-B0h] BYREF
  struct IMessageCallSendHost *v28; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v29[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v30; // [rsp+88h] [rbp-80h]
  __int128 v31; // [rsp+98h] [rbp-70h]
  __int128 v32; // [rsp+A8h] [rbp-60h]
  char v33; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5C0h] [rbp+4B8h]
  unsigned int v35; // [rsp+5C8h] [rbp+4C0h] BYREF

  if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) + 24LL) + 40LL) )
  {
    v8 = Microsoft::BamoImpl::BamoProxyImpl::PrepareForRemoteCall(a1, &v28, &v35, v27);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v10 = &v33;
      v11 = a5[1];
      v30 = *a5;
      v12 = a5[2];
      v13 = 9LL;
      v31 = v11;
      v32 = v12;
      do
      {
        v14 = a4[1];
        *(_OWORD *)v10 = *a4;
        v15 = a4[2];
        *((_OWORD *)v10 + 1) = v14;
        v16 = a4[3];
        *((_OWORD *)v10 + 2) = v15;
        v17 = a4[4];
        *((_OWORD *)v10 + 3) = v16;
        v18 = a4[5];
        *((_OWORD *)v10 + 4) = v17;
        v19 = a4[6];
        *((_OWORD *)v10 + 5) = v18;
        v20 = a4[7];
        a4 += 8;
        *((_OWORD *)v10 + 6) = v19;
        v10 += 128;
        *((_OWORD *)v10 - 1) = v20;
        --v13;
      }
      while ( v13 );
      v21 = *((_QWORD *)a4 + 12);
      v22 = a4[1];
      *(_OWORD *)v10 = *a4;
      v23 = a4[2];
      *((_OWORD *)v10 + 1) = v22;
      v24 = a4[3];
      *((_OWORD *)v10 + 2) = v23;
      v25 = a4[4];
      *((_OWORD *)v10 + 3) = v24;
      v26 = a4[5];
      *((_OWORD *)v10 + 4) = v25;
      *((_OWORD *)v10 + 5) = v26;
      *((_QWORD *)v10 + 12) = v21;
      v27[2] = *a2;
      v29[0] = v35;
      v29[1] = v27[0];
      return CoreUICallSend(v28, v29, 2LL, 33LL);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2094,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
        (const char *)(unsigned int)v8);
      return v9;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x208D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\codegen\\objfre\\amd64\\ismbamos.bamo.h",
      (const char *)0x87B20814LL);
    return 2276591636LL;
  }
}
