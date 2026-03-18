/*
 * XREFs of DCompHitTest @ 0x1C0083B70
 * Callers:
 *     <none>
 * Callees:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C002C8E8 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030F88 (_anonymous_namespace_--GetMouseProcessor.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall DCompHitTest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  unsigned int v8; // r14d
  int v9; // edi
  struct _LUID *MouseProcessor; // rax
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // [rsp+40h] [rbp-C0h]
  __int128 v21; // [rsp+48h] [rbp-B8h]
  __int128 v22; // [rsp+48h] [rbp-B8h]
  __int128 v23; // [rsp+58h] [rbp-A8h]
  __int128 v24; // [rsp+58h] [rbp-A8h]
  __int128 v25; // [rsp+68h] [rbp-98h]
  __int128 v26; // [rsp+68h] [rbp-98h]
  __int128 v27; // [rsp+78h] [rbp-88h]
  __int128 v28; // [rsp+78h] [rbp-88h]
  __int128 v29; // [rsp+88h] [rbp-78h]
  __int128 v30; // [rsp+88h] [rbp-78h]
  __int128 v31; // [rsp+98h] [rbp-68h]
  __int128 v32; // [rsp+98h] [rbp-68h]
  __int128 v33; // [rsp+A8h] [rbp-58h]
  __int128 v34; // [rsp+A8h] [rbp-58h]
  _BYTE v35[120]; // [rsp+C0h] [rbp-40h] BYREF
  char v36; // [rsp+138h] [rbp+38h]
  int v37; // [rsp+139h] [rbp+39h]
  __int16 v38; // [rsp+13Dh] [rbp+3Dh]
  char v39; // [rsp+13Fh] [rbp+3Fh]

  v8 = a3;
  v9 = a2;
  if ( !(_DWORD)a2 )
    goto LABEL_4;
  if ( (unsigned int)a2 > 3 )
  {
    if ( (_DWORD)a2 == 4 )
    {
LABEL_4:
      MouseProcessor = (struct _LUID *)anonymous_namespace_::GetMouseProcessor();
      goto LABEL_5;
    }
    if ( (_DWORD)a2 != 5 )
    {
      if ( (_DWORD)a2 != 6 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
        goto LABEL_11;
      }
      goto LABEL_4;
    }
  }
  MouseProcessor = (struct _LUID *)gpTouchProcessor;
LABEL_5:
  if ( !MouseProcessor )
  {
LABEL_11:
    v37 = 0;
    v38 = 0;
    v39 = 0;
    memset(v35, 0, sizeof(v35));
    v34 = *(_OWORD *)v35;
    v36 = 0;
    v32 = *(_OWORD *)&v35[16];
    v30 = *(_OWORD *)&v35[32];
    v28 = *(_OWORD *)&v35[48];
    v26 = *(_OWORD *)&v35[64];
    v24 = *(_OWORD *)&v35[80];
    v22 = *(_OWORD *)&v35[96];
    v20 = *(_QWORD *)&v35[112];
    CInputDest::SetEmpty((CInputDest *)v35, v18, v19);
    *(_OWORD *)a1 = v34;
    *(_OWORD *)(a1 + 16) = v32;
    *(_OWORD *)(a1 + 32) = v30;
    *(_OWORD *)(a1 + 48) = v28;
    v15 = v24;
    *(_OWORD *)(a1 + 64) = v26;
    v16 = v22;
    goto LABEL_7;
  }
  v12 = CSpatialProcessor::HitTest(MouseProcessor, v35, v9, v8, a4, a5, a6, a7);
  v21 = *(_OWORD *)v12;
  v23 = *((_OWORD *)v12 + 1);
  v25 = *((_OWORD *)v12 + 2);
  v27 = *((_OWORD *)v12 + 3);
  v29 = *((_OWORD *)v12 + 4);
  v31 = *((_OWORD *)v12 + 5);
  v33 = *((_OWORD *)v12 + 6);
  v20 = *((_QWORD *)v12 + 14);
  CInputDest::SetEmpty((CInputDest *)v35, v13, v14);
  *(_OWORD *)a1 = v21;
  *(_OWORD *)(a1 + 16) = v23;
  *(_OWORD *)(a1 + 32) = v25;
  *(_OWORD *)(a1 + 48) = v27;
  v15 = v31;
  *(_OWORD *)(a1 + 64) = v29;
  v16 = v33;
LABEL_7:
  *(_OWORD *)(a1 + 80) = v15;
  result = a1;
  *(_OWORD *)(a1 + 96) = v16;
  *(_QWORD *)(a1 + 112) = v20;
  return result;
}
