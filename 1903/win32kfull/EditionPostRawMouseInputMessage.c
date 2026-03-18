/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1C0041C80
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MouseCursorPerf@@@Z @ 0x1C00422E4 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 * Callees:
 *     AllocateHidData @ 0x1C0002D24 (AllocateHidData.c)
 *     FreeHidData @ 0x1C00073F0 (FreeHidData.c)
 *     ??$?0UtagObjLock@@U0@U0@U0@U0@U0@U0@U0@U0@U0@U0@@?$CMultiPerObjectLockExclusive@$0L@@@QEAA@AEAUtagObjLock@@0000000000@Z @ 0x1C00074F0 (--$-0UtagObjLock@@U0@U0@U0@U0@U0@U0@U0@U0@U0@U0@@-$CMultiPerObjectLockExclusive@$0L@@@QEAA@AEAUt.c)
 *     ?DeliverRawInput@Mouse@InputTraceLogging@@SAX_K_N@Z @ 0x1C000A550 (-DeliverRawInput@Mouse@InputTraceLogging@@SAX_K_N@Z.c)
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C00422BC (RawInputRequestedForMouse.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r10
  unsigned int v7; // ebx
  __int64 *v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rcx
  InputTransform *v19; // r13
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 *v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  InputTransform *v33; // r14
  __int64 v34; // rbp
  __int64 HidData; // rax
  __int64 *v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rcx
  char v39; // [rsp+70h] [rbp-68h]
  _BYTE v40[7]; // [rsp+71h] [rbp-67h] BYREF
  _QWORD v41[2]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v42; // [rsp+88h] [rbp-50h]
  __int64 v43; // [rsp+90h] [rbp-48h]

  v7 = 0;
  if ( !(unsigned int)RawInputRequestedForMouse(a1, a2, a2) )
    return v7;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 92) == 2 )
      v37 = *(_QWORD *)(v6 + 80);
    else
      v37 = 0LL;
    v9 = (__int64 *)(*(_QWORD *)(v37 + 16) + 424LL);
  }
  else
  {
    if ( gptiForeground && (unsigned __int8)IsSpatialDelegationEnabledForThread() )
      return v7;
    v9 = (__int64 *)gpqForeground;
  }
  v10 = *v9;
  if ( *(_DWORD *)a4 == 2 )
    v11 = *(_QWORD *)(a4 + 8);
  else
    v11 = 0LL;
  v43 = v11;
  v39 = 1;
  v12 = 0LL;
  if ( v10 )
  {
    v13 = *(_QWORD *)(v10 + 112);
    if ( v13 )
      v14 = *(_QWORD *)(v13 + 16);
    else
      v14 = *(_QWORD *)(v10 + 96);
    v12 = *(_QWORD *)(*(_QWORD *)(v14 + 416) + 824LL);
  }
  v15 = v10;
  if ( v12 && (*(_DWORD *)(v12 + 100) & 1) != 0 )
  {
    InputTraceLogging::Mouse::DeliverRawInput();
    v30 = *(_QWORD *)(v10 + 112);
    if ( v30 )
      v31 = *(_QWORD *)(v30 + 16);
    else
      v31 = *(_QWORD *)(v10 + 96);
    v32 = *(_QWORD *)(*(_QWORD *)(v31 + 416) + 824LL);
    v33 = *(InputTransform **)(v32 + 64);
    if ( v33 )
    {
      v34 = *((_QWORD *)v33 + 2);
      v15 = *(_QWORD *)(v34 + 424);
    }
    HidData = AllocateHidData(v11, 0, 24LL, 0LL, *(_QWORD *)(v32 + 64));
    v36 = (__int64 *)HidData;
    if ( !HidData )
      return v7;
    *(_OWORD *)(HidData + 56) = *(_OWORD *)a5;
    *(_QWORD *)(HidData + 72) = *(_QWORD *)(a5 + 16);
    CMultiPerObjectLockExclusive<11>::CMultiPerObjectLockExclusive<11>((__int64)v40);
    if ( (unsigned int)PostInputMessage(
                         (struct tagQ *)v15,
                         v33,
                         0xFFu,
                         0LL,
                         *v36,
                         a3,
                         0LL,
                         *(unsigned int *)(a5 + 20),
                         0,
                         0LL,
                         0LL,
                         0LL,
                         0,
                         0LL) )
    {
      v36 = 0LL;
      v39 = 0;
    }
    if ( v36 )
      FreeHidData((__int64)v36);
  }
  if ( gHidCounters[1] )
  {
    v42 = 0LL;
    v16 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
    v41[0] = 0LL;
    if ( v15 )
    {
      v17 = *(_QWORD *)(v15 + 112);
      if ( v17 )
        v18 = *(_QWORD *)(v17 + 16);
      else
        v18 = *(_QWORD *)(v15 + 96);
      v42 = *(_QWORD *)(v18 + 416);
      v41[0] = *(_QWORD *)(v15 + 436);
    }
    for ( ; v16 != &RawInputManagerObject::gHidRequestTable[4]; v16 = (__int64 *)*v16 )
    {
      if ( (*((_DWORD *)v16 + 25) & 4) != 0 )
      {
        v19 = (InputTransform *)v16[8];
        if ( v19 )
        {
          v20 = *((_QWORD *)v19 + 5);
          if ( *(char *)(v20 + 20) >= 0 && *(char *)(v20 + 19) >= 0 )
          {
            v21 = *((_QWORD *)v19 + 2);
            v22 = *(_QWORD *)(v21 + 424);
            v23 = *(_QWORD *)(v22 + 128);
            v24 = v23 ? *(_QWORD *)(v23 + 16) : 0LL;
            v25 = v24 ? *(_QWORD *)(v24 + 416) : 0LL;
            v26 = v25 ? v25 + 296 : gObjDummyLock;
            v41[1] = v26;
            CMultiPerObjectLockExclusive<11>::CMultiPerObjectLockExclusive<11>((__int64)v40);
            v27 = v16[8];
            if ( *(_QWORD *)(v27 + 24) == grpdeskRitInput )
            {
              if ( (unsigned __int8)CheckAccess(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 416LL) + 872LL, v41)
                || (v38 = *(_QWORD *)(v16[8] + 16), *(int *)(*(_QWORD *)(v38 + 416) + 12LL) < 0) )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v16[8] + 16) + 416LL) != v42 && ((*((_DWORD *)v16 + 25) & 8) == 0 || v39) )
                {
                  v28 = AllocateHidData(v43, 0, 24LL, 1LL, v16[8]);
                  v29 = (__int64 *)v28;
                  if ( !v28 )
                    return v7;
                  *(_OWORD *)(v28 + 56) = *(_OWORD *)a5;
                  *(_QWORD *)(v28 + 72) = *(_QWORD *)(a5 + 16);
                  InputTraceLogging::Mouse::DeliverRawInput();
                  if ( (unsigned int)PostInputMessage(
                                       *(struct tagQ **)(*((_QWORD *)v19 + 2) + 424LL),
                                       v19,
                                       0xFFu,
                                       1uLL,
                                       *v29,
                                       a3,
                                       0LL,
                                       *(unsigned int *)(a5 + 20),
                                       0,
                                       0LL,
                                       0LL,
                                       0LL,
                                       0,
                                       0LL) )
                    v29 = 0LL;
                  if ( v29 )
                    FreeHidData((__int64)v29);
                }
              }
              else
              {
                EtwTraceUIPIInputError(v38, 0LL, v22, v41[0], 5);
              }
            }
          }
        }
      }
    }
  }
  return 1;
}
