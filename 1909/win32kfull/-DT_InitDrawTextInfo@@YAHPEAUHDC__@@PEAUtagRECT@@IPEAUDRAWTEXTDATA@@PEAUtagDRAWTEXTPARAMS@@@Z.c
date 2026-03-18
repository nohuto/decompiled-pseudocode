/*
 * XREFs of ?DT_InitDrawTextInfo@@YAHPEAUHDC__@@PEAUtagRECT@@IPEAUDRAWTEXTDATA@@PEAUtagDRAWTEXTPARAMS@@@Z @ 0x1C025A6F4
 * Callers:
 *     DrawTextExWorker @ 0x1C025AA5C (DrawTextExWorker.c)
 * Callees:
 *     GreGetTextCharsetInfo @ 0x1C00E0F34 (GreGetTextCharsetInfo.c)
 *     GreGetTextMetricsW @ 0x1C0107E3C (GreGetTextMetricsW.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     IsSysFontAndDefaultMode @ 0x1C025ADBC (IsSysFontAndDefaultMode.c)
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
  __int64 v14; // r8
  int TextMetricsW; // eax
  __int64 v16; // rdx
  int v17; // r15d
  int v18; // r14d
  int v19; // r12d
  _DWORD *DPIServerInfo; // rax
  int v21; // eax
  int v22; // ecx
  int v23; // edi
  int v24; // eax
  __int64 v25; // [rsp+28h] [rbp-71h] BYREF
  __int64 v26; // [rsp+30h] [rbp-69h] BYREF
  __int128 v27; // [rsp+38h] [rbp-61h]
  __int128 v28; // [rsp+48h] [rbp-51h]
  __int128 v29; // [rsp+58h] [rbp-41h]
  _OWORD v30[5]; // [rsp+78h] [rbp-21h] BYREF

  v26 = 0LL;
  v25 = 0LL;
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
  result = GreGetDCPoint(a1, 1LL, &v26);
  if ( (_DWORD)result )
  {
    GreGetDCPoint(a1, 2LL, &v25);
    *((_DWORD *)a4 + 5) = (((int)(v26 ^ v25) >> 31) & 0xFFFFFFFE) + 1;
    *((_DWORD *)a4 + 6) = (((HIDWORD(v26) ^ HIDWORD(v25)) >> 31) & 0xFFFFFFFE) + 1;
    if ( (a3 & 0x1000) != 0 || (unsigned int)IsSysFontAndDefaultMode(a1) )
    {
      DPIServerInfo = (_DWORD *)GetDPIServerInfo(v13, v12, v14);
      v19 = DPIServerInfo[9];
      v17 = DPIServerInfo[15];
      v18 = DPIServerInfo[18];
      GreGetTextCharsetInfo(*(HDC *)(gpDispInfo + 56LL), 0LL);
    }
    else
    {
      memset(v30, 0, 0x44uLL);
      TextMetricsW = GreGetTextMetricsW(a1, (struct _TMW_INTERNAL *)v30);
      v27 = v30[0];
      v28 = v30[1];
      v17 = DWORD1(v30[1]);
      v29 = v30[2];
      if ( TextMetricsW )
        v18 = v29;
      else
        v18 = 0;
      v19 = v27;
    }
    v21 = v19 * *((_DWORD *)a4 + 6);
    *((_DWORD *)a4 + 14) = v18;
    *((_DWORD *)a4 + 7) = v21;
    *((_DWORD *)a4 + 4) = 8 * v17;
    if ( gptiCurrent == gptiRit )
      v22 = 0;
    else
      v22 = *(_DWORD *)(PsGetCurrentProcessWin32Process(gptiRit, v16) + 752) & 4;
    *((_DWORD *)a4 + 15) = v22;
    if ( !v22 )
      *((_QWORD *)a4 + 6) = UserTextOutWInternal;
    *(struct tagRECT *)a4 = *a2;
    if ( v9 | v10 )
    {
      *(_DWORD *)a4 += *((_DWORD *)a4 + 5) * v9;
      v23 = *((_DWORD *)a4 + 5) * v10;
      *((_DWORD *)a4 + 10) = v23;
      *((_DWORD *)a4 + 2) -= v23;
    }
    else
    {
      *((_DWORD *)a4 + 10) = 0;
    }
    v24 = *((_DWORD *)a4 + 5) * (*((_DWORD *)a4 + 2) - *(_DWORD *)a4);
    *((_DWORD *)a4 + 9) = 0;
    *((_DWORD *)a4 + 8) = v24;
    return 1LL;
  }
  return result;
}
