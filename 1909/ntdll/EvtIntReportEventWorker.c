/*
 * XREFs of EvtIntReportEventWorker @ 0x18005291C
 * Callers:
 *     EvtIntReportEventAndSourceAsync @ 0x1800528B0 (EvtIntReportEventAndSourceAsync.c)
 *     EvtIntReportAuthzEventAndSourceAsync @ 0x18010DFF0 (EvtIntReportAuthzEventAndSourceAsync.c)
 * Callees:
 *     RtlValidSid @ 0x180014E00 (RtlValidSid.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     EtwpEventWriteFull @ 0x180052DD4 (EtwpEventWriteFull.c)
 *     RtlSetLastWin32Error @ 0x180053C30 (RtlSetLastWin32Error.c)
 *     EtwWriteUMSecurityEvent @ 0x180075E10 (EtwWriteUMSecurityEvent.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     _local_unwind @ 0x18008DC10 (_local_unwind.c)
 */

_BOOL8 __fastcall EvtIntReportEventWorker(
        __int64 a1,
        int a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        char a6,
        _BYTE *a7,
        unsigned __int16 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  _BYTE *v13; // r12
  _BYTE *Heap; // rdi
  char v15; // r15
  unsigned int v16; // ecx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // r8d
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // edx
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v35; // [rsp+0h] [rbp-2D8h] BYREF
  int v36; // [rsp+50h] [rbp-288h]
  unsigned int v37; // [rsp+54h] [rbp-284h]
  int v38; // [rsp+58h] [rbp-280h] BYREF
  int v39; // [rsp+5Ch] [rbp-27Ch] BYREF
  int v40; // [rsp+60h] [rbp-278h] BYREF
  char v41; // [rsp+64h] [rbp-274h]
  char v42; // [rsp+65h] [rbp-273h]
  __int16 v43; // [rsp+66h] [rbp-272h]
  unsigned __int64 v44; // [rsp+68h] [rbp-270h]
  unsigned int v45; // [rsp+70h] [rbp-268h]
  int v46; // [rsp+74h] [rbp-264h]
  _BYTE *v47; // [rsp+78h] [rbp-260h]
  __int64 v48; // [rsp+80h] [rbp-258h] BYREF
  __int64 v49; // [rsp+88h] [rbp-250h]
  __int64 *v50; // [rsp+90h] [rbp-248h]
  _BYTE v51[512]; // [rsp+A0h] [rbp-238h] BYREF

  v50 = &v35;
  v46 = a2;
  v49 = a1;
  v13 = a7;
  v37 = 0;
  Heap = v51;
  v47 = v51;
  v15 = 0;
  v38 = 0;
  if ( !a11 && a9 || !a10 && a8 || !a3 )
  {
    v37 = 87;
    goto LABEL_32;
  }
  v16 = a8 + (a7 != 0LL) + 7;
  if ( a9 )
    ++v16;
  if ( v16 > 0x20 )
  {
    Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL * v16);
    v47 = Heap;
    if ( !Heap )
    {
      v37 = 8;
      goto LABEL_32;
    }
  }
  v17 = 0x8000000000000000uLL;
  if ( a4 )
  {
    switch ( a4 )
    {
      case 1:
        v15 = 2;
        break;
      case 2:
        v15 = 3;
        break;
      case 4:
        v15 = 4;
        break;
      case 8:
        v17 = 0x8020000000000000uLL;
        break;
      case 16:
        v17 = 0x8010000000000000uLL;
        break;
    }
  }
  else
  {
    v15 = 0;
  }
  v40 = 0;
  v41 = v15;
  v43 = a5;
  v42 = 0;
  v44 = v17;
  if ( v13 )
  {
    if ( !RtlValidSid(v13) )
    {
      v37 = 87;
      local_unwind(v50, &loc_180052C6C);
      goto LABEL_29;
    }
    v38 = 4 * (unsigned __int8)v13[1] + 8;
  }
  v48 = MEMORY[0x7FFE0014];
  *(_QWORD *)Heap = &v48;
  *((_QWORD *)Heap + 1) = 8LL;
  *((_QWORD *)Heap + 2) = &a6;
  *((_QWORD *)Heap + 3) = 4LL;
  v36 = 2;
  v18 = -1LL;
  do
    ++v18;
  while ( *(_WORD *)(a3 + 2 * v18) );
  v39 = (unsigned __int16)(v18 + 1);
  *((_QWORD *)Heap + 4) = &v39;
  *((_QWORD *)Heap + 5) = 2LL;
  v19 = 2 * v39;
  *((_QWORD *)Heap + 6) = a3;
  *((_DWORD *)Heap + 14) = v19;
  *((_DWORD *)Heap + 15) = 0;
  *((_QWORD *)Heap + 8) = &v38;
  *((_QWORD *)Heap + 9) = 2LL;
  v20 = 5;
  v36 = 5;
  v21 = v38;
  if ( v38 )
  {
    *((_QWORD *)Heap + 10) = v13;
    *((_DWORD *)Heap + 22) = v21;
    *((_DWORD *)Heap + 23) = 0;
    v20 = 6;
    v36 = 6;
  }
  v22 = 2LL * v20;
  *(_QWORD *)&Heap[8 * v22] = &a8;
  *(_QWORD *)&Heap[8 * v22 + 8] = 2LL;
  v23 = v20 + 1;
  v36 = v23;
  v24 = 0;
  v45 = 0;
  while ( v24 < a8 )
  {
    v25 = *(_QWORD *)(a10 + 8LL * v24);
    v26 = -1LL;
    do
      ++v26;
    while ( *(_WORD *)(v25 + 2 * v26) );
    v27 = 2 * v26 + 2;
    v28 = 2LL * v23;
    *(_QWORD *)&Heap[8 * v28] = v25;
    *(_QWORD *)&Heap[8 * v28 + 8] = v27;
    v36 = ++v23;
    v45 = ++v24;
  }
  v29 = 2LL * v23;
  *(_QWORD *)&Heap[8 * v29] = &a9;
  *(_QWORD *)&Heap[8 * v29 + 8] = 4LL;
  v30 = v23 + 1;
  v36 = v30;
  v31 = a9;
  if ( a9 )
  {
    v32 = 2LL * (unsigned int)v30;
    *(_QWORD *)&Heap[8 * v32] = a11;
    *(_DWORD *)&Heap[8 * v32 + 8] = v31;
    *(_DWORD *)&Heap[8 * v32 + 12] = 0;
    v30 = (unsigned int)(v30 + 1);
    v36 = v30;
  }
  if ( !v46 )
  {
    v33 = EtwpEventWriteFull(v49, (unsigned int)&v40, 0, 0, 4, 0LL, 0LL, v30, (__int64)Heap);
    goto LABEL_30;
  }
LABEL_29:
  v33 = EtwWriteUMSecurityEvent(&v40, 4LL, v30, Heap);
LABEL_30:
  v37 = v33;
  if ( Heap != v51 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
LABEL_32:
  RtlSetLastWin32Error(v37);
  return v37 == 0;
}
