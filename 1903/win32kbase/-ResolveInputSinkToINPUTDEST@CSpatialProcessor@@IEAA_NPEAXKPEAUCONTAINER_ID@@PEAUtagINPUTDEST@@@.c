/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUCONTAINER_ID@@PEAUtagINPUTDEST@@@Z @ 0x1C0001728
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0034D8C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C0172044 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0001980 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0037BBC (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00806F0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01C7BD0 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(
        CSpatialProcessor *this,
        void *a2,
        int a3,
        struct CONTAINER_ID *a4,
        struct tagINPUTDEST *a5)
{
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  int v15; // edx
  _QWORD *v16; // rsi
  unsigned int v17; // r14d
  int v18; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int v28; // eax
  PVOID Object[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v30[16]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v31[56]; // [rsp+140h] [rbp+40h] BYREF

  memset(v30, 0, 0x78uLL);
  v9 = v30[1];
  *(_OWORD *)a5 = v30[0];
  v10 = v30[2];
  *((_OWORD *)a5 + 1) = v9;
  v11 = v30[3];
  *((_OWORD *)a5 + 2) = v10;
  v12 = v30[4];
  *((_OWORD *)a5 + 3) = v11;
  v13 = v30[5];
  *((_OWORD *)a5 + 4) = v12;
  v14 = v30[6];
  *((_OWORD *)a5 + 5) = v13;
  *(_QWORD *)&v13 = *(_QWORD *)&v30[7];
  *((_OWORD *)a5 + 6) = v14;
  *((_QWORD *)a5 + 14) = v13;
  memset(v30, 0, 0x78uLL);
  if ( (int)CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)Object) >= 0 )
  {
    v16 = Object[0];
    if ( a3 == 1 )
    {
LABEL_6:
      v17 = 1;
      goto LABEL_7;
    }
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        v17 = 4;
        goto LABEL_7;
      }
      if ( a3 == 4 )
        goto LABEL_6;
      if ( a3 != 5 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v15) = 2;
          WPP_RECORDER_SF_D((_DWORD)gBaseLog, v15, 5, 12, (__int64)&WPP_8b084b8aee793b57ef299e467cb2c8ed_Traceguids, a3);
        }
        goto LABEL_16;
      }
    }
    v17 = 3;
LABEL_7:
    v18 = *((_DWORD *)Object[0] + 48) & 1;
    *(_QWORD *)&v30[6] = *((unsigned int *)Object[0] + 46);
    LODWORD(v30[1]) = v18;
    memset(v31, 0, sizeof(v31));
    CompositionInputObject::QueryInputQueueForInputType(Object[0], v17, v31);
    if ( *(_DWORD *)v31 == 2 )
    {
      CompositionInputObject::GetWindowForInputType(v16, v17, Object);
      if ( Object[0] )
      {
        LODWORD(v30[0]) |= 4u;
        *(PVOID *)&v30[5] = Object[0];
        v19 = *((_QWORD *)Object[0] + 2);
        HIDWORD(v30[5]) = 2;
        if ( (*(_DWORD *)(*(_QWORD *)(v19 + 416) + 812LL) & 0x1000000) != 0 )
          v18 = 0;
        LODWORD(v30[1]) = v18;
      }
      goto LABEL_12;
    }
    if ( (unsigned int)(*(_DWORD *)v31 - 3) <= 1 )
    {
      Object[0] = 0LL;
      CompositionInputObject::GetBaseWindowForInputType(v16, v17, Object);
      if ( Object[0] )
      {
        v28 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object[0] + 2) + 416LL) + 812LL);
        if ( (v28 & 0x800000) != 0 )
        {
          LODWORD(v30[0]) |= 4u;
          HIDWORD(v30[5]) = 1;
          *(PVOID *)&v30[5] = Object[0];
        }
        if ( (v28 & 0x1000000) != 0 )
          LODWORD(v30[1]) = v18 & 0xFFFFFFFE;
        goto LABEL_33;
      }
      if ( *(_DWORD *)v31 != 3 )
      {
LABEL_33:
        LODWORD(v30[0]) |= 2u;
        *(_OWORD *)((char *)&v30[2] + 8) = *(_OWORD *)&v31[16];
        *((_QWORD *)&v30[1] + 1) = *(_QWORD *)&v31[8];
        *((_QWORD *)&v30[4] + 1) = *(_QWORD *)&v31[48];
        *(_OWORD *)((char *)&v30[3] + 8) = *(_OWORD *)&v31[32];
        goto LABEL_12;
      }
      memset(&v30[8], 0, 0x78uLL);
      v30[0] = v30[8];
      v30[1] = v30[9];
      v30[2] = v30[10];
      v30[3] = v30[11];
      v30[4] = v30[12];
      v30[5] = v30[13];
      v30[6] = v30[14];
      *(_QWORD *)&v30[7] = *(_QWORD *)&v30[15];
    }
LABEL_12:
    if ( (v30[0] & 6) != 0 )
    {
      v20 = v16[2];
      if ( v20 )
      {
        LODWORD(v30[0]) |= 1u;
        *((_QWORD *)&v30[0] + 1) = v20;
      }
      *((_QWORD *)&v30[6] + 1) = *((_QWORD *)this + 2);
    }
LABEL_16:
    ObfDereferenceObject(v16);
  }
  if ( LODWORD(v30[0]) )
  {
    if ( a4 )
    {
      DWORD1(v30[7]) = *(_DWORD *)a4;
    }
    else if ( (v30[0] & 4) != 0 )
    {
      DWORD1(v30[7]) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v30[5] + 16LL) + 416LL) + 1080LL);
    }
    v21 = v30[1];
    *(_OWORD *)a5 = v30[0];
    v22 = v30[2];
    *((_OWORD *)a5 + 1) = v21;
    v23 = v30[3];
    *((_OWORD *)a5 + 2) = v22;
    v24 = v30[4];
    *((_OWORD *)a5 + 3) = v23;
    v25 = v30[5];
    *((_OWORD *)a5 + 4) = v24;
    v26 = v30[6];
    *((_OWORD *)a5 + 5) = v25;
    *(_QWORD *)&v25 = *(_QWORD *)&v30[7];
    *((_OWORD *)a5 + 6) = v26;
    *((_QWORD *)a5 + 14) = v25;
  }
  return *(_DWORD *)a5 != 0;
}
