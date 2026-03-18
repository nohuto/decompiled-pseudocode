/*
 * XREFs of ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C024203C
 * Callers:
 *     DrawTextExWorker @ 0x1C024239C (DrawTextExWorker.c)
 * Callees:
 *     GreGetTextCharsetInfo @ 0x1C0024074 (GreGetTextCharsetInfo.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     GreGetTextMetricsW @ 0x1C01111FC (GreGetTextMetricsW.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     IsSysFontAndDefaultMode @ 0x1C02426F4 (IsSysFontAndDefaultMode.c)
 */

__int64 __fastcall DT_InitDrawTextInfo(
        HDC a1,
        struct tagRECT *a2,
        __int16 a3,
        struct DRAWTEXTDATA *a4,
        struct tagDRAWTEXTPARAMS *a5)
{
  int v9; // esi
  int v10; // edi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int TextMetricsW; // eax
  int v15; // r15d
  int v16; // r14d
  int v17; // r12d
  _DWORD *DPIServerInfo; // rax
  int v19; // eax
  int v20; // ecx
  int v21; // edi
  int v22; // eax
  __int64 v23; // [rsp+28h] [rbp-71h] BYREF
  __int64 v24; // [rsp+30h] [rbp-69h] BYREF
  __int128 v25; // [rsp+38h] [rbp-61h]
  __int128 v26; // [rsp+48h] [rbp-51h]
  __int128 v27; // [rsp+58h] [rbp-41h]
  _OWORD v28[5]; // [rsp+78h] [rbp-21h] BYREF

  v24 = 0LL;
  v23 = 0LL;
  if ( a5 )
  {
    v9 = *((_DWORD *)a5 + 2);
    v10 = *((_DWORD *)a5 + 3);
  }
  else
  {
    v10 = 0;
    v9 = 0;
  }
  result = GreGetDCPoint(a1, 1LL, &v24);
  if ( (_DWORD)result )
  {
    GreGetDCPoint(a1, 2LL, &v23);
    *((_DWORD *)a4 + 5) = (((int)(v24 ^ v23) >> 31) & 0xFFFFFFFE) + 1;
    *((_DWORD *)a4 + 6) = (((HIDWORD(v24) ^ HIDWORD(v23)) >> 31) & 0xFFFFFFFE) + 1;
    if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
    {
      DPIServerInfo = (_DWORD *)GetDPIServerInfo(v13, v12);
      v17 = DPIServerInfo[9];
      v15 = DPIServerInfo[15];
      v16 = DPIServerInfo[18];
      GreGetTextCharsetInfo(*(HDC *)(gpDispInfo + 56LL), 0LL);
    }
    else
    {
      memset(v28, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v28);
      v25 = v28[0];
      v26 = v28[1];
      v15 = DWORD1(v28[1]);
      v27 = v28[2];
      if ( TextMetricsW )
        v16 = v27;
      else
        v16 = 0;
      v17 = v25;
    }
    v19 = v17 * *((_DWORD *)a4 + 6);
    *((_DWORD *)a4 + 14) = v16;
    *((_DWORD *)a4 + 7) = v19;
    *((_DWORD *)a4 + 4) = 8 * v15;
    if ( gptiCurrent == gptiRit )
      v20 = 0;
    else
      v20 = *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiRit) + 760) & 4;
    *((_DWORD *)a4 + 15) = v20;
    if ( !v20 )
      *((_QWORD *)a4 + 6) = UserTextOutWInternal;
    *(struct tagRECT *)a4 = *a2;
    if ( v9 | v10 )
    {
      *(_DWORD *)a4 += *((_DWORD *)a4 + 5) * v9;
      v21 = *((_DWORD *)a4 + 5) * v10;
      *((_DWORD *)a4 + 10) = v21;
      *((_DWORD *)a4 + 2) -= v21;
    }
    else
    {
      *((_DWORD *)a4 + 10) = 0;
    }
    v22 = *((_DWORD *)a4 + 5) * (*((_DWORD *)a4 + 2) - *(_DWORD *)a4);
    *((_DWORD *)a4 + 9) = 0;
    *((_DWORD *)a4 + 8) = v22;
    return 1LL;
  }
  return result;
}
