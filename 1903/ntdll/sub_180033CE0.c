/*
 * XREFs of sub_180033CE0 @ 0x180033CE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x18002A4D0 (RtlIsCriticalSectionLockedByThread.c)
 *     sub_18002F2D4 @ 0x18002F2D4 (sub_18002F2D4.c)
 *     sub_18002FFB0 @ 0x18002FFB0 (sub_18002FFB0.c)
 *     RtlRegisterThreadWithCsrss @ 0x180030030 (RtlRegisterThreadWithCsrss.c)
 *     sub_1800300DC @ 0x1800300DC (sub_1800300DC.c)
 *     sub_180030178 @ 0x180030178 (sub_180030178.c)
 *     sub_180031620 @ 0x180031620 (sub_180031620.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     sub_180035510 @ 0x180035510 (sub_180035510.c)
 *     sub_1800356E0 @ 0x1800356E0 (sub_1800356E0.c)
 *     sub_180035B5C @ 0x180035B5C (sub_180035B5C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     sub_180035E30 @ 0x180035E30 (sub_180035E30.c)
 *     sub_1800365A0 @ 0x1800365A0 (sub_1800365A0.c)
 *     sub_180036790 @ 0x180036790 (sub_180036790.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 *     sub_180077EA8 @ 0x180077EA8 (sub_180077EA8.c)
 *     sub_180078F1C @ 0x180078F1C (sub_180078F1C.c)
 *     sub_18007944C @ 0x18007944C (sub_18007944C.c)
 *     sub_18007A798 @ 0x18007A798 (sub_18007A798.c)
 *     sub_18007BD70 @ 0x18007BD70 (sub_18007BD70.c)
 *     sub_18007E820 @ 0x18007E820 (sub_18007E820.c)
 *     sub_18007EB64 @ 0x18007EB64 (sub_18007EB64.c)
 *     sub_180081630 @ 0x180081630 (sub_180081630.c)
 *     sub_180087A68 @ 0x180087A68 (sub_180087A68.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwWorkerFactoryWorkerReady @ 0x18009C700 (ZwWorkerFactoryWorkerReady.c)
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     ZwTerminateProcess @ 0x18009CC60 (ZwTerminateProcess.c)
 *     ZwSetInformationWorkerFactory @ 0x18009F9F0 (ZwSetInformationWorkerFactory.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A0010 (ZwWaitForAlertByThreadId.c)
 *     ZwWaitForWorkViaWorkerFactory @ 0x1800A0070 (ZwWaitForWorkViaWorkerFactory.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DD668 @ 0x1800DD668 (sub_1800DD668.c)
 *     sub_18010EB1C @ 0x18010EB1C (sub_18010EB1C.c)
 *     sub_18010F8E0 @ 0x18010F8E0 (sub_18010F8E0.c)
 *     sub_18010F9F4 @ 0x18010F9F4 (sub_18010F9F4.c)
 *     sub_18010FA78 @ 0x18010FA78 (sub_18010FA78.c)
 */

void __fastcall __noreturn sub_180033CE0(__int64 a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  char v5; // di
  int v6; // eax
  signed __int64 v7; // rax
  unsigned __int64 i; // rdx
  char v9; // bl
  signed __int64 v10; // rtt
  struct _PEB *v11; // rbx
  struct _PEB_LDR_DATA *Ldr; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  _OWORD *Heap; // rax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r14
  int v21; // eax
  BYTE Number; // di
  WORD Group; // r14
  unsigned int v24; // r15d
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // eax
  int v30; // r14d
  unsigned __int64 v31; // rcx
  __int64 v32; // r13
  __int64 **v33; // rax
  __int64 *v34; // rbx
  __int64 v35; // rcx
  signed __int64 v36; // rax
  void (__fastcall ***v37)(char *); // rbx
  __int64 v38; // rbx
  int v39; // eax
  __int64 v40; // r15
  int v41; // eax
  int v42; // ecx
  struct _TEB *v43; // rcx
  unsigned int v44; // r13d
  int v45; // r14d
  __int64 **v46; // rdi
  __int64 **v47; // rbx
  __int64 v48; // rax
  int v49; // ecx
  int v50; // ecx
  __int64 v51; // rcx
  unsigned __int16 v52; // di
  unsigned __int16 v53; // r14
  __int64 v54; // rcx
  __int64 v55; // rcx
  unsigned __int16 v56; // r15
  unsigned __int16 v57; // r12
  __int64 v58; // rcx
  unsigned __int64 v59; // rdi
  bool v60; // zf
  signed __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  unsigned __int16 v64; // di
  unsigned __int16 v65; // r14
  __int64 v66; // rcx
  signed __int64 v67; // rcx
  __int64 v68; // rdx
  signed __int64 v69; // rtt
  int v71; // edx
  int v72; // edi
  unsigned __int64 v73; // rax
  signed __int64 v74; // rax
  signed __int64 v75; // rtt
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // r9
  struct _PEB *v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // [rsp+20h] [rbp-398h]
  char v82; // [rsp+31h] [rbp-387h] BYREF
  char v83; // [rsp+32h] [rbp-386h]
  char v84; // [rsp+33h] [rbp-385h]
  char v85; // [rsp+34h] [rbp-384h]
  char v86; // [rsp+35h] [rbp-383h]
  char v87; // [rsp+36h] [rbp-382h]
  char v88; // [rsp+37h] [rbp-381h]
  bool v89; // [rsp+38h] [rbp-380h]
  BYTE v90; // [rsp+39h] [rbp-37Fh]
  char v91; // [rsp+3Ah] [rbp-37Eh]
  int v92; // [rsp+3Ch] [rbp-37Ch]
  int v93; // [rsp+40h] [rbp-378h]
  unsigned int v94; // [rsp+44h] [rbp-374h]
  signed __int64 v95; // [rsp+48h] [rbp-370h]
  char v96; // [rsp+50h] [rbp-368h]
  int v97; // [rsp+54h] [rbp-364h] BYREF
  int j; // [rsp+58h] [rbp-360h]
  unsigned int v99; // [rsp+5Ch] [rbp-35Ch]
  signed __int64 v100; // [rsp+60h] [rbp-358h]
  __int64 v101; // [rsp+68h] [rbp-350h]
  struct _PEB *v102; // [rsp+70h] [rbp-348h]
  signed __int64 v103; // [rsp+78h] [rbp-340h]
  int v104; // [rsp+80h] [rbp-338h] BYREF
  _QWORD *v105; // [rsp+88h] [rbp-330h] BYREF
  _OWORD *v106; // [rsp+90h] [rbp-328h]
  _DWORD v107[4]; // [rsp+98h] [rbp-320h] BYREF
  int v108; // [rsp+A8h] [rbp-310h] BYREF
  int k; // [rsp+B0h] [rbp-308h]
  unsigned int v110; // [rsp+B4h] [rbp-304h]
  int v111[4]; // [rsp+B8h] [rbp-300h] BYREF
  __int64 v112; // [rsp+C8h] [rbp-2F0h] BYREF
  int v113; // [rsp+D0h] [rbp-2E8h] BYREF
  void (__fastcall ***v114)(char *); // [rsp+D8h] [rbp-2E0h]
  unsigned __int64 v115; // [rsp+E0h] [rbp-2D8h] BYREF
  unsigned __int64 *v116; // [rsp+E8h] [rbp-2D0h]
  __int64 v117; // [rsp+F0h] [rbp-2C8h]
  HANDLE UniqueThread; // [rsp+F8h] [rbp-2C0h]
  int v119; // [rsp+100h] [rbp-2B8h]
  signed __int32 v120[4]; // [rsp+104h] [rbp-2B4h] BYREF
  __int64 v121; // [rsp+128h] [rbp-290h]
  __int64 **v122; // [rsp+130h] [rbp-288h]
  __int64 v123; // [rsp+138h] [rbp-280h]
  struct _TEB *v124; // [rsp+150h] [rbp-268h]
  struct _TEB *v125; // [rsp+158h] [rbp-260h]
  struct _TEB *v126; // [rsp+160h] [rbp-258h]
  struct _TEB *v127; // [rsp+168h] [rbp-250h]
  struct _TEB *v128; // [rsp+178h] [rbp-240h]
  struct _TEB *v129; // [rsp+180h] [rbp-238h]
  struct _TEB *v130; // [rsp+188h] [rbp-230h]
  __int64 **v131; // [rsp+190h] [rbp-228h]
  struct _TEB *v132; // [rsp+198h] [rbp-220h]
  struct _TEB *v133; // [rsp+1A0h] [rbp-218h]
  struct _TEB *v134; // [rsp+1A8h] [rbp-210h]
  struct _TEB *v135; // [rsp+1B0h] [rbp-208h]
  __int64 v136; // [rsp+1C8h] [rbp-1F0h]
  __int64 v137; // [rsp+1D0h] [rbp-1E8h]
  _OWORD v138[23]; // [rsp+1E0h] [rbp-1D8h] BYREF
  _QWORD v139[2]; // [rsp+350h] [rbp-68h] BYREF
  _QWORD v140[2]; // [rsp+360h] [rbp-58h] BYREF
  _QWORD v141[2]; // [rsp+370h] [rbp-48h] BYREF

  v103 = a1;
  v112 = 0LL;
  v101 = a1;
  v83 = 0;
  v84 = 0;
  v87 = 0;
  v85 = 0;
  v82 = 0;
  v88 = 0;
  v86 = 0;
  v105 = 0LL;
  v92 = 0;
  RtlRegisterThreadWithCsrss();
  v102 = NtCurrentPeb();
  sub_1800300DC(&v112);
  sub_180030178(&v105);
  if ( v105 )
    *v105 = v138;
  memset(v138, 0, 0x168uLL);
  RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 368), v2, v3, v4);
  if ( *(_BYTE *)(a1 + 377) )
  {
    v93 = -1073741558;
  }
  else
  {
    v137 = *(_QWORD *)(a1 + 56);
    v93 = ZwWorkerFactoryWorkerReady();
    if ( v93 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)a1);
      v5 = v87;
LABEL_18:
      RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 368));
      if ( v5 )
        goto LABEL_233;
      sub_18002FFB0(a1, (__int64)v138);
      v85 = 1;
      v11 = v102;
      RtlAcquireSRWLockExclusive(&v102[1].Mutant);
      Ldr = v102[1].Ldr;
      if ( *(struct _PEB **)&Ldr->Length != (struct _PEB *)&v102[1].ImageBaseAddress )
        __fastfail(3u);
      *(_QWORD *)&v138[0] = (char *)v102 + 912;
      *((_QWORD *)&v138[0] + 1) = Ldr;
      *(_QWORD *)&Ldr->Length = v138;
      v11[1].Ldr = (struct _PEB_LDR_DATA *)v138;
      v84 = 1;
      RtlReleaseSRWLockExclusive(&v11[1].Mutant);
      memset((char *)&v138[3] + 8, 0, 0xF8uLL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 416));
      v83 = 1;
      sub_180031620(a1, (_DWORD *)&v138[21] + 2, 0LL);
      while ( 1 )
      {
LABEL_22:
        v92 = 0;
        memset(&v138[19], 0, 0x20uLL);
        v13 = *(_QWORD **)&v138[21];
        v94 = 16;
        if ( *(_QWORD *)&v138[21] )
        {
          if ( *(_DWORD *)(*(_QWORD *)&v138[21] + 8LL) != 1 )
            goto LABEL_178;
          v14 = *(_QWORD *)&v138[21];
          memset(**(void ***)&v138[21], 0, 56LL * *(unsigned int *)(*(_QWORD *)&v138[21] + 12LL));
          v94 = *(_DWORD *)(v14 + 12);
          Heap = (_OWORD *)*v13;
        }
        else
        {
          v120[3] = dword_180166080 + 3145728;
          Heap = (_OWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (dword_180166080 + 3145728) | 8u, 912LL);
          if ( !Heap )
          {
LABEL_178:
            v94 = 1;
            Heap = &v138[19];
            goto LABEL_25;
          }
          *((_QWORD *)Heap + 112) = Heap;
          *((_DWORD *)Heap + 226) = 1;
          *((_DWORD *)Heap + 227) = 16;
          *(_QWORD *)&v138[21] = Heap + 56;
          v94 = 16;
        }
LABEL_25:
        v106 = Heap;
        v97 = 0;
        v123 = *(_QWORD *)(a1 + 56);
        v16 = ZwWaitForWorkViaWorkerFactory(v123, Heap, v94, &v97, (char *)&v138[16] + 8);
        v93 = v16;
        if ( v16 )
          v97 = 0;
        if ( (BYTE12(v138[17]) & 1) != 0 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, *((_QWORD *)&v138[16] + 1));
          HIDWORD(v138[17]) &= ~1u;
          v16 = v93;
        }
        if ( v16 )
        {
          v49 = v16 - 128;
          if ( !v49 )
            goto LABEL_233;
          v50 = v49 - 64;
          if ( v50 )
          {
            if ( v50 == 66 )
            {
              v86 = 1;
              goto LABEL_233;
            }
          }
          else
          {
            sub_180035510(0LL);
          }
        }
        else
        {
          if ( !a1 || (v17 = *(_DWORD *)(a1 + 440)) == 0 )
            v17 = MEMORY[0x7FFE03C0];
          if ( *(_DWORD *)(a1 + 424) != v17 )
          {
            RtlAcquireSRWLockExclusive(a1 + 72);
            sub_18010EB1C(a1);
            RtlReleaseSRWLockExclusive(a1 + 72);
          }
          if ( (unsigned __int8)sub_1800356E0((unsigned int)v138, (_DWORD)v106, v97, v94, a1, (__int64)&v82) )
          {
LABEL_233:
            if ( (BYTE12(v138[17]) & 1) != 0 )
            {
              sub_18007EB64((char *)&v138[3] + 8, i);
              HIDWORD(v138[17]) &= ~1u;
            }
            if ( v83 )
              _InterlockedDecrement((volatile signed __int32 *)(a1 + 416));
            if ( v84 )
            {
              v78 = v102;
              RtlAcquireSRWLockExclusive(&v102[1].Mutant);
              v79 = *((_QWORD *)&v138[0] + 1);
              v80 = *(_QWORD *)&v138[0];
              if ( *(_OWORD **)(*(_QWORD *)&v138[0] + 8LL) != v138 || **((_OWORD ***)&v138[0] + 1) != v138 )
                __fastfail(3u);
              **((_QWORD **)&v138[0] + 1) = *(_QWORD *)&v138[0];
              *(_QWORD *)(v80 + 8) = v79;
              RtlReleaseSRWLockExclusive(&v78[1].Mutant);
            }
            if ( v85 )
            {
              sub_18007944C(v138, i);
              if ( v86 )
                sub_180078F1C(a1);
            }
            if ( a1 == qword_180166470 )
            {
              sub_18002F2D4((const void **)&qword_180166470, (__int64)&unk_180166480);
            }
            else if ( a1 == qword_180166458 )
            {
              sub_18002F2D4((const void **)&qword_180166458, (__int64)&unk_180166468);
            }
            else if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            {
              sub_180081630(a1, i, v76);
            }
            sub_18007E820(v112, i);
            sub_18007BD70(v105);
            sub_18007A798(v138);
            v93 = 0;
            RtlExitUserThread(0LL);
          }
          if ( !v82 )
          {
            v18 = *(_QWORD *)&v138[19];
            if ( *(_QWORD *)&v138[19] )
            {
              v121 = *(_QWORD *)&v138[19];
              *(_QWORD *)&v138[9] = *(_QWORD *)(*(_QWORD *)&v138[19] + 56LL);
              *((_QWORD *)&v138[9] + 1) = *(_QWORD *)&v138[19];
              v107[0] = *(unsigned __int8 *)(*(_QWORD *)&v138[19] + 68LL);
              v19 = *(unsigned int *)(*(_QWORD *)&v138[19] + 64LL);
              v20 = DWORD2(v138[21]);
              v21 = *(_DWORD *)(a1 + 428);
              if ( (_DWORD)v19 == DWORD2(v138[21]) )
              {
                if ( v21 == -1 && !LOBYTE(v138[22]) )
                {
                  LOBYTE(v138[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v19));
                }
              }
              else
              {
                if ( v21 == -1 )
                {
                  if ( LOBYTE(v138[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v138[21])));
                  else
                    LOBYTE(v138[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v19));
                }
                DWORD2(v138[21]) = v19;
                v55 = *(_QWORD *)(a1 + 48);
                v56 = *(_WORD *)(16 * v19 + v55 + 8);
                v57 = *(_WORD *)(v55 + 16 * v20 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId(v55) )
                  v58 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
                else
                  v58 = 2147353478LL;
                if ( *(_BYTE *)v58 )
                  sub_18010F8E0(a1, v20, v19, v57, v56);
                if ( v57 != v56 )
                {
                  v141[1] = v56;
                  v141[0] = 0LL;
                  ZwSetInformationThread(-2LL, 30LL, v141);
                  ZwSetInformationThread(-2LL, 13LL, v107);
                }
              }
              v124 = NtCurrentTeb();
              v138[18] = v124->ActivityId;
              if ( *((_QWORD *)&v138[11] + 1) && (*(_BYTE *)(*((_QWORD *)&v138[11] + 1) + 436LL) & 1) == 0 )
              {
                v71 = LODWORD(v138[10]) | 8;
                LODWORD(v138[10]) |= 8u;
                v125 = NtCurrentTeb();
                if ( v125->IsImpersonating )
                {
                  v71 |= 4u;
                  LODWORD(v138[10]) = v71;
                }
                v72 = v71;
                if ( (unsigned __int8)sub_180035B5C() )
                {
                  v72 |= 0x10u;
                  LODWORD(v138[10]) = v72;
                }
                if ( RtlIsCriticalSectionLockedByThread((__int64)NtCurrentPeb()->LoaderLock) )
                  LODWORD(v138[10]) = v72 | 0x20;
                v126 = NtCurrentTeb();
                if ( v126->PreferredLanguages )
                  LODWORD(v138[10]) |= 0x40u;
                v127 = NtCurrentTeb();
                if ( v127->SavedPriorityState )
                  LODWORD(v138[10]) |= 0x80u;
              }
              (*(void (__fastcall **)(char *, __int64, _QWORD, _OWORD *))(v18 + 56))(
                (char *)&v138[3] + 8,
                v121,
                *((_QWORD *)&v138[19] + 1),
                &v138[20]);
              goto LABEL_41;
            }
            while ( 1 )
            {
              v128 = NtCurrentTeb();
              Number = v128->CurrentIdealProcessor.Number;
              v129 = v128;
              Group = v128->CurrentIdealProcessor.Group;
              v24 = dword_180166074;
              LODWORD(v95) = dword_180166074;
              v25 = *(_DWORD *)(a1 + 440);
              if ( !v25 )
                v25 = MEMORY[0x7FFE03C0];
              if ( *(_DWORD *)(a1 + 424) != v25 )
              {
                RtlAcquireSRWLockExclusive(a1 + 72);
                sub_18010EB1C(a1);
                RtlReleaseSRWLockExclusive(a1 + 72);
              }
              for ( i = 0LL; ; i = (unsigned int)(i + 1) )
              {
                v107[2] = i;
                if ( (unsigned int)i >= dword_180166074 )
                  goto LABEL_56;
                v26 = 16LL * (unsigned int)i + *(_QWORD *)(a1 + 48);
                if ( *(_WORD *)(v26 + 8) == Group )
                {
                  v27 = *(_QWORD *)v26;
                  if ( _bittest64(&v27, Number) )
                    break;
                }
              }
              v24 = i;
              LODWORD(v95) = i;
LABEL_56:
              if ( v24 >= dword_180166074 )
              {
                v24 = 0;
                LODWORD(v95) = 0;
              }
              v99 = v24;
              v90 = Number;
              v108 = Number;
              v28 = DWORD2(v138[21]);
              v29 = *(_DWORD *)(a1 + 428);
              if ( v24 == DWORD2(v138[21]) )
              {
                if ( v29 == -1 && !LOBYTE(v138[22]) )
                {
                  LOBYTE(v138[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v24));
                }
              }
              else
              {
                if ( v29 == -1 )
                {
                  if ( LOBYTE(v138[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v138[21])));
                  else
                    LOBYTE(v138[22]) = 1;
                  v62 = v24;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * v24));
                }
                else
                {
                  v62 = v24;
                }
                DWORD2(v138[21]) = v24;
                v63 = *(_QWORD *)(a1 + 48);
                v64 = *(_WORD *)(v63 + 16 * v62 + 8);
                v65 = *(_WORD *)(v63 + 16 * v28 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId(v63) )
                  v66 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
                else
                  v66 = 2147353478LL;
                if ( *(_BYTE *)v66 )
                  sub_18010F8E0(a1, v28, v24, v65, v64);
                if ( v65 != v64 )
                {
                  v139[1] = v64;
                  v139[0] = 0LL;
                  ZwSetInformationThread(-2LL, 30LL, v139);
                  ZwSetInformationThread(-2LL, 13LL, &v108);
                }
              }
              v110 = v24;
              if ( *(_DWORD *)(a1 + 428) != -1 || HIDWORD(v138[21]) < 0x10 || (unsigned int)sub_180087A68(a1) )
                break;
LABEL_105:
              v44 = v99;
              while ( 2 )
              {
                if ( *(_BYTE *)(a1 + 377) )
                  goto LABEL_233;
                v45 = 0;
                j = 0;
LABEL_108:
                if ( v45 > 2 )
                  continue;
                break;
              }
              while ( 1 )
              {
                v46 = (__int64 **)(*(_QWORD *)(a1 + 8LL * v45 + 16) + 24LL * v24);
                v131 = v46;
                RtlAcquireSRWLockExclusive(v46 + 2);
                v47 = (__int64 **)*v46;
                v48 = **v46;
                if ( (__int64 **)(*v46)[1] != v46 || *(__int64 ***)(v48 + 8) != v47 )
                  __fastfail(3u);
                *v46 = (__int64 *)v48;
                *(_QWORD *)(v48 + 8) = v46;
                RtlReleaseSRWLockExclusive(v46 + 2);
                if ( v47 == v46 )
                  v47 = 0LL;
                if ( v47 )
                  break;
                v24 = v95 + 1;
                if ( (int)v95 + 1 >= (unsigned int)dword_180166074 )
                  v24 = 0;
                LODWORD(v95) = v24;
                v110 = v24;
                if ( v24 == v44 )
                {
                  j = ++v45;
                  goto LABEL_108;
                }
              }
              v37 = (void (__fastcall ***)(char *))(v47 - 2);
LABEL_76:
              v114 = v37;
              v111[0] = *((unsigned __int8 *)v37 + 12);
              v38 = DWORD2(v138[21]);
              v39 = *(_DWORD *)(a1 + 428);
              v40 = (unsigned int)v95;
              if ( (_DWORD)v95 == DWORD2(v138[21]) )
              {
                if ( v39 == -1 && !LOBYTE(v138[22]) )
                {
                  LOBYTE(v138[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * (unsigned int)v95));
                }
              }
              else
              {
                if ( v39 == -1 )
                {
                  if ( LOBYTE(v138[22]) )
                    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4LL * DWORD2(v138[21])));
                  else
                    LOBYTE(v138[22]) = 1;
                  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 40) + 4 * v40));
                }
                DWORD2(v138[21]) = v40;
                v51 = *(_QWORD *)(a1 + 48);
                v52 = *(_WORD *)(v51 + 16 * v40 + 8);
                v53 = *(_WORD *)(v51 + 16 * v38 + 8);
                if ( (unsigned int)RtlGetCurrentServiceSessionId(v51) )
                  v54 = (__int64)NtCurrentPeb()->HotpatchInformation + 556;
                else
                  v54 = 2147353478LL;
                if ( *(_BYTE *)v54 )
                  sub_18010F8E0(a1, v38, v40, v53, v52);
                if ( v53 != v52 )
                {
                  v140[1] = v52;
                  v140[0] = 0LL;
                  ZwSetInformationThread(-2LL, 30LL, v140);
                  ZwSetInformationThread(-2LL, 13LL, v111);
                }
              }
              if ( (_DWORD)v40 == v99 )
              {
                if ( HIDWORD(v138[21]) < 0x10 )
                  v41 = HIDWORD(v138[21]) + 1;
                else
                  v41 = 16;
              }
              else
              {
                v41 = 0;
              }
              HIDWORD(v138[21]) = v41;
              if ( (BYTE12(v138[17]) & 1) != 0 )
              {
                sub_18007EB64((char *)&v138[3] + 8, i);
                HIDWORD(v138[17]) &= ~1u;
              }
              *(_QWORD *)&v138[2] = v114;
              *(_QWORD *)&v138[9] = **v114;
              *((_QWORD *)&v138[9] + 1) = v114;
              *((_QWORD *)&v138[11] + 1) = *(_QWORD *)&v138[3];
              v132 = NtCurrentTeb();
              v138[18] = v132->ActivityId;
              if ( *(_QWORD *)&v138[3] && (*(_BYTE *)(*(_QWORD *)&v138[3] + 436LL) & 1) == 0 )
              {
                v42 = LODWORD(v138[10]) | 8;
                LODWORD(v138[10]) |= 8u;
                v133 = NtCurrentTeb();
                if ( v133->IsImpersonating )
                  LODWORD(v138[10]) = v42 | 4;
                v43 = NtCurrentTeb();
                if ( (((unsigned __int64)v43->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
                  || v43->TxnScopeEnterCallback
                  || v43->TxnScopeExitCallback
                  || v43->TxnScopeContext
                  || v43->TxFsContext != 65534 )
                {
                  LODWORD(v138[10]) |= 0x10u;
                }
                if ( NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
                  LODWORD(v138[10]) |= 0x20u;
                v134 = NtCurrentTeb();
                if ( v134->PreferredLanguages )
                  LODWORD(v138[10]) |= 0x40u;
                v135 = NtCurrentTeb();
                if ( v135->SavedPriorityState )
                  LODWORD(v138[10]) |= 0x80u;
              }
              (**v114)((char *)&v138[3] + 8);
LABEL_41:
              if ( (BYTE4(v138[8]) & 4) != 0 )
                v88 = 1;
              v89 = LODWORD(v138[8]) == 4;
              sub_1800351D0((char *)&v138[3] + 8);
              *(_QWORD *)&v138[2] = 0LL;
              if ( v88 )
              {
                _m_prefetchw((const void *)(a1 + 8));
                v74 = *(_QWORD *)(a1 + 8);
                v95 = v74;
                do
                {
                  LODWORD(v95) = v74 ^ (unsigned __int16)(v74 ^ (v74 + 1));
                  v75 = v74;
                  v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v95, v74);
                  v95 = v74;
                }
                while ( v75 != v74 );
                v113 = 3;
                v136 = *(_QWORD *)(a1 + 56);
                ZwSetInformationWorkerFactory(v136, 9LL, &v113);
                goto LABEL_233;
              }
              if ( !a1 || (v6 = *(_DWORD *)(a1 + 440)) == 0 )
                v6 = MEMORY[0x7FFE03C0];
              if ( *(_DWORD *)(a1 + 424) != v6 )
              {
                RtlAcquireSRWLockExclusive(a1 + 72);
                sub_18010EB1C(a1);
                RtlReleaseSRWLockExclusive(a1 + 72);
              }
              _m_prefetchw((const void *)(a1 + 8));
              v7 = *(_QWORD *)(a1 + 8);
              v103 = v7;
              do
              {
                i = (unsigned __int16)v7;
                if ( *(_BYTE *)(a1 + 376) )
                  goto LABEL_233;
                if ( HIDWORD(v7) && ((v7 & 0x8000u) == 0LL || v89) )
                {
                  v9 = 0;
                  HIDWORD(v103) = HIDWORD(v7) - 1;
                }
                else
                {
                  v9 = 1;
                  LODWORD(v103) = v7 ^ (unsigned __int16)(v7 ^ (v7 + 1));
                }
                v10 = v7;
                v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v103, v7);
                v103 = v7;
              }
              while ( v10 != v7 );
              v82 = v9;
              if ( v9 )
                goto LABEL_22;
            }
            v30 = 0;
            for ( j = 0; ; j = v30 )
            {
              if ( v30 > 2 )
              {
                v24 = v95;
                goto LABEL_105;
              }
              i = v30;
              v31 = 3LL * v99;
              v32 = *(_QWORD *)(a1 + 8LL * v30 + 16) + 24LL * v99;
              v122 = (__int64 **)v32;
              v104 = 0;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 16), 0LL) )
                break;
LABEL_64:
              v33 = v122;
              v34 = *v122;
              v35 = **v122;
              if ( (__int64 **)(*v122)[1] != v122 || *(__int64 **)(v35 + 8) != v34 )
                __fastfail(3u);
              *v122 = (__int64 *)v35;
              *(_QWORD *)(v35 + 8) = v33;
              v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 16), 0LL, 1LL);
              if ( v36 != 1 )
              {
                v76 = -1LL;
                do
                {
                  v67 = v36 & 6;
                  v68 = 3LL;
                  if ( v67 != 2 )
                    v68 = -1LL;
                  i = v36 + v68;
                  v69 = v36;
                  v36 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 16), i, v36);
                }
                while ( v69 != v36 );
                if ( v67 == 2 )
                  sub_180035E30(v32 + 16, i, 0LL);
              }
              if ( v34 == (__int64 *)v32 )
                v34 = 0LL;
              if ( v34 )
              {
                v37 = (void (__fastcall ***)(char *))(v34 - 2);
                goto LABEL_76;
              }
              ++v30;
            }
            v59 = *(_QWORD *)(v32 + 16);
            while ( 2 )
            {
              while ( (v59 & 1) != 0 )
              {
                if ( (unsigned __int8)sub_180036790(v31, i, v76, v77, v81) )
                  ZwTerminateProcess(-1LL, 3221225547LL);
                v130 = NtCurrentTeb();
                UniqueThread = v130->ClientId.UniqueThread;
                v120[0] = 3;
                v117 = 0LL;
                LOBYTE(v31) = 0;
                v91 = 0;
                if ( (v59 & 2) != 0 )
                {
                  v116 = 0LL;
                  v115 = v59 & 0xFFFFFFFFFFFFFFF0uLL;
                  v119 = -1;
                  i = (unsigned __int64)&v115 | v59 & 8 | 7;
                  v100 = i;
                  if ( (v59 & 4) == 0 )
                  {
                    LOBYTE(v31) = 1;
                    v91 = 1;
                  }
                }
                else
                {
                  v116 = &v115;
                  v119 = v59 >> 4;
                  if ( v119 > 1 )
                    i = (unsigned __int64)&v115 | 0xB;
                  else
                    i = (unsigned __int64)&v115 + 3;
                  v100 = i;
                  if ( !(unsigned int)(v59 >> 4) )
                    v119 = -2;
                }
                v61 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 16), i, v59);
                v60 = v59 == v61;
                v59 = v61;
                v100 = v61;
                if ( !v60 )
                  goto LABEL_164;
                if ( (_BYTE)v31 )
                  sub_180077EA8(v32 + 16);
                if ( MEMORY[0x7FFE036A] > 1u )
                {
                  v96 = MEMORY[0x7FFE0297];
                  if ( MEMORY[0x7FFE0297] )
                  {
                    v76 = __rdtsc();
                    v77 = v76 + (unsigned int)dword_180163EC4;
                    while ( 1 )
                    {
                      i = 0LL;
                      __asm { monitorx rax, rcx, rdx }
                      v31 = (unsigned int)v120[0];
                      if ( (v120[0] & 2) == 0 )
                        break;
                      v31 = v76;
                      v73 = __rdtsc();
                      i = (unsigned __int64)HIDWORD(v73) << 32;
                      v76 = v73;
                      if ( v73 <= v31 || v73 >= v77 )
                        break;
                      __asm { mwaitx  rax, rcx, rbx }
                    }
                  }
                  else
                  {
                    i = 0LL;
                    for ( k = 0; ; k = i )
                    {
                      v31 = (unsigned int)v120[0];
                      if ( (v120[0] & 2) == 0 || (_DWORD)i == dword_180163EC4 / (unsigned int)MEMORY[0x7FFE02D6] )
                        break;
                      _mm_pause();
                      i = (unsigned int)(i + 1);
                    }
                  }
                }
                if ( _interlockedbittestandreset(v120, 1u) )
                {
                  do
                    ZwWaitForAlertByThreadId(v32 + 16, 0LL);
                  while ( (v120[0] & 4) == 0 );
                }
              }
              v100 = v59 + 1;
              v100 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 16), v59 + 1, v59);
              if ( v59 == v100 )
                goto LABEL_64;
LABEL_164:
              sub_1800365A0(&v104);
              _m_prefetchw((const void *)(v32 + 16));
              v59 = *(_QWORD *)(v32 + 16);
              v100 = v59;
              continue;
            }
          }
        }
      }
    }
  }
  v5 = 1;
  v87 = 1;
  goto LABEL_18;
}
