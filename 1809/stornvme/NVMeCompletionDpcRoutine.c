/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x1C00018F0
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C0005FB0 (NVMeHwMSIInterrupt.c)
 *     NVMeIoPollingDpcRoutine @ 0x1C0015BE0 (NVMeIoPollingDpcRoutine.c)
 *     ProcessCompletionQueues @ 0x1C0017CAC (ProcessCompletionQueues.c)
 * Callees:
 *     GetLocalCommand @ 0x1C00014F8 (GetLocalCommand.c)
 *     CalculateTimeDurationIn100ns @ 0x1C0002070 (CalculateTimeDurationIn100ns.c)
 *     NVMeMapError @ 0x1C000215C (NVMeMapError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C20 (_guard_dispatch_icall_nop.c)
 *     RecordCommandTimingHistory @ 0x1C0017EC0 (RecordCommandTimingHistory.c)
 */

__int64 __fastcall NVMeCompletionDpcRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // dx
  unsigned int *v7; // r14
  char v8; // r12
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // r8
  __int64 v11; // r9
  __int16 v12; // r11
  __int64 result; // rax
  unsigned __int16 v14; // r15
  _WORD *v15; // rdx
  _QWORD *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbp
  unsigned __int8 v21; // cl
  __int16 v22; // ax
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // r15
  int v27; // r8d
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 v30; // rsi
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r10
  const wchar_t *v35; // rax
  void (__fastcall *v36)(__int64, __int64, unsigned int *); // rax
  __int64 v37; // rsi
  unsigned __int64 v38; // rax
  unsigned int v39; // edx
  volatile signed __int16 *v40; // rax
  int v41; // ecx
  unsigned __int16 v42; // cx
  _DWORD *LocalCommand; // rax
  __int128 v44; // xmm0
  _DWORD *v45; // rcx
  unsigned __int64 v46; // rax
  signed __int32 v47[8]; // [rsp+0h] [rbp-138h] BYREF
  int v48; // [rsp+20h] [rbp-118h]
  __int64 v49; // [rsp+28h] [rbp-110h]
  __int64 v50; // [rsp+30h] [rbp-108h]
  int v51; // [rsp+38h] [rbp-100h]
  int v52; // [rsp+40h] [rbp-F8h]
  __int64 v53; // [rsp+48h] [rbp-F0h]
  __int64 v54; // [rsp+50h] [rbp-E8h]
  __int64 v55; // [rsp+58h] [rbp-E0h]
  __int64 v56; // [rsp+60h] [rbp-D8h]
  __int64 v57; // [rsp+68h] [rbp-D0h]
  __int64 v58; // [rsp+70h] [rbp-C8h]
  __int64 v59; // [rsp+78h] [rbp-C0h]
  __int64 v60; // [rsp+80h] [rbp-B8h]
  __int64 v61; // [rsp+88h] [rbp-B0h]
  const wchar_t *v62; // [rsp+90h] [rbp-A8h]
  __int64 v63; // [rsp+98h] [rbp-A0h]
  const wchar_t *v64; // [rsp+A0h] [rbp-98h]
  __int64 v65; // [rsp+A8h] [rbp-90h]
  __int64 v66; // [rsp+B0h] [rbp-88h]
  __int64 v67; // [rsp+B8h] [rbp-80h]
  __int64 v68; // [rsp+C0h] [rbp-78h]
  __int64 v69; // [rsp+C8h] [rbp-70h]
  int v70; // [rsp+D0h] [rbp-68h]
  int v71; // [rsp+D4h] [rbp-64h]
  __int64 v72; // [rsp+D8h] [rbp-60h] BYREF
  unsigned __int64 v73; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v74; // [rsp+E8h] [rbp-50h] BYREF
  _DWORD *v75; // [rsp+F0h] [rbp-48h]
  volatile signed __int16 *v76; // [rsp+F8h] [rbp-40h]
  __int16 v77; // [rsp+148h] [rbp+10h]
  unsigned __int16 v78; // [rsp+150h] [rbp+18h]

  v5 = 0;
  v7 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 170));
  v8 = 1;
  v77 = 0;
  v73 = 0LL;
  v72 = 0LL;
  v74 = 0LL;
  if ( *(_BYTE *)(a2 + 17) || (*(_DWORD *)(a2 + 104) & 2) != 0 )
  {
    StorPortExtendedFunction(47LL, a2, &v72, &v74, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61);
    v5 = 0;
  }
  if ( (*((_WORD *)v7 + 7) & 1) != *(_WORD *)(a3 + 172) )
  {
    while ( v8 )
    {
      v9 = *(_WORD *)(a3 + 168);
      v10 = *((_WORD *)v7 + 5);
      v11 = *((unsigned __int16 *)v7 + 6);
      v12 = *((_WORD *)v7 + 4);
      v70 = 0;
      if ( v9 )
      {
        result = *(unsigned int *)(a2 + 20);
        if ( (result & 1) == 0 )
          goto LABEL_74;
      }
      if ( v10 )
      {
        v14 = *(_WORD *)(a2 + 262);
        v17 = 136LL * v10;
        v18 = *(_QWORD *)(a2 + 752);
        v75 = (_DWORD *)(v17 + v18 - 4);
        v76 = (volatile signed __int16 *)(v17 + v18 - 8);
        v15 = (_WORD *)(v17 + v18 - 90);
        v16 = (_QWORD *)(v18 + v17 - 104);
      }
      else
      {
        v14 = *(_WORD *)(a2 + 260);
        v75 = (_DWORD *)(a2 + 404);
        v15 = (_WORD *)(a2 + 318);
        v76 = (volatile signed __int16 *)(a2 + 400);
        v16 = (_QWORD *)(a2 + 304);
      }
      v78 = v14;
      if ( (unsigned __int16)v11 >= v14 )
      {
        v46 = *((unsigned __int16 *)v7 + 7);
        v69 = 0LL;
        v68 = 0LL;
        v67 = 0LL;
        v66 = 0LL;
        v65 = 0LL;
        v64 = 0LL;
        v63 = ((unsigned int)v46 >> 9) & 7;
        v62 = L"Status.SCT";
        result = StorPortExtendedFunction(
                   87LL,
                   a2,
                   0LL,
                   1LL,
                   6,
                   L"NVMe Invalid Command Id",
                   1LL,
                   2,
                   0,
                   0LL,
                   L"CID",
                   (unsigned __int16)v11,
                   L"SQId",
                   v10,
                   L"CQId",
                   v9,
                   L"Status.SC",
                   (unsigned __int8)(v46 >> 1));
        goto LABEL_74;
      }
      result = *v16 + 16LL * (unsigned __int16)v11;
      v19 = _InterlockedExchange64((volatile __int64 *)result, 0LL);
      if ( !v19 )
        goto LABEL_74;
      if ( *(_BYTE *)(v19 + 2) == 40 )
        v20 = *(_QWORD *)(v19 + 104);
      else
        v20 = *(_QWORD *)(v19 + 56);
      if ( (v20 & 0xFFF) != 0 )
        v20 = v20 - (v20 & 0xFFF) + 4096;
      *v15 = v12;
      if ( *(_BYTE *)(v19 + 2) == 40 )
        v21 = *(_BYTE *)(*(unsigned int *)(v19 + 52) + v19 + 10);
      else
        v21 = *(_BYTE *)(v19 + 7);
      v22 = *((_WORD *)v7 + 7);
      v23 = v21;
      v70 = v21;
      *(_WORD *)(v20 + 4250) = v22;
      if ( (v22 & 0xE00) != 0 || (v22 & 0x1FE) != 0 )
      {
        NVMeMapError(v19);
        if ( *(_DWORD *)(a2 + 184) > (unsigned int)v23 )
        {
          v25 = *(_QWORD *)(a2 + 8 * v23 + 1640);
          if ( v25 )
            ++*(_DWORD *)(v25 + 32);
        }
      }
      else
      {
        *(_BYTE *)(v19 + 3) = 1;
        if ( *(_DWORD *)(a2 + 184) > (unsigned int)v21 )
        {
          v24 = *(_QWORD *)(a2 + 8LL * v21 + 1640);
          if ( v24 )
            ++*(_QWORD *)(v24 + 24);
        }
      }
      if ( *(_BYTE *)(a2 + 17) )
      {
        if ( *(_BYTE *)(v19 + 2) == 40 )
          v26 = *(_QWORD *)(v19 + 104);
        else
          v26 = *(_QWORD *)(v19 + 56);
        if ( (v26 & 0xFFF) != 0 )
          v26 = v26 - (v26 & 0xFFF) + 4096;
        v27 = *(_DWORD *)(v26 + 4100);
        if ( v27 == -1 || (v28 = *(_DWORD *)(a2 + 184), v29 = 0LL, !v28) )
        {
LABEL_40:
          v30 = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v30 = *(_QWORD *)(a2 + 8 * v29 + 1640);
            if ( v30 )
            {
              if ( *(_DWORD *)(v30 + 16) == v27 )
                break;
            }
            v29 = (unsigned int)(v29 + 1);
            if ( (unsigned int)v29 >= v28 )
              goto LABEL_40;
          }
        }
        v31 = *((unsigned __int16 *)v7 + 7);
        v32 = v7[2];
        v33 = *v7;
        v34 = *((unsigned __int16 *)v7 + 6);
        v35 = L"Admin Command Completion";
        if ( (*(_BYTE *)(v26 + 4253) & 1) == 0 )
          v35 = L"NVM Command Completion";
        v69 = 0LL;
        v68 = 0LL;
        v67 = 0LL;
        v66 = 0LL;
        v65 = v32;
        v64 = L"DW2";
        v63 = v33;
        v62 = L"DW0";
        StorPortExtendedFunction(
          87LL,
          a2,
          v30,
          0LL,
          4,
          v35,
          16LL,
          4,
          0,
          v19,
          L"CID",
          v34,
          L"Status.SC",
          (unsigned __int8)(v31 >> 1),
          L"Status.SCT",
          (v31 >> 9) & 7,
          L"Complete Status",
          v31);
        v14 = v78;
      }
      v36 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v20 + 4224);
      if ( v36 )
        v36(a2, v19, v7);
      else
        *(_BYTE *)(v20 + 4253) |= 8u;
      if ( *(_QWORD *)(v20 + 4160) )
      {
        v37 = 0LL;
        StorPortExtendedFunction(
          47LL,
          a2,
          &v72,
          &v73,
          v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
        if ( *(_BYTE *)(a2 + 17) )
        {
          v38 = *(_QWORD *)(v20 + 4160);
          if ( v73 >= v38 )
            v37 = CalculateTimeDurationIn100ns(v73 - v38, v72);
          StorPortNotification(4102LL, a2, v37, v19);
        }
        if ( (*(_DWORD *)(a2 + 104) & 2) != 0 )
        {
          *(_QWORD *)(v20 + 4184) = v74;
          *(_QWORD *)(v20 + 4192) = v73;
          RecordCommandTimingHistory(a2, v19, v72);
        }
      }
      if ( (*(_BYTE *)(v20 + 4253) & 8) != 0 )
      {
        if ( v19 != a2 + 808 )
        {
          v39 = 0;
          while ( v19 != 104LL * v39 + a2 + 912 )
          {
            if ( ++v39 >= 6 )
            {
              if ( a4 == 1 )
                StorPortNotification(4104LL, a2, v19, v11);
              else
                StorPortNotification(0LL, a2, v19, v11);
              goto LABEL_61;
            }
          }
        }
        LocalCommand = (_DWORD *)GetLocalCommand(a2, v19);
        if ( LocalCommand )
          *LocalCommand = 0;
      }
LABEL_61:
      v40 = v76;
      ++*v75;
      _InterlockedDecrement16(v40);
      v41 = *(unsigned __int16 *)(a3 + 170);
      if ( v41 >= v14 - 1 )
      {
        v42 = 0;
        *(_WORD *)(a3 + 172) = *(_WORD *)(a3 + 172) != 1;
      }
      else
      {
        v42 = v41 + 1;
      }
      *(_WORD *)(a3 + 170) = v42;
      v5 = v77 + 1;
      v7 = (unsigned int *)(*(_QWORD *)a3 + 16LL * v42);
      ++v77;
      if ( *(_BYTE *)(a3 + 200) && (unsigned int)v5 >= *(_DWORD *)(a2 + 68) )
        v8 = 0;
      if ( (*((_WORD *)v7 + 7) & 1) == *(_WORD *)(a3 + 172) )
        break;
    }
  }
  result = *(unsigned __int16 *)(a3 + 170);
  *(_WORD *)(a3 + 308) = result;
  v44 = *(_OWORD *)v7;
  *(_WORD *)(a3 + 304) = v5;
  *(_OWORD *)(a3 + 328) = v44;
  if ( v5 )
  {
    v45 = *(_DWORD **)(a3 + 16);
    result = (unsigned __int16)result;
    v71 = result;
    *v45 = (unsigned __int16)result;
    _InterlockedOr(v47, 0);
  }
LABEL_74:
  if ( *(_BYTE *)(a2 + 18) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 12) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 136);
      *(_DWORD *)(result + 16) = 1 << *(_BYTE *)(a3 + 168);
      _InterlockedOr(v47, 0);
      *(_BYTE *)(a2 + 18) = 0;
    }
  }
  return result;
}
