/*
 * XREFs of ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00494E8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C0049738 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B8DF0 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall DrvValidateAndApplyDevMode(
        struct _DISPLAYCONFIG_CDS_REQUEST *a1,
        struct D3DKMT_GETPATHSMODALITY **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // r14
  __int64 result; // rax
  __int64 v16; // rcx
  struct _devicemodeW *v17; // r14
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 *v20; // rsi
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edx
  int v24; // eax
  __int64 v25; // rax
  bool v26; // zf
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  _QWORD v41[6]; // [rsp+50h] [rbp-30h] BYREF
  int v42; // [rsp+B0h] [rbp+30h] BYREF
  int v43; // [rsp+B8h] [rbp+38h] BYREF

  memset(v41, 0, 0x28uLL);
  if ( !a2 || !a1 || !*((_QWORD *)a1 + 4) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v5, v4, v6);
    WdLogEvent5_WdAssertion(v32);
  }
  v7 = *(_QWORD *)a1;
  if ( ((*(_QWORD *)a1 + 4LL) & 0xFFFFFFFFFFFFFFFBuLL) == 0 || (*(_DWORD *)(v7 + 160) & 0x800000) == 0 )
  {
    v33 = WdLogNewEntry5_WdAssertion(v5, v4, v6);
    WdLogEvent5_WdAssertion(v33);
  }
  LODWORD(v41[0]) = *((_DWORD *)a1 + 2) != 0 ? 6 : 4;
  *(_QWORD *)((char *)v41 + 4) = *(_QWORD *)(v7 + 248);
  v8 = *(_DWORD *)(v7 + 256);
  v41[2] = 0xFFFFFFFEFFFFFFFFuLL;
  HIDWORD(v41[1]) = v8;
  v41[4] = *((_QWORD *)a1 + 4);
  LODWORD(v41[3]) = -2;
  v9 = ((__int64 (__fastcall *)(_QWORD *))qword_1C02150D0)(v41);
  v13 = v9;
  LODWORD(v14) = -1073741266;
  if ( v9 == -1073741266 )
  {
    *((_DWORD *)a1 + 13) = 2;
    *((_DWORD *)a1 + 12) = -2;
    v34 = (_QWORD *)WdLogNewEntry5_WdWarning();
    v34[3] = -1073741266LL;
    v34[4] = *((_QWORD *)a1 + 4);
    v34[5] = *((int *)a1 + 13);
    v34[6] = *((int *)a1 + 12);
    WdLogEvent5_WdWarning(v34);
    return (unsigned int)v14;
  }
  result = 3221225485LL;
  if ( (_DWORD)v13 == -1073741811 )
  {
    *((_DWORD *)a1 + 13) = 3;
    *((_DWORD *)a1 + 12) = -2;
    return result;
  }
  if ( (int)v13 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    v39 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    v39[3] = v13;
    v39[4] = *((_QWORD *)a1 + 4);
    v39[5] = *((int *)a1 + 13);
    v39[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v39);
    return (unsigned int)v13;
  }
  v16 = (__int64)*a2;
  v17 = 0LL;
  if ( *a2 )
  {
    v18 = 0;
    if ( *(_WORD *)(v16 + 20) )
    {
      while ( 1 )
      {
        v19 = 272LL * v18;
        if ( *(_DWORD *)(v19 + v16 + 72) == *(_DWORD *)(v7 + 256)
          && *(_DWORD *)(v19 + v16 + 64) == *(_DWORD *)(v7 + 248)
          && *(_DWORD *)(v19 + v16 + 68) == *(_DWORD *)(v7 + 252) )
        {
          break;
        }
        if ( ++v18 >= *(unsigned __int16 *)(v16 + 20) )
          goto LABEL_15;
      }
      v17 = *(struct _devicemodeW **)(v19 + v16 + 272);
    }
  }
LABEL_15:
  v20 = (__int64 *)((char *)a1 + 40);
  v21 = *((_QWORD *)a1 + 5);
  if ( v21 )
  {
    Win32FreePool(v21);
    *v20 = 0LL;
  }
  v22 = DrvProbeAndCaptureDevmode(
          (struct tagGRAPHICS_DEVICE *)v7,
          (struct _devicemodeW **)a1 + 5,
          &v43,
          &v42,
          *((struct _devicemodeW **)a1 + 4),
          0,
          *((_DWORD *)a1 + 3),
          *((_DWORD *)a1 + 2),
          0,
          v17);
  v14 = v22;
  if ( v22 < 0 )
  {
    *((_DWORD *)a1 + 13) = 4;
    *((_DWORD *)a1 + 12) = -2;
    DrvDxgkLogCodePointPacket(58LL, 0LL, 0LL, 0LL);
    v38 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35, v37);
    v38[3] = v14;
    v38[4] = *((_QWORD *)a1 + 4);
    v38[5] = *((int *)a1 + 13);
    v38[6] = *((int *)a1 + 12);
    WdLogEvent5_WdError(v38);
    return (unsigned int)v14;
  }
  if ( *((_DWORD *)a1 + 4) && v42 )
    v23 = 8;
  else
    v23 = 0;
  LODWORD(v41[0]) = v23 | (v42 == 0 ? 0x10 : 0) | (*((_DWORD *)a1 + 2) != 0 ? 2 : 0);
  *(_QWORD *)((char *)v41 + 4) = *(_QWORD *)(v7 + 248);
  v24 = *(_DWORD *)(v7 + 256);
  v41[2] = 0xFFFFFFFEFFFFFFFFuLL;
  HIDWORD(v41[1]) = v24;
  v25 = *v20;
  LODWORD(v41[3]) = -2;
  if ( !v25 )
    v25 = *((_QWORD *)a1 + 4);
  v26 = *((_DWORD *)a1 + 5) == 0;
  v41[4] = v25;
  if ( v26 || *((_DWORD *)a1 + 6) )
    v27 = ((__int64 (__fastcall *)(struct D3DKMT_GETPATHSMODALITY **, _QWORD *))qword_1C0215268)(a2, v41);
  else
    v27 = ((__int64 (__fastcall *)(_QWORD *))qword_1C02150D0)(v41);
  v31 = v27;
  if ( v27 >= 0 )
    return 0LL;
  *((_DWORD *)a1 + 12) = -1;
  *((_DWORD *)a1 + 13) = 8;
  v40 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
  v40[3] = v31;
  v40[4] = v41[4];
  v40[5] = *((int *)a1 + 13);
  v40[6] = *((int *)a1 + 12);
  WdLogEvent5_WdError(v40);
  return (unsigned int)v31;
}
