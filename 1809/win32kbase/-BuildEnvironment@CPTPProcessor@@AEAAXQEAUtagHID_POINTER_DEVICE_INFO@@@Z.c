/*
 * XREFs of ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014A4E8
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014ACDC (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014C2B8 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 */

void __fastcall CPTPProcessor::BuildEnvironment(CPTPProcessor *this, struct tagHID_POINTER_DEVICE_INFO *const a2)
{
  _DWORD *v2; // rbx
  _OWORD *v5; // rcx
  __int64 v6; // rdx
  _OWORD *v7; // rax
  __int128 v8; // xmm1

  v2 = (_DWORD *)((char *)this + 608);
  memset((char *)this + 608, 0, 0x218uLL);
  v5 = (_OWORD *)((char *)this + 700);
  v6 = 2LL;
  *((_DWORD *)this + 153) = (*((_DWORD *)a2 + 77) & 1) == 0;
  *v2 = *((_DWORD *)a2 + 178);
  *(_OWORD *)((char *)this + 1020) = *(_OWORD *)((char *)a2 + 280);
  *(_QWORD *)((char *)this + 1036) = *((_QWORD *)a2 + 37);
  *((_DWORD *)this + 261) = *((_DWORD *)a2 + 76);
  *((_OWORD *)this + 39) = *(_OWORD *)((char *)a2 + 140);
  *((_DWORD *)this + 174) = *((_DWORD *)a2 + 224);
  v7 = &gTPThresholds;
  do
  {
    *v5 = *v7;
    v5[1] = v7[1];
    v5[2] = v7[2];
    v5[3] = v7[3];
    v5[4] = v7[4];
    v5[5] = v7[5];
    v5[6] = v7[6];
    v5 += 8;
    v8 = v7[7];
    v7 += 8;
    *(v5 - 1) = v8;
    --v6;
  }
  while ( v6 );
  *v5 = *v7;
  v5[1] = v7[1];
  *((_QWORD *)v5 + 4) = *((_QWORD *)v7 + 4);
  *(_OWORD *)((char *)this + 996) = gTouchPadParameters;
  *(_QWORD *)((char *)this + 1012) = qword_1C01CBD28;
  *(_OWORD *)((char *)this + 1048) = gAapState;
  *(_OWORD *)((char *)this + 1064) = xmmword_1C01D15E0;
  *(_OWORD *)((char *)this + 1080) = xmmword_1C01D15F0;
  *(_OWORD *)((char *)this + 1096) = xmmword_1C01D1600;
  *(_OWORD *)((char *)this + 1112) = xmmword_1C01D1610;
  *(_OWORD *)((char *)this + 1128) = xmmword_1C01D1620;
  *((_DWORD *)this + 161) = *((_DWORD *)a2 + 67);
  *((_DWORD *)this + 163) = *((_DWORD *)this + 159);
  *((_DWORD *)this + 160) = *((_DWORD *)a2 + 68);
  *((_DWORD *)this + 162) = *((_DWORD *)a2 + 69);
  *((_DWORD *)this + 154) = (*((_DWORD *)a2 + 77) & 2u) >> 1;
  *((_OWORD *)this + 41) = *((_OWORD *)a2 + 10);
  *((_OWORD *)this + 42) = *((_OWORD *)a2 + 11);
  *((_DWORD *)this + 155) = *((_DWORD *)gpsi + 497) != 0;
  *((union _LARGE_INTEGER *)this + 86) = gliQpcFreq;
}
