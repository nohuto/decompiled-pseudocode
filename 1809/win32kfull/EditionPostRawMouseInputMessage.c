/*
 * XREFs of EditionPostRawMouseInputMessage @ 0x1C00A5770
 * Callers:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00A4CCC (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@.c)
 * Callees:
 *     AllocateHidData @ 0x1C0002A30 (AllocateHidData.c)
 *     FreeHidData @ 0x1C0004B20 (FreeHidData.c)
 *     ?DeliverRawInput@Mouse@InputTraceLogging@@SAX_K_N@Z @ 0x1C0007F34 (-DeliverRawInput@Mouse@InputTraceLogging@@SAX_K_N@Z.c)
 *     RawInputRequestedForMouse @ 0x1C00A5B30 (RawInputRequestedForMouse.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 */

__int64 __fastcall EditionPostRawMouseInputMessage(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r10
  __int64 *v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // r12
  char v12; // r11
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // r13
  __int64 *v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // ebp
  int v23; // r10d
  _QWORD *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  __int64 v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 HidData; // rbx
  __int64 v37; // r8
  __int64 v38; // rbx
  char v39; // [rsp+60h] [rbp-48h]

  if ( !(unsigned int)RawInputRequestedForMouse(a1, a2, a2) )
    return 0LL;
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 84) == 2 )
      v38 = *(_QWORD *)(v7 + 72);
    else
      v38 = 0LL;
    v9 = (__int64 *)(*(_QWORD *)(v38 + 16) + 432LL);
  }
  else
  {
    if ( gptiForeground && (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiForeground) )
      return 0LL;
    v9 = (__int64 *)gpqForeground;
  }
  v10 = *v9;
  if ( *(_DWORD *)a4 == 2 )
    v11 = *(_QWORD *)(a4 + 8);
  else
    v11 = 0LL;
  v12 = 1;
  v13 = 0LL;
  v39 = 1;
  if ( v10 )
  {
    v14 = *(_QWORD *)(v10 + 104);
    if ( v14 )
      v15 = *(_QWORD *)(v14 + 16);
    else
      v15 = *(_QWORD *)(v10 + 88);
    v13 = *(_QWORD *)(*(_QWORD *)(v15 + 424) + 832LL);
  }
  v16 = v10;
  if ( v13 && (*(_DWORD *)(v13 + 100) & 1) != 0 )
  {
    InputTraceLogging::Mouse::DeliverRawInput();
    v32 = *(_QWORD *)(v10 + 104);
    if ( v32 )
      v33 = *(_QWORD *)(v32 + 16);
    else
      v33 = *(_QWORD *)(v10 + 88);
    v34 = *(_QWORD *)(*(_QWORD *)(v33 + 424) + 832LL);
    v35 = *(_QWORD *)(v34 + 64);
    if ( v35 )
      v16 = *(_QWORD *)(*(_QWORD *)(v35 + 16) + 432LL);
    HidData = AllocateHidData(v11, 0, 24LL, 0LL, *(_QWORD *)(v34 + 64));
    if ( !HidData )
      return 0LL;
    v37 = *(_QWORD *)HidData;
    *(_OWORD *)(HidData + 56) = *(_OWORD *)a5;
    *(_QWORD *)(HidData + 72) = *(_QWORD *)(a5 + 16);
    if ( (unsigned int)PostInputMessage(
                         v16,
                         v35,
                         255LL,
                         0LL,
                         v37,
                         a3,
                         0LL,
                         *(unsigned int *)(a5 + 20),
                         0,
                         0LL,
                         0LL,
                         0LL) )
    {
      v12 = 0;
      v39 = 0;
    }
    else
    {
      FreeHidData(HidData);
      v12 = 1;
    }
  }
  if ( gHidCounters[1] )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = (__int64 *)RawInputManagerObject::gHidRequestTable[4];
    if ( v16 )
    {
      v20 = *(_QWORD *)(v16 + 104);
      v21 = v20 ? *(_QWORD *)(v20 + 16) : *(_QWORD *)(v16 + 88);
      v22 = *(_DWORD *)(v16 + 428);
      v18 = *(_QWORD *)(v21 + 424);
      v17 = *(_QWORD *)(v16 + 428);
    }
    else
    {
      v22 = 0;
    }
    for ( ; v19 != &RawInputManagerObject::gHidRequestTable[4]; v12 = v39 )
    {
      v23 = *((_DWORD *)v19 + 25);
      if ( (v23 & 4) != 0 )
      {
        v24 = (_QWORD *)v19[8];
        if ( v24 )
        {
          v25 = v24[5];
          if ( *(char *)(v25 + 20) >= 0 && *(char *)(v25 + 19) >= 0 && v24[3] == grpdeskRitInput )
          {
            v26 = v24[2];
            v27 = *(_QWORD *)(v26 + 424);
            v28 = *(_QWORD *)(v27 + 880);
            if ( !gbEnforceUIPI
              || (unsigned int)v28 > v22
              || (_DWORD)v28 == v22
              && ((v29 = HIDWORD(v28), (_DWORD)v29 == HIDWORD(v17)) || (_DWORD)v29 == -1 || HIDWORD(v17) == -1)
              || *(int *)(v27 + 12) < 0 )
            {
              if ( v27 != v18 && ((v23 & 8) == 0 || v12) )
              {
                v30 = AllocateHidData(v11, 0, 24LL, 1LL, v19[8]);
                if ( !v30 )
                  return 0LL;
                *(_OWORD *)(v30 + 56) = *(_OWORD *)a5;
                *(_QWORD *)(v30 + 72) = *(_QWORD *)(a5 + 16);
                v31 = v19[8];
                InputTraceLogging::Mouse::DeliverRawInput();
                if ( !(unsigned int)PostInputMessage(
                                      *(_QWORD *)(*(_QWORD *)(v31 + 16) + 432LL),
                                      v31,
                                      255LL,
                                      1LL,
                                      *(_QWORD *)v30,
                                      a3,
                                      0LL,
                                      *(unsigned int *)(a5 + 20),
                                      0,
                                      0LL,
                                      0LL,
                                      0LL) )
                  FreeHidData(v30);
              }
            }
            else
            {
              EtwTraceUIPIInputError(v26, 0LL, v16, v17, 5);
            }
          }
        }
      }
      v19 = (__int64 *)*v19;
    }
  }
  return 1LL;
}
