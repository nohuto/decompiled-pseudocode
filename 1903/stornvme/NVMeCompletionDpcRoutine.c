/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x1C0003C80
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C0004520 (NVMeHwMSIInterrupt.c)
 *     NVMeIoPollingDpcRoutine @ 0x1C00157F0 (NVMeIoPollingDpcRoutine.c)
 *     ProcessCompletionQueues @ 0x1C0018C90 (ProcessCompletionQueues.c)
 * Callees:
 *     CalculateTimeDurationIn100ns @ 0x1C0004430 (CalculateTimeDurationIn100ns.c)
 *     _guard_dispatch_icall_nop @ 0x1C00050B0 (_guard_dispatch_icall_nop.c)
 *     GetLocalCommand @ 0x1C00090F8 (GetLocalCommand.c)
 *     NVMeControllerAsyncReset @ 0x1C000AA0C (NVMeControllerAsyncReset.c)
 *     IsNVMeControllerOnFatalError @ 0x1C00139D8 (IsNVMeControllerOnFatalError.c)
 *     NVMeMapError @ 0x1C0015E8C (NVMeMapError.c)
 *     RecordCommandTimingHistory @ 0x1C0018EA4 (RecordCommandTimingHistory.c)
 */

__int64 __fastcall NVMeCompletionDpcRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v5; // dx
  char v7; // r12
  unsigned int *v8; // r14
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // dx
  __int16 v12; // si
  __int64 result; // rax
  unsigned __int16 v14; // r15
  _WORD *v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rbp
  unsigned __int8 v20; // cl
  __int16 v21; // ax
  __int64 v22; // rsi
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r15
  int v26; // r8d
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rsi
  unsigned __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r10
  const wchar_t *v34; // rax
  void (__fastcall *v35)(__int64, __int64, unsigned int *); // rax
  __int64 v36; // rsi
  unsigned __int64 v37; // rax
  unsigned int v38; // edx
  volatile signed __int16 *v39; // rax
  int v40; // ecx
  unsigned __int16 v41; // cx
  _DWORD *LocalCommand; // rax
  __int128 v43; // xmm0
  int v44; // ecx
  unsigned __int64 v45; // rax
  signed __int32 v46[8]; // [rsp+0h] [rbp-138h] BYREF
  int v47; // [rsp+20h] [rbp-118h]
  const wchar_t *v48; // [rsp+28h] [rbp-110h]
  __int64 v49; // [rsp+30h] [rbp-108h]
  int v50; // [rsp+38h] [rbp-100h]
  int v51; // [rsp+40h] [rbp-F8h]
  __int64 v52; // [rsp+48h] [rbp-F0h]
  const wchar_t *v53; // [rsp+50h] [rbp-E8h]
  __int64 v54; // [rsp+58h] [rbp-E0h]
  const wchar_t *v55; // [rsp+60h] [rbp-D8h]
  __int64 v56; // [rsp+68h] [rbp-D0h]
  const wchar_t *v57; // [rsp+70h] [rbp-C8h]
  __int64 v58; // [rsp+78h] [rbp-C0h]
  const wchar_t *v59; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v60; // [rsp+88h] [rbp-B0h]
  const wchar_t *v61; // [rsp+90h] [rbp-A8h]
  __int64 v62; // [rsp+98h] [rbp-A0h]
  const wchar_t *v63; // [rsp+A0h] [rbp-98h]
  __int64 v64; // [rsp+A8h] [rbp-90h]
  __int64 v65; // [rsp+B0h] [rbp-88h]
  __int64 v66; // [rsp+B8h] [rbp-80h]
  __int64 v67; // [rsp+C0h] [rbp-78h]
  __int64 v68; // [rsp+C8h] [rbp-70h]
  int v69; // [rsp+D0h] [rbp-68h]
  __int64 v70; // [rsp+D8h] [rbp-60h] BYREF
  unsigned __int64 v71; // [rsp+E0h] [rbp-58h]
  __int64 v72; // [rsp+E8h] [rbp-50h]
  _DWORD *v73; // [rsp+F0h] [rbp-48h]
  volatile signed __int16 *v74; // [rsp+F8h] [rbp-40h]
  __int16 v75; // [rsp+148h] [rbp+10h]
  unsigned __int16 v76; // [rsp+150h] [rbp+18h]

  v5 = 0;
  v7 = 1;
  v8 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 170));
  v75 = 0;
  v71 = 0LL;
  v70 = 0LL;
  v72 = 0LL;
  if ( *(_BYTE *)(a2 + 17) || (*(_DWORD *)(a2 + 104) & 2) != 0 )
  {
    StorPortExtendedFunction(47LL, a2, &v70);
    v5 = 0;
  }
  if ( (*((_WORD *)v8 + 7) & 1) != *(_WORD *)(a3 + 172) )
  {
    while ( v7 )
    {
      v9 = *(_WORD *)(a3 + 168);
      v10 = *((_WORD *)v8 + 5);
      v11 = *((_WORD *)v8 + 6);
      v12 = *((_WORD *)v8 + 4);
      v69 = 0;
      if ( v9 )
      {
        result = *(unsigned int *)(a2 + 20);
        if ( (result & 1) == 0 )
          goto LABEL_77;
      }
      if ( v10 )
      {
        v14 = *(_WORD *)(a2 + 270);
        v16 = 136LL * v10;
        v17 = *(_QWORD *)(a2 + 760);
        v74 = (volatile signed __int16 *)(v16 + v17 - 8);
        v73 = (_DWORD *)(v16 + v17 - 4);
        v15 = (_WORD *)(v16 + v17 - 90);
        result = v16 + v17 - 104;
      }
      else
      {
        v14 = *(_WORD *)(a2 + 268);
        v73 = (_DWORD *)(a2 + 412);
        v15 = (_WORD *)(a2 + 326);
        v74 = (volatile signed __int16 *)(a2 + 408);
        result = a2 + 312;
      }
      v76 = v14;
      if ( v11 >= v14 )
      {
        v45 = *((unsigned __int16 *)v8 + 7);
        v68 = 0LL;
        v67 = 0LL;
        v66 = 0LL;
        v65 = 0LL;
        v64 = 0LL;
        v63 = 0LL;
        v62 = ((unsigned int)v45 >> 9) & 7;
        v61 = L"Status.SCT";
        v60 = (unsigned __int8)(v45 >> 1);
        v59 = L"Status.SC";
        v58 = v9;
        v57 = L"CQId";
        v56 = v10;
        v55 = L"SQId";
        v54 = v11;
        v53 = L"CID";
        v52 = 0LL;
        v51 = 0;
        v50 = 2;
        v49 = 1LL;
        v48 = L"NVMe Invalid Command Id";
        v47 = 6;
        StorPortExtendedFunction(87LL, a2, 0LL);
        result = IsNVMeControllerOnFatalError(a2);
        if ( (_BYTE)result )
          result = NVMeControllerAsyncReset(
                     a2,
                     0LL,
                     0LL,
                     0LL,
                     v47,
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
                     v61,
                     v62,
                     v63,
                     v64,
                     v65,
                     v66,
                     v67,
                     v68,
                     v69);
        goto LABEL_77;
      }
      v18 = _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)result + 16LL * v11), 0LL);
      if ( !v18 )
        goto LABEL_77;
      if ( *(_BYTE *)(v18 + 2) == 40 )
        v19 = *(_QWORD *)(v18 + 104);
      else
        v19 = *(_QWORD *)(v18 + 56);
      if ( (v19 & 0xFFF) != 0 )
        v19 = v19 - (v19 & 0xFFF) + 4096;
      *v15 = v12;
      if ( *(_BYTE *)(v18 + 2) == 40 )
        v20 = *(_BYTE *)(*(unsigned int *)(v18 + 52) + v18 + 10);
      else
        v20 = *(_BYTE *)(v18 + 7);
      v21 = *((_WORD *)v8 + 7);
      v22 = v20;
      v69 = v20;
      *(_WORD *)(v19 + 4250) = v21;
      if ( (v21 & 0xE00) != 0 || (v21 & 0x1FE) != 0 )
      {
        NVMeMapError(a2, v18);
        if ( *(_DWORD *)(a2 + 192) > (unsigned int)v22 )
        {
          v24 = *(_QWORD *)(a2 + 8 * v22 + 1648);
          if ( v24 )
            ++*(_DWORD *)(v24 + 32);
        }
        if ( (unsigned __int8)IsNVMeControllerOnFatalError(a2) )
          NVMeControllerAsyncReset(
            a2,
            0LL,
            0LL,
            0LL,
            v47,
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
            v61,
            v62,
            v63,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
      }
      else
      {
        *(_BYTE *)(v18 + 3) = 1;
        if ( *(_DWORD *)(a2 + 192) > (unsigned int)v20 )
        {
          v23 = *(_QWORD *)(a2 + 8LL * v20 + 1648);
          if ( v23 )
            ++*(_QWORD *)(v23 + 24);
        }
      }
      if ( *(_BYTE *)(a2 + 17) )
      {
        if ( *(_BYTE *)(v18 + 2) == 40 )
          v25 = *(_QWORD *)(v18 + 104);
        else
          v25 = *(_QWORD *)(v18 + 56);
        if ( (v25 & 0xFFF) != 0 )
          v25 = v25 - (v25 & 0xFFF) + 4096;
        v26 = *(_DWORD *)(v25 + 4100);
        if ( v26 == -1 || (v27 = *(_DWORD *)(a2 + 192), v28 = 0LL, !v27) )
        {
LABEL_42:
          v29 = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v29 = *(_QWORD *)(a2 + 8 * v28 + 1648);
            if ( v29 )
            {
              if ( *(_DWORD *)(v29 + 16) == v26 )
                break;
            }
            v28 = (unsigned int)(v28 + 1);
            if ( (unsigned int)v28 >= v27 )
              goto LABEL_42;
          }
        }
        v30 = *((unsigned __int16 *)v8 + 7);
        v31 = v8[2];
        v32 = *v8;
        v33 = *((unsigned __int16 *)v8 + 6);
        v34 = L"Admin Command Completion";
        if ( (*(_BYTE *)(v25 + 4253) & 1) == 0 )
          v34 = L"NVM Command Completion";
        v68 = 0LL;
        v67 = 0LL;
        v66 = 0LL;
        v65 = 0LL;
        v64 = v31;
        v63 = L"DW2";
        v62 = v32;
        v61 = L"DW0";
        v60 = v30;
        v59 = L"Complete Status";
        v58 = (v30 >> 9) & 7;
        v57 = L"Status.SCT";
        v56 = (unsigned __int8)(v30 >> 1);
        v55 = L"Status.SC";
        v54 = v33;
        v53 = L"CID";
        v52 = v18;
        v51 = 0;
        v50 = 4;
        v49 = 16LL;
        v48 = v34;
        v47 = 4;
        StorPortExtendedFunction(87LL, a2, v29);
        v14 = v76;
      }
      v35 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v19 + 4224);
      if ( v35 )
        v35(a2, v18, v8);
      else
        *(_BYTE *)(v19 + 4253) |= 8u;
      if ( *(_QWORD *)(v19 + 4160) )
      {
        v36 = 0LL;
        StorPortExtendedFunction(47LL, a2, &v70);
        if ( *(_BYTE *)(a2 + 17) )
        {
          v37 = *(_QWORD *)(v19 + 4160);
          if ( v71 >= v37 )
            v36 = CalculateTimeDurationIn100ns(v71 - v37, v70);
          StorPortNotification(4102LL, a2, v36);
        }
        if ( (*(_DWORD *)(a2 + 104) & 2) != 0 )
        {
          *(_QWORD *)(v19 + 4184) = v72;
          *(_QWORD *)(v19 + 4192) = v71;
          RecordCommandTimingHistory(a2, v18, v70);
        }
      }
      if ( (*(_BYTE *)(v19 + 4253) & 8) != 0 )
      {
        if ( v18 != a2 + 816 )
        {
          v38 = 0;
          while ( v18 != 104LL * v38 + a2 + 920 )
          {
            if ( ++v38 >= 6 )
            {
              if ( a4 == 1 )
                StorPortNotification(4104LL, a2, v18);
              else
                StorPortNotification(0LL, a2, v18);
              goto LABEL_63;
            }
          }
        }
        LocalCommand = (_DWORD *)GetLocalCommand(a2, v18);
        if ( LocalCommand )
          *LocalCommand = 0;
      }
LABEL_63:
      v39 = v74;
      ++*v73;
      _InterlockedDecrement16(v39);
      v40 = *(unsigned __int16 *)(a3 + 170);
      if ( v40 >= v14 - 1 )
      {
        v41 = 0;
        *(_WORD *)(a3 + 172) = *(_WORD *)(a3 + 172) != 1;
      }
      else
      {
        v41 = v40 + 1;
      }
      *(_WORD *)(a3 + 170) = v41;
      v5 = v75 + 1;
      v8 = (unsigned int *)(*(_QWORD *)a3 + 16LL * v41);
      ++v75;
      if ( *(_BYTE *)(a3 + 200) && (unsigned int)v5 >= *(_DWORD *)(a2 + 68) )
        v7 = 0;
      if ( (*((_WORD *)v8 + 7) & 1) == *(_WORD *)(a3 + 172) )
        break;
    }
  }
  result = *(unsigned __int16 *)(a3 + 170);
  *(_WORD *)(a3 + 308) = result;
  v43 = *(_OWORD *)v8;
  *(_WORD *)(a3 + 304) = v5;
  *(_OWORD *)(a3 + 328) = v43;
  if ( v5 )
  {
    v44 = (unsigned __int16)result;
    result = *(_QWORD *)(a3 + 16);
    *(_DWORD *)result = v44;
    _InterlockedOr(v46, 0);
  }
LABEL_77:
  if ( *(_BYTE *)(a2 + 18) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 12) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 144);
      *(_DWORD *)(result + 16) = 1 << *(_BYTE *)(a3 + 168);
      _InterlockedOr(v46, 0);
      *(_BYTE *)(a2 + 18) = 0;
    }
  }
  return result;
}
