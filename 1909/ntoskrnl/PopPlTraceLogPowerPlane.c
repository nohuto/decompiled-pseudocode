/*
 * XREFs of PopPlTraceLogPowerPlane @ 0x140305244
 * Callers:
 *     PopPlRegisterPowerPlane @ 0x14030509C (PopPlRegisterPowerPlane.c)
 *     PopDiagTraceControlCallback @ 0x1406EFCB0 (PopDiagTraceControlCallback.c)
 * Callees:
 *     _TlgWriteEx @ 0x14013CFBC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

int __fastcall PopPlTraceLogPowerPlane(unsigned __int16 *a1, __int64 a2, ULONG64 a3, ULONG a4)
{
  unsigned __int64 v5; // rax
  unsigned __int64 i; // rdi
  unsigned __int16 *v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rcx
  unsigned __int16 v12; // dx
  const GUID *v14; // [rsp+28h] [rbp-E0h]
  const GUID *v15; // [rsp+30h] [rbp-D8h]
  _WORD v16[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  int v22; // [rsp+60h] [rbp-A8h] BYREF
  int v23; // [rsp+64h] [rbp-A4h] BYREF
  EVENT_DATA_DESCRIPTOR v24; // [rsp+68h] [rbp-A0h] BYREF
  int *v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-78h]
  _DWORD *v27; // [rsp+98h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-68h]
  __int64 v29; // [rsp+A8h] [rbp-60h]
  _DWORD v30[2]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  __int64 v33; // [rsp+C8h] [rbp-40h]
  _DWORD v34[2]; // [rsp+D0h] [rbp-38h] BYREF
  int *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  _WORD *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  unsigned __int16 *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR v43; // [rsp+118h] [rbp+10h] BYREF
  int *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  __int64 v46; // [rsp+148h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+48h]
  _DWORD *v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  __int64 v50; // [rsp+168h] [rbp+60h]
  _DWORD v51[2]; // [rsp+170h] [rbp+68h] BYREF
  _DWORD *v52; // [rsp+178h] [rbp+70h]
  __int64 v53; // [rsp+180h] [rbp+78h]
  __int64 v54; // [rsp+188h] [rbp+80h]
  _DWORD v55[2]; // [rsp+190h] [rbp+88h] BYREF
  _WORD *v56; // [rsp+198h] [rbp+90h]
  __int64 v57; // [rsp+1A0h] [rbp+98h]
  __int64 v58; // [rsp+1A8h] [rbp+A0h]
  int v59; // [rsp+1B0h] [rbp+A8h]
  int v60; // [rsp+1B4h] [rbp+ACh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+1B8h] [rbp+B0h] BYREF
  __int16 *v62; // [rsp+1D8h] [rbp+D0h]
  __int64 v63; // [rsp+1E0h] [rbp+D8h]
  _DWORD *v64; // [rsp+1E8h] [rbp+E0h]
  __int64 v65; // [rsp+1F0h] [rbp+E8h]
  __int64 v66; // [rsp+1F8h] [rbp+F0h]
  _DWORD v67[2]; // [rsp+200h] [rbp+F8h] BYREF
  int *v68; // [rsp+208h] [rbp+100h]
  __int64 v69; // [rsp+210h] [rbp+108h]
  int *v70; // [rsp+218h] [rbp+110h]
  __int64 v71; // [rsp+220h] [rbp+118h]

  if ( pCallbackContext.LevelPlus1 > 5 )
  {
    v20 = *((_DWORD *)a1 + 12);
    v21 = *((_DWORD *)a1 + 7);
    v62 = &v17;
    v64 = v67;
    v66 = *((_QWORD *)a1 + 1);
    v67[0] = *a1;
    v68 = &v20;
    v70 = &v21;
    v17 = 1;
    v63 = 2LL;
    v65 = 2LL;
    v67[1] = 0;
    v69 = 4LL;
    v71 = 4LL;
    TlgWriteEx(&pCallbackContext, &unk_1403916A7, a3, a4, v14, v15, 7u, &pData);
  }
  v5 = *((_QWORD *)a1 + 6);
  for ( i = 0LL; i < v5; ++i )
  {
    v7 = *(unsigned __int16 **)(*((_QWORD *)a1 + 7) + 8 * i);
    v16[0] = 4;
    if ( pCallbackContext.LevelPlus1 > 5 )
    {
      v22 = *((_DWORD *)v7 + 18);
      v23 = *((_DWORD *)v7 + 8);
      v25 = &v18;
      v27 = v30;
      v29 = *((_QWORD *)v7 + 1);
      v30[0] = *v7;
      v31 = v34;
      v33 = *((_QWORD *)a1 + 1);
      v34[0] = *a1;
      v35 = &v22;
      v37 = &v23;
      v39 = v16;
      v41 = v7 + 18;
      LOWORD(v18) = 1;
      v26 = 2LL;
      v28 = 2LL;
      v30[1] = 0;
      v32 = 2LL;
      v34[1] = 0;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 2LL;
      v42 = 32LL;
      TlgWriteEx(&pCallbackContext, &unk_140391792, a3, a4, v14, v15, 0xBu, &v24);
    }
    v5 = *((_QWORD *)a1 + 6);
  }
  v8 = 0LL;
  if ( v5 )
  {
    do
    {
      v5 = *((_QWORD *)a1 + 7);
      v9 = 0LL;
      v10 = *(_QWORD **)(v5 + 8 * v8);
      if ( v10[9] )
      {
        do
        {
          v5 = v10[10];
          v11 = *(_QWORD *)(v5 + 8 * v9);
          v12 = *(_WORD *)(v11 + 24);
          v16[0] = v12;
          if ( pCallbackContext.LevelPlus1 > 5 )
          {
            LOWORD(v19) = 1;
            v44 = &v19;
            v48 = v51;
            v50 = v10[1];
            v51[0] = *(unsigned __int16 *)v10;
            v52 = v55;
            v54 = *((_QWORD *)a1 + 1);
            v55[0] = *a1;
            v56 = v16;
            v58 = v11 + 32;
            v59 = 8 * v12;
            v45 = 2LL;
            v46 = v11;
            v47 = 16LL;
            v49 = 2LL;
            v51[1] = 0;
            v53 = 2LL;
            v55[1] = 0;
            v57 = 2LL;
            v60 = 0;
            LODWORD(v5) = TlgWriteEx(&pCallbackContext, &unk_140391705, a3, a4, v14, v15, 0xAu, &v43);
          }
          ++v9;
        }
        while ( v9 < v10[9] );
      }
      ++v8;
    }
    while ( v8 < *((_QWORD *)a1 + 6) );
  }
  return v5;
}
